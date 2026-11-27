#include "all-declarations-19.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                            const GGS_string constinArgument_inSelector,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 552)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfPropertyParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 561)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                  const GGS_lstring constinArgument_inFormalSelector,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                  GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                                  GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 579)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 581)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 582)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 580)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 584)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_27482 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 584)) ;
        const GGS_inputActualSelfPropertyParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_27482) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_27482, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 585)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_27684 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 588)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 588)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfAvailable_27684.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 589)).operator_not (SOURCE_FILE ("actual-parameters.galgas4", 589)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfPropertyParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 590)) ;
        }
      }
      GGS_propertyMap var_propertyMap_27928 = extensionGetter_definition (var_selfAvailable_27684.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 592)).readProperty_propertyMap () ;
      GGS_unifiedTypeMapEntry var_parameterType_28058 ;
      const GGS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GGS_AccessControl joker_28048_2 ; // Joker input parameter
      GGS_bool joker_28048_1 ; // Joker input parameter
      var_propertyMap_27928.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28048_2, joker_28048_1, var_parameterType_28058, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 593)) ;
      const GGS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GGS_string var_targetVariableCppName_28083 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 594)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 595)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28058)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_inputActualSelfPropertyParameterAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28058, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 599)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 600)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 598)) ;
        }
      }
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_28662 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfPropertyParameterAST temp_18 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_28717 (temp_18.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_28717.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_28836 ;
        GGS_string var_nameForCheckingFormalParameterUsing_28874 ;
        {
        GGS_unifiedTypeMapEntry joker_28817 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_28717.current (HERE), joker_28817, var_targetVariableCppName_28836, var_nameForCheckingFormalParameterUsing_28874, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 605)) ;
        }
        var_poisonedVarCppNameList_28662.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_28836, var_nameForCheckingFormalParameterUsing_28874, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 611)) ;
        enumerator_28717.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28058, var_targetVariableCppName_28083, var_poisonedVarCppNameList_28662, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 613)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfPropertyParameterAST temp_19 = this ;
    GenericArray <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 619)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 643)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 652)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                          GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 669)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 671)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 672)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 670)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 674)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_31728 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 674)) ;
        const GGS_inputActualSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_31728) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_31728, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 675)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_31930 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 678)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas4", 678)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_31930.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 679)).operator_not (SOURCE_FILE ("actual-parameters.galgas4", 679)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 680)) ;
        }
      }
      GGS_string var_targetVariableCppName_32152 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_31930.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_inputActualSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_31930.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 686)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 688)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 687)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 688)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 685)) ;
        }
      }
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_32623 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfParameterAST temp_16 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_32678 (temp_16.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_32678.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_32797 ;
        GGS_string var_nameForCheckingFormalParameterUsing_32835 ;
        {
        GGS_unifiedTypeMapEntry joker_32778 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_32678.current (HERE), joker_32778, var_targetVariableCppName_32797, var_nameForCheckingFormalParameterUsing_32835, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 693)) ;
        }
        var_poisonedVarCppNameList_32623.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_32797, var_nameForCheckingFormalParameterUsing_32835, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 699)) ;
        enumerator_32678.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_selfAvailable_31930.readProperty_type (), var_targetVariableCppName_32152, var_poisonedVarCppNameList_32623, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 701)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfParameterAST temp_17 = this ;
    GenericArray <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 707)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 732)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 741)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 759)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 761)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 763)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 762)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 763)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 760)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 765)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_35780 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 765)) ;
        const GGS_inputActualNewVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_35780) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_35780, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 766)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewVariableParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_36069 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 770)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36069)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewVariableParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36069, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 773)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 775)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 774)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 775)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 772)) ;
        }
      }
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_15 = this ;
  const GGS_inputActualNewVariableParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_36533 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 779)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 779)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 779)) ;
  {
  const GGS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GGS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, var_targetVariableCppName_36533, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 780)) ;
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 788)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 793)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_inputActualNewVariableParameterAST temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 794)) ;
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 797)) ;
  GGS__5B__32_string_5D_ var_poisonedVarCppNameList_37473 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewVariableParameterAST temp_23 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_37526 (temp_23.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_37526.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_37637 ;
    GGS_string var_nameForCheckingFormalParameterUsing_37673 ;
    {
    GGS_unifiedTypeMapEntry joker_37620 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_37526.current (HERE), joker_37620, var_targetVariableCppName_37637, var_nameForCheckingFormalParameterUsing_37673, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 801)) ;
    }
    var_poisonedVarCppNameList_37473.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_37637, var_nameForCheckingFormalParameterUsing_37673, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 807)) ;
    enumerator_37526.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_36533, var_poisonedVarCppNameList_37473, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 809)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 838)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewConstantParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 847)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 865)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 867)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 869)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 868)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 869)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 866)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 871)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_40581 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 871)) ;
        const GGS_inputActualNewConstantParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_40581) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_40581, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 872)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewConstantParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_40870 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 876)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_40870)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewConstantParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_40870, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 879)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 880)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 878)) ;
        }
      }
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_15 = this ;
  const GGS_inputActualNewConstantParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_41326 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas4", 884)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 884)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 884)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_targetVariableCppName_41326, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 886)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    {
    const GGS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_targetVariableCppName_41326, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 893)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 901)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_contains (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas4", 906)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_inputActualNewConstantParameterAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 907)) ;
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 910)) ;
  GGS__5B__32_string_5D_ var_poisonedVarCppNameList_42519 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewConstantParameterAST temp_26 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_42572 (temp_26.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_42572.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_42683 ;
    GGS_string var_nameForCheckingFormalParameterUsing_42719 ;
    {
    GGS_unifiedTypeMapEntry joker_42666 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_42572.current (HERE), joker_42666, var_targetVariableCppName_42683, var_nameForCheckingFormalParameterUsing_42719, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 914)) ;
    }
    var_poisonedVarCppNameList_42519.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_42683, var_nameForCheckingFormalParameterUsing_42719, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 920)) ;
    enumerator_42572.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_41326, var_poisonedVarCppNameList_42519, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 922)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 948)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputSingleJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 957)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                                 GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 974)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 976)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 978)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 977)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 978)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 975)) ;
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
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 980)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_45769 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 980)) ;
        const GGS_inputSingleJokerActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_45769) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_45769, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 981)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_9 = this ;
      GGS_string var_cppVarName_45970 = GGS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 983)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 983)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 983)) ;
      GGS__5B__32_string_5D_ var_poisonedVarCppNameList_46100 = GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_inputSingleJokerActualParameterAST temp_10 = this ;
      UpEnumerator__5B_lstring_5D_ enumerator_46155 (temp_10.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_46155.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_46274 ;
        GGS_string var_nameForCheckingFormalParameterUsing_46312 ;
        {
        GGS_unifiedTypeMapEntry joker_46255 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_46155.current (HERE), joker_46255, var_targetVariableCppName_46274, var_nameForCheckingFormalParameterUsing_46312, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 987)) ;
        }
        var_poisonedVarCppNameList_46100.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_targetVariableCppName_46274, var_nameForCheckingFormalParameterUsing_46312, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 993)) ;
        enumerator_46155.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_45970, var_poisonedVarCppNameList_46100, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 995)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string /* constinArgument__5F_inSelector */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 1022)))) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GGS__5B_actualOutputArgumentAST_5D_ & /* ioArgument__5F_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GGS_string ("a func does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1028)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                           GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                           const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                           const GGS_lstring /* constinArgument__5F_inFormalSelector */,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                           GGS__5B_actualParameterForGeneration_5D_ & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument__5F_ioExclusiveVariableSet */,
                                                                           GGS__5B_semanticInstructionForGeneration_5D_ & /* ioArgument__5F_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas4", 1044)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1046)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1047)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1045)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_inputJokerActualParameterAST temp_3 = this ;
    const GGS_inputJokerActualParameterAST temp_4 = this ;
    GGS_string var_cppVarName_49192 = GGS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).getter_string (SOURCE_FILE ("actual-parameters.galgas4", 1049)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas4", 1049)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1049)) ;
    ioArgument_ioActualParameterListForGeneration.plusPlusAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_49192, GGS__5B__32_string_5D_::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas4", 1051)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GGS__5B_galgasGUIComponentAST_5D_ constinArgument_inGuiComponentListAST,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_galgasGUIComponentAST_5D_ enumerator_9044 (constinArgument_inGuiComponentListAST) ;
  while (enumerator_9044.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_9044.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 262)) ;
    }
    enumerator_9044.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GGS_galgasGUIComponentAST constinArgument_inGUIComponentAST,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GGS_string ("cocoa"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GGS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 276)) ;
    }
  }
  GGS_guiAnalysisContext var_context_9772 = GGS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_9772.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  GGS_bool var_runOptionDefined_10163 = GGS_bool (false) ;
  UpEnumerator__5B_guiSimpleAttributeAST_5D_ enumerator_10221 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList ()) ;
  while (enumerator_10221.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_10221.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("run"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_runOptionDefined_10163.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_10221.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 291)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::equal, enumerator_10221.current (HERE).readProperty_mValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_10221.current (HERE).readProperty_mValue ().readProperty_location (), GGS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 293)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_context_9772.mProperty_mBuildRunOption = enumerator_10221.current (HERE).readProperty_mValue ().readProperty_string () ;
            var_runOptionDefined_10163 = GGS_bool (true) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_10221.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("nibAndMainClass"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          UpEnumerator__5B_string_5D_ enumerator_10721 (enumerator_10221.current (HERE).readProperty_mValue ().readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas4", 299))) ;
          while (enumerator_10721.hasCurrentObject ()) {
            var_context_9772.mProperty_mNibAndClassList.plusPlusAssignOperation (enumerator_10721.current (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 300)) ;
            enumerator_10721.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_10221.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_10221.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 303)).add_operation (GGS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 303)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 303)) ;
      }
    }
    enumerator_10221.gotoNextObject () ;
  }
  UpEnumerator__5B_withLexiqueAST_5D_ enumerator_10977 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList ()) ;
  GGS_u_33__32_ index_10935 (uint32_t (0)) ;
  while (enumerator_10977.hasCurrentObject ()) {
    GGS_terminalMap var_terminalMap_11174 ;
    GGS_bool joker_11146 ; // Joker input parameter
    GGS__5B_indexingAST_5D_ joker_11193_3 ; // Joker input parameter
    GGS__5B_terminalDeclarationAST_5D_ joker_11193_2 ; // Joker input parameter
    GGS__5B_lexicalAttributeAST_5D_ joker_11193_1 ; // Joker input parameter
    GGS__5B_lexicalListDeclarationAST_5D_ joker_11204 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_10977.current (HERE).readProperty_mLexiqueFileName (), joker_11146, var_terminalMap_11174, joker_11193_3, joker_11193_2, joker_11193_1, joker_11204, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 309)) ;
    GGS_stringset var_terminalSymbolSet_11255 = var_terminalMap_11174.getter_keySet (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 317)) ;
    UpEnumerator__5B_guiLabelAST_5D_ enumerator_11350 (enumerator_10977.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_11350.hasCurrentObject ()) {
      UpEnumerator__5B_terminalLabelAST_5D_ enumerator_11391 (enumerator_11350.current (HERE).readProperty_mTerminalList ()) ;
      while (enumerator_11391.hasCurrentObject ()) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_terminalSymbolSet_11255.getter_contains (enumerator_11391.current (HERE).readProperty_mTerminal ().readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas4", 321)).operator_not (SOURCE_FILE ("guiCompilation.galgas4", 321)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_11391.current (HERE).readProperty_mTerminal ().readProperty_location (), GGS_string ("the '$").add_operation (enumerator_11391.current (HERE).readProperty_mTerminal ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 322)).add_operation (GGS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 323)).add_operation (enumerator_10977.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 324)).add_operation (GGS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 325)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 322)) ;
          }
        }
        enumerator_11391.gotoNextObject () ;
      }
      enumerator_11350.gotoNextObject () ;
    }
    GGS__5B_textMacroAST_5D_ var_textMacroList_11791 = GGS__5B_textMacroAST_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_guiCompoundAttributeAST_5D_ enumerator_11857 (enumerator_10977.current (HERE).readProperty_mCompoundAttributes ()) ;
    while (enumerator_11857.hasCurrentObject ()) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_11857.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("textMacro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_11857.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 335)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        var_textMacroList_11791.plusPlusAssignOperation (GGS_textMacroAST::init_21__21_ (enumerator_11857.current (HERE).readProperty_mAttributeName ().readProperty_string (), enumerator_11857.current (HERE).readProperty_mValue ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 337)) ;
      }
      enumerator_11857.gotoNextObject () ;
    }
    GGS_bool var_hasAssociatedExtension_12210 = GGS_bool (false) ;
    GGS_bool var_hasTabViewTitle_12255 = GGS_bool (false) ;
    GGS_bool var_hasBlockComment_12293 = GGS_bool (false) ;
    GGS_string var_tabViewTitle_12333 = GGS_string::makeEmptyString () ;
    GGS_string var_blockComment_12367 = GGS_string::makeEmptyString () ;
    UpEnumerator__5B_guiSimpleAttributeAST_5D_ enumerator_12424 (enumerator_10977.current (HERE).readProperty_mSimpleAttributes ()) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::equal, enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("fileExtension"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          {
          var_context_9772.mProperty_mExtensionMap.setter_insertKey (enumerator_12424.current (HERE).readProperty_mValue (), enumerator_10977.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), index_10935, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 348)) ;
          }
          var_hasAssociatedExtension_12210 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = GGS_bool (ComparisonKind::equal, enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("title"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_hasTabViewTitle_12255.boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                GenericArray <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 352)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 352)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 352)) ;
              }
            }
            var_hasTabViewTitle_12255 = GGS_bool (true) ;
            var_tabViewTitle_12333 = enumerator_12424.current (HERE).readProperty_mValue ().readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_14) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = GGS_bool (ComparisonKind::equal, enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string ().objectCompare (GGS_string ("blockComment"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = var_hasBlockComment_12293.boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GenericArray <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 358)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 358)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 358)) ;
                }
              }
              var_hasBlockComment_12293 = GGS_bool (true) ;
              var_blockComment_12367 = enumerator_12424.current (HERE).readProperty_mValue ().readProperty_string () ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_12424.current (HERE).readProperty_mKey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 363)).add_operation (GGS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 363)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 363)) ;
          }
        }
      }
      enumerator_12424.gotoNextObject () ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_12210.operator_not (SOURCE_FILE ("guiCompilation.galgas4", 367)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_10977.current (HERE).readProperty_mLexiqueFileName ().readProperty_location (), GGS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 368)) ;
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = var_hasTabViewTitle_12255.operator_not (SOURCE_FILE ("guiCompilation.galgas4", 371)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_10977.current (HERE).readProperty_mLexiqueFileName ().readProperty_location (), GGS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 372)) ;
      }
    }
    var_context_9772.mProperty_mWithLexiqueList.plusPlusAssignOperation (GGS_importedLexiqueAST::init_21__21__21__21__21__21_ (enumerator_10977.current (HERE).readProperty_mLexiqueFileName ().readProperty_string (), index_10935, var_blockComment_12367, var_tabViewTitle_12333, var_textMacroList_11791, enumerator_10977.current (HERE).readProperty_mLabels (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 375)) ;
    enumerator_10977.gotoNextObject () ;
    index_10935.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 307)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_9772, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 385)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3??&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__26_swift (const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                  const GGS_string constinArgument_inOutputDirectory,
                                                                  GGS__5B_string_5D_ & ioArgument_ioSwiftAllProductFileList,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_optionComponentMapForGeneration enumerator_14559 (constinArgument_inOptionComponentMapForGeneration) ;
  while (enumerator_14559.hasCurrentObject ()) {
    GGS_string var_swiftuiFileName_14604 = GGS_string ("SettingsView.swift") ;
    ioArgument_ioSwiftAllProductFileList.plusPlusAssignOperation (var_swiftuiFileName_14604  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 397)) ;
    GGS_string var_swiftui_5F_string_14701 = GGS_guiGenerationTemplates::class_func_swiftui_5F_gui_5F_implementation (enumerator_14559.current (HERE).readProperty_mGuiComponentContext (), inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas4", 398)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftuiFileName_14604, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swiftui_5F_string_14701, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas4", 401)) ;
    }
    enumerator_14559.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalCallInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument__5F_ioActuallyUsedTerminalSymbolMap */,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                     GGS_u_33__32_ & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                     GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_nonTerminalSymbolIndex_3527 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3551 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_3527, joker_3551, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 64)) ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_nonTerminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_3527, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 65)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalCallInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                       const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                       const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GGS_string /* constinArgument__5F_inComponentName */,
                                                                       const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_u_33__32_ & /* ioArgument__5F_ioSelectMethodCount */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalLabelMap var_labelMap_4971 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_4971, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 87)) ;
  GGS__5B_formalParameterSignatureElement_5D_ var_signature_5024 ;
  GGS__5B_formalParameterForGeneration_5D_ joker_5070 ; // Joker input parameter
  GGS_location joker_5086 ; // Joker input parameter
  var_labelMap_4971.method_searchKey (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-non-terminal.galgas4", 89)), joker_5070, var_signature_5024, joker_5086, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 89)) ;
  GGS__5B_actualParameterForGeneration_5D_ var_actualParameterListForGeneration_5535 ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  const GGS_nonterminalCallInstruction temp_3 = this ;
  extensionMethod_analyzeRoutineArguments (temp_1.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mNonterminalName (), GGS_string ("'<").add_operation (temp_3.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 97)).add_operation (GGS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 97)), var_signature_5024, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5535, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 91)) ;
  const GGS_nonterminalCallInstruction temp_4 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 104)) ;
  const GGS_nonterminalCallInstruction temp_5 = this ;
  const GGS_nonterminalCallInstruction temp_6 = this ;
  const GGS_nonterminalCallInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mNonterminalName ().readProperty_string (), GGS_string::makeEmptyString (), var_actualParameterListForGeneration_5535, temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                             GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GGS__5B_actualParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 143)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_nonterminalInstructionForGeneration var_si_7846 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_7846.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonterminalInstructionForGeneration temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_7846.readProperty_mNonterminalName ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas4", 161)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_nonterminalInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_7846.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 163)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 163)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 162)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_8187 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_8187.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_nonterminalInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_8187.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 167)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 167)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 166)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_nonterminalInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 170)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas4", 173)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_nonterminalInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 174)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nonterminalInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_parameterCppNameList_9251 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_jokerParametersToReleaseList_9293 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_inputVariableList_9343 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_actualParameterForGeneration_5D_ enumerator_9400 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_9400.hasCurrentObject ()) {
    GGS_string var_parameterCppName_9666 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_9400.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_9293, var_inputVariableList_9343, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_9666, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 193)) ;
    var_parameterCppNameList_9251.plusPlusAssignOperation (var_parameterCppName_9666  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 202)) ;
    enumerator_9400.gotoNextObject () ;
  }
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  GGS_string var_sdtResultVarName_9772 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 205)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 205)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (var_sdtResultVarName_9772, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 207)) ;
    }
  }
  const GGS_nonterminalInstructionForGeneration temp_3 = this ;
  const GGS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 209)) ;
  UpEnumerator__5B_string_5D_ enumerator_10139 (var_parameterCppNameList_9251) ;
  while (enumerator_10139.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_10139.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 211)) ;
    enumerator_10139.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_sdtResultVarName_9772.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 214)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 217)) ;
  const GGS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_9772, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 218)) ;
  UpEnumerator__5B_string_5D_ enumerator_10669 (var_jokerParametersToReleaseList_9293) ;
  while (enumerator_10669.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_10669.current (HERE).add_operation (GGS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas4", 226)) ;
    enumerator_10669.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument__5F_inNonTerminalSymbolMap */,
                                                                                      GGS_u_33__32_ & /* ioArgument__5F_ioAddedNonTerminalIndex */,
                                                                                      GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_terminalSymbolIndex_4778 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_terminalCheckInstructionAST temp_1 = this ;
    const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element var_entry_4809 = ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_terminalSymbolIndex_4778 = var_entry_4809.readProperty_mTerminalIndex () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_terminalSymbolIndex_4778 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 100)) ;
    {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_2.readProperty_mTerminalName (), var_terminalSymbolIndex_4778, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 101)) ;
    }
  }
  const GGS_terminalCheckInstructionAST temp_3 = this ;
  const GGS_terminalCheckInstructionAST temp_4 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_terminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTerminalName (), var_terminalSymbolIndex_4778, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                        const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                        const GGS_string /* constinArgument__5F_inComponentName */,
                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_u_33__32_ & /* ioArgument__5F_ioSelectMethodCount */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lexicalSentValue_5D_ var_sentAttributeList_6063 ;
  const GGS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_6063, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 126)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 128)).objectCompare (var_sentAttributeList_6063.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 128)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_terminalCheckInstructionAST temp_3 = this ;
      const GGS_terminalCheckInstructionAST temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_sentAttributeList_6063.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 131)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_terminalCheckInstructionAST temp_7 = this ;
      const GGS_terminalCheckInstructionAST temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 134)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GGS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (GGS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (var_sentAttributeList_6063.getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 130)).getter_string (SOURCE_FILE ("instruction-terminal.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 130)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 131)).add_operation (GGS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 131)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas4", 133)).getter_string (SOURCE_FILE ("instruction-terminal.galgas4", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 132)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 133)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 133)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 129)) ;
    }
  }
  GGS__5B_terminalCheckAssignement_5D_ var_terminalCheckAssignementList_6599 = GGS__5B_terminalCheckAssignement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_terminalCheckInstructionAST temp_12 = this ;
  UpEnumerator__5B_actualInputParameterAST_5D_ enumerator_6684 (temp_12.readProperty_mActualInputParameterList ()) ;
  UpEnumerator__5B_lexicalSentValue_5D_ enumerator_6721 (var_sentAttributeList_6063) ;
  while (enumerator_6684.hasCurrentObject () && enumerator_6721.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_6684.current (HERE).readProperty_mInputParameter ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_6721.current (HERE).readProperty_mLexicalType (), enumerator_6721.current (HERE).readProperty_mLexicalAttributeName (), var_terminalCheckAssignementList_6599, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 140)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_6721.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string ().objectCompare (enumerator_6684.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string temp_14 ;
        const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6721.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          temp_14 = GGS_string (":") ;
        }else if (GalgasBool::boolFalse == test_15) {
          temp_14 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_6684.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the actual selector should be '\?").add_operation (enumerator_6721.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 149)) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_6721.current (HERE).readProperty_mLexicalFormalSelector ().readProperty_location (), GGS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 150)) ;
      }
    }
    enumerator_6684.gotoNextObject () ;
    enumerator_6721.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_18 = this ;
  UpEnumerator__5B__32_lstring_5D_ enumerator_7388 (temp_18.readProperty_mIndexingKeyList ()) ;
  while (enumerator_7388.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_contains (enumerator_7388.current (HERE).readProperty_mValue_30_ ().readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 155)).operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_7388.current (HERE).readProperty_mValue_30_ ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7388.current (HERE).readProperty_mValue_30_ ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)).add_operation (GGS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 156)) ;
      }
    }
    enumerator_7388.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 160)) ;
  const GGS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 166)) ;
  const GGS_terminalCheckInstructionAST temp_23 = this ;
  const GGS_terminalCheckInstructionAST temp_24 = this ;
  const GGS_terminalCheckInstructionAST temp_25 = this ;
  const GGS_terminalCheckInstructionAST temp_26 = this ;
  const GGS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_6599, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS__5B_row_5D_ & ioArgument_ioRowList,
                                                                                      const GGS_u_33__32_ constinArgument_inRow,
                                                                                      GGS_u_33__32_ & ioArgument_ioColumn,
                                                                                      GGS_string & ioArgument_ioCurrentNode,
                                                                                      GGS_string & ioArgument_ioArrowShape,
                                                                                      GGS_string & ioArgument_ioArrows,
                                                                                      GGS_u_33__32_ & /* ioArgument__5F_ioMaxUsedRowIndex */,
                                                                                      const GGS_bool /* constinArgument__5F_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_nodeName_9861 ;
  {
  const GGS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 207)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9861, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 206)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (var_nodeName_9861, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 212)) ;
  ioArgument_ioCurrentNode = var_nodeName_9861 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 215)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument__5F_inPosfix */,
                                                                               GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GGS__5B_terminalCheckAssignement_5D_::init (inCompiler COMMA_HERE), temp_3.readProperty_mIndexingKeyList (), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 256)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_terminalCheckInstructionForGeneration var_si_12565 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_12565.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
      result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_12565.readProperty_mTerminalName ().readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result.operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 275)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_12565.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 277)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 277)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 276)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_12905 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_12905.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_12905.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 281)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 281)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 280)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 284)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result.operator_not (SOURCE_FILE ("instruction-terminal.galgas4", 287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_terminalCheckInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 288)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@terminalCheckInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_terminalCheckAssignement_5D_ enumerator_14055 (temp_0.readProperty_mTerminalCheckAssignementList ()) ;
  while (enumerator_14055.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_14055.current (HERE).readProperty_mTypeName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (enumerator_14055.current (HERE).readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 305)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14055.current (HERE).readProperty_mTargetVarCppName ().add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)).add_operation (GGS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 308)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14055.current (HERE).readProperty_mSourceLexicalAttributeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 309)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 310)) ;
    enumerator_14055.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B__32_lstring_5D_ enumerator_14560 (temp_2.readProperty_mIndexingKeyList ()) ;
  while (enumerator_14560.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 314)) ;
    const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)).add_operation (GGS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 315)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_14560.current (HERE).readProperty_mValue_30_ ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 316)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_14560.current (HERE).readProperty_mValue_31_ ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 317)) ;
    enumerator_14560.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 320)) ;
  const GGS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 326)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 334)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 334)) ;
  const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas4", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 335)) ;
  const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_u_33__32_ & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_addedNonTerminalIndex_3346 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 71)) ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_selectBranchList_3432 = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_3523 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_3523.hasCurrentObject ()) {
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_syntaxInstructionList_3552 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_3523.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3552, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 76)) ;
    }
    var_selectBranchList_3432.plusPlusAssignOperation (var_syntaxInstructionList_3552  COMMA_SOURCE_FILE ("instruction-select.galgas4", 83)) ;
    enumerator_3523.gotoNextObject () ;
  }
  const GGS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_selectInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_3432, var_addedNonTerminalIndex_3346, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 86)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstruction analyzeSyntaxInstruction'
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
                                                              GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_u_33__32_ & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_choiceIndex_4944 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 112)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 114)) ;
  }
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_5095 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_5210 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_5210.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_5663 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5210.current (HERE).readProperty_mSyntaxInstructionList (), enumerator_5210.current (HERE).readProperty_mEndOf_5F_instructions (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5663, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 118)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5095.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (var_instructionList_5663, enumerator_5210.current (HERE).readProperty_mEndOf_5F_instructions (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 135)) ;
    enumerator_5210.gotoNextObject () ;
  }
  {
  const GGS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 138)) ;
  }
  const GGS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_4944, var_listOfSemanticInstructionListForGeneration_5095, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_6945 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstructionForGeneration temp_0 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_7053 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_7053.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_6945.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7053.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 167)), enumerator_7053.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 166)) ;
    enumerator_7053.gotoNextObject () ;
  }
  const GGS_selectInstructionForGeneration temp_1 = this ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  const GGS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_6945, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas4", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_selectInstructionForGeneration var_si_7882 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_7882.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result = GGS_bool (true) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 189)).objectCompare (var_si_7882.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 189)))) COMMA_SOURCE_FILE ("instruction-select.galgas4", 189)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selectInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_7882.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 192)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 191)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 192)).add_operation (var_si_7882.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas4", 194)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 193)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas4", 190)) ;
          result = GGS_bool (false) ;
        }
      }
      const GGS_selectInstructionForGeneration temp_5 = this ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8460 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8516 (var_si_7882.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_6 = result.isValidAndTrue () ;
      if (enumerator_8460.hasCurrentObject () && enumerator_8516.hasCurrentObject () && bool_6) {
        while (enumerator_8460.hasCurrentObject () && enumerator_8516.hasCurrentObject () && bool_6) {
          result = function_compareSyntaxSignature (enumerator_8460.current (HERE).readProperty_mInstructionList (), enumerator_8516.current (HERE).readProperty_mInstructionList (), enumerator_8516.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 198)) ;
          enumerator_8460.gotoNextObject () ;
          enumerator_8516.gotoNextObject () ;
          if (enumerator_8460.hasCurrentObject () && enumerator_8516.hasCurrentObject ()) {
            bool_6 = result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_syntaxInstructionForGeneration var_si_8708 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_8708.ptr ()) {
        test_7 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_8708.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas4", 201)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_selectInstructionForGeneration temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas4", 205)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = result.operator_not (SOURCE_FILE ("instruction-select.galgas4", 208)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_selectInstructionForGeneration temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas4", 209)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selectInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("instruction-select.galgas4", 223)) ;
  }
  const GGS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 224)) ;
  const GGS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 225)) ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10011 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  GGS_u_33__32_ index_9993 (uint32_t (0)) ;
  while (enumerator_10011.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_9993.add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)).getter_string (SOURCE_FILE ("instruction-select.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 227)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_10011.current (HERE).readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 228)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 236)) ;
    enumerator_10011.gotoNextObject () ;
    index_9993.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 226)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 239)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_u_33__32_ & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_addedNonTerminalIndex_3570 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 75)) ;
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_repeatedInstructionList_3656 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_3656, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 78)) ;
  }
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ temp_1 = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 85)) ;
  temp_1.plusPlusAssignOperation (var_repeatedInstructionList_3656  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 85)) ;
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ var_repeatBranchList_4009 = temp_1 ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_4124 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_4124.hasCurrentObject ()) {
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_syntaxInstructionList_4153 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4124.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4153, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 89)) ;
    }
    var_repeatBranchList_4009.plusPlusAssignOperation (var_syntaxInstructionList_4153  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 96)) ;
    enumerator_4124.gotoNextObject () ;
  }
  const GGS_repeatInstruction temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.plusPlusAssignOperation (GGS_repeatInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_repeatBranchList_4009, var_addedNonTerminalIndex_3570, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstruction analyzeSyntaxInstruction'
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
                                                              GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_u_33__32_ & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_choiceIndex_5544 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 126)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 128)) ;
  }
  GGS__5B_semanticInstructionForGeneration_5D_ var_repeated_5F_instructionList_6101 ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  const GGS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_6101, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 130)) ;
  }
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_6197 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator__5B_SyntaxInstructionListAST_5D_ enumerator_6273 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_6273.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_6726 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6273.current (HERE).readProperty_mSyntaxInstructionList (), enumerator_6273.current (HERE).readProperty_mEndOf_5F_instructions (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6726, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6197.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (var_instructionList_6726, enumerator_6273.current (HERE).readProperty_mEndOf_5F_instructions (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 167)) ;
    enumerator_6273.gotoNextObject () ;
  }
  {
  const GGS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 170)) ;
  }
  const GGS_repeatInstruction temp_4 = this ;
  const GGS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5544, var_repeated_5F_instructionList_6101, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_6197, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_repeated_5F_instructionList_8211 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 202)) ;
  GGS__5B_semanticInstructionListForGeneration_5D_ var_listOfSemanticInstructionListForGeneration_8321 = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstructionForGeneration temp_1 = this ;
  UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_8429 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_8429.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8321.plusPlusAssignOperation (GGS_semanticInstructionListForGeneration::init_21__21_ (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8429.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 206)), enumerator_8429.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 205)) ;
    enumerator_8429.gotoNextObject () ;
  }
  const GGS_repeatInstructionForGeneration temp_2 = this ;
  const GGS_repeatInstructionForGeneration temp_3 = this ;
  const GGS_repeatInstructionForGeneration temp_4 = this ;
  const GGS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.plusPlusAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_8211, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_8321, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_repeatInstructionForGeneration var_si_9324 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9324.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_repeatInstructionForGeneration temp_1 = this ;
      result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_9324.readProperty_m_5F_repeated_5F_instructionList (), var_si_9324.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 227)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 228)).objectCompare (var_si_9324.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 228)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_repeatInstructionForGeneration temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_9324.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 231)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 230)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 231)).add_operation (var_si_9324.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 233)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 232)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 229)) ;
          result = GGS_bool (false) ;
        }
      }
      const GGS_repeatInstructionForGeneration temp_6 = this ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10016 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_10072 (var_si_9324.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_7 = result.isValidAndTrue () ;
      if (enumerator_10016.hasCurrentObject () && enumerator_10072.hasCurrentObject () && bool_7) {
        while (enumerator_10016.hasCurrentObject () && enumerator_10072.hasCurrentObject () && bool_7) {
          result = function_compareSyntaxSignature (enumerator_10016.current (HERE).readProperty_mInstructionList (), enumerator_10072.current (HERE).readProperty_mInstructionList (), enumerator_10072.current (HERE).readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 237)) ;
          enumerator_10016.gotoNextObject () ;
          enumerator_10072.gotoNextObject () ;
          if (enumerator_10016.hasCurrentObject () && enumerator_10072.hasCurrentObject ()) {
            bool_7 = result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_syntaxInstructionForGeneration var_si_10264 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10264.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_10264.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 241)) ;
        result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_repeatInstructionForGeneration temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 245)) ;
      result = GGS_bool (false) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = result.operator_not (SOURCE_FILE ("instruction-repeat.galgas4", 248)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_repeatInstructionForGeneration temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 249)) ;
    }
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@repeatInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_repeatFlagCppName_11325 = GGS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 263)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 264)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_repeatFlagCppName_11325, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 265)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_repeatFlagCppName_11325, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 266)) ;
  {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 267)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 275)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas4", 276)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 277)) ;
      const GGS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)).add_operation (GGS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 278)) ;
      const GGS_repeatInstructionForGeneration temp_5 = this ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_12080 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_first (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 279)).readProperty_mInstructionList () ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_12080, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 280)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 288)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_11325, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 289)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 290)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 292)) ;
    const GGS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 293)) ;
    const GGS_repeatInstructionForGeneration temp_8 = this ;
    UpEnumerator__5B_semanticInstructionListForGeneration_5D_ enumerator_12738 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
    GGS_u_33__32_ index_12720 (uint32_t (0)) ;
    while (enumerator_12738.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_12720.add_operation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)).getter_string (SOURCE_FILE ("instruction-repeat.galgas4", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 295)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_12738.current (HERE).readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 296)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 304)) ;
      enumerator_12738.gotoNextObject () ;
      index_12720.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 294)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 306)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_11325, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 307)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 308)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 309)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 311)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas4", 312)) ;
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
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 29)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 30)), GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 32)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 34)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 28)) ;
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
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2473 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2473, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 47)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2533 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2533.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)), var_argumentTypeIndex_2473, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)), constinArgument_inInputArgumentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 49)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 51)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 52)), var_argList_2533, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 54)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas4", 56)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas4", 50)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1875 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1875, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 30)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 32)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 33)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 35)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1875, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 38)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3189 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3189, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 62)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 64)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 65)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 67)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3189, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas4", 70)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 63)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4049 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4049, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 86)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_4102 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_4184 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4184, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 88)) ;
  }
  var_argList_4102.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 89)), var_t_4184, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 89)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 91)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 92)), var_argList_4102, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 94)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4049, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas4", 97)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 90)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_5055 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5055, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 113)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_5108 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_5190 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5190, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 115)) ;
  }
  var_argList_5108.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 116)), var_t_5190, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 116)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 118)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 119)), var_argList_5108, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 121)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5055, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 124)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 117)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_6036 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6036, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 142)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_6089 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_6188 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_6188, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 144)) ;
  }
  var_argList_6089.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 145)), var_t_6188, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 145)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_6188, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 146)) ;
  }
  var_argList_6089.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 147)), var_t_6188, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 147)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 149)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 150)), var_argList_6089, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 152)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6036, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 155)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                              const GGS_string constinArgument_inGetterName,
                                                                                                              const GGS_string constinArgument_inReturnedTypeName,
                                                                                                              const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_7173 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7173, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 167)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 169)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 170)), GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 172)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7173, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 175)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 168)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_8275 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8275, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 190)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_8328 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_8410 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8410, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 192)) ;
  }
  var_argList_8328.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 193)), var_t_8410, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 193)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 195)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 196)), var_argList_8328, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 198)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8275, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 201)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 194)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_9266 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_9266, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 217)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_9319 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_9401 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9401, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 219)) ;
  }
  var_argList_9319.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 220)), var_t_9401, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 220)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 222)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 223)), var_argList_9319, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 225)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_9266, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 228)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 221)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_10797 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10797, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 246)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_10850 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10949 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10949, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 248)) ;
  }
  var_argList_10850.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 249)), var_t_10949, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 249)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10949, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 250)) ;
  }
  var_argList_10850.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 251)), var_t_10949, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 251)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 253)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 254)), var_argList_10850, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 256)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10797, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas4", 259)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 252)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_12010 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12010, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 277)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_12063 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_12162 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12162, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 279)) ;
  }
  var_argList_12063.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 280)), var_t_12162, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 280)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12162, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 281)) ;
  }
  var_argList_12063.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 282)), var_t_12162, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 282)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 284)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 285)), var_argList_12063, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 287)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12010, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 290)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 283)) ;
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
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_13248 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_13248, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 310)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_argList_13301 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_13400 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 312)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 313)), var_t_13400, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 313)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 314)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 315)), var_t_13400, constinArgument_inArgument_32_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_13400, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 316)) ;
  }
  var_argList_13301.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas4", 317)), var_t_13400, constinArgument_inArgument_33_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 317)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas4", 320)), var_argList_13301, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 322)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_13248, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas4", 325)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 318)) ;
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
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("description"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas4", 335)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_string & ioArgument_ioImplementation,
                                                                              GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                              GGS__5B_string_5D_ & /* ioArgument__5F_ioOutputVariableList */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 34)) ;
  const GGS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                   GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                   GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                                   GGS__5B_string_5D_ & /* ioArgument__5F_ioOutputVariableList */,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterForGeneration temp_0 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_2390 (temp_0.readProperty_mTypeList ()) ;
  while (enumerator_2390.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2390.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 49)) ;
    enumerator_2390.gotoNextObject () ;
  }
  const GGS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GGS_outputInputActualParameterForGeneration temp_2 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_2523 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_2523.hasCurrentObject ()) {
    outArgument_outCppName.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_2523.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 53)) ;
    enumerator_2523.gotoNextObject () ;
  }
  {
  const GGS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 55)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                             GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                             GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                             GGS__5B_string_5D_ & /* ioArgument__5F_ioJokerParametersToReleaseList */,
                                                                             GGS__5B_string_5D_ & ioArgument_ioOutputVariableList,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GGS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.plusPlusAssignOperation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 70)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                            GGS_string & ioArgument_ioImplementation,
                                                                            GGS__5B_string_5D_ & ioArgument_ioJokerParametersToReleaseList,
                                                                            GGS__5B_string_5D_ & ioArgument_ioOutputVariableList,
                                                                            GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                            GGS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 83)) ;
  const GGS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GGS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)).add_operation (GGS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 85)) ;
  const GGS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.plusPlusAssignOperation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 86)) ;
  const GGS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.plusPlusAssignOperation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticBlockInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 97)) ;
  {
  const GGS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 98)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 106)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputInputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                     GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument__5F_ioImplementation */,
                                                                                GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputJokerParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 128)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 129)) ;
      const GGS_inputJokerParameterForGeneration temp_3 = this ;
      UpEnumerator__5B__32_string_5D_ enumerator_5778 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_5778.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5778.current (HERE).readProperty_mValue_31_ () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 131)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_5778.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 132)) ;
        enumerator_5778.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 134)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas4", 143)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 144)) ;
      const GGS_inputActualParameterForGeneration temp_3 = this ;
      UpEnumerator__5B__32_string_5D_ enumerator_6450 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_6450.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6450.current (HERE).readProperty_mValue_31_ () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 146)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_6450.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 147)) ;
        enumerator_6450.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas4", 149)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u8PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_38_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_u_38__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 12)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u8PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_38_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 24)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 53)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u8"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u8"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u8.galgas4", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u8PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_38_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                            GGS_classMethodMap & outArgument_outClassMethodMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 38)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_binaryset_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 44)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithBit"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fullBinarySet"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithPredicateString"), GGS_string ("string"), GGS_string ("inPredicateString"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualComparison"), GGS_string ("u32"), GGS_string ("inLeftFirstIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_string ("inRightFirstIndex"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithEqualToConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithNotEqualToConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictLowerThanConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithStrictGreaterThanConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithLowerOrEqualToConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetWithGreaterOrEqualToConstant"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_string ("inConstant"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isFull"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nodeCount"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 254)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isEmpty"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 261)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantVariableCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 268)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ITE"), GGS_string ("binaryset"), GGS_string ("inTHENoperand"), GGS_string ("binaryset"), GGS_string ("inELSEoperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("print"), GGS_string ("[string]"), GGS_string ("inVariableList"), GGS_string ("[u32]"), GGS_string ("inBDDCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphvizDump"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 293)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("graphviz"), GGS_string ("[string]"), GGS_string ("inBitNameList"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 300)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transformedBy"), GGS_string ("[u32]"), GGS_string ("inTransformationArray"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 308)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndex"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 316)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("forAllOnBitIndexAndBeyond"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 324)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndex"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 331)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existOnBitIndexAndBeyond"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 338)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueCount"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 345)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigValueCount"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 354)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedValueCount"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 363)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64ValueList"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 370)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueList"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 377)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringValueListWithNameList"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_string ("inNameList"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 384)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("predicateStringValue"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 391)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compressedStringValueList"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 398)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap10"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap021"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("u32"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap102"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("u32"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap120"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("u32"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap201"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("u32"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("swap210"), GGS_string ("u32"), GGS_string ("inBitCount1"), GGS_string ("u32"), GGS_string ("inBitCount2"), GGS_string ("u32"), GGS_string ("inBitCount3"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transposedBy"), GGS_string ("[u32]"), GGS_string ("inTransposeVector"), GGS_string ("binaryset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("transitiveClosure"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("accessibleStates"), GGS_string ("binaryset"), GGS_string ("inInitialStateSet"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("implies"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("equalTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("notEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowerOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("greaterOrEqualTo"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictGreaterThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("strictLowerThan"), GGS_string ("binaryset"), GGS_string ("inOperand"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binarySetByTranslatingFromIndex"), GGS_string ("u32"), GGS_string ("inFirstIndexToTranslate"), GGS_string ("u32"), GGS_string ("inTranslation"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsValue"), GGS_string ("u64"), GGS_string ("inValue"), GGS_string ("u32"), GGS_string ("inFirstBit"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("existsOnBitRange"), GGS_string ("u32"), GGS_string ("inFirstBit"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("binaryset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 531)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binarysetPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setNodeTableSize"), GGS_string ("u32"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 545)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setAndTableSize"), GGS_string ("u32"), GGS_string ("inTableSize"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas4", 553)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                       GGS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("stop"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GGS_string ("resume"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 49)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GGS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("msFromStart"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isRunning"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 75)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@timerPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("start"), GGS_string ("timer"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 89)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_timer_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas4", 101)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_lstring joker_1661 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1661, GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 30)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("homeDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("newWithStdIn"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("retrieveAndResetTemplateString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separatorString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSymbolicLinkContents"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSourceFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithCurrentDateTime"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariable"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithEnvironmentVariableOrEmpty"), GGS_string ("string"), GGS_string ("inVariableName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppLineComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppSpaceComment"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppTitleComment"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("CppChar"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsJoinedByString"), GGS_string ("[string]"), GGS_string ("inComponents"), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringByRepeatingString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("u32"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("stringWithSequenceOfCharacters"), GGS_string ("char"), GGS_string ("inChar"), GGS_string ("u32"), GGS_string ("inCount"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 186)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFile"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deleteFileIfExists"), GGS_string ("inFilePath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeEmptyDirectory"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removeDirectoryRecursively"), GGS_string ("inDirectoryPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 225)) ;
  }
  GGS_unifiedTypeMapEntry var_stringType_7371 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_7371, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 232)) ;
  }
  GGS_unifiedTypeMapEntry var_boolType_7461 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_boolType_7461, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 233)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_7536 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 236)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 237)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)), GGS_string ("inContents"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFile"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 240)), inCompiler COMMA_HERE), var_argList_7536, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 239)) ;
  }
  var_argList_7536 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)), GGS_string ("inStartPath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 246)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)), GGS_string ("inFileName"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 247)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)), GGS_string ("inLineCommentPrefix"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 248)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)), GGS_string ("inHeader"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 249)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)), GGS_string ("inDefaultUserZone1"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 250)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)), GGS_string ("inGeneratedZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 251)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)), GGS_string ("inDefaultUserZone2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 252)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), var_stringType_7371, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)), GGS_string ("inGeneratedZone3"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 253)) ;
  var_argList_7536.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), var_boolType_7461, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)), GGS_string ("inMakeExecutable"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("generateFileWithPattern"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 256)), inCompiler COMMA_HERE), var_argList_7536, GGS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 255)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeDirectoryAndWriteToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("makeSymbolicLinkWithPath"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GGS_string ("makeDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 307)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_10701 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10791 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_10791, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 314)) ;
  }
  var_argList_10701.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), var_t_10791, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_10791, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 316)) ;
  }
  var_argList_10701.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), var_t_10791, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 319)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 320)), var_argList_10701, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 322)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 324)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("writeToExecutableFileWhenDifferentContents"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 328)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 329)), var_argList_10701, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 331)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 333)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 327)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inCapacity"), GGS_string ("setCapacity"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inAmount"), GGS_string ("incIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inAmount"), GGS_string ("decIndentation"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inColumnIndex"), GGS_string ("appendSpacesUntilColumn"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("setCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("inChar"), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("insertCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("char"), GGS_string ("outChar"), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("removeCharacterAtIndex"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 395)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastCharacter"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingFirst"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 419)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("lstring"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 426)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("lstring"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 433)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doesEnvironmentVariableExist"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 440)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 447)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithUnicodeEscaping"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 461)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("assemblerRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileNameRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 475)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nameRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 482)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 489)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("identifierRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 496)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decodedStringFromRepresentation"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 503)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("HTMLRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 510)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEscapingQuestionMark"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 517)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Representation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationWithoutDelimiters"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 531)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 538)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32Representation"), GGS_string ("withZeroTerminator"), GGS_string ("bool"), GGS_string ("inAppendZeroTerminator"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 545)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("trimmingSpaces"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 555)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasPrefix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPrefix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 562)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuffix"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSuffix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 571)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("md5"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 580)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sha256"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 587)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsignedNumber"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 594)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsignedNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 601)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalUnsigned64Number"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 608)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalUnsigned64Number"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 615)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedNumber"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 622)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 629)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSigned64Number"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 636)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSigned64Number"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 643)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("decimalSignedBigInt"), GGS_string ("bigint"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 650)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint\?"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 657)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDecimalSignedBigInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 664)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isDoubleNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 671)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleNumber"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 678)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capacity"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 685)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isSymbolicLink"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 692)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExists"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 699)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExists"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 706)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pathExtension"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 713)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nativePathWithUnixPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 720)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unixPathWithNativePath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 727)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lastPathComponent"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 734)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingPathExtension"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 741)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("capitalizingFirstCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 748)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("firstCharacterOrNul"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 755)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("deletingLastPathComponent"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 762)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("standardizedPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 769)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lowercased"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 776)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uppercased"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 783)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("reversed"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 790)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentColumn"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 797)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 804)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("popen"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 811)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8RepresentationEnclosedWithin"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 818)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("commandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inArguments"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 827)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenCommandWithArguments"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inArguments"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 836)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("characterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 845)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 854)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("containsCharacterInRange"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inFirstCharacter"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inLastCharacter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 863)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("removingCharacterAtIndex"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 876)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subStringFromIndex"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 885)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightSubString"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 894)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftSubString"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 903)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("subString"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inStart"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inLength"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 912)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 921)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("relativePathFromPath"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 930)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("componentsSeparatedByString"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSeparator"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 938)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftPadding"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 946)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("rightPadding"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 955)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("leftAndRightPadding"), GGS_string::makeEmptyString (), GGS_string ("u32"), GGS_string ("inPaddedStringLength"), GGS_string::makeEmptyString (), GGS_string ("char"), GGS_string ("inPaddingChar"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 964)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacing"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_string ("inSearchedString"), GGS_string ("by"), GGS_string ("string"), GGS_string ("inReplacementString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 973)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 982)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hiddenFiles"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 992)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directories"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1001)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesWithExtensions"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inExtensionList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1010)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("regularFilesWithExtensions"), GGS_string ("recursive"), GGS_string ("bool"), GGS_string ("inRecursiveSearch"), GGS_string::makeEmptyString (), GGS_string ("[string]"), GGS_string ("inExtensionList"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1019)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1033)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1034)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_string_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas4", 1040)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_bigint_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("zero"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 39)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_bigIntType_2419 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), var_bigIntType_2419, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 55)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_2474 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  var_argList_2474.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), var_bigIntType_2419, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)), GGS_string ("inDivisor"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 57)) ;
  var_argList_2474.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), var_bigIntType_2419, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)), GGS_string ("outQuotient"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 58)) ;
  var_argList_2474.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), var_bigIntType_2419, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)), GGS_string ("outRemainder"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("divideBy"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 61)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 62)), var_argList_2474, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 64)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 66)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 60)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), GGS_string ("inBit"), GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("setBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inIndex"), GGS_string ("complementBitAtIndex"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 88)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@bigintPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInUInt64"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fitsInSInt64"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 125)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("spacedString"), GGS_string ("u32"), GGS_string ("inSeparation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 147)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForSignedRepresentation"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitCountForUnsignedRepresentation"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u8"), GGS_string ("u8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 200)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 207)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 214)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("abs"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 221)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bitAtIndex"), GGS_string ("u32"), GGS_string ("inBitIndex"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 228)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isZero"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 236)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sign"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForUnsignedRepresentation"), GGS_string ("[u32]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 250)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract8ForSignedRepresentation"), GGS_string ("[u32]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 257)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForUnsignedRepresentation"), GGS_string ("[u32]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 264)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract32ForSignedRepresentation"), GGS_string ("[u32]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForUnsignedRepresentation"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 278)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("extract64ForSignedRepresentation"), GGS_string ("[u64]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 285)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 297)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 298)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 299)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 300)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 301)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 302)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas4", 303)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("nowhere"), GGS_string ("location"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("here"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("next"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("separator"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@locationPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GGS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationString"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 80)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLocationIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 87)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLocationIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 94)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("file"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 101)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startLine"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 108)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endLine"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 115)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("startColumn"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 122)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("endColumn"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isNowhere"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 136)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("union"), GGS_string::makeEmptyString (), GGS_string ("location"), GGS_string ("inOtherLocation"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_location_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas4", 156)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@buildOptionValueDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_buildOptionValueDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  result = GGS_string ("build option @").add_operation (temp_0.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 29)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                          GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                          GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                          GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                          GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                          GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  const GGS_buildOptionValueDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2390 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 42)), temp_1.readProperty_buildOptionValueName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_buildOptionValueDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2390, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 43)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                    const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                    const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                    const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                    const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_classFunctionMap_3239 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_boolType_3310 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("bool").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 58)), var_boolType_3310, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 58)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3376 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray ()) ;
  while (enumerator_3376.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 62)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_3376.current (HERE).readProperty_mIdentifier (), temp_0, GGS_bool (false), var_boolType_3310, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 60)) ;
    }
    enumerator_3376.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_stringType_3637 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 67)), var_stringType_3637, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 67)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3707 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray ()) ;
  while (enumerator_3707.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_1 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 71)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_3707.current (HERE).readProperty_mIdentifier (), temp_1, GGS_bool (false), var_stringType_3637, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 69)) ;
    }
    enumerator_3707.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_u_33__32_Type_3971 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("u32").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 76)), var_u_33__32_Type_3971, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 76)) ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_4035 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray ()) ;
  while (enumerator_4035.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_2 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 80)) ;
    var_classFunctionMap_3239.setter_insertKey (enumerator_4035.current (HERE).readProperty_mIdentifier (), temp_2, GGS_bool (false), var_u_33__32_Type_3971, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 78)) ;
    }
    enumerator_4035.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_4270 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4313 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_4356 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4396 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_4425 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  const GGS_buildOptionValueDeclarationAST temp_3 = this ;
  const GGS_buildOptionValueDeclarationAST temp_4 = this ;
  const GGS_buildOptionValueDeclarationAST temp_5 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4492 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_3.readProperty_buildOptionValueName (), temp_4.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 97)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 98)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4396, var_classFunctionMap_3239, var_getterMap_4356, var_setterMap_4270, var_instanceMethodMap_4313, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 109)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4425, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 115)), GGS_string ("build-option-").add_operation (temp_5.readProperty_buildOptionValueName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 116)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 116)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 117)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4492.readProperty_typeName (), var_typeDefinition_4492, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 119)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionValueDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionValueDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                   const GGS_semanticContext constinArgument_inSemanticContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionValueDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6200 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 132)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6200, var_nameForUsefulness_6200, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 133)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_buildOptionValueDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6200  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 135)) ;
    }
  }
  const GGS_buildOptionValueDeclarationAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6462 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 138)) ;
  const GGS_buildOptionValueDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_buildOptionTypeForGeneration::init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (GGS_string ("build option ").add_operation (temp_4.readProperty_buildOptionValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 140)), var_selfType_6462, constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_7806 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 165)) ;
  const GGS_buildOptionTypeForGeneration temp_1 = this ;
  const GGS_buildOptionTypeForGeneration temp_2 = this ;
  const GGS_buildOptionTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GGS_buildOptionGenerationTemplate::class_func_buildOptionTypeHeader_31_ (var_selfTypeDefinition_7806.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_7806.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 168)), temp_1.readProperty_boolBuildOptionArray (), temp_2.readProperty_u_33__32_BuildOptionArray (), temp_3.readProperty_stringBuildOptionArray (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 166)) ;
  const GGS_buildOptionTypeForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_7806.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 175)), var_selfTypeDefinition_7806.readProperty_classFunctionMap (), var_selfTypeDefinition_7806.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 186)) ;
  const GGS_buildOptionTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8802 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 187)) ;
  const GGS_buildOptionTypeForGeneration temp_2 = this ;
  const GGS_buildOptionTypeForGeneration temp_3 = this ;
  const GGS_buildOptionTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_buildOptionGenerationTemplate::class_func_buildOptionTypeSpecificImplementation (var_selfTypeDefinition_8802.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_8802.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 190)), temp_2.readProperty_boolBuildOptionArray (), temp_3.readProperty_u_33__32_BuildOptionArray (), temp_4.readProperty_stringBuildOptionArray (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 188)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionTypeForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionTypeForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                    GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GGS__5B_string_5D_ & ioArgument_ioSwiftAppProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 203)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("build-options-swiftui.swift")  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 205)) ;
      ioArgument_ioSwiftAppProductFileList.plusPlusAssignOperation (GGS_string ("build-options-swiftui.swift")  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 206)) ;
      {
      const GGS_buildOptionTypeForGeneration temp_1 = this ;
      const GGS_buildOptionTypeForGeneration temp_2 = this ;
      const GGS_buildOptionTypeForGeneration temp_3 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("build-options-swiftui.swift"), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_buildOptionGenerationTemplate::class_func_optionImplementationSwiftUI (temp_1.readProperty_boolBuildOptionArray (), temp_2.readProperty_u_33__32_BuildOptionArray (), temp_3.readProperty_stringBuildOptionArray (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 213)), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-value.galgas4", 207)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u16PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_31__36_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_u_31__36__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 12)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u16PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_31__36_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 18)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 19)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 20)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 21)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 22)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 23)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 24)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 53)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u16"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u16"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 95)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 123)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 130)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u16"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u16.galgas4", 144)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u16PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_31__36_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@buildOptionInvocationStringDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_buildOptionInvocationStringDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_buildOptionInvocationStringDeclarationAST temp_0 = this ;
  result = GGS_string ("build option @").add_operation (temp_0.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionInvocationStringDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionInvocationStringDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                     GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                                     GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionInvocationStringDeclarationAST temp_0 = this ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2474 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 43)), temp_1.readProperty_buildOptionStringName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_buildOptionInvocationStringDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2474, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 44)) ;
  }
  const GGS_buildOptionInvocationStringDeclarationAST temp_3 = this ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_4 = this ;
  GGS_lstring var_dep_2625 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_buildOptionValueName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 45)), temp_4.readProperty_buildOptionStringName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2474, var_dep_2625 COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 46)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionInvocationStringDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionInvocationStringDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                               const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                               const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                               const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                               const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_3510 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 60)), var_stringType_3510, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 60)) ;
  }
  GGS_classFunctionMap var_classFunctionMap_3548 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3627 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray ()) ;
  while (enumerator_3627.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_0 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 65)) ;
    var_classFunctionMap_3548.setter_insertKey (enumerator_3627.current (HERE).readProperty_mIdentifier (), temp_0, GGS_bool (false), var_stringType_3510, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 63)) ;
    }
    enumerator_3627.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_3898 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray ()) ;
  while (enumerator_3898.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_1 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 73)) ;
    var_classFunctionMap_3548.setter_insertKey (enumerator_3898.current (HERE).readProperty_mIdentifier (), temp_1, GGS_bool (false), var_stringType_3510, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 71)) ;
    }
    enumerator_3898.gotoNextObject () ;
  }
  UpEnumerator__5B_projectBuildOption_5D_ enumerator_4170 (ioArgument_ioSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray ()) ;
  while (enumerator_4170.hasCurrentObject ()) {
    {
    GGS__5B_functionSignatureElement_5D_ temp_2 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 81)) ;
    var_classFunctionMap_3548.setter_insertKey (enumerator_4170.current (HERE).readProperty_mIdentifier (), temp_2, GGS_bool (false), var_stringType_3510, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 79)) ;
    }
    enumerator_4170.gotoNextObject () ;
  }
  GGS_setterMap var_setterMap_4408 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_4451 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_4494 = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  GGS_initializerMap var_initializerMap_4534 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_typeFeatures var_features_4563 = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_3 = this ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_4 = this ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_5 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_4630 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_3.readProperty_buildOptionStringName (), temp_4.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 98)), GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 99)), GGS_bool (false), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_4534, var_classFunctionMap_3548, var_getterMap_4494, var_setterMap_4408, var_instanceMethodMap_4451, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 110)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE), var_features_4563, GGS_bool (false), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 116)), GGS_string ("option-").add_operation (temp_5.readProperty_buildOptionStringName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 117)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 117)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 118)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_4630.readProperty_typeName (), var_typeDefinition_4630, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionInvocationStringDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionInvocationStringDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                              GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionInvocationStringDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_6334 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_buildOptionStringName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 133)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6334, var_nameForUsefulness_6334, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 134)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_buildOptionInvocationStringDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_isPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6334  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 136)) ;
    }
  }
  const GGS_buildOptionInvocationStringDeclarationAST temp_3 = this ;
  GGS_unifiedTypeMapEntry var_selfType_6597 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_3.readProperty_buildOptionStringName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 139)) ;
  const GGS_buildOptionInvocationStringDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_buildOptionStringTypeForGeneration::init_21_infoMessage_21__21_boolBuildOptionArray_21_u_33__32_BuildOptionArray_21_stringBuildOptionArray (GGS_string ("build option string ").add_operation (temp_4.readProperty_buildOptionStringName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 141)), var_selfType_6597, constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_boolBuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_u_33__32_BuildOptionArray (), constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_stringBuildOptionArray (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 140)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringTypeForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringTypeForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                            GGS_string & outArgument_outHeader,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringTypeForGeneration temp_0 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_7962 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 166)) ;
  outArgument_outHeader = GGS_buildOptionStringGenerationTemplate::class_func_buildOptionTypeHeader_31_ (var_selfTypeDefinition_7962.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_7962.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 167)) ;
  const GGS_buildOptionStringTypeForGeneration temp_1 = this ;
  outArgument_outHeader.plusAssignOperation(GGS_typeGenerationTemplate::class_func_unifiedClassBodyForPackage (var_selfTypeDefinition_7962.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 173)), var_selfTypeDefinition_7962.readProperty_classFunctionMap (), var_selfTypeDefinition_7962.readProperty_classMethodMap (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@buildOptionStringTypeForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_buildOptionStringTypeForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_buildOptionStringTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 184)) ;
  const GGS_buildOptionStringTypeForGeneration temp_1 = this ;
  GGS_unifiedTypeDefinition var_selfTypeDefinition_8864 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 185)) ;
  const GGS_buildOptionStringTypeForGeneration temp_2 = this ;
  const GGS_buildOptionStringTypeForGeneration temp_3 = this ;
  const GGS_buildOptionStringTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GGS_buildOptionStringGenerationTemplate::class_func_buildOptionTypeSpecificImplementation (var_selfTypeDefinition_8864.readProperty_typeName ().readProperty_string (), var_selfTypeDefinition_8864.readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 188)), temp_2.readProperty_boolBuildOptionArray (), temp_3.readProperty_u_33__32_BuildOptionArray (), temp_4.readProperty_stringBuildOptionArray (), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-build-option-string.galgas4", 186)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_u_36__34__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 28)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 40)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64MaskWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64BaseValueWithCompressedBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uint64WithBitString"), GGS_string ("string"), GGS_string ("inBitString"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 73)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 109)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 116)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("uintSlice"), GGS_string ("u32"), GGS_string ("inStartBit"), GGS_string ("u32"), GGS_string ("inBitCount"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 123)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 132)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 139)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 164)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 178)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-u64.galgas4", 185)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 26)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("u64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 27)) ;
  }
  {
  routine_append_5F_stringString_5F_StructAST_26_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 29)) ;
  }
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("stringString"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 30)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_38_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u8"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 32)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_31__36_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u16"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 33)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bigint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 34)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("binaryset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 35)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("bool"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 36)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_charPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("char"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 37)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("data"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 38)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("f64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 39)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("filewrapper"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 40)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("location"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 41)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_s_33__32_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("s32"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 42)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_s_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("s64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 43)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("string"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 44)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 45)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 46)) ;
  }
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("lstring"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 47)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_u_33__32_PredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("u32"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 48)) ;
  {
  routine_appendPredefinedArrayTypeAST_26__3F_ (ioArgument_ioDeclarations, GGS_string ("u32"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 49)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("stringset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 50)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("timer"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 51)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GGS_bool (true), GGS_string ("application"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 53)) ;
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 55)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 56)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 57)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("f64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 58)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("s32"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 59)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("s64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 60)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("u32"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 61)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, GGS_string ("u64"), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 62)) ;
  }
  {
  routine_appendStructASTForRangeType_26_ (ioArgument_ioDeclarations.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 64)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                             GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_lstring var_key_5896 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 100)), GGS_location::class_func_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 100)), inCompiler COMMA_HERE) ;
  {
  const GGS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5896, temp_1, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 101)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classFunctionMap var_constructorMap_6746 ;
  const GGS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_constructorMap_6746, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 114)) ;
  GGS_getterMap var_getterMap_6814 ;
  const GGS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_getterMap_6814, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 115)) ;
  GGS_setterMap var_setterMap_6877 ;
  const GGS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_setterMap_6877, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 116)) ;
  GGS_instanceMethodMap var_instanceMethodMap_6956 ;
  const GGS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_6956, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 117)) ;
  GGS_classMethodMap var_classMethodMap_7037 ;
  const GGS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_classMethodMap_7037, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 118)) ;
  GGS__5B_enumerationDescriptor_5D_ var_enumerationList_7138 ;
  GGS_string var_enumeratedTypeName_7174 ;
  const GGS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_enumerationList_7138, var_enumeratedTypeName_7174, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 119)) ;
  {
  const GGS_predefinedTypeAST temp_6 = this ;
  GGS_unifiedTypeMapEntry joker_7262 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_6.readProperty_mPredefinedTypeName (), joker_7262, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 124)) ;
  }
  GGS_unifiedTypeMapEntry var_enumeratedTypeEntry_7315 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, var_enumeratedTypeName_7174.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_enumeratedTypeEntry_7315 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 128)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_7174, var_enumeratedTypeEntry_7315, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 130)) ;
    }
  }
  GGS_initializerMap var_initializerMap_7571 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GGS_predefinedTypeAST temp_8 = this ;
  UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ enumerator_7620 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 134))) ;
  while (enumerator_7620.hasCurrentObject ()) {
    GGS__5B_functionSignatureElement_5D_ var_formalParameterList_7674 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_7722 (enumerator_7620.current (HERE)) ;
    while (enumerator_7722.hasCurrentObject ()) {
      var_formalParameterList_7674.plusPlusAssignOperation (GGS_functionSignatureElement::init_21__21__21__21_ (enumerator_7722.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_7722.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 139)), enumerator_7722.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_7722.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 137)) ;
      enumerator_7722.gotoNextObject () ;
    }
    {
    var_initializerMap_7571.setter_insertKey (extensionGetter_initializerSignature (enumerator_7620.current (HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 144)).getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 144)), var_formalParameterList_7674, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 144)) ;
    }
    enumerator_7620.gotoNextObject () ;
  }
  {
  const GGS_predefinedTypeAST temp_9 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_9.readProperty_mPredefinedTypeName ().getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 153)), GGS_bool (false), var_initializerMap_7571, var_getterMap_6814, var_setterMap_6877, var_instanceMethodMap_6956, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 146)) ;
  }
  const GGS_predefinedTypeAST temp_10 = this ;
  const GGS_predefinedTypeAST temp_11 = this ;
  const GGS_predefinedTypeAST temp_12 = this ;
  const GGS_predefinedTypeAST temp_13 = this ;
  const GGS_predefinedTypeAST temp_14 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_8543 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (GGS_lstring::init_21__21_ (temp_10.readProperty_mPredefinedTypeName (), GGS_location::class_func_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 163)), inCompiler COMMA_HERE), temp_11.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 167)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_12.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 168)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 169)), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS__5B_typedProperty_5D_::init (inCompiler COMMA_HERE), var_initializerMap_7571, var_constructorMap_6746, var_getterMap_6814, var_setterMap_6877, var_instanceMethodMap_6956, var_classMethodMap_7037, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("all-predefined-types.galgas4", 179)), GGS_readSubscriptMap::init (inCompiler COMMA_HERE), GGS_writeSubscriptMap::init (inCompiler COMMA_HERE), var_enumerationList_7138, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 183)), GGS_bool (false), var_enumeratedTypeEntry_7315, GGS_string ("predefined-types"), GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("all-predefined-types.galgas4", 187)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_8543.readProperty_typeName (), var_typeDefinition_8543, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 189)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@predefinedTypeAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                      const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                      GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_predefinedTypeAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_selfType_10107 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 202)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 202)) ;
  const GGS_predefinedTypeAST temp_1 = this ;
  GGS_lstring var_nameForUsefulness_10223 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (temp_1.readProperty_mPredefinedTypeName (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 204)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 204)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10223, var_nameForUsefulness_10223, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 205)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_10223  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 206)) ;
  UpEnumerator_initializerMap enumerator_10547 (extensionGetter_definition (var_selfType_10107, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 208)).readProperty_initializerMap ()) ;
  while (enumerator_10547.hasCurrentObject ()) {
    const GGS_predefinedTypeAST temp_2 = this ;
    GGS_lstring var_initializerNameForUsefulness_10575 = function_initializerNameForUsefulEntitiesGraph (temp_2.readProperty_mPredefinedTypeName ().getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 210)), extensionGetter_initializerSignature (enumerator_10547.current (HERE).readProperty_mArgumentTypeList (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 209)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_initializerNameForUsefulness_10575, var_initializerNameForUsefulness_10575, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 213)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_initializerNameForUsefulness_10575  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 214)) ;
    enumerator_10547.gotoNextObject () ;
  }
  const GGS_predefinedTypeAST temp_3 = this ;
  const GGS_predefinedTypeAST temp_4 = this ;
  const GGS_predefinedTypeAST temp_5 = this ;
  const GGS_predefinedTypeAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_primitiveTypeForGeneration::init_21_infoMessage_21__21__21__21_isPackage (GGS_string ("Predefined type ").add_operation (temp_3.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 218)), var_selfType_10107, temp_4.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 221)), GGS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 222)).objectCompare (GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("all-predefined-types.galgas4", 222)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 217)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedArrayTypeAST&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedArrayTypeAST_26__3F_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                   const GGS_string constinArgument_inElementTypeName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_13687 = function_makeArrayTypeName (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 290)) ;
  ioArgument_ioDeclarations.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (var_arrayTypeName_13687  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 291)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_arrayTypeDeclarationAST::init_21_isPredefined_21_arrayTypeName_21_elementTypeName_21_isUsefull (GGS_bool (true), var_arrayTypeName_13687.getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 294)), constinArgument_inElementTypeName.getter_nowhere (SOURCE_FILE ("all-predefined-types.galgas4", 295)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 292)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                                         const GGS_string constinArgument_inElementTypeName,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_14304 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_14304.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 306)), constinArgument_inElementTypeName.getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 307)), constinArgument_inElementTypeName.getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 308)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 309)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 311)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 305)) ;
  var_propertyList_14304.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 314)), GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 315)), GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 316)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 317)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 319)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 313)) ;
  GGS_structDeclarationAST var_type_14753 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_lstring::init_21__21_ (GGS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 323)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 323)), inCompiler COMMA_HERE), var_propertyList_14304, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 326)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (var_type_14753  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 329)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'append_stringString_StructAST&'
//
//--------------------------------------------------------------------------------------------------

void routine_append_5F_stringString_5F_StructAST_26_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_15220 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_15220.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 337)), GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 338)), GGS_string ("left").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 339)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 340)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 342)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 336)) ;
  var_propertyList_15220.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 345)), GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 346)), GGS_string ("right").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 347)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 348)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 350)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 344)) ;
  GGS_structDeclarationAST var_type_15644 = GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_string ("stringString").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 354)), var_propertyList_15220, GGS_string::makeEmptyString (), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 357)), GGS_bool (true), inCompiler COMMA_HERE) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (var_type_15644  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 360)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26_ (GGS__5B_semanticDeclarationAST_5D_ & ioArgument_ioDeclarationListASTs,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ var_propertyList_16105 = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_HERE) ;
  var_propertyList_16105.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 368)), GGS_string ("u32").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 369)), GGS_string ("start").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 370)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 371)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 373)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 367)) ;
  var_propertyList_16105.plusPlusAssignOperation (GGS_propertyInCollectionAST::init_21_mutability_21_typeName_21_name_21__21_hasSelector_21_initialization (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("all-predefined-types.galgas4", 376)), GGS_string ("u32").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 377)), GGS_string ("length").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 378)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("all-predefined-types.galgas4", 379)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("all-predefined-types.galgas4", 381)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 375)) ;
  ioArgument_ioDeclarationListASTs.plusPlusAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (GGS_bool (true), GGS_string ("range").getter_here (inCompiler COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 385)), var_propertyList_16105, GGS_string ("u32"), GGS_structComparison::class_func_equatable (SOURCE_FILE ("all-predefined-types.galgas4", 388)), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("all-predefined-types.galgas4", 383)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s32PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_s_33__32_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_sint_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s32PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_s_33__32_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 42)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 43)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s32PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_33__32_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 59)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s32PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_33__32_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 155)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("s32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas4", 162)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_s_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 34)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 35)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 37)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s64PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_36__34_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("min"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@s64PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_s_36__34_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 141)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 148)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("s64"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@s64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_s_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_s_36__34__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-s64.galgas4", 167)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 37)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 38)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf8Length"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("utf32CharConstantRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalnum"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isalpha"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("iscntrl"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isdigit"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("islower"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isupper"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isxdigit"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeLetter"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeMark"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeNumber"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSeparator"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeCommand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodePunctuation"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeSymbol"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeName"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 164)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToLower"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeToUpper"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 178)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@charPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("replacementCharacter"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 192)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterWithUnsigned"), GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("char"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 199)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("unicodeCharacterFromRawKeyboard"), GGS_string ("char"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_char_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas4", 220)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u32PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_u_33__32_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_u_33__32__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@u32PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_u_33__32_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 36)).operator_or (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 37)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 38)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 39)).operator_or (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 40)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 41)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("random"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("max"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("valueWithMask"), GGS_string ("u32"), GGS_string ("inLowerIndex"), GGS_string ("u32"), GGS_string ("inUpperIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 64)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("f64"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 96)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 110)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("lsbIndex"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 117)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("significantBitCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 124)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("oneBitCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 131)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hexStringSeparatedBy"), GGS_string ("char"), GGS_string ("inSeparator"), GGS_string ("u32"), GGS_string ("inGroupCount"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("xString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("isUnicodeValueAssigned"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canAdd"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 184)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canSubstract"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canMultiply"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 198)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("canDivide"), GGS_string ("u32"), GGS_string ("inOperand"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 205)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@u32PredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_u_33__32_PredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setRandomSeed"), GGS_string ("u32"), GGS_string ("inSeed"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas4", 219)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_filewrapper_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inDirectoryPath"), GGS_string ("setCurrentDirectory"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 44)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allTextFilePaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allBinaryFilePaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allDirectoryPaths"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("currentDirectory"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("allFilePathsWithExtension"), GGS_string ("string"), GGS_string ("inExtension"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoryExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("fileExistsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("bool"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 101)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 108)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFileContentsAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("absolutePathForPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("directoriesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("textFilesAtPath"), GGS_string ("string"), GGS_string ("inPath"), GGS_string ("[string]"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas4", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 32)).operator_or (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 33)).operator_or (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 34)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GGS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 41)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 42)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 49)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 56)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 63)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cos"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 77)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sin"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tan"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 91)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log10"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("log2"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("logn"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exp"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cosDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sinDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("tanDegree"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("sqrt"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 147)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("power"), GGS_string ("f64"), GGS_string ("inExponant"), GGS_string ("f64"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("binaryImage"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 161)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doublePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GGS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("pi"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 175)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("doubleWithBinaryImage"), GGS_string ("u64"), GGS_string ("inBinaryImage"), GGS_string ("f64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_f_36__34__5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas4", 196)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result ; // Returned variable
  result = GGS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-application.galgas4", 30)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_application_5F_package (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 36)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-application.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GGS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("compilationMode"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("runningOnWindows"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("runningOnUnix"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("errorCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("warningCount"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 78)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("system"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("projectVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 92)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("galgasVersionString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 99)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordIdentifierSet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 279)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("keywordListForIdentifier"), GGS_string ("string"), GGS_string ("inIdentifier"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 286)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@applicationPredefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("exit"), GGS_string ("u32"), GGS_string ("inErrorCode"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas4", 302)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 30)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 31)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_bool_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 37)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("ocString"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s32"), GGS_string ("s32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u64"), GGS_string ("u64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 80)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("s64"), GGS_string ("s64"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 87)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("bigint"), GGS_string ("bigint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas4", 94)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_0 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  temp_0.plusPlusAssignOperation (GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 30)) ;
  result = temp_0 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptyData"), GGS_string ("data"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dataWithContentsOfFile"), GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("data"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 45)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 59)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                            GGS__5B_enumerationDescriptor_5D_ & outArgument_outEnumerationList,
                                                            GGS_string & outArgument_outEnumeratedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_enumerationDescriptor_5D_ temp_0 = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 67)) ;
  outArgument_outEnumerationList = temp_0 ;
  outArgument_outEnumeratedTypeName = GGS_string ("u8") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 76)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inFilePath"), GGS_string ("writeToExecutableFile"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 84)) ;
  }
  GGS__5B_formalParameterSignatureElement_5D_ var_argList_3737 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3827 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_t_3827, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 93)) ;
  }
  var_argList_3737.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)), var_t_3827, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)), GGS_string ("inFilePath"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 94)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("bool"), var_t_3827, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 95)) ;
  }
  var_argList_3737.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), var_t_3827, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)), GGS_string ("outFileModified"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 96)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GGS_string ("writeToFileWhenDifferentContents").getter_here (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 98)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 99)), var_argList_3737, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 101)), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas4", 103)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 97)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("cStringRepresentation"), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 120)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@dataPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u8"), GGS_string ("inValue"), GGS_string ("appendU8"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 134)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u16"), GGS_string ("inValue"), GGS_string ("appendU16BE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 142)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u16"), GGS_string ("inValue"), GGS_string ("appendU16LE"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 150)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("appendUIntBE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 158)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("u32"), GGS_string ("inValue"), GGS_string ("appendUIntLE"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 166)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("appendUTF8String"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 174)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("data"), GGS_string ("inValue"), GGS_string ("appendData"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 182)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_data_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas4", 195)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ; // Returned variable
  GGS__5B_formalInputParameterAST_5D_ var_defaultInitializer_1822 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterAST_5D_ temp_0 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  temp_0.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (GGS_string ("stringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), function_makeArrayTypeLName (GGS_string ("string").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_string ("inStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 38)) ;
  GGS__5B_formalInputParameterAST_5D_ var_initializerFromStringArray_1881 = temp_0 ;
  GGS__5B_formalInputParameterAST_5D_ temp_1 = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  temp_1.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (GGS_string ("lstringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("[lstring]").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_string ("inLStringArray").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)), GGS_bool (false), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 41)) ;
  GGS__5B_formalInputParameterAST_5D_ var_initializerFromLStringArray_2061 = temp_1 ;
  GGS__5B__5B_formalInputParameterAST_5D__5D_ temp_2 = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_defaultInitializer_1822  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromStringArray_1881  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  temp_2.plusPlusAssignOperation (var_initializerFromLStringArray_2061  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 43)) ;
  result = temp_2 ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_predefinedTypeGenerationTemplate::class_func_stringset_5F_type (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 49)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ; // Returned variable
  result = GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 55)).operator_or (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 56)).operator_or (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 57)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)).operator_or (GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 58)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GGS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("emptySet"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithString"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 74)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithStringArray"), GGS_string ("[string]"), GGS_string ("inStringArray"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 83)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("setWithLStringArray"), GGS_string ("[lstring]"), GGS_string ("inLStringArray"), GGS_string ("stringset"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 92)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringType_4413 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringType_4413, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 107)) ;
  }
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GGS__5B_formalParameterSignatureElement_5D_ temp_0 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
  temp_0.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), var_stringType_4413, GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)), GGS_string ("inKey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 112)) ;
  outArgument_outSetterMap.setter_insertKey (GGS_string ("removeKey").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 110)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 111)), temp_0, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 114)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 109)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GGS_string ("string"), GGS_string ("inValue"), GGS_string ("insert"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 117)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GGS__5B_enumerationDescriptor_5D_ & outArgument_outEnumerationList,
                                                                 GGS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_5299 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GGS_string ("string"), var_stringTypeIndex_5299, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 132)) ;
  }
  outArgument_outEnumerationList = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.plusPlusAssignOperation (GGS_enumerationDescriptor::init_21__21_ (var_stringTypeIndex_5299, GGS_string ("key"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 134)) ;
  outArgument_outEnumeratedType = GGS_string ("string") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringsetPredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GGS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("contains"), GGS_string ("string"), GGS_string ("inString"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("count"), GGS_string ("u32"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("any"), GGS_string ("string"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 157)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("array"), GGS_string ("[string]"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas4", 164)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_1611 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_1611.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_1654 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_location (), enumerator_1611.current (HERE).readProperty_mLabels (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_1611.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 32)), var_entry_1654.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 29)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_1611.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 38)), function_transformLabelMap (enumerator_1611.current (HERE).readProperty_mLabels (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 36)) ;
      }
    }
    enumerator_1611.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_2540 (constinArgument_inRuleList) ;
  while (enumerator_2540.hasCurrentObject ()) {
    GGS__5B_nonTerminalLabelAST_5D_ var_nonTerminalLabelListAST_2562 = GGS__5B_nonTerminalLabelAST_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_2638 (enumerator_2540.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_2638.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_2562.plusPlusAssignOperation (GGS_nonTerminalLabelAST::init_21__21__21_ (enumerator_2638.current (HERE).readProperty_mLabelName (), enumerator_2638.current (HERE).readProperty_mFormalArguments (), enumerator_2638.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 52)) ;
      enumerator_2638.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_2814 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_location (), var_nonTerminalLabelListAST_2562, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_2540.current (HERE).readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 62)), var_entry_2814.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 59)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_2540.current (HERE).readProperty_mNonterminalName (), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 68)), function_transformLabelMap (var_nonTerminalLabelListAST_2562, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 66)) ;
      }
    }
    enumerator_2540.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS__5B_syntaxComponentForGrammarAnalysis_5D_ & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_u_33__32_ & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_productionRuleForGrammarAnalysis_5D_ var_productionRulesList_3922 = GGS__5B_productionRuleForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_3998 (constinArgument_inRuleList) ;
  while (enumerator_3998.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonTerminalIndex_4091 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4109 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_3998.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_4091, joker_4109, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 85)) ;
    GGS__5B_syntaxInstructionAST_5D_ var_parsedSyntaxInstructionList_4196 = enumerator_3998.current (HERE).readProperty_mLabelList ().getter_first (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 87)).readProperty_mSyntaxInstructionList () ;
    GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ var_instructionList_4315 = GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_4196, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_4315, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 90)) ;
    }
    var_productionRulesList_3922.plusPlusAssignOperation (GGS_productionRuleForGrammarAnalysis::init_21__21__21__21_ (enumerator_3998.current (HERE).readProperty_mNonterminalName (), var_nonTerminalIndex_4091, var_instructionList_4315, var_productionRulesList_3922.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 102)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 98)) ;
    enumerator_3998.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.plusPlusAssignOperation (GGS_syntaxComponentForGrammarAnalysis::init_21__21_ (var_productionRulesList_3922, constinArgument_inSyntaxComponentName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 105)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS__5B_nonTerminalLabelAST_5D_ constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_5356 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_5393 (constinArgument_inLabels) ;
  while (enumerator_5393.hasCurrentObject ()) {
    var_labelStringSet_5356.plusPlusAssignOperation (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 119)) ;
    GGS__5B_signatureElementForGrammarAnalysis_5D_ var_formalParametersList_5538 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_5393.current (HERE).readProperty_mLabelName (), var_formalParametersList_5538, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 120)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 121)).objectCompare (var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 121)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 124)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 128)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_location (), enumerator_5393.current (HERE).readProperty_mFormalArgumentList ().getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).getter_string (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 123)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 124)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 125)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 126)).add_operation (var_formalParametersList_5538.getter_count (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).getter_string (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 127)), fixItArray5  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 122)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_6160 (enumerator_5393.current (HERE).readProperty_mFormalArgumentList ()) ;
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_6212 (var_formalParametersList_5538) ;
      while (enumerator_6160.hasCurrentObject () && enumerator_6212.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_6212.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().objectCompare (enumerator_6160.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_6212.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 134)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 134)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 135)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 136)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 137)).add_operation (extensionGetter_string (enumerator_6160.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 138)), fixItArray7  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 133)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string ().objectCompare (enumerator_6160.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_6212.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 143)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 144)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_5393.current (HERE).readProperty_mLabelName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 145)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 146)).add_operation (enumerator_6160.current (HERE).readProperty_mFormalArgumentTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 147)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 147)), fixItArray9  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 142)) ;
          }
        }
        enumerator_6160.gotoNextObject () ;
        enumerator_6212.gotoNextObject () ;
      }
    }
    enumerator_5393.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_7541 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_7541.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_5356.getter_contains (enumerator_7541.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 155)).operator_not (SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_7541.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 157)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 158)), fixItArray11  COMMA_SOURCE_FILE ("galgas-grammar-component-utilities.galgas4", 156)) ;
      }
    }
    enumerator_7541.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inPrologueList,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_2537 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 52)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 52)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2537, var_usefulnessName_2537, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 53)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_2537  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 54)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_2746 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_2842 (constinArgument_inPrologueList) ;
  while (enumerator_2842.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_3167 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_3216 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_2537, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_2842.current (HERE).readProperty_mInstructionList (), enumerator_2842.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_3167, joker_3216, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 58)) ;
    }
    var_semanticInstructionListForGeneration_2746.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3167, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 69)) ;
    enumerator_2842.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2746, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 74)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS__5B_programRuleAST_5D_ constinArgument_inProgramRules,
                                                                    GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_u_33__32_ var_ruleIndex_4365 = GGS_u_33__32_ (uint32_t (0U)) ;
  UpEnumerator__5B_programRuleAST_5D_ enumerator_4400 (constinArgument_inProgramRules) ;
  while (enumerator_4400.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4426 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4400.current (HERE).readProperty_mSourceFileExtension (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 101)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4426, var_usefulnessName_4426, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 102)) ;
    }
    ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_4426  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 103)) ;
    GGS__5B_formalParameterAST_5D_ temp_0 = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas4", 105)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas4", 105)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)), inCompiler COMMA_HERE), enumerator_4400.current (HERE).readProperty_mSourceFileVariableName (), enumerator_4400.current (HERE).readProperty_mSourceFileVariableNameIsUnused (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 105)) ;
    GGS__5B_formalParameterAST_5D_ var_argumentList_4660 = temp_0 ;
    GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_5065 ;
    GGS__5B_formalParameterForGeneration_5D_ var_routineSignature_5114 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_4426, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_4660, enumerator_4400.current (HERE).readProperty_mInstructionList (), enumerator_4400.current (HERE).readProperty_mEndOfInstructionList (), var_semanticInstructionListForGeneration_5065, var_routineSignature_5114, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 107)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4365.getter_string (SOURCE_FILE ("programComponentCompilation.galgas4", 122)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 122)), var_routineSignature_5114, GGS_bool (true), var_semanticInstructionListForGeneration_5065, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 118)) ;
    var_ruleIndex_4365.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 127)) ;
    enumerator_4400.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inEpilogueList,
                                                                   GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_6159 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 145)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 145)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6159, var_usefulnessName_6159, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 146)) ;
  }
  ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_usefulnessName_6159  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 147)) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_6402 = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_prologueEpilogueAST_5D_ enumerator_6463 (constinArgument_inEpilogueList) ;
  while (enumerator_6463.hasCurrentObject ()) {
    GGS__5B_semanticInstructionForGeneration_5D_ var_blockSemanticInstructionListForGeneration_6788 ;
    {
    GGS__5B_formalParameterForGeneration_5D_ joker_6837 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_6159, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE), enumerator_6463.current (HERE).readProperty_mInstructionList (), enumerator_6463.current (HERE).readProperty_mEndOfInstructionList (), var_blockSemanticInstructionListForGeneration_6788, joker_6837, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 151)) ;
    }
    var_semanticInstructionListForGeneration_6402.plusPlusAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_6788, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 162)) ;
    enumerator_6463.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("routine-implementation"), GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6402, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 165)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inPrologueList,
                                                                                    const GGS__5B_programRuleAST_5D_ constinArgument_inProgramRules,
                                                                                    const GGS__5B_prologueEpilogueAST_5D_ constinArgument_inEpilogueList,
                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    const GGS_string constinArgument_inProjectVersionString,
                                                                                    GGS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GGS_analysisContext var_analysisContext_8110 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 196)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas4", 198)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticDeclarationForGeneration_5D_ var_decoratedDeclarationListForGeneration_8397 = GGS__5B_semanticDeclarationForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 203)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 212)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8110, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_8397, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 221)) ;
  }
  GGS_stringset var_inclusionSet_9155 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9180 = GGS_string::makeEmptyString () ;
  UpEnumerator__5B_semanticDeclarationForGeneration_5D_ enumerator_9223 (var_decoratedDeclarationListForGeneration_8397) ;
  while (enumerator_9223.hasCurrentObject ()) {
    var_beforeAfterRulesString_9180.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_9223.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 233)) ;
    GGS_string var_code_9412 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_9223.current (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9155, var_code_9412, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 234)) ;
    var_beforeAfterRulesString_9180.plusAssignOperation(var_code_9412, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 235)) ;
    enumerator_9223.gotoNextObject () ;
  }
  UpEnumerator__5B_programRuleAST_5D_ enumerator_9477 (constinArgument_inProgramRules) ;
  while (enumerator_9477.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9477.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9155.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_9477.current (HERE).readProperty_mReferenceGrammar ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 239))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 239)) ;
      }
    }
    enumerator_9477.gotoNextObject () ;
  }
  GGS_string var_cppContents_9660 = GGS_programFileGenerationTemplate::class_func_programFileImplementation (GGS_string ("program"), GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9180, constinArgument_inProgramRules, constinArgument_inProjectVersionString, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas4", 242)) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_string ("zprogram"), GGS_bool (false), GGS_string ("program"), var_inclusionSet_9155, var_cppContents_9660, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 37)) ;
  result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 39)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string::makeEmptyString () ;
  result = GGS_string ("testForInputUTF32CharRange (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 49)) ;
  result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 51)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 52)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result = GGS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 60)) ;
  result.plusAssignOperation(GGS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 61)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 69)) ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 70)) ;
  result.plusAssignOperation(GGS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 71)) ;
  result.plusAssignOperation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 72)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 72)) ;
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  result.plusAssignOperation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 73)) ;
  result.plusAssignOperation(GGS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 74)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("testForInputUTF32Char (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 83)) ;
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 84)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument__5F_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result = GGS_string ("testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 92)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 107)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 107)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 114)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas4", 120)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("previousChar ()") ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 134)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 134)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ enumerator_6120 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6120.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6120.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 136)) ;
    enumerator_6120.gotoNextObject () ;
  }
  result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 138)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument__5F_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 155)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 155)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 155)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 163)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  GGS_sortedTokenArray var_tokenSortedList_8245 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8236 ; // Joker input parameter
  GGS_bool joker_8262 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8236, var_tokenSortedList_8245, joker_8262, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 184)) ;
  result = GGS_string::makeEmptyString () ;
  DownEnumerator_sortedTokenArray enumerator_8297 (var_tokenSortedList_8245) ;
  while (enumerator_8297.hasCurrentObject ()) {
    result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 187)) ;
    result.plusAssignOperation(enumerator_8297.current (HERE).readProperty_mName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 188)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 188)) ;
    result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 189)) ;
    result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_8297.current (HERE).readProperty_mTerminalName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 190)) ;
    result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 191)) ;
    result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 192)) ;
    enumerator_8297.gotoNextObject () ;
  }
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 209)) ;
  result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 210)) ;
  {
  result.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 211)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_9451 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_9451.hasCurrentObject ()) {
    result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9451.current (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 213)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 213)) ;
    enumerator_9451.gotoNextObject () ;
  }
  {
  result.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 215)) ;
  }
  result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 216)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator__5B_lexicalInstructionAST_5D_ enumerator_9848 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 223)).isValidAndTrue () ;
  if (enumerator_9848.hasCurrentObject () && bool_1) {
    while (enumerator_9848.hasCurrentObject () && bool_1) {
      result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_9848.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas4", 224)) ;
      enumerator_9848.gotoNextObject () ;
      if (enumerator_9848.hasCurrentObject ()) {
        bool_1 = result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas4", 223)).isValidAndTrue () ;
      }
    }
  }
//---
  return result ;
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
  GGS_unifiedTypeDefinition var_targetTypeDef_3522 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 81)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const GalgasBool test_1 = var_targetTypeDef_3522.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 82)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 82)).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = var_targetTypeDef_3522.readProperty_unwrappedType () ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_3568 = temp_0 ;
  GGS_bool var_handled_3747 = GGS_bool (false) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_3772 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_3772.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 89)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_3916 = var_bigIntSource_3772.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_3916.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_3916.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 91)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_3916.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 92)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_3916.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 97)), inCompiler COMMA_HERE) ;
          var_handled_3747 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 100)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_4378 = var_bigIntSource_3772.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4378.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4378.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 102)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4378.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 103)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4378.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 108)), inCompiler COMMA_HERE) ;
            var_handled_3747 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 111)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_4849 = var_bigIntSource_3772.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_4849.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4849.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 113)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  GenericArray <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_4849.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 114)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4849.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 119)), inCompiler COMMA_HERE) ;
              var_handled_3747 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("u8").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 122)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_5312 = var_bigIntSource_3772.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5312.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5312.objectCompare (GGS_bigint ("256", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 124)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5312.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)).add_operation (GGS_string (") does not fit in an @u8"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 125)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalU_38_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5312.getter_u_38_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 130)), inCompiler COMMA_HERE) ;
                var_handled_3747 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_15 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_15) {
                test_15 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_3568, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 133)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  GGS_bigint var_bigIntValue_5764 = var_bigIntSource_3772.readProperty_mValue () ;
                  GalgasBool test_16 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_16) {
                    test_16 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5764.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5764.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 135)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_16) {
                      GenericArray <FixItDescription> fixItArray17 ;
                      inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5764.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)), fixItArray17  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 136)) ;
                    }
                  }
                  ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_3568, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5764.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 141)), inCompiler COMMA_HERE) ;
                  var_handled_3747 = GGS_bool (true) ;
                }
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 147)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_targetTypeDef_3522.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 147)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 149)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 148)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_6377 = var_targetTypeDef_3522.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_6435 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 151)).readProperty_unwrappedType () ;
          var_handled_3747 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_6377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_6435, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 152)))) ;
        }
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 155)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string var_targetUnwrappedTypeName_6721 = extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 156)) ;
        var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6721.objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 157)))) ;
        GGS_unifiedTypeMapEntry var_sourceType_6865 = constinArgument_inSourceType ;
        if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid ()) {
          uint32_t variant_6895 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).uintValue () ;
          bool loop_6895 = true ;
          while (loop_6895) {
            loop_6895 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).isValid () ;
            if (loop_6895) {
              loop_6895 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_and (extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)).boolValue () ;
            }
            if (loop_6895 && (0 == variant_6895)) {
              loop_6895 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 159)) ;
            }
            if (loop_6895) {
              variant_6895 -= 1 ;
              var_sourceType_6865 = extensionGetter_definition (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 160)).readProperty_superType () ;
              var_handled_3747 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_6721.objectCompare (extensionGetter_typeName (var_sourceType_6865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 161)))) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = var_handled_3747.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 165)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      GGS_unifiedTypeMapEntry var_sourceType_7170 = constinArgument_inSourceType ;
      GGS_bool var_ok_7204 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 167)))) ;
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid ()) {
        uint32_t variant_7260 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).uintValue () ;
        bool loop_7260 = true ;
        while (loop_7260) {
          loop_7260 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).isValid () ;
          if (loop_7260) {
            loop_7260 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_and (extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)).boolValue () ;
          }
          if (loop_7260 && (0 == variant_7260)) {
            loop_7260 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 168)) ;
          }
          if (loop_7260) {
            variant_7260 -= 1 ;
            var_sourceType_7170 = extensionGetter_definition (var_sourceType_7170, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 169)).readProperty_superType () ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7170)) ;
          }
        }
      }
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          const GGS_propertyMap_2E_element var_prop_7959 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 181)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_21 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_21) {
            extensionMethod_checkSetAccess (var_prop_7959.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 182)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8115 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7959.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8115 ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_prop_7959.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_21) {
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          GGS_bool test_23 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          if (GalgasBool::boolTrue == test_23.boolEnum ()) {
            test_23 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)).readProperty_getterMap ().getter_contains (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 191)) ;
          }
          test_22 = test_23.boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_methodKind var_kind_8586 ;
            GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_8633 ;
            GGS_bool var_hasCompilerArgument_8676 ;
            GGS_unifiedTypeMapEntry var_returnedType_8710 ;
            GGS_location joker_8659 ; // Joker input parameter
            GGS_methodQualifier joker_8732_2 ; // Joker input parameter
            GGS_string joker_8732_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_3522.readProperty_typeName (), var_kind_8586, var_argumentTypeList_8633, joker_8659, var_hasCompilerArgument_8676, var_returnedType_8710, joker_8732_2, joker_8732_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 192)) ;
            var_ok_7204 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_8633.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_8710.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 201)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_8863 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_8586, ioArgument_ioExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_8676, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8863 ;
          }
        }
      }
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_ok_7204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 215)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is @").add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (GGS_string (" and cannot be assigned from an @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 217)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (GGS_string (" object; this type have no "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 218)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 219)).add_operation (GGS_string (" func without argument that returns a @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 220)).add_operation (var_targetTypeDef_3522.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 221)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 222)), fixItArray25  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 216)) ;
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
  GGS_unifiedTypeMapEntry var_leftResultType_10027 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10080 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 239)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 240)).add_operation (extensionGetter_definition (var_rightResultType_10080, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 241)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 238)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_10463 = var_rightResultType_10080 ;
    GGS_bool var_ok_10505 = GGS_bool (ComparisonKind::equal, var_leftResultType_10027.objectCompare (var_rightType_10463)) ;
    if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid ()) {
      uint32_t variant_10542 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).uintValue () ;
      bool loop_10542 = true ;
      while (loop_10542) {
        loop_10542 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).isValid () ;
        if (loop_10542) {
          loop_10542 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_and (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)).boolValue () ;
        }
        if (loop_10542 && (0 == variant_10542)) {
          loop_10542 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 245)) ;
        }
        if (loop_10542) {
          variant_10542 -= 1 ;
          var_rightType_10463 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 246)).readProperty_superType () ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_leftResultType_10027.objectCompare (var_rightType_10463)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 250)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_10768 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_10768.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 251)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_10917 = var_bigIntSource_10768.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_10917.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10917.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 253)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_10917.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 254)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10917.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 256)), inCompiler COMMA_HERE) ;
              var_ok_10505 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 258)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_11352 = var_bigIntSource_10768.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11352.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11352.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 260)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11352.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 261)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11352.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 263)), inCompiler COMMA_HERE) ;
                var_ok_10505 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_11796 = var_bigIntSource_10768.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11796.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11796.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 267)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11796.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 268)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11796.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 270)), inCompiler COMMA_HERE) ;
                  var_ok_10505 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12233 = var_bigIntSource_10768.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12233.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12233.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 274)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12233.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 275)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10027, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12233.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 277)), inCompiler COMMA_HERE) ;
                    var_ok_10505 = GGS_bool (true) ;
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
      test_15 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 282)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_12673 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_12673.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("u32").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 283)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_12816 = var_bigIntSource_12673.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12816.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12816.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 285)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12816.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)).add_operation (GGS_string (") does not fit in an @u32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 286)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12816.getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 288)), inCompiler COMMA_HERE) ;
              var_ok_10505 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("s32").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 290)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_13238 = var_bigIntSource_12673.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13238.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13238.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 292)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13238.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)).add_operation (GGS_string (") does not fit in an @s32"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 293)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13238.getter_s_33__32_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 295)), inCompiler COMMA_HERE) ;
                var_ok_10505 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("u64").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_13669 = var_bigIntSource_12673.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13669.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13669.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 299)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13669.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)).add_operation (GGS_string (") does not fit in an @u64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 300)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13669.getter_u_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 302)), inCompiler COMMA_HERE) ;
                  var_ok_10505 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("s64").objectCompare (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14093 = var_bigIntSource_12673.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14093.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14093.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 306)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14093.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)).add_operation (GGS_string (") does not fit in an @s64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 307)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_10463, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14093.getter_s_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 309)), inCompiler COMMA_HERE) ;
                    var_ok_10505 = GGS_bool (true) ;
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
      test_28 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_14563 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 314)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_14563.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 315)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_14721 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_14563.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 320)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_14721 ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_prop_14563.readProperty_mPropertyType ().objectCompare (var_leftResultType_10027)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_getterMap ().getter_contains (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 324)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_15234 ;
          GGS__5B_functionSignatureElement_5D_ var_argumentTypeList_15281 ;
          GGS_bool var_hasCompilerArgument_15324 ;
          GGS_unifiedTypeMapEntry var_returnedType_15358 ;
          GGS_location joker_15307 ; // Joker input parameter
          GGS_methodQualifier joker_15380_2 ; // Joker input parameter
          GGS_string joker_15380_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 326)).readProperty_typeName (), var_kind_15234, var_argumentTypeList_15281, joker_15307, var_hasCompilerArgument_15324, var_returnedType_15358, joker_15380_2, joker_15380_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 325)) ;
          var_ok_10505 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_15281.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_15358.objectCompare (var_leftResultType_10027)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 334)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_15513 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10027, constinArgument_inErrorLocation, var_kind_15234, ioArgument_ioRightExpression, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 342)).readProperty_typeName ().readProperty_string (), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_hasCompilerArgument_15324, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15513 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_10505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 348)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 350)).add_operation (extensionGetter_definition (var_rightType_10463, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 351)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 352)).add_operation (GGS_string ("' func without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (extensionGetter_definition (var_leftResultType_10027, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 353)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas4", 349)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 358)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_key_13659 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 370)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_13659, temp_2, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 371)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_13831 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_13831.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_13659, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_13831.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 373)), enumerator_13831.current (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 373)) ;
    }
    enumerator_13831.gotoNextObject () ;
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
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 386)).operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 386)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 387)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_14779 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 390)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_14779, var_grammarNameForUsefulness_14779, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 391)) ;
  }
  GGS_stringset var_unicodeStringToGenerate_15042 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_15108 (temp_3.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_15108.hasCurrentObject ()) {
    var_unicodeStringToGenerate_15042.plusPlusAssignOperation (enumerator_15108.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 395)) ;
    var_unicodeStringToGenerate_15042.plusPlusAssignOperation (enumerator_15108.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 396)) ;
    enumerator_15108.gotoNextObject () ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_15472 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_15556 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_15612 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 402)) ;
  GGS__5B_syntaxComponentForGrammarAnalysis_5D_ var_syntaxComponentListForGrammarAnalysis_15722 = GGS__5B_syntaxComponentForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_nonTerminalToAdd_5D_ var_nonTerminalToAddList_15794 = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_addedNonTerminalCount_15834 = GGS_u_33__32_ (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_4 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_15896 (temp_4.readProperty_mSyntaxComponents ()) ;
  while (enumerator_15896.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_15927 = function_syntaxNameForUsefulEntitiesGraph (enumerator_15896.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 407)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_14779, var_syntaxNameForUsefulness_15927 COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 408)) ;
    }
    GGS_u_33__32_ var_addedNonTerminalCountRef_16125 = var_addedNonTerminalCount_15834 ;
    GGS_lstring var_lexiqueName_16300 ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_16355 ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_16413 ;
    GGS_bool var_hasTranslateFeature_16442 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15896.current (HERE), var_lexiqueName_16300, var_nonterminalDeclarationList_16355, var_ruleList_16413, var_hasTranslateFeature_16442, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 410)) ;
    GGS_lstring var_lexiqueNameForUsefulness_16480 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_16300, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 417)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_14779, var_lexiqueNameForUsefulness_16480 COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 418)) ;
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
      test_5 = temp_6.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_16442.operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 420)) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 420)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_galgas_33_GrammarComponentAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_15896.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_7.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 421)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 421)), fixItArray8  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 421)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
        test_9 = var_hasTranslateFeature_16442.operator_and (temp_10.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 422)) COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 422)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_galgas_33_GrammarComponentAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_15896.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 423)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 423)), fixItArray12  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 423)) ;
        }
      }
    }
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_15612.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        var_lexiqueComponentName_15612 = var_lexiqueName_16300 ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_16300.readProperty_string ().objectCompare (var_lexiqueComponentName_15612.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (enumerator_15896.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_16300.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 429)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 430)).add_operation (var_lexiqueComponentName_15612.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 430)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 431)), fixItArray15  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 429)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_15556, var_nonterminalDeclarationList_16355, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 434)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_15556, var_ruleList_16413, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 439)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_15556, enumerator_15896.current (HERE), var_ruleList_16413, var_actuallyUsedTerminalSymbolMap_15472, var_syntaxComponentListForGrammarAnalysis_15722, var_addedNonTerminalCount_15834, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 444)) ;
    }
    GGS_u_33__32_ var_i_18211 = GGS_u_33__32_ (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_15834.isValid ()) {
      uint32_t variant_18223 = var_addedNonTerminalCount_15834.uintValue () ;
      bool loop_18223 = true ;
      while (loop_18223) {
        loop_18223 = GGS_bool (ComparisonKind::lowerThan, var_i_18211.objectCompare (var_addedNonTerminalCount_15834.subtract_operation (var_addedNonTerminalCountRef_16125, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 453)))).isValid () ;
        if (loop_18223) {
          loop_18223 = GGS_bool (ComparisonKind::lowerThan, var_i_18211.objectCompare (var_addedNonTerminalCount_15834.subtract_operation (var_addedNonTerminalCountRef_16125, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 453)))).boolValue () ;
        }
        if (loop_18223 && (0 == variant_18223)) {
          loop_18223 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 453)) ;
        }
        if (loop_18223) {
          variant_18223 -= 1 ;
          var_nonTerminalToAddList_15794.plusPlusAssignOperation (GGS_nonTerminalToAdd::init_21__21_ (enumerator_15896.current (HERE).readProperty_string (), var_i_18211, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 454)) ;
          var_i_18211.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 455)) ;
        }
      }
    }
    enumerator_15896.gotoNextObject () ;
  }
  GGS_u_33__32_ var_startSymbolIndex_18625 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_18699 ;
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  var_nonTerminalMapForGrammarAnalysis_15556.method_searchKey (temp_16.readProperty_mStartSymbolName (), var_startSymbolIndex_18625, var_startSymbolAltMap_18699, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 460)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_17.readProperty_mStartSymbolName ().readProperty_location (), temp_18.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_15556.getter_locationForKey (temp_19.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 469)), var_startSymbolAltMap_18699, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 466)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_19100 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_20 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_19175 (temp_20.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_19175.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonterminalIndex_19280 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_19298 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_15556.method_searchKey (enumerator_19175.current (HERE), var_nonterminalIndex_19280, joker_19298, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 475)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_19100.setter_insertKey (enumerator_19175.current (HERE), var_nonterminalIndex_19280, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 476)) ;
    }
    enumerator_19175.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_19557 = GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_19632 (var_nonTerminalMapForGrammarAnalysis_15556) ;
  while (enumerator_19632.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_19557.plusPlusAssignOperation (GGS_sortedNonTerminalSymbolForGrammarAnalysis::init_21__21__21_ (enumerator_19632.current (HERE).readProperty_lkey (), enumerator_19632.current (HERE).readProperty_mNonTerminalIndex (), enumerator_19632.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 481)) ;
    enumerator_19632.gotoNextObject () ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
    const GGS_templateDelimiterDescriptorAST var_t_19920 = temp_22.readProperty_mTemplateDelimiterDescriptor ().unwrappedValue () ;
    if (!temp_22.readProperty_mTemplateDelimiterDescriptor ().isValuated ()) {
      test_21 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_21) {
      GGS_terminalMap var_terminalMap_20069 ;
      GGS_bool joker_20060 ; // Joker input parameter
      GGS__5B_indexingAST_5D_ joker_20082_4 ; // Joker input parameter
      GGS__5B_terminalDeclarationAST_5D_ joker_20082_3 ; // Joker input parameter
      GGS__5B_lexicalAttributeAST_5D_ joker_20082_2 ; // Joker input parameter
      GGS__5B_lexicalListDeclarationAST_5D_ joker_20082_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (var_lexiqueComponentName_15612, joker_20060, var_terminalMap_20069, joker_20082_4, joker_20082_3, joker_20082_2, joker_20082_1, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 485)) ;
      GGS__5B_lexicalSentValue_5D_ joker_20142 ; // Joker input parameter
      var_terminalMap_20069.method_searchKey (var_t_19920.readProperty_mOpenTemplateDelimiter (), joker_20142, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 486)) ;
      GGS__5B_lexicalSentValue_5D_ joker_20202 ; // Joker input parameter
      var_terminalMap_20069.method_searchKey (var_t_19920.readProperty_mCloseTemplateDelimiter (), joker_20202, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 487)) ;
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_buildOptionValue::class_func_emitSyntaxDiagrams (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 490)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_24 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_24.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_15556, var_syntaxComponentListForGrammarAnalysis_15722, temp_25.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 491)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_20688 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 500)) ;
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = GGS_buildOptionValue::class_func_emitClassGraph (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 501)).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_20688, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 502)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_20688, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 507)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_21268 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_21322 (var_nonTerminalMapForGrammarAnalysis_15556) ;
  while (enumerator_21322.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_21397 (enumerator_21322.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_21397.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_21468 (enumerator_21397.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_21468.hasCurrentObject ()) {
        switch (enumerator_21468.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_21629 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_21468.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 518)) ;
            extensionMethod_addHeaderFileName (var_t_21629, var_implementationFileHeader_21268, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 519)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_21468.gotoNextObject () ;
      }
      enumerator_21397.gotoNextObject () ;
    }
    enumerator_21322.gotoNextObject () ;
  }
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 525)).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      var_implementationFileHeader_21268 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  GGS_string var_templateDescriptorString_21994 = GGS_string (", ") ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_galgas_33_GrammarComponentAST temp_29 = this ;
    const GGS_templateDelimiterDescriptorAST var_t_22037 = temp_29.readProperty_mTemplateDelimiterDescriptor ().unwrappedValue () ;
    if (!temp_29.readProperty_mTemplateDelimiterDescriptor ().isValuated ()) {
      test_28 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_28) {
      var_templateDescriptorString_21994.plusAssignOperation(GGS_string ("kUnicodeString_").add_operation (var_lexiqueComponentName_15612.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)).add_operation (var_t_22037.readProperty_mOpenTemplateDelimiter ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 531)) ;
      var_templateDescriptorString_21994.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 532)) ;
      var_templateDescriptorString_21994.plusAssignOperation(GGS_string ("Lexique_").add_operation (var_lexiqueComponentName_15612.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)).add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)).add_operation (var_t_22037.readProperty_mCloseTemplateDelimiter ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 533)) ;
    }
  }
  if (GalgasBool::boolFalse == test_28) {
    var_templateDescriptorString_21994.plusAssignOperation(GGS_string ("std::initializer_list <utf32> (), -1"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 535)) ;
  }
  var_templateDescriptorString_21994.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 544)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_galgas_33_GrammarComponentAST temp_31 = this ;
    test_30 = GGS_bool (ComparisonKind::equal, temp_31.readProperty_mTemplateReplacementList ().getter_count (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 545)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_templateDescriptorString_21994.plusAssignOperation(GGS_string ("nullptr"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 546)) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
    var_templateDescriptorString_21994.plusAssignOperation(temp_32.readProperty_mGrammarComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 548)).add_operation (GGS_string ("_kTemplateReplacementArray"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 548)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 548)) ;
  }
  var_templateDescriptorString_21994.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 550)) ;
  const GGS_galgas_33_GrammarComponentAST temp_33 = this ;
  var_templateDescriptorString_21994.plusAssignOperation(temp_33.readProperty_mTemplateReplacementList ().getter_count (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 551)).getter_string (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 551)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 551)) ;
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  GGS_string var_HTMLFilePath_23324 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)).add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 553)) ;
  GGS_string var_grammarCppFile_23940 ;
  GGS_string var_grammarHTMLHelperContents_23975 ;
  GGS_string var_swiftGrammarDescription_24021 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  GGS_string temp_38 ;
  const GalgasBool test_39 = temp_37.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_39) {
    temp_38 = function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_39) {
    temp_38 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_35.readProperty_mGrammarComponentName (), temp_36.readProperty_mGrammarClass (), var_startSymbolIndex_18625, var_lexiqueComponentName_15612.readProperty_string (), var_actuallyUsedTerminalSymbolMap_15472, var_syntaxComponentListForGrammarAnalysis_15722, var_unusedNonTerminalSymbolsForGrammar_19100, var_HTMLFilePath_23324, var_nonTerminalSymbolSortedListForGrammarAnalysis_19557, temp_38, var_templateDescriptorString_21994, var_grammarCppFile_23940, var_grammarHTMLHelperContents_23975, var_swiftGrammarDescription_24021, inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 554)) ;
  }
  GalgasBool test_40 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_40) {
    test_40 = GGS_buildOptionValue::class_func_outputHTMLgrammarFile (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 571)).boolEnum () ;
    if (GalgasBool::boolTrue == test_40) {
      var_HTMLFilePath_23324.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 572)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 572)) ;
      GGS_bool joker_24341 ; // Joker input parameter
      var_grammarHTMLHelperContents_23975.method_writeToFileWhenDifferentContents (var_HTMLFilePath_23324, joker_24341, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 573)) ;
    }
  }
  if (GalgasBool::boolFalse == test_40) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_23324, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 575)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_41 = this ;
  GGS_string var_swiftFilePath_24512 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 578)).add_operation (temp_41.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 578)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 578)) ;
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 579)).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      var_swiftFilePath_24512.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 580)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 580)) ;
      GGS_bool joker_24810 ; // Joker input parameter
      var_swiftGrammarDescription_24021.method_writeToFileWhenDifferentContents (var_swiftFilePath_24512, joker_24810, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 581)) ;
    }
  }
  if (GalgasBool::boolFalse == test_42) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_24512, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 583)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_43 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_44 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_45 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_46 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_47 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_48 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_43.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 590)), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 590)), temp_44.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_15612.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_15556, var_nonTerminalToAddList_15794, temp_45.readProperty_mSyntaxComponents (), temp_46.readProperty_mStartSymbolName ().readProperty_string (), temp_47.readProperty_mHasTranslateFeature (), var_grammarCppFile_23940, var_unicodeStringToGenerate_15042, temp_48.readProperty_mTemplateReplacementList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 587)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const GGS_string constinArgument_inDotDocumentFilePath,
                                         const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 612)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 612)) ;
  GGS_string var_document_25877 = GGS_string ("digraph G {\n") ;
  var_document_25877.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 614)) ;
  var_document_25877.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 615)) ;
  UpEnumerator_unifiedTypeMap enumerator_26026 (constinArgument_inTypeMap) ;
  while (enumerator_26026.hasCurrentObject ()) {
    switch (enumerator_26026.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_26136_definition_0 ;
        enumerator_26026.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_26136_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_26136_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 620)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_26136_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_25877.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26136_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 623)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 623)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 623)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass extractedValue_26337_superType_0 ;
                extractedValue_26136_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_26337_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_typeDefinition_2E_solved var_solvedType_26367 = extractedValue_26337_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 625)).unwrappedValue () ;
                  if (!extractedValue_26337_superType_0.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 625)).isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    var_document_25877.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26136_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 626)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 626)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 626)) ;
                    var_document_25877.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_26136_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 627)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 627)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 627)) ;
                    var_document_25877.plusAssignOperation(var_solvedType_26367.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 628)), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 628)) ;
                  }
                }
              }
              break ;
            }
          }
        }
      }
      break ;
    }
    enumerator_26026.gotoNextObject () ;
  }
  var_document_25877.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 634)) ;
  GGS_bool joker_26761 ; // Joker input parameter
  var_document_25877.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_26761, inCompiler COMMA_SOURCE_FILE ("galgas-grammar-component-ast.galgas4", 635)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_makeArrayTypeName (const GGS_string & constinArgument_inTypeName,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  result = GGS_string ("[").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 23)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 23)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'makeArrayTypeLName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_makeArrayTypeLName (const GGS_lstring & constinArgument_inTypeName,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result ; // Returned variable
  result = GGS_lstring::init_21__21_ (function_makeArrayTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 29)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  result = GGS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 42)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayTypeDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                   GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                   GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                   GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                   GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                   GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayTypeDeclarationAST temp_0 = this ;
  const GGS_arrayTypeDeclarationAST temp_1 = this ;
  GGS_lstring var_key_2967 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 55)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2967, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 56)) ;
  }
  {
  const GGS_arrayTypeDeclarationAST temp_3 = this ;
  const GGS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 57)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas4", 57)) ;
  }
}

