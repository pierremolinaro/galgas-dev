#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 521)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_26106 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_26106) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26106, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_26540 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_26540)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_26540.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 537)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 537)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 538)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 538)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = object ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = object ;
  GALGAS_string var_targetVariableCppName_27011 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = object ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = object ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_27011, var_targetVariableCppName_27011, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 544)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = object ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_27011, var_targetVariableCppName_27011, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_27011  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 559))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 559)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = object ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 564)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 568)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_27011  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 589)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 590)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_29376 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_29376) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_29376, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = object ;
      GALGAS_string var_cppVarName_29724 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 598)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 598)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_29724  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 600))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 600)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 621)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 621)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 622)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 622)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = object ;
    const GALGAS_inputJokerActualParameterAST temp_4 = object ;
    GALGAS_string var_cppVarName_31074 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_31074  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST.mSlotID,
                                                        extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const GALGAS_outputActualParameterAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineArguments (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 704)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 706)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 705)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 706)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 709)) ;
    GALGAS_stringset var_exclusiveVariableSet_35178 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 710)) ;
    cEnumerator_formalParameterSignature enumerator_35257 (constinArgument_inRoutineSignature, kENUMERATION_UP) ;
    cEnumerator_actualParameterListAST enumerator_35299 (constinArgument_inActualParameterList, kENUMERATION_UP) ;
    while (enumerator_35257.hasCurrentObject () && enumerator_35299.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_35299.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_35257.current_mFormalSelector (HERE), enumerator_35257.current_mFormalArgumentType (HERE), enumerator_35257.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_35178, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 712)) ;
      enumerator_35257.gotoNextObject () ;
      enumerator_35299.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_36086 = constinArgument_inExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_36146 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_expressionType_36086.objectCompare (var_boolType_36146)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_expressionType_36086.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_expressionType_36086.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)).getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_bool var_isPublic_36513 ;
            GALGAS_unifiedTypeMap_2D_entry var_attributeType_36574 ;
            GALGAS_bool joker_36524 ; // Joker input parameter
            var_expressionType_36086.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)), var_isPublic_36513, joker_36524, var_attributeType_36574, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 742)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_isPublic_36513.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 749)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, var_attributeType_36574.objectCompare (var_boolType_36146)).boolEnum () ;
              if (kBoolTrue == test_5) {
                outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_boolType_36146, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)) ;
              }
            }
            if (kBoolFalse == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_36086.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)), fixItArray6  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_36086.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 765)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 764)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_37302 = (const cMapElement_getterMap *) var_expressionType_36086.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_37302) {
          macroValidSharedObject (objectArray_37302, cMapElement_getterMap) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, objectArray_37302->mProperty_mReturnedType.objectCompare (var_boolType_36146)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsStrictSup, objectArray_37302->mProperty_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 772)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 773)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (kIsNotEqual, objectArray_37302->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_37302->mProperty_mErrorMessage, fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_12) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType_36146, constinArgument_inErrorLocation, objectArray_37302->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 782)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 784)), objectArray_37302->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 777)) ;
            }
          }
        }
      }else{
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, var_expressionType_36086.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_36086.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)), fixItArray15  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_14) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, var_expressionType_36086.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 797)).getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 797))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_36086.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 795)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 795)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 795)), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 794)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 830)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 831)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 843)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 844)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_type_40809 ;
  GALGAS_string var_cppName_40830 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = object ;
  GALGAS_string joker_40832 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_40809, var_cppName_40830, joker_40832, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 846)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_40853 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_40853.objectCompare (var_type_40809)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)).add_operation (var_type_40809.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)).add_operation (var_expectedType_40853.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 851)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 849)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_40830.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 853)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 853)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 853))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 853)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 864)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 865)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = object ;
  GALGAS_string var_cppName_41895 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 867)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_42029 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 868)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = object ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_42029, var_cppName_41895, var_cppName_41895, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 869)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_42288 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_42288.objectCompare (var_type_42029)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)).add_operation (var_type_42029.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 873)).add_operation (var_expectedType_42288.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 872)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_41895, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 876)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 876)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 876)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 876))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 876)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 887)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 888)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = object ;
  GALGAS_string var_cppName_43335 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 890)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_43469 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 891)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = object ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_43469, var_cppName_43335, var_cppName_43335, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 892)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_43703 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_43703.objectCompare (var_type_43469)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)).add_operation (var_type_43469.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)).add_operation (var_expectedType_43703.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 897)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 897)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 897)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 895)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_43335, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29)) ;
    }
  }
  if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_1904 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalParameterListForGeneration enumerator_2016 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_1904.hasCurrentObject () && enumerator_2016.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, enumerator_1904.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2016.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2016.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (extensionGetter_formalArgumentMessage (enumerator_1904.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)) ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_2016.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_1904.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string var_s_2560 ;
          switch (enumerator_1904.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
            {
              var_s_2560 = GALGAS_string ("\?") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
            {
              var_s_2560 = GALGAS_string ("\?!") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
            {
              var_s_2560 = GALGAS_string ("!") ;
            }
            break ;
          }
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_1904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_1904.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 48)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          var_s_2560.plusAssign_operation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 48)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_2560) ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_2560, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, enumerator_2016.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 52)).objectCompare (enumerator_1904.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 52)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (enumerator_2016.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)).add_operation (enumerator_1904.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)) ;
        }
      }
      enumerator_1904.gotoNextObject () ;
      enumerator_2016.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 75)).objectCompare (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 75)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)).add_operation (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 81)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 81)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 82)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 83)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)) ;
    }
  }
  if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_4957 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5044 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_4957.hasCurrentObject () && enumerator_5044.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_5044.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_4957.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_4957.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_4957.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 88)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5150 = GALGAS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 88)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_5150) ;
          inCompiler->emitSemanticError (enumerator_5044.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5150, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, enumerator_5044.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 94)).objectCompare (enumerator_4957.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 94)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5044.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5044.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (enumerator_5044.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (enumerator_4957.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 97)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 98)) ;
        }
      }
      enumerator_4957.gotoNextObject () ;
      enumerator_5044.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
  cEnumerator_formalParameterListAST enumerator_7764 (constinArgument_inRoutineSignatureAST, kENUMERATION_UP) ;
  while (enumerator_7764.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_7806 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7764.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 138)) ;
    GALGAS_string var_formalArgumentCppName_7933 ;
    switch (enumerator_7764.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_7933 = GALGAS_string ("inArgument_").add_operation (enumerator_7764.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 142)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = enumerator_7764.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 144)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_7933 = GALGAS_string ("outArgument_").add_operation (enumerator_7764.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 149)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_7933 = GALGAS_string ("ioArgument_").add_operation (enumerator_7764.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_7764.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 154)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 156)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_7933 = GALGAS_string ("constinArgument_").add_operation (enumerator_7764.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 159)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_7764.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 161)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_7764.current_mFormalArgumentName (HERE), var_type_7806, var_formalArgumentCppName_7933, var_formalArgumentCppName_7933, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 163)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_7764.current_mFormalSelector (HERE), enumerator_7764.current_mFormalArgumentPassingMode (HERE), var_type_7806, enumerator_7764.current_mFormalArgumentName (HERE), var_formalArgumentCppName_7933  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 166)) ;
    enumerator_7764.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_10440 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 183)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 186)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_10697 (constinArgument_inNonMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_10697.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_10440, enumerator_10697.current_mPropertyName (HERE), enumerator_10697.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)).add_operation (enumerator_10697.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 191)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 188)) ;
        }
        enumerator_10697.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 198)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_11258 (constinArgument_inMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_11258.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_10440, enumerator_11258.current_mPropertyName (HERE), enumerator_11258.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 203)).add_operation (enumerator_11258.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 203)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 200)) ;
        }
        enumerator_11258.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inRoutineSignatureAST, var_variableMap_10440, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 209)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 216)) ;
  cEnumerator_semanticInstructionListAST enumerator_11903 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_11903.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_11903.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10440, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 218)) ;
    enumerator_11903.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10440, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 227)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_12761 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 241)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12761, var_nameForUsefulness_12761, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 242)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_12924 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 244)) ;
  const GALGAS_externFunctionDeclarationAST temp_1 = object ;
  cEnumerator_formalInputParameterListAST enumerator_13049 (temp_1.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13049.hasCurrentObject ()) {
    var_formalArgumentList_12924.addAssign_operation (enumerator_13049.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_13049.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 248)), enumerator_13049.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_13049.current_mFormalArgumentName (HERE), enumerator_13049.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 246)) ;
    enumerator_13049.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_2 = object ;
  const GALGAS_externFunctionDeclarationAST temp_3 = object ;
  const GALGAS_externFunctionDeclarationAST temp_4 = object ;
  const GALGAS_externFunctionDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_2.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_3.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)), temp_4.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12924, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mResultTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 260))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 253)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14250 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14250, var_nameForUsefulness_14250, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 275)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14413 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 277)) ;
  const GALGAS_externRoutineDeclarationAST temp_1 = object ;
  cEnumerator_formalParameterListAST enumerator_14548 (temp_1.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_14548.hasCurrentObject ()) {
    var_formalArgumentList_14413.addAssign_operation (enumerator_14548.current_mFormalSelector (HERE), enumerator_14548.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_14548.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 282)), enumerator_14548.current_mFormalArgumentName (HERE), enumerator_14548.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)) ;
    enumerator_14548.gotoNextObject () ;
  }
  const GALGAS_externRoutineDeclarationAST temp_2 = object ;
  const GALGAS_externRoutineDeclarationAST temp_3 = object ;
  const GALGAS_externRoutineDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 287)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_3.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 290)), temp_4.readProperty_mRoutineName ().readProperty_string (), var_formalArgumentList_14413  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 288))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 286)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  const GALGAS_procDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_15653 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 306)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15653, var_nameForUsefulness_15653, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 307)) ;
  }
  GALGAS_analysisContext var_analysisContext_15830 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 313)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 309)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_16348 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_16376 ;
  {
  const GALGAS_procDeclarationAST temp_1 = object ;
  const GALGAS_procDeclarationAST temp_2 = object ;
  const GALGAS_procDeclarationAST temp_3 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_15653, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_15830, temp_1.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 322)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 323)), temp_2.readProperty_mRoutineInstructionList (), temp_3.readProperty_mEndOfRoutineInstructionList (), var_instructionList_16348, var_formalArgumentList_16376, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)) ;
  }
  const GALGAS_procDeclarationAST temp_4 = object ;
  const GALGAS_procDeclarationAST temp_5 = object ;
  const GALGAS_procDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (temp_4.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 331)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_5.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 334)), temp_6.readProperty_mRoutineName ().readProperty_string (), var_formalArgumentList_16376, GALGAS_bool (false), var_instructionList_16348  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 332))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 330)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                         extensionMethod_procDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procDeclarationAST_semanticAnalysis (defineExtensionMethod_procDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMap_2D_entry & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_17575 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 360)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 363)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_17820 (constinArgument_inTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_17820.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_17575, enumerator_17820.current_mPropertyName (HERE), enumerator_17820.current_mPropertyTypeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)).add_operation (enumerator_17820.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)) ;
        }
        enumerator_17820.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 374)) ;
  cEnumerator_formalInputParameterListAST enumerator_18306 (constinArgument_inFunctionSignature, kENUMERATION_UP) ;
  while (enumerator_18306.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterType_18355 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_18306.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 376)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_18306.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_cppName_18511 = GALGAS_string ("constinArgument_").add_operation (enumerator_18306.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 378)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18306.current_mFormalSelector (HERE), var_parameterType_18355, var_cppName_18511, enumerator_18306.current_mFormalArgumentName (HERE), enumerator_18306.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 379)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_18306.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_17575, enumerator_18306.current_mFormalArgumentName (HERE), var_parameterType_18355, var_cppName_18511, var_cppName_18511, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 386)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_17575, enumerator_18306.current_mFormalArgumentName (HERE), var_parameterType_18355, var_cppName_18511, var_cppName_18511, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 388)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_string var_cppName_19058 = GALGAS_string ("inArgument_").add_operation (enumerator_18306.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 391)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18306.current_mFormalSelector (HERE), var_parameterType_18355, var_cppName_19058, enumerator_18306.current_mFormalArgumentName (HERE), enumerator_18306.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_18306.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_17575, enumerator_18306.current_mFormalArgumentName (HERE), var_parameterType_18355, var_cppName_19058, var_cppName_19058, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 399)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_17575, enumerator_18306.current_mFormalArgumentName (HERE), var_parameterType_18355, var_cppName_19058, var_cppName_19058, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 401)) ;
        }
      }
    }
    enumerator_18306.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 406)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_17575, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 410)) ;
  cEnumerator_semanticInstructionListAST enumerator_20068 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_20068.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_20068.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_17575, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 412)) ;
    enumerator_20068.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_17575, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 421)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_20908 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 435)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20908, var_nameForUsefulness_20908, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 436)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = object ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_20908  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 438)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_21175 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 445)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 441)) ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_21697 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_21717 ;
  GALGAS_string var_resultVariableCppName_21748 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21794 ;
  {
  const GALGAS_functionDeclarationAST temp_3 = object ;
  const GALGAS_functionDeclarationAST temp_4 = object ;
  const GALGAS_functionDeclarationAST temp_5 = object ;
  const GALGAS_functionDeclarationAST temp_6 = object ;
  const GALGAS_functionDeclarationAST temp_7 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_20908, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21175, temp_3.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 454)), GALGAS_string::makeEmptyString (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_21697, var_returnType_21717, var_resultVariableCppName_21748, var_semanticInstructionListForGeneration_21794, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 449)) ;
  }
  const GALGAS_functionDeclarationAST temp_8 = object ;
  const GALGAS_functionDeclarationAST temp_9 = object ;
  const GALGAS_functionDeclarationAST temp_10 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 467)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 470)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_21697, var_returnType_21717, var_resultVariableCppName_21748, var_semanticInstructionListForGeneration_21794  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 468))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 466)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_22734 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 490)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22734, var_nameForUsefulness_22734, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 491)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = object ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_22734  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 493)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_23001 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 500)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)) ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_23523 ;
  GALGAS_string var_resultVariableCppName_23554 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_23600 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_3 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_4 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = object ;
  GALGAS_formalInputParameterListForGeneration joker_23502 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefulness_22734, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23001, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 508)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 509)), GALGAS_string::makeEmptyString (), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_23502, var_returnType_23523, var_resultVariableCppName_23554, var_semanticInstructionListForGeneration_23600, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 504)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_7 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_9 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 522)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_23523, var_resultVariableCppName_23554, var_semanticInstructionListForGeneration_23600  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 523))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 521)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  GALGAS_lstring var_filewrapperNameForUsefulness_24783 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 547)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_24783, var_filewrapperNameForUsefulness_24783, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25102 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25152 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = object ;
  GALGAS_lstring joker_25054 ; // Joker input parameter
  GALGAS_lstringlist joker_25061 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25158_2 ; // Joker input parameter
  GALGAS_bool joker_25158_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_25054, joker_25061, var_wrapperFileMap_25102, var_wrapperDirectoryMap_25152, joker_25158_2, joker_25158_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 550)) ;
  GALGAS_string var_absoluteSourcePath_25222 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 560)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = object ;
      var_absoluteSourcePath_25222 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = object ;
    const GALGAS_filewrapperDeclarationAST temp_6 = object ;
    var_absoluteSourcePath_25222 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 563)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_25222.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 565)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 565)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25222, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_25756 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 569)) ;
    const GALGAS_filewrapperDeclarationAST temp_10 = object ;
    cEnumerator_filewrapperTemplateListAST enumerator_25862 (temp_10.readProperty_mFilewrapperTemplateList (), kENUMERATION_UP) ;
    while (enumerator_25862.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_11 = object ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_25946 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_25862.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_25946, var_filewrapperTemplateNameForUsefulness_25946, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_25946, var_filewrapperNameForUsefulness_24783 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsEqual, enumerator_25862.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 577)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_25862.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25222, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 578)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_26563 = var_absoluteSourcePath_25222.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 581)).add_operation (enumerator_25862.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 581)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_26730 ;
      var_resultingInstructionList_26730.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_26563, enumerator_25862.current_mFilewrapperTemplatePath (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 584)), var_resultingInstructionList_26730  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
      GALGAS_templateVariableMap var_templateVariableMap_26903 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 586)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_26998 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27084 (enumerator_25862.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
      while (enumerator_27084.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_type_27150 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_27084.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 589)) ;
        GALGAS_string var_cppVarName_27269 = GALGAS_string ("in_").add_operation (enumerator_27084.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 590)) ;
        {
        var_templateVariableMap_26903.setter_insertKey (enumerator_27084.current_mFormalArgumentName (HERE), var_type_27150, var_cppVarName_27269, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
        }
        var_filewrapperTemplateFormalInputParameters_26998.addAssign_operation (enumerator_27084.current_mFormalTemplateSelector (HERE), var_type_27150, var_cppVarName_27269, enumerator_27084.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
        enumerator_27084.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_27619 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_27696 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_26903  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 596)) ;
      {
      routine_templateInstructionListAnalysis (var_filewrapperNameForUsefulness_24783, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_27696, var_resultingInstructionList_26730, var_templateInstructionListForGeneration_27619, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 600)) ;
      }
      var_filewrapperTemplateListForGeneration_25756.addAssign_operation (enumerator_25862.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_26998, var_templateInstructionListForGeneration_27619  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)) ;
      enumerator_25862.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_14 = object ;
    const GALGAS_filewrapperDeclarationAST temp_15 = object ;
    const GALGAS_filewrapperDeclarationAST temp_16 = object ;
    const GALGAS_filewrapperDeclarationAST temp_17 = object ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 615)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 618)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_25102, var_wrapperDirectoryMap_25152, var_filewrapperTemplateListForGeneration_25756  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 616))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_29277 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_29277, var_nameForUsefulness_29277, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 640)) ;
  }
  GALGAS_terminalMap var_terminalMap_29603 ;
  GALGAS_indexingListAST var_indexingListAST_29645 ;
  GALGAS_lstring var_indexingDirectory_29681 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), var_terminalMap_29603, var_indexingListAST_29645, var_indexingDirectory_29681, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 642)) ;
  GALGAS_stringset var_indexNameSet_29777 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 649)) ;
  cEnumerator_indexingListAST enumerator_29802 (var_indexingListAST_29645, kENUMERATION_UP) ;
  while (enumerator_29802.hasCurrentObject ()) {
    var_indexNameSet_29777.addAssign_operation (enumerator_29802.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)) ;
    enumerator_29802.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_29894 = var_indexingDirectory_29681.readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 653)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 655)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
      GALGAS_string var_lexiqueName_30058 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_30516 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = object ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = object ;
      routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefulness_29277, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_30058, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_29603, var_indexNameSet_29777, var_hasIndexing_29894, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_30516, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 657)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_30516  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 689)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
      inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  GALGAS_lstring var_grammarNameForUsefulness_31300 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 693)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_31300, var_grammarNameForUsefulness_31300, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_31612 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_31696 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 697)) ;
  GALGAS_lstring var_lexiqueComponentName_31736 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 698)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_31864 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 699)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_31918 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
  GALGAS_uint var_addedNonTerminalCount_31957 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_31988 (temp_3.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_31988.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_32050 = function_syntaxNameForUsefulEntitiesGraph (enumerator_31988.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31300, var_syntaxNameForUsefulness_32050 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_32236 = var_addedNonTerminalCount_31957 ;
    GALGAS_lstring var_lexiqueName_32391 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32460 ;
    GALGAS_syntaxRuleListAST var_ruleList_32499 ;
    GALGAS_bool var_hasTranslateFeature_32536 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_31988.current_mValue (HERE), var_lexiqueName_32391, var_nonterminalDeclarationList_32460, var_ruleList_32499, var_hasTranslateFeature_32536, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_32575 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_32391, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31300, var_lexiqueNameForUsefulness_32575 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_galgas_33_GrammarComponentAST temp_5 = object ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_32536.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 716)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_galgas_33_GrammarComponentAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_31988.current_mValue (HERE).readProperty_location (), GALGAS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_9 = object ;
        test_8 = var_hasTranslateFeature_32536.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 718)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_galgas_33_GrammarComponentAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("as '").add_operation (enumerator_31988.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
        }
      }
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_31736.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lexiqueComponentName_31736 = var_lexiqueName_32391 ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, var_lexiqueName_32391.readProperty_string ().objectCompare (var_lexiqueComponentName_31736.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_31988.current_mValue (HERE).readProperty_location (), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_32391.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 726)).add_operation (var_lexiqueComponentName_31736.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 726)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 727)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_31696, var_nonterminalDeclarationList_32460, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_31696, var_ruleList_32499, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_31696, enumerator_31988.current_mValue (HERE), var_ruleList_32499, var_actuallyUsedTerminalSymbolMap_31612, var_syntaxComponentListForGrammarAnalysis_31864, var_addedNonTerminalCount_31957, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 740)) ;
    }
    GALGAS_uint var_i_34197 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_31957.isValid ()) {
      uint32_t variant_34210 = var_addedNonTerminalCount_31957.uintValue () ;
      bool loop_34210 = true ;
      while (loop_34210) {
        loop_34210 = GALGAS_bool (kIsStrictInf, var_i_34197.objectCompare (var_addedNonTerminalCount_31957.substract_operation (var_addedNonTerminalCountRef_32236, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)))).isValid () ;
        if (loop_34210) {
          loop_34210 = GALGAS_bool (kIsStrictInf, var_i_34197.objectCompare (var_addedNonTerminalCount_31957.substract_operation (var_addedNonTerminalCountRef_32236, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)))).boolValue () ;
        }
        if (loop_34210 && (0 == variant_34210)) {
          loop_34210 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 749)) ;
        }
        if (loop_34210) {
          variant_34210 -- ;
          var_nonTerminalToAddList_31918.addAssign_operation (enumerator_31988.current_mValue (HERE).readProperty_string (), var_i_34197  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 750)) ;
          var_i_34197.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
        }
      }
    }
    enumerator_31988.gotoNextObject () ;
  }
  GALGAS_lstring var_inIndexingDirectory_34691 ;
  GALGAS_terminalMap joker_34579 ; // Joker input parameter
  GALGAS_indexingListAST joker_34615 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (var_lexiqueComponentName_31736, joker_34579, joker_34615, var_inIndexingDirectory_34691, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
  GALGAS_bool var_hasIndexing_34719 = var_inIndexingDirectory_34691.readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 761)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 761)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_galgas_33_GrammarComponentAST temp_16 = object ;
    test_15 = var_hasIndexing_34719.operator_and (temp_16.readProperty_mHasIndexing ().readProperty_bool ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 762)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_galgas_33_GrammarComponentAST temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_31736.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)) ;
    }
  }
  if (kBoolFalse == test_15) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      const GALGAS_galgas_33_GrammarComponentAST temp_20 = object ;
      test_19 = var_hasIndexing_34719.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 764)).operator_and (temp_20.readProperty_mHasIndexing ().readProperty_bool () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 764)).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_galgas_33_GrammarComponentAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mHasIndexing ().readProperty_location (), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_31736.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)) ;
      }
    }
  }
  GALGAS_uint var_startSymbolIndex_35326 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35398 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_23 = object ;
  var_nonTerminalMapForGrammarAnalysis_31696.method_searchKey (temp_23.readProperty_mStartSymbolName (), var_startSymbolIndex_35326, var_startSymbolAltMap_35398, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 769)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_24 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_25 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_26 = object ;
  routine_checkLabelMap (temp_24.readProperty_mStartSymbolName ().readProperty_location (), temp_25.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_31696.getter_locationForKey (temp_26.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 778)), var_startSymbolAltMap_35398, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 775)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_35797 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_27 = object ;
  cEnumerator_lstringlist enumerator_35816 (temp_27.readProperty_mUnusedNonterminalList (), kENUMERATION_UP) ;
  while (enumerator_35816.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_35935 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_35937 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_31696.method_searchKey (enumerator_35816.current_mValue (HERE), var_nonterminalIndex_35935, joker_35937, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 784)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_35797.setter_insertKey (enumerator_35816.current_mValue (HERE), var_nonterminalIndex_35935, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)) ;
    }
    enumerator_35816.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_36221 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36288 (var_nonTerminalMapForGrammarAnalysis_31696, kENUMERATION_UP) ;
  while (enumerator_36288.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_36221.addAssign_operation (enumerator_36288.current_lkey (HERE), enumerator_36288.current_mNonTerminalIndex (HERE), enumerator_36288.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)) ;
    enumerator_36288.gotoNextObject () ;
  }
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_29 = object ;
      const GALGAS_galgas_33_GrammarComponentAST temp_30 = object ;
      routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, temp_29.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_31696, var_syntaxComponentListForGrammarAnalysis_31864, temp_30.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 794)) ;
      }
    }
  }
  GALGAS_stringset var_implementationFileHeader_37146 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_37205 (var_nonTerminalMapForGrammarAnalysis_31696, kENUMERATION_UP) ;
  while (enumerator_37205.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_37241 (enumerator_37205.current (HERE).readProperty_mNonterminalSymbolParametersMap (), kENUMERATION_UP) ;
    while (enumerator_37241.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37382 (enumerator_37241.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_37382.hasCurrentObject ()) {
        switch (enumerator_37382.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_entry var_t_37533 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_37382.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
            extensionMethod_addHeaderFileName (var_t_37533, var_implementationFileHeader_37146, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 812)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37382.gotoNextObject () ;
      }
      enumerator_37241.gotoNextObject () ;
    }
    enumerator_37205.gotoNextObject () ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_implementationFileHeader_37146 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 819)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_32 = object ;
  GALGAS_string var_HTMLFilePath_37966 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
  GALGAS_string var_grammarCppFile_38524 ;
  GALGAS_string var_grammarHTMLHelperContents_38567 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = object ;
  GALGAS_string temp_36 ;
  const enumGalgasBool test_37 = temp_35.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_37) {
    temp_36 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 835)) ;
  }else if (kBoolFalse == test_37) {
    temp_36 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 824)), temp_33.readProperty_mGrammarComponentName (), temp_34.readProperty_mGrammarClass (), var_startSymbolIndex_35326, var_lexiqueComponentName_31736.readProperty_string (), var_actuallyUsedTerminalSymbolMap_31612, var_syntaxComponentListForGrammarAnalysis_31864, var_unusedNonTerminalSymbolsForGrammar_35797, var_HTMLFilePath_37966, var_nonTerminalSymbolSortedListForGrammarAnalysis_36221, var_hasIndexing_34719, temp_36, var_grammarCppFile_38524, var_grammarHTMLHelperContents_38567, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 823)) ;
  }
  enumGalgasBool test_38 = kBoolTrue ;
  if (kBoolTrue == test_38) {
    test_38 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_38) {
      var_HTMLFilePath_37966.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 841)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 841)) ;
      GALGAS_bool joker_38880 ; // Joker input parameter
      var_grammarHTMLHelperContents_38567.method_writeToFileWhenDifferentContents (var_HTMLFilePath_37966, joker_38880, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 842)) ;
    }
  }
  if (kBoolFalse == test_38) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_37966, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 844)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_39 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_40 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_41 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_42 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_43 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_39.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)), temp_40.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_31736.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_31696, var_nonTerminalToAddList_31918, var_hasIndexing_34719, temp_41.readProperty_mSyntaxComponents (), temp_42.readProperty_mStartSymbolName ().readProperty_string (), temp_43.readProperty_mHasTranslateFeature (), var_grammarCppFile_38524  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_39974 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_39974, var_nameForUsefulness_39974, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_40224 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 877)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_40359 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_40359, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  cEnumerator_externRoutineListAST enumerator_40540 (temp_1.readProperty_mExternRoutineList (), kENUMERATION_UP) ;
  while (enumerator_40540.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_40612 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 883)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_40710 (enumerator_40540.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_40710.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_40832 ;
      var_lexicalTypeMap_40224.method_searchKey (enumerator_40710.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_40832, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)) ;
      var_lexicalRoutineFormalArgumentList_40612.addAssign_operation (enumerator_40710.current_mPassingMode (HERE), var_lexicalFormalArgumentType_40832, enumerator_40710.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 886)) ;
      enumerator_40710.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_40359.setter_insertKey (enumerator_40540.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_40612, enumerator_40540.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)) ;
    }
    enumerator_40540.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_41180 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_41180, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)) ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  cEnumerator_externFunctionListAST enumerator_41366 (temp_2.readProperty_mExternFunctionList (), kENUMERATION_UP) ;
  while (enumerator_41366.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_41475 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 895)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_41526 (enumerator_41366.current_mLexicalFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_41526.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_41649 ;
      var_lexicalTypeMap_40224.method_searchKey (enumerator_41526.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_41649, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)) ;
      var_lexicalFunctionFormalArgumentList_41475.addAssign_operation (var_lexicalFormalArgumentType_41649, enumerator_41526.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
      enumerator_41526.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_41831 ;
    var_lexicalTypeMap_40224.method_searchKey (enumerator_41366.current_mReturnedTypeName (HERE), var_returnedArgumentType_41831, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 900)) ;
    {
    var_lexicalFunctionMap_41180.setter_insertKey (enumerator_41366.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_41475, var_returnedArgumentType_41831, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
    }
    enumerator_41366.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeTestFunctions_42115 ;
  {
  const GALGAS_lexiqueComponentAST temp_3 = object ;
  routine_lexicalUnicodeTestFunctionAnalysis (temp_3.readProperty_mLexicalFunctionListAST (), var_unicodeTestFunctions_42115, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = object ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_42210 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_4.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_40359, var_lexicalFunctionMap_41180, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 910)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 911)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 912)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 913)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 914)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 915)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 916)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 917)), var_unicodeTestFunctions_42115  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 906)) ;
  GALGAS_uint var_styleIndex_42605 = GALGAS_uint ((uint32_t) 1U) ;
  const GALGAS_lexiqueComponentAST temp_5 = object ;
  cEnumerator_lexicalStyleListAST enumerator_42631 (temp_5.readProperty_mLexicalStyleList (), kENUMERATION_UP) ;
  while (enumerator_42631.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42210.mProperty_mStyleMap.setter_insertKey (enumerator_42631.current_mName (HERE), enumerator_42631.current_mComment (HERE), var_styleIndex_42605, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 923)) ;
    }
    var_styleIndex_42605.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 924)) ;
    enumerator_42631.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_6 = object ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_40224, temp_6.readProperty_mLexicalAttributeList (), var_lexiqueAnalysisContext_42210.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 927)) ;
  }
  const GALGAS_lexiqueComponentAST temp_7 = object ;
  cEnumerator_terminalDeclarationListAST enumerator_43099 (temp_7.readProperty_mTerminalDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_43099.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_43169 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, enumerator_43099.current_mStyle (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 935)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_lstring joker_43272 ; // Joker input parameter
        var_lexiqueAnalysisContext_42210.readProperty_mStyleMap ().method_searchKey (enumerator_43099.current_mStyle (HERE), joker_43272, var_terminalStyleIndex_43169, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 936)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_43327 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 938)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_43394 (enumerator_43099.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_43394.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_43523 ;
      var_lexiqueAnalysisContext_42210.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_43394.current_mAttributeName (HERE), var_attributeLexicalType_43523, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 940)) ;
      var_argumentTypeList_43327.addAssign_operation (enumerator_43394.current_mFormalSelector (HERE), enumerator_43394.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_43523  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 941)) ;
      enumerator_43394.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42210.mProperty_mTerminalMap.setter_insertKey (enumerator_43099.current_mName (HERE), var_argumentTypeList_43327, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 943)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_43727 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_43759 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_43782 (enumerator_43099.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_43782.hasCurrentObject ()) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_43782.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_atomicSelection_43759.boolEnum () ;
            if (kBoolTrue == test_10) {
              var_atomicSelection_43759 = GALGAS_bool (false) ;
            }
          }
          if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_43782.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 951)) ;
          }
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_43782.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_43782.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 954)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_isEndOfTemplateMark_43727.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_43782.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray15  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 956)) ;
            }
          }
          if (kBoolFalse == test_14) {
            var_isEndOfTemplateMark_43727 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_43782.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42210.mProperty_mTerminalList.addAssign_operation (enumerator_43099.current_mName (HERE), var_argumentTypeList_43327, enumerator_43099.current_mSyntaxErrorMessage (HERE).readProperty_string (), var_isEndOfTemplateMark_43727, var_atomicSelection_43759, var_terminalStyleIndex_43169  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 961)) ;
    enumerator_43099.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = object ;
  cEnumerator_lexicalListDeclarationListAST enumerator_44613 (temp_16.readProperty_mLexicalListDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_44613.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_44686 = GALGAS_uint ((uint32_t) 0U) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsStrictSup, enumerator_44613.current_mStyle (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_lstring joker_44789 ; // Joker input parameter
        var_lexiqueAnalysisContext_42210.readProperty_mStyleMap ().method_searchKey (enumerator_44613.current_mStyle (HERE), joker_44789, var_terminalStyleIndex_44686, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 972)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_44844 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 974)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_44911 (enumerator_44613.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_44911.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_45040 ;
      var_lexiqueAnalysisContext_42210.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_44911.current_mAttributeName (HERE), var_attributeLexicalType_45040, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)) ;
      var_argumentTypeList_44844.addAssign_operation (enumerator_44911.current_mFormalSelector (HERE), enumerator_44911.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_45040  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)) ;
      enumerator_44911.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_45194 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 979)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_45223 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 980)) ;
    cEnumerator_lexicalListEntryListAST enumerator_45302 (enumerator_44613.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_45302.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_45349 = enumerator_44613.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_45302.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 982)) ;
      GALGAS_bool var_isEndOfTemplateMark_45474 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_45508 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_45533 (enumerator_45302.current_mAttributeList (HERE), kENUMERATION_UP) ;
      while (enumerator_45533.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_45533.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_atomicSelection_45508.boolEnum () ;
              if (kBoolTrue == test_19) {
                var_atomicSelection_45508 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_45533.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray20  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 990)) ;
            }
          }
        }
        if (kBoolFalse == test_18) {
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_45533.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (enumerator_45533.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)) ;
            }
          }
          if (kBoolFalse == test_21) {
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = var_isEndOfTemplateMark_45474.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_45533.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray24  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
              }
            }
            if (kBoolFalse == test_23) {
              var_isEndOfTemplateMark_45474 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_45533.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_42210.mProperty_mTerminalList.addAssign_operation (enumerator_45302.current_mTerminalSpelling (HERE), var_argumentTypeList_44844, var_syntaxErrorMessage_45349, var_isEndOfTemplateMark_45474, var_atomicSelection_45508, var_terminalStyleIndex_44686  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1000)) ;
      {
      var_lexiqueAnalysisContext_42210.mProperty_mTerminalMap.setter_insertKey (enumerator_45302.current_mTerminalSpelling (HERE), var_argumentTypeList_44844, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1007)) ;
      }
      {
      var_lexicalTokenListMap_45194.setter_insertKey (enumerator_45302.current_mEntrySpelling (HERE), enumerator_45302.current_mTerminalSpelling (HERE), enumerator_45302.current_mAttributeList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1008)) ;
      }
      var_tokenSortedlist_45223.addAssign_operation (enumerator_45302.current_mEntrySpelling (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1009)), enumerator_45302.current_mEntrySpelling (HERE).readProperty_string (), enumerator_45302.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1009)) ;
      var_lexiqueAnalysisContext_42210.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_45302.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
      enumerator_45302.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42210.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_44613.current_mName (HERE), var_lexicalTokenListMap_45194, var_tokenSortedlist_45223, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1012)) ;
    }
    enumerator_44613.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_25 = object ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_46928 (temp_25.readProperty_mLexicalMessageDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_46928.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42210.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_46928.current_mMessageName (HERE), enumerator_46928.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1016)) ;
    }
    enumerator_46928.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_26 = object ;
  cEnumerator_lexicalRuleListAST enumerator_47146 (temp_26.readProperty_mLexicalRuleList (), kENUMERATION_UP) ;
  while (enumerator_47146.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_47146.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_42210, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1020)) ;
    enumerator_47146.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_47337 (var_lexiqueAnalysisContext_42210.readProperty_mLexicalMessageMap (), kENUMERATION_UP) ;
  while (enumerator_47337.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_47337.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1024)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticWarning (enumerator_47337.current_lkey (HERE).readProperty_location (), GALGAS_string ("unused message"), fixItArray28  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1025)) ;
      }
    }
    enumerator_47337.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_29 = object ;
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_47571 (temp_29.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
  while (enumerator_47571.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42210.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_47571.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1030)) ;
    var_lexiqueAnalysisContext_42210.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_47571.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1031)) ;
    GALGAS_bool var_preservesStartDelimiter_47785 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_47808 (enumerator_47571.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_47808.hasCurrentObject ()) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = GALGAS_bool (kIsNotEqual, enumerator_47808.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (enumerator_47808.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'preserved' attribute is allowed here"), fixItArray31  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_preservesStartDelimiter_47785.boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_47808.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'preserved' attribute is already set"), fixItArray33  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1037)) ;
          }
        }
        if (kBoolFalse == test_32) {
          var_preservesStartDelimiter_47785 = GALGAS_bool (true) ;
        }
      }
      enumerator_47808.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42210.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_47571.current_mStartString (HERE), enumerator_47571.current_mEndString (HERE), var_preservesStartDelimiter_47785  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1042)) ;
    enumerator_47571.gotoNextObject () ;
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_lexiqueComponentAST temp_35 = object ;
    test_34 = temp_35.readProperty_mIndexingDirectory ().readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1045)).boolEnum () ;
    if (kBoolTrue == test_34) {
      const GALGAS_lexiqueComponentAST temp_36 = object ;
      cEnumerator_indexingListAST enumerator_48353 (temp_36.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
      while (enumerator_48353.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_48353.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray37  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1047)) ;
        enumerator_48353.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringset var_indexNameSet_48523 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1050)) ;
  const GALGAS_lexiqueComponentAST temp_38 = object ;
  cEnumerator_indexingListAST enumerator_48548 (temp_38.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
  while (enumerator_48548.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_indexNameSet_48523.getter_hasKey (enumerator_48548.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_48548.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_48548.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)), fixItArray40  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
      }
    }
    var_indexNameSet_48523.addAssign_operation (enumerator_48548.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1055)) ;
    enumerator_48548.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_41 = object ;
  cEnumerator_templateReplacementListAST enumerator_48865 (temp_41.readProperty_mTemplateReplacementList (), kENUMERATION_UP) ;
  while (enumerator_48865.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42210.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48865.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)) ;
    var_lexiqueAnalysisContext_42210.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48865.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1060)) ;
    enumerator_48865.gotoNextObject () ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1064)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      const GALGAS_lexiqueComponentAST temp_43 = object ;
      GALGAS_string var_lexiqueClassName_49231 = temp_43.readProperty_mLexiqueComponentName ().readProperty_string () ;
      const GALGAS_lexiqueComponentAST temp_44 = object ;
      GALGAS_string var_headerContents_49304 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_49231.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1068)), var_lexiqueAnalysisContext_42210, temp_44.readProperty_mTemplateDelimitorList () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067))) ;
      const GALGAS_lexiqueComponentAST temp_45 = object ;
      const GALGAS_lexiqueComponentAST temp_46 = object ;
      const GALGAS_lexiqueComponentAST temp_47 = object ;
      var_headerContents_49304.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_49231.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1073)), temp_45.readProperty_mLexicalListDeclarationList (), var_lexiqueAnalysisContext_42210, temp_46.readProperty_mIndexingListAST (), temp_47.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1072))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1072)) ;
      const GALGAS_lexiqueComponentAST temp_48 = object ;
      const GALGAS_lexiqueComponentAST temp_49 = object ;
      const GALGAS_lexiqueComponentAST temp_50 = object ;
      const GALGAS_lexiqueComponentAST temp_51 = object ;
      const GALGAS_lexiqueComponentAST temp_52 = object ;
      const GALGAS_lexiqueComponentAST temp_53 = object ;
      GALGAS_string var_cppContents_49786 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_49231.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1081)), var_lexiqueAnalysisContext_42210.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_42210.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_42210.readProperty_mTerminalList (), var_lexiqueAnalysisContext_42210.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_42210.readProperty_mUnicodeStringToGenerate (), temp_48.readProperty_mLexicalRuleList (), var_lexiqueAnalysisContext_42210, temp_49.readProperty_mIndexingDirectory ().readProperty_string (), temp_50.readProperty_mTemplateDelimitorList (), var_lexiqueClassName_49231, temp_51.readProperty_mTemplateReplacementList (), temp_52.readProperty_mLexicalStyleList (), temp_53.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080))) ;
      const GALGAS_lexiqueComponentAST temp_54 = object ;
      GALGAS_string var_cocoaHeader_50465 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_49231, var_lexiqueAnalysisContext_42210, temp_54.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1097))) ;
      var_cocoaHeader_50465.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_49231, var_lexiqueAnalysisContext_42210 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1102))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1102)) ;
      const GALGAS_lexiqueComponentAST temp_55 = object ;
      const GALGAS_lexiqueComponentAST temp_56 = object ;
      const GALGAS_lexiqueComponentAST temp_57 = object ;
      const GALGAS_lexiqueComponentAST temp_58 = object ;
      const GALGAS_lexiqueComponentAST temp_59 = object ;
      const GALGAS_lexiqueComponentAST temp_60 = object ;
      const GALGAS_lexiqueComponentAST temp_61 = object ;
      GALGAS_string var_cocoaImplementation_50821 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49231.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1108)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1108)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1108)), var_lexiqueClassName_49231, var_lexiqueAnalysisContext_42210.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_42210.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_42210.readProperty_mTerminalList (), var_lexiqueAnalysisContext_42210.readProperty_mUnicodeStringToGenerate (), temp_55.readProperty_mLexicalRuleList (), var_lexiqueAnalysisContext_42210, temp_56.readProperty_mTemplateReplacementList (), temp_57.readProperty_mIndexingDirectory ().readProperty_string (), temp_58.readProperty_mIndexingListAST (), temp_59.readProperty_mLexicalStyleList (), temp_60.readProperty_mTemplateDelimitorList (), temp_61.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107))) ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49231.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1128)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1128)), var_lexiqueClassName_49231, var_headerContents_49304, var_cppContents_49786, var_cocoaHeader_50465, var_cocoaImplementation_50821  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1126))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1124)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("stringset"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
//---
  return result_outPredefinedTypes ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_30_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_30 (in_INCLUSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_30.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_30.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_30_.increment () ;
      enumerator_30.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public: virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_550_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_550 (in_NONTERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_550.hasCurrentObject ()) {
      GALGAS_uint index_606_ (0) ;
      if (enumerator_550.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_606 (enumerator_550.current_mLabelMap (HERE), kENUMERATION_UP) ;
        while (enumerator_606.hasCurrentObject ()) {
          result << "  protected: virtual void nt_" ;
          result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_606.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_845_IDX (0) ;
          if (enumerator_606.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_845 (enumerator_606.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_845.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_845.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_845_IDX.increment () ;
              enumerator_845.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_3) {
            result << "class C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_3) {
          }
          result << "class C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) = 0 ;\n"
            "\n" ;
          index_606_.increment () ;
          enumerator_606.gotoNextObject () ;
        }
      }
      result << "  protected: virtual void nt_" ;
      result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "class C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_4) {
      }
      result << "class C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) = 0 ;\n"
        "\n" ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  protected: virtual void nt_" ;
        result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_550_.increment () ;
      enumerator_550.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2316_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2316 (in_RULE_5F_DECLARATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2316.hasCurrentObject ()) {
      GALGAS_uint index_2454_ (0) ;
      if (enumerator_2316.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2454 (enumerator_2316.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
        while (enumerator_2454.hasCurrentObject ()) {
          result << "  protected: void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2454.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2764_IDX (0) ;
          if (enumerator_2454.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2764 (enumerator_2454.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_2764.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2764.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2764.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2764.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2764.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2764_IDX.increment () ;
              enumerator_2764.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_9) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) ;\n"
            "\n" ;
          index_2454_.increment () ;
          enumerator_2454.gotoNextObject () ;
        }
      }
      result << "  protected: void rule_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_10) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) ;\n"
        "\n" ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "  protected: void rule_" ;
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2316_.increment () ;
      enumerator_2316.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_4263_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4263 (in_SELECT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4263.hasCurrentObject ()) {
      result << "  protected: virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4263.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_4263_.increment () ;
      enumerator_4263.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_58299 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (NULL != objectArray_58299) {
      macroValidSharedObject (objectArray_58299, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_58403 = objectArray_58299->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1256)) ;
    GALGAS_stringset var_reDeclarationLabelSet_58465 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1257)) ;
    GALGAS_stringset var_missingLabelSet_58533 = var_firstDeclarationLabelSet_58403.substract_operation (var_reDeclarationLabelSet_58465, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1258)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet_58533.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1259)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_58644 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_58664 (var_missingLabelSet_58533, kENUMERATION_UP) ;
        while (enumerator_58664.hasCurrentObject ()) {
          var_s_58644.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_58664.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1262)) ;
          enumerator_58664.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)).add_operation (var_s_58644, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1265)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_58897 = var_reDeclarationLabelSet_58465.substract_operation (var_firstDeclarationLabelSet_58403, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1267)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet_58897.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1268)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_58996 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_59016 (var_newLabelSet_58897, kENUMERATION_UP) ;
        while (enumerator_59016.hasCurrentObject ()) {
          var_s_58996.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_59016.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1271)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1271)) ;
          enumerator_59016.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)).add_operation (var_s_58996, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet_58533.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1276)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet_58897.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1276)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1276)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_59307 (objectArray_58299->mProperty_mLabelMap, kENUMERATION_UP) ;
        cEnumerator_nonterminalLabelMap enumerator_59355 (constinArgument_inNonterminalLabelMap, kENUMERATION_UP) ;
        while (enumerator_59307.hasCurrentObject () && enumerator_59355.hasCurrentObject ()) {
          GALGAS_formalParameterSignature var_newSignature_59435 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1278)) ;
          cEnumerator_formalParameterSignature enumerator_59536 (enumerator_59355.current_mSignature (HERE), kENUMERATION_UP) ;
          while (enumerator_59536.hasCurrentObject ()) {
            var_newSignature_59435.addAssign_operation (enumerator_59536.current_mFormalSelector (HERE), enumerator_59536.current_mFormalArgumentType (HERE), enumerator_59536.current_mFormalArgumentPassingMode (HERE), enumerator_59536.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1280)) ;
            enumerator_59536.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures (enumerator_59307.current (HERE).readProperty_mSignatureForGeneration (), enumerator_59307.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_59435, enumerator_59355.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1282)) ;
          }
          enumerator_59307.gotoNextObject () ;
          enumerator_59355.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1291)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1301)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_60428 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_60428.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_60492 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1304)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_60581 (enumerator_60428.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_60581.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_60629 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1306)) ;
      GALGAS_formalParameterSignature var_signature_60688 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1307)) ;
      cEnumerator_formalParameterListAST enumerator_60819 (enumerator_60581.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_60819.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_t_60860 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_60819.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)) ;
        var_signatureForGeneration_60629.addAssign_operation (enumerator_60819.current_mFormalSelector (HERE), enumerator_60819.current_mFormalArgumentPassingMode (HERE), var_t_60860, enumerator_60819.current_mFormalArgumentName (HERE), enumerator_60819.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1310)) ;
        var_signature_60688.addAssign_operation (enumerator_60819.current_mFormalSelector (HERE), var_t_60860, enumerator_60819.current_mFormalArgumentPassingMode (HERE), enumerator_60819.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1311)) ;
        enumerator_60819.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_60492.setter_insertKey (enumerator_60581.current_mLabelName (HERE), var_signatureForGeneration_60629, var_signature_60688, enumerator_60581.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1313)) ;
      }
      enumerator_60581.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_60428.current_mNonterminalName (HERE), var_nonterminalLabelMap_60492, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)) ;
    }
    enumerator_60428.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
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
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1355)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_64694 ;
  GALGAS_string var_cppName_64715 ;
  {
  const GALGAS_inputParameterVariable temp_0 = object ;
  GALGAS_string joker_64717 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_64694, var_cppName_64715, joker_64717, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1391)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_64760 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_64760 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_64760.objectCompare (var_type_64694)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = object ;
      const GALGAS_inputParameterVariable temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (var_type_64694.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (var_expectedType_64760.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1406)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1406)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1406)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_64715, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1408)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_66378 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_66378 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_type_67240 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_66378.objectCompare (var_type_67240)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = object ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)).add_operation (var_type_67240.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)).add_operation (var_expectedType_66378.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1440)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1440)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1440)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = object ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = object ;
  GALGAS_string var_cppName_67644 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1444)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1444)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = object ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GALGAS_bool (true), var_expectedType_66378, var_cppName_67644, var_cppName_67644, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1445)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_66378.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1453)), var_cppName_67644, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_68509 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_68509 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_type_69371 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1480)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_68509.objectCompare (var_type_69371)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = object ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).add_operation (var_type_69371.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1483)).add_operation (var_expectedType_68509.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = object ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = object ;
  GALGAS_string var_cppName_69775 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = object ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_68509, var_cppName_69775, var_cppName_69775, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_68509.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1492)), var_cppName_69775, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1518)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1519)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1529)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1530)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_type_71866 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = object ;
  GALGAS_string joker_71868 ; // Joker input parameter
  GALGAS_string joker_71871 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_71866, joker_71868, joker_71871, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1532)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_71892 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_71892.objectCompare (var_type_71866)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).add_operation (var_type_71866.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)).add_operation (var_expectedType_71892.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1547)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1548)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = object ;
  GALGAS_string var_cppName_72728 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1550)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1550)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_72862 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1551)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = object ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_72862, var_cppName_72728, var_cppName_72728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_73143 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_73143.objectCompare (var_type_72862)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)).add_operation (var_type_72862.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)).add_operation (var_expectedType_73143.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1573)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1574)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = object ;
  GALGAS_string var_cppName_73972 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1576)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1576)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1576)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1576)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1576)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1576)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_74106 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = object ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_74106, var_cppName_73972, var_cppName_73972, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_expectedType_74339 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_74339.objectCompare (var_type_74106)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = object ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)).add_operation (var_type_74106.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)).add_operation (var_expectedType_74339.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1603)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = object ;
  GALGAS_string var_cppName_76447 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1624)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1624)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_76447.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                         const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = object ;
  GALGAS_string var_cppName_77062 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1635)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1635)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1635)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1635)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1635)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1635)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_77062, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = object ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = object ;
  GALGAS_string var_cppName_77682 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1646)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1646)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1646)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1646)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1646)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1646)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_77682, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1667)) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1669)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_78798 (constinArgument_inSyntaxInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_78798.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_78798.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1672)) ;
    enumerator_78798.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                          const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                          const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                          const GALGAS_string constinArgument_inLexiqueName,
                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                          const GALGAS_string constinArgument_inComponentName,
                                          const GALGAS_location constinArgument_inEndOfInstructionList,
                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                          GALGAS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                          GALGAS_formalParameterSignature & outArgument_outSignature,
                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_80400 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 1715)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inFormalArguments, var_variableMap_80400, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1716)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1723)) ;
  cEnumerator_formalParameterListForGeneration enumerator_80724 (outArgument_outSignatureForGeneration, kENUMERATION_UP) ;
  while (enumerator_80724.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_80724.current_mFormalSelector (HERE), enumerator_80724.current_mFormalArgumentType (HERE), enumerator_80724.current_mFormalArgumentPassingMode (HERE), enumerator_80724.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1725)) ;
    enumerator_80724.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1728)) ;
  cEnumerator_syntaxInstructionList enumerator_81066 (constinArgument_inSyntaxInstructionList, kENUMERATION_UP) ;
  while (enumerator_81066.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_81066.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_80400, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
    enumerator_81066.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_80400, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1747)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inSyntaxComponentName,
                                                const GALGAS_string constinArgument_inLexiqueName,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                const GALGAS_stringset constinArgument_inIndexNameSet,
                                                const GALGAS_bool constinArgument_inHasIndexing,
                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap_82680 ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap_82680, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1772)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_82773 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_82773.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_82840 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1779)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_82909 (enumerator_82773.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_82909.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_82994 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1781)) ;
      GALGAS_formalParameterSignature var_signature_83045 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
      cEnumerator_formalParameterListAST enumerator_83150 (enumerator_82909.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_83150.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_entry var_type_83191 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_83150.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1784)) ;
        var_signatureForGeneration_82994.addAssign_operation (enumerator_83150.current_mFormalSelector (HERE), enumerator_83150.current_mFormalArgumentPassingMode (HERE), var_type_83191, enumerator_83150.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_83150.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1790))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1785)) ;
        var_signature_83045.addAssign_operation (enumerator_83150.current_mFormalSelector (HERE), var_type_83191, enumerator_83150.current_mFormalArgumentPassingMode (HERE), enumerator_83150.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1791)) ;
        enumerator_83150.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_82840.setter_insertKey (enumerator_82909.current_mLabelName (HERE), var_signatureForGeneration_82994, var_signature_83045, enumerator_82909.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1793)) ;
      }
      enumerator_82909.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_82773.current_mNonterminalName (HERE), var_nonterminalLabelMap_82840, var_nonterminalMap_82680, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1795)) ;
    }
    enumerator_82773.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_83857 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 1802)), GALGAS_string::makeEmptyString (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1798)) ;
  GALGAS_uint var_selectMethodCount_84099 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_84150 = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1808)) ;
  GALGAS_uint var_newRuleIndex_84180 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_syntaxRuleListAST enumerator_84219 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_84219.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_84309 = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1812)) ;
    GALGAS_uint var_localSelectMethodCount_84351 = var_selectMethodCount_84099 ;
    GALGAS_nonterminalLabelMap joker_84421 ; // Joker input parameter
    var_nonterminalMap_82680.method_searchKey (enumerator_84219.current_mNonterminalName (HERE), joker_84421, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1814)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_84528 (enumerator_84219.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_84528.hasCurrentObject ()) {
      var_localSelectMethodCount_84351 = var_selectMethodCount_84099 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_85070 ;
      GALGAS_formalParameterSignature var_signature_85093 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_85135 ;
      {
      routine_semanticAnalysisOfRuleLabel (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_84528.current_mFormalArguments (HERE), enumerator_84528.current_mSyntaxInstructionList (HERE), var_analysisContext_83857, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1825)), var_nonterminalMap_82680, constinArgument_inSyntaxComponentName, enumerator_84528.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_84351, var_signatureForGeneration_85070, var_signature_85093, var_instructionListForGeneration_85135, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1817)) ;
      }
      var_ruleLabelImplementationList_84309.addAssign_operation (enumerator_84528.current_mLabelName (HERE), var_signatureForGeneration_85070, var_signature_85093, enumerator_84528.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_85135  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1835)) ;
      enumerator_84528.gotoNextObject () ;
    }
    var_selectMethodCount_84099 = var_localSelectMethodCount_84351 ;
    GALGAS_nonterminalLabelMap joker_85426 ; // Joker input parameter
    var_nonterminalMap_82680.method_searchKey (enumerator_84219.current_mNonterminalName (HERE), joker_85426, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)) ;
    var_ruleDeclarationList_84150.addAssign_operation (enumerator_84219.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_84180, var_ruleLabelImplementationList_84309  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1844)) ;
    var_newRuleIndex_84180.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1848)) ;
    enumerator_84219.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_82680, var_ruleDeclarationList_84150, var_selectMethodCount_84099, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1851)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_string & ioArgument_ioImplementation,
                                                                                        GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                        GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppName,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  const GALGAS_outputActualParameterForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
  const GALGAS_outputActualParameterForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppName,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  const GALGAS_outputInputActualParameterForGeneration temp_0 = object ;
  cEnumerator_unifiedTypeMapEntryList enumerator_2145 (temp_0.readProperty_mTypeList (), kENUMERATION_UP) ;
  while (enumerator_2145.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2145.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 42)) ;
    enumerator_2145.gotoNextObject () ;
  }
  const GALGAS_outputInputActualParameterForGeneration temp_1 = object ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GALGAS_outputInputActualParameterForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_2278 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_2278.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_2278.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)) ;
    enumerator_2278.gotoNextObject () ;
  }
  {
  const GALGAS_outputInputActualParameterForGeneration temp_3 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  const GALGAS_inputActualParameterForGeneration temp_0 = object ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GALGAS_inputActualParameterForGeneration temp_1 = object ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 63)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                                extensionMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & ioArgument_ioImplementation,
                                                                                      GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  const GALGAS_inputJokerParameterForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 76)) ;
  const GALGAS_inputJokerParameterForGeneration temp_1 = object ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GALGAS_inputJokerParameterForGeneration temp_2 = object ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mFormalArgumentType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  const GALGAS_inputJokerParameterForGeneration temp_3 = object ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
  const GALGAS_inputJokerParameterForGeneration temp_4 = object ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 80)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                                extensionMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  {
  const GALGAS_semanticBlockInstructionForGeneration temp_0 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 92)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 100)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                            extensionMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  cEnumerator_lstringlist enumerator_1346 (temp_0.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_1346.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_1346.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_1346.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_1 = object ;
  const GALGAS_grammarForGeneration temp_2 = object ;
  const GALGAS_grammarForGeneration temp_3 = object ;
  const GALGAS_grammarForGeneration temp_4 = object ;
  const GALGAS_grammarForGeneration temp_5 = object ;
  const GALGAS_grammarForGeneration temp_6 = object ;
  const GALGAS_grammarForGeneration temp_7 = object ;
  const GALGAS_grammarForGeneration temp_8 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mHasIndexing (), temp_5.readProperty_mStartSymbolName (), temp_6.readProperty_mHasTranslateFeature (), temp_7.readProperty_mGrammarName (), temp_8.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                              extensionMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineExtensionMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45)) ;
  const GALGAS_grammarForGeneration temp_1 = object ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2216 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis (), kENUMERATION_UP) ;
  while (enumerator_2216.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2252 (enumerator_2216.current (HERE).readProperty_mNonterminalSymbolParametersMap (), kENUMERATION_UP) ;
    while (enumerator_2252.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_2393 (enumerator_2252.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_2393.hasCurrentObject ()) {
        switch (enumerator_2393.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_entry var_t_2544 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_2393.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
            extensionMethod_addHeaderFileName (var_t_2544, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 52)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_2393.gotoNextObject () ;
      }
      enumerator_2252.gotoNextObject () ;
    }
    enumerator_2216.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_2 = object ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                     extensionMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineExtensionMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  const GALGAS_grammarForGeneration temp_0 = object ;
  result_result = GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 64)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                  extensionGetter_grammarForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_implementationCppFileName (defineExtensionGetter_grammarForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                         extensionGetter_grammarForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_hasCppHeaderFile (defineExtensionGetter_grammarForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 76)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                   extensionGetter_grammarForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_headerKind (defineExtensionGetter_grammarForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_grammarForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                     extensionGetter_grammarForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_grammarForGeneration_isPredefined (defineExtensionGetter_grammarForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  result_result = GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 90)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                  extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_implementationCppFileName (defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                         extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 102)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                   extensionGetter_syntaxDeclarationForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_headerKind (defineExtensionGetter_syntaxDeclarationForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                     extensionGetter_syntaxDeclarationForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_isPredefined (defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115)) ;
  GALGAS_uintlist var_selectMethodList_5206 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 116)) ;
  GALGAS_uint var_idx_5237 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = object ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).isValid ()) {
    uint32_t variant_5248 = temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).uintValue () ;
    bool loop_5248 = true ;
    while (loop_5248) {
      const GALGAS_syntaxDeclarationForGeneration temp_2 = object ;
      loop_5248 = GALGAS_bool (kIsStrictInf, var_idx_5237.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_5248) {
        loop_5248 = GALGAS_bool (kIsStrictInf, var_idx_5237.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_5248 && (0 == variant_5248)) {
        loop_5248 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 118)) ;
      }
      if (loop_5248) {
        variant_5248 -- ;
        var_selectMethodList_5206.addAssign_operation (var_idx_5237  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 120)) ;
        var_idx_5237.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 121)) ;
      }
    }
  }
  const GALGAS_syntaxDeclarationForGeneration temp_3 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_4 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_5 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_6 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_7 = object ;
  const GALGAS_syntaxDeclarationForGeneration temp_8 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 125)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_5206, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 123))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                              extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  const GALGAS_syntaxDeclarationForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 143)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 142))) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = object ;
  GALGAS_string var_lexiqueCppName_6205 = GALGAS_string ("C_Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 146)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_2 = object ;
  cEnumerator_ruleDeclarationList enumerator_6327 (temp_2.readProperty_mRuleDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6327.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6480 (enumerator_6327.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
    while (enumerator_6480.hasCurrentObject ()) {
      const GALGAS_syntaxDeclarationForGeneration temp_3 = object ;
      const GALGAS_syntaxDeclarationForGeneration temp_4 = object ;
      GALGAS_string var_ruleName_6539 = GALGAS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (enumerator_6327.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (enumerator_6327.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)).add_operation (enumerator_6480.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)) ;
      GALGAS_string var_code_7348 ;
      {
      const GALGAS_syntaxDeclarationForGeneration temp_5 = object ;
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_6539, ioArgument_ioInclusionSet, enumerator_6480.current_mSignatureForGeneration (HERE), enumerator_6480.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6205, GALGAS_bool (false), GALGAS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_7348, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 155)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7348, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 168)) ;
      enumerator_6480.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_7500 ;
    GALGAS_lstring joker_7464 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7467 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7470 ; // Joker input parameter
    GALGAS_location joker_7473 ; // Joker input parameter
    enumerator_6327.current_mLabelImplementationList (HERE).method_first (joker_7464, joker_7467, joker_7470, joker_7473, var_parseInstructionList_7500, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)) ;
    const GALGAS_syntaxDeclarationForGeneration temp_6 = object ;
    const GALGAS_syntaxDeclarationForGeneration temp_7 = object ;
    GALGAS_string var_parseRuleName_7531 = GALGAS_string ("cParser_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (temp_7.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (enumerator_6327.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (enumerator_6327.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)) ;
    GALGAS_string var_parseCode_8318 ;
    {
    const GALGAS_syntaxDeclarationForGeneration temp_8 = object ;
    routine_generateProcedure (GALGAS_bool (false), var_parseRuleName_7531, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 181)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_7500, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 182)), GALGAS_bool (false), var_lexiqueCppName_6205, GALGAS_bool (false), GALGAS_bool (true), temp_8.readProperty_mHasTranslateFeature (), var_parseCode_8318, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8318, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 190)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_syntaxDeclarationForGeneration temp_10 = object ;
      test_9 = temp_10.readProperty_mHasIndexing ().boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_semanticInstructionListForGeneration var_instructionList_8490 ;
        GALGAS_lstring joker_8459 ; // Joker input parameter
        GALGAS_formalParameterListForGeneration joker_8462 ; // Joker input parameter
        GALGAS_formalParameterSignature joker_8465 ; // Joker input parameter
        GALGAS_location joker_8468 ; // Joker input parameter
        enumerator_6327.current_mLabelImplementationList (HERE).method_first (joker_8459, joker_8462, joker_8465, joker_8468, var_instructionList_8490, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 193)) ;
        const GALGAS_syntaxDeclarationForGeneration temp_11 = object ;
        const GALGAS_syntaxDeclarationForGeneration temp_12 = object ;
        GALGAS_string var_ruleName_8518 = GALGAS_string ("cParser_").add_operation (temp_11.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (temp_12.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (enumerator_6327.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (enumerator_6327.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
        outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)) ;
        GALGAS_string var_code_9375 ;
        {
        routine_generateProcedure (GALGAS_bool (false), var_ruleName_8518, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 203)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_8490, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)), GALGAS_bool (false), var_lexiqueCppName_6205, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_9375, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)) ;
        }
        outArgument_outImplementation.plusAssign_operation(var_code_9375, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
      }
    }
    enumerator_6327.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                     extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                const GALGAS_bool constinArgument_inProcedureIsConst,
                                const GALGAS_string constinArgument_inCompilerTypeName,
                                const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                GALGAS_string & outArgument_outGeneratedCode,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_10373 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 237)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_unusedVariableCppNameSet_10373.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_unusedVariableCppNameSet_10373.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242)) ;
    }
  }
  cEnumerator_formalParameterListForGeneration enumerator_10676 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_10676.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_10676.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 245)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_unusedVariableCppNameSet_10373.addAssign_operation (enumerator_10676.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 246)) ;
      }
    }
    enumerator_10676.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_10909 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_10931 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_10931.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 252)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_10992 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10992.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_10992.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_10909, var_unusedVariableCppNameSet_10373, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_10931, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 254)) ;
    enumerator_10992.gotoNextObject () ;
  }
  {
  var_routineBody_10931.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 262)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11319 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_11319.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11319.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 265)) ;
    enumerator_11319.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 270)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
  GALGAS_uint var_colRef_11600 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 273)) ;
  cEnumerator_formalParameterListForGeneration enumerator_11721 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_11721.hasCurrentObject ()) {
    switch (enumerator_11721.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_11721.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_11721.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_11721.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_11721.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_10373.getter_hasKey (enumerator_11721.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_11721.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_11721.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11600, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
    }
    enumerator_11721.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_10373.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)) ;
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11600, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_10373.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
    }
  }
  if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11600, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (kBoolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
  cEnumerator_formalParameterListForGeneration enumerator_13651 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_13651.hasCurrentObject ()) {
    switch (enumerator_13651.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_13651.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_13651.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_10931, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (kBoolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 335)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMap_2D_entry constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               GALGAS_string & outArgument_outGeneratedCode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 356)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_15074 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 358)) ;
  var_unusedVariableCppNameSet_15074.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 359))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 359)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_15254 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_15254.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15254.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)) ;
    var_unusedVariableCppNameSet_15074.addAssign_operation (enumerator_15254.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 363)) ;
    enumerator_15254.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_15459 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_15489 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_15489.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 368)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_15550 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_15550.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_15550.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15459, var_unusedVariableCppNameSet_15074, GALGAS_bool (false), var_routineBody_15489, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 370)) ;
    enumerator_15550.gotoNextObject () ;
  }
  {
  var_routineBody_15489.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 377)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 380)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)) ;
  GALGAS_uint var_colRef_16062 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 384)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16168 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_16168.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_16168.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_16168.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_16168.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15074.getter_hasKey (enumerator_16168.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_16168.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 393)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 393)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_16168.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16062, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 398)) ;
    }
    enumerator_16168.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15074.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16062, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 412)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_15489, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 417)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const GALGAS_string constinArgument_inClassName,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      const GALGAS_string constinArgument_inMethodName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_18375 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 438)) ;
  var_unusedVariableCppNameSet_18375.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 439))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 439)) ;
  var_unusedVariableCppNameSet_18375.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 440)) ;
  cEnumerator_formalParameterListForGeneration enumerator_18508 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_18508.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_18375.addAssign_operation (enumerator_18508.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 442)) ;
    enumerator_18508.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_18646 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_18668 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_18668.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 447)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_18729 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_18729.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_18729.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_18646, var_unusedVariableCppNameSet_18375, GALGAS_bool (false), var_routineBody_18668, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 449)) ;
    enumerator_18729.gotoNextObject () ;
  }
  {
  var_routineBody_18668.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 457)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)) ;
  GALGAS_uint var_colRef_19192 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 460)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 464)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_19472 = var_unusedVariableCppNameSet_18375.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 466)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_19472.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 468)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_19725 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19725.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19192, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 475)) ;
    }
    switch (enumerator_19725.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_19725.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 478)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19725.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19725.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_19725.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_18375.getter_hasKey (enumerator_19725.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_19725.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_19725.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 489)) ;
    }
    enumerator_19725.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19192, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 494)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_18375.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 501)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19192, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 503)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 504)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_19472.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 506)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_18668, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethod'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionMethod (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReceiverType,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_string constinArgument_inMethodName,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_22565 = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 532)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_22661 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 534)) ;
  var_unusedVariableCppNameSet_22661.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 535))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 535)) ;
  var_unusedVariableCppNameSet_22661.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 536)) ;
  cEnumerator_formalParameterListForGeneration enumerator_22794 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_22794.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_22661.addAssign_operation (enumerator_22794.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 538)) ;
    enumerator_22794.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_22938 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_22968 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_22968.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 543)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_23029 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_23029.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_23029.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22938, var_unusedVariableCppNameSet_22661, GALGAS_bool (false), var_routineBody_22968, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 545)) ;
    enumerator_23029.gotoNextObject () ;
  }
  {
  var_routineBody_22968.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 553)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_23366 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_23405 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 557)).isValid ()) {
    uint32_t variant_23419 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 557)).uintValue () ;
    bool loop_23419 = true ;
    while (loop_23419) {
      loop_23419 = var_searching_23405.isValid () ;
      if (loop_23419) {
        loop_23419 = var_searching_23405.boolValue () ;
      }
      if (loop_23419 && (0 == variant_23419)) {
        loop_23419 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 557)) ;
      }
      if (loop_23419) {
        variant_23419 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_baseType_23366.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 558)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 558)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = var_baseType_23366.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 559)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 559)).getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 559)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_23366 = var_baseType_23366.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)) ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_23405 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_23405 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_23366.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 568)).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 568)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 568)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 568))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 568)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 569)) ;
  cEnumerator_formalParameterListForGeneration enumerator_23923 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_23923.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23923.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)) ;
    enumerator_23923.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionMethod_").add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
  GALGAS_uint var_colRef_24204 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 575)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_24494 = var_unusedVariableCppNameSet_22661.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_currentObjectIsUnused_24494.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 583)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 585)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_24747 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_24747.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 589)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_24204, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
    }
    switch (enumerator_24747.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_24747.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24747.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24747.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_24747.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_22661.getter_hasKey (enumerator_24747.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 601)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_24747.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 602)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_24747.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)) ;
    }
    enumerator_24747.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 608)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_24204, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 610)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_unusedVariableCppNameSet_22661.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
    }
  }
  if (kBoolFalse == test_5) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 614)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_24204, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 617)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 619)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_currentObjectIsUnused_24494.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 621)).boolEnum () ;
    if (kBoolTrue == test_6) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  auto object = (cPtr_").add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)).add_operation (GALGAS_string (" *) inObject ; // A\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)) ;
        }
      }
      if (kBoolFalse == test_7) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)).add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className_22565.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22968, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 632)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionGetter (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inReceiverType,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_string constinArgument_inGetterName,
                                      const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      const GALGAS_string constinArgument_inCompilerTypeName,
                                      const GALGAS_string constinArgument_inResultTypeName,
                                      const GALGAS_string constinArgument_inResultVariableCppName,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_27670 = constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 653)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_27766 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 655)) ;
  var_unusedVariableCppNameSet_27766.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 656))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 656)) ;
  var_unusedVariableCppNameSet_27766.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 657)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_27899 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_27899.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_27766.addAssign_operation (enumerator_27899.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 659)) ;
    enumerator_27899.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_28043 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_28073 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_28073.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 664)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_28134 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_28134.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_28134.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_28043, var_unusedVariableCppNameSet_27766, GALGAS_bool (false), var_routineBody_28073, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 666)) ;
    enumerator_28134.gotoNextObject () ;
  }
  {
  var_routineBody_28073.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)) ;
  }
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
  GALGAS_unifiedTypeMap_2D_entry var_baseType_28525 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_28564 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 679)).isValid ()) {
    uint32_t variant_28578 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 679)).uintValue () ;
    bool loop_28578 = true ;
    while (loop_28578) {
      loop_28578 = var_searching_28564.isValid () ;
      if (loop_28578) {
        loop_28578 = var_searching_28564.boolValue () ;
      }
      if (loop_28578 && (0 == variant_28578)) {
        loop_28578 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 679)) ;
      }
      if (loop_28578) {
        variant_28578 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_baseType_28525.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 680)).getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 680)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 680)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = var_baseType_28525.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)).getter_hasKey (constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_28525 = var_baseType_28525.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 682)) ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_28564 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_28564 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_28525.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)).getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)).add_operation (constinArgument_inGetterName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_29074 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_29074.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_29074.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)) ;
    enumerator_29074.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 696)).add_operation (GALGAS_string (" extensionGetter_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 696)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 697)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 697)).add_operation (constinArgument_inGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 697)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 697)) ;
  GALGAS_uint var_colRef_29429 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 698)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 700)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 700)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_29719 = var_unusedVariableCppNameSet_27766.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 704)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_currentObjectIsUnused_29719.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 706)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 710)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_29429, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)) ;
  }
  cEnumerator_formalInputParameterListForGeneration enumerator_30040 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_30040.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = enumerator_30040.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_30040.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 715)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_30040.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 717)) ;
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_unusedVariableCppNameSet_27766.getter_hasKey (enumerator_30040.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 719)).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_30040.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 720)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 720)) ;
      }
    }
    if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_30040.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 724)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_29429, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 725)) ;
    }
    enumerator_30040.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 728)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_unusedVariableCppNameSet_27766.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729)).boolEnum () ;
    if (kBoolTrue == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 730)) ;
    }
  }
  if (kBoolFalse == test_6) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 734)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_29429, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 735)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 736)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 737)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 739)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_currentObjectIsUnused_29719.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 742)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 744)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 744)) ;
        }
      }
      if (kBoolFalse == test_8) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  const cPtr_").add_operation (var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)).add_operation (var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className_27670.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_28073, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 750)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 752)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 753)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 753)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 755)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_bool & /* in_IS_5F_CONCRETE */,
                                                                                  const GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_optionalMethodMap & in_OPTIONAL_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_operators & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//-- Start of generic part --*\n"
    "\n"
    "//--------------------------------- Object cloning\n"
    "  protected: virtual AC_GALGAS_root * clonedObject (void) const ;\n"
    "\n"
    "//--------------------------------- Object extraction\n"
    "  public: static GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- GALGAS constructors\n" ;
    GALGAS_uint index_570_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_570 (in_CONSTRUCTOR_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_570.hasCurrentObject ()) {
        result << "  public: static class GALGAS_" ;
        result << enumerator_570.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " constructor_" ;
        result << enumerator_570.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_814_IDX (0) ;
        if (enumerator_570.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_814 (enumerator_570.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_814.hasCurrentObject ()) {
            result << "const class GALGAS_" ;
            result << enumerator_814.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result << " & inOperand" ;
            result << index_814_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_814.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_814_IDX.increment () ;
            enumerator_814.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_570.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_570.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "class C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_570.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "C_Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_570.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS) ;\n"
                "\n" ;
            }else if (kBoolFalse == test_3) {
              result << "LOCATION_ARGS) ;\n"
                "\n" ;
            }
          }
        }
        index_570_.increment () ;
        enumerator_570.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--------------------------------- Handle copy\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & operator = (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "//--------------------------------- << and >> shift operators\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//--------------------------------- += operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                       class C_Compiler * inCompiler\n"
      "                                                       COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//--------------------------------- -= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                        class C_Compiler * inCompiler\n"
      "                                                        COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "//--------------------------------- *= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//--------------------------------- /= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "//--------------------------------- += operator (with list of field expressions)\n"
      "  public: VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4540_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4540 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4540.hasCurrentObject ()) {
        result << "const class GALGAS_" ;
        result << enumerator_4540.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        result << " & inOperand" ;
        result << index_4540_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        if (enumerator_4540.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4540_IDX.increment () ;
        enumerator_4540.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    if (kBoolTrue == test_11) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler" ;
    }else if (kBoolFalse == test_11) {
    }
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n" ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "//--------------------------------- & operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_and (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//--------------------------------- | operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_or (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//--------------------------------- ^ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_xor (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//--------------------------------- not operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_not (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//--------------------------------- ~ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_tilde (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << "//--------------------------------- + operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//--------------------------------- &+ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  if (kBoolTrue == test_19) {
    result << "//--------------------------------- &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//--------------------------------- - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  if (kBoolTrue == test_21) {
    result << "//--------------------------------- * operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  if (kBoolTrue == test_22) {
    result << "//--------------------------------- &* operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  if (kBoolTrue == test_23) {
    result << "//--------------------------------- / operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  if (kBoolTrue == test_24) {
    result << "//--------------------------------- &/ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  if (kBoolTrue == test_25) {
    result << "//--------------------------------- mod operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " modulo_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  if (kBoolTrue == test_26) {
    result << "//--------------------------------- prefix - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  if (kBoolTrue == test_27) {
    result << "//--------------------------------- prefix &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus_no_ovf (void) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_28) {
    result << "//--------------------------------- ++, -- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  if (kBoolTrue == test_29) {
    result << "//--------------------------------- &++, &-- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  if (kBoolTrue == test_30) {
    result << "//--------------------------------- Implementation of getter 'description'\n"
      "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
      "                                              const int32_t inIndentation) const ;\n" ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  if (kBoolTrue == test_31) {
    result << "//--------------------------------- Comparison\n"
      "  public: typeComparisonResult objectCompare (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_31) {
  }
  result << "\n"
    "//--------------------------------- Setters\n" ;
  GALGAS_uint index_10347_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10347 (in_MODIFIER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10347.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_10347.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_10347.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result << "  public: VIRTUAL_IN_DEBUG void setter_" ;
          result << enumerator_10347.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10794_IDX (0) ;
          if (enumerator_10347.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10794 (enumerator_10347.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_10794.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10794.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result << "class GALGAS_" ;
                result << enumerator_10794.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
                result << " constinArgument" ;
                result << index_10794_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10794.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result << "class GALGAS_" ;
                  result << enumerator_10794.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_10794_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10794.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10794.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_10794_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                  }else if (kBoolFalse == test_36) {
                    result << "class GALGAS_" ;
                    result << enumerator_10794.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                    result << " inArgument" ;
                    result << index_10794_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                  }
                }
              }
              if (enumerator_10794.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10794_IDX.increment () ;
              enumerator_10794.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, enumerator_10347.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_37) {
            const enumGalgasBool test_38 = enumerator_10347.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_38) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_10347.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_39) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_39) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") ;\n"
            "\n" ;
        }else if (kBoolFalse == test_33) {
        }
      }else if (kBoolFalse == test_32) {
      }
      index_10347_.increment () ;
      enumerator_10347.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_12203_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12203 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12203.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_12203.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_12203.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_12203.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (kIsEqual, enumerator_12203.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (kIsEqual, enumerator_12203.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result << "  public: VIRTUAL_IN_DEBUG void method_" ;
          result << enumerator_12203.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12650_IDX (0) ;
          if (enumerator_12203.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12650 (enumerator_12203.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_12650.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_12650.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result << "class GALGAS_" ;
                result << enumerator_12650.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
                result << " constinArgument" ;
                result << index_12650_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_12650.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result << "class GALGAS_" ;
                  result << enumerator_12650.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_12650_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_12650.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_12650.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_12650_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                  }else if (kBoolFalse == test_44) {
                    result << "class GALGAS_" ;
                    result << enumerator_12650.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                    result << " inArgument" ;
                    result << index_12650_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                  }
                }
              }
              if (enumerator_12650.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12650_IDX.increment () ;
              enumerator_12650.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, enumerator_12203.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_45) {
            const enumGalgasBool test_46 = enumerator_12203.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_46) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_12203.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_47) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_47) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_41) {
        }
      }else if (kBoolFalse == test_40) {
      }
      index_12203_.increment () ;
      enumerator_12203.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_13995_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_13995 (in_CLASS_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_13995.hasCurrentObject ()) {
      result << "  public: static void class_method_" ;
      result << enumerator_13995.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14202_IDX (0) ;
      if (enumerator_13995.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14202 (enumerator_13995.current_mParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_14202.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_14202.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result << "class GALGAS_" ;
            result << enumerator_14202.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
            result << " constinArgument" ;
            result << index_14202_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_14202.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result << "class GALGAS_" ;
              result << enumerator_14202.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
              result << " & ioArgument" ;
              result << index_14202_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_14202.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_14202.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
                result << " & outArgument" ;
                result << index_14202_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
              }else if (kBoolFalse == test_50) {
                result << "class GALGAS_" ;
                result << enumerator_14202.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
                result << " inArgument" ;
                result << index_14202_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
              }
            }
          }
          if (enumerator_14202.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_14202_IDX.increment () ;
          enumerator_14202.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, enumerator_13995.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_51) {
        const enumGalgasBool test_52 = enumerator_13995.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_52) {
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_13995.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_53) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_53) {
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }
      }
      result << ") ;\n"
        "\n" ;
      index_13995_.increment () ;
      enumerator_13995.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Getters\n" ;
  GALGAS_uint index_15452_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_15452 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15452.hasCurrentObject ()) {
      switch (enumerator_15452.current_mKind (HERE).enumValue ()) {
      case GALGAS_methodKind::kNotBuilt :
        break ;
      case GALGAS_methodKind::kEnum_definedAsExtension :
        {
        }
        break ;
      case GALGAS_methodKind::kEnum_definedAsMember :
        {
          const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_15452.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_15452.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))).operator_or (GALGAS_bool (kIsEqual, enumerator_15452.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)).operator_or (GALGAS_bool (kIsEqual, enumerator_15452.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 351)).boolEnum () ;
          if (kBoolTrue == test_54) {
            result << "  public: VIRTUAL_IN_DEBUG class GALGAS_" ;
            result << enumerator_15452.current_mReturnedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).stringValue () ;
            result << " getter_" ;
            result << enumerator_15452.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 352)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            GALGAS_uint index_16735_IDX (0) ;
            if (enumerator_15452.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_16735 (enumerator_15452.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
              while (enumerator_16735.hasCurrentObject ()) {
                result << "const class GALGAS_" ;
                result << enumerator_16735.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 354)).stringValue () ;
                result << " & constinOperand" ;
                result << index_16735_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 354)).stringValue () ;
                if (enumerator_16735.hasNextObject ()) {
                  result << ",\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                }
                index_16735_IDX.increment () ;
                enumerator_16735.gotoNextObject () ;
              }
            }
            const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, enumerator_15452.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 357)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_55) {
              const enumGalgasBool test_56 = enumerator_15452.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_56) {
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_56) {
                result << "LOCATION_ARGS" ;
              }
            }else if (kBoolFalse == test_55) {
              const enumGalgasBool test_57 = enumerator_15452.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_57) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_57) {
                result << "\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }
            }
            result << ") const ;\n"
              "\n" ;
          }else if (kBoolFalse == test_54) {
          }
        }
        break ;
      }
      index_15452_.increment () ;
      enumerator_15452.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Optional Methods\n" ;
  GALGAS_uint index_17414_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_17414 (in_OPTIONAL_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17414.hasCurrentObject ()) {
      result << "  public: VIRTUAL_IN_DEBUG bool optional_" ;
      result << enumerator_17414.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 379)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_17625_IDX (0) ;
      if (enumerator_17414.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_17625 (enumerator_17414.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_17625.hasCurrentObject ()) {
          const enumGalgasBool test_58 = enumerator_17625.current_mInputArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_58) {
            result << "const class GALGAS_" ;
            result << enumerator_17625.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).stringValue () ;
            result << " & constinOperand" ;
            result << index_17625_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 383)).stringValue () ;
          }else if (kBoolFalse == test_58) {
            result << "class GALGAS_" ;
            result << enumerator_17625.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 385)).stringValue () ;
            result << " & outOperand" ;
            result << index_17625_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 385)).stringValue () ;
          }
          if (enumerator_17625.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_17625_IDX.increment () ;
          enumerator_17625.gotoNextObject () ;
        }
      }
      result << ") const ;\n"
        "\n" ;
      index_17414_.increment () ;
      enumerator_17414.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Introspection\n"
    "  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;\n" ;
  const enumGalgasBool test_59 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 397)).boolEnum () ;
  if (kBoolTrue == test_59) {
    result << "//--------------------------------- Enumeration helper methods\n"
      "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_59) {
  }
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 403)).boolEnum () ;
  if (kBoolTrue == test_60) {
    result << "  public: VIRTUAL_IN_DEBUG cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * readWriteAccessForWithInstruction (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_string & inKey\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_60) {
  }
  const enumGalgasBool test_61 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 409)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_61) {
    result << "//--------------------------------- Friend\n"
      "\n"
      "  friend class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_61) {
  }
  result << " \n"
    "} ; // End of GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " class\n"
    "\n" ;
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 416)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//   Enumerator declaration                                                                      \n"
      "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " : public cGenericAbstractEnumerator {\n"
      "  public: cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inEnumeratedObject,\n"
      "     " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const typeEnumerationOrder inOrder) ;\n"
      "\n"
      "//--- Current element access\n" ;
    GALGAS_uint index_19516_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_19516 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_19516.hasCurrentObject ()) {
        result << "  public: class GALGAS_" ;
        result << enumerator_19516.current_mEnumeratedType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 427)).stringValue () ;
        result << " current_" ;
        result << enumerator_19516.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 427)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
        index_19516_.increment () ;
        enumerator_19516.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_63 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 429)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 429)).boolEnum () ;
    if (kBoolTrue == test_63) {
      result << "//--- Current element access\n"
        "  public: class GALGAS_" ;
      result << in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 431)).stringValue () ;
      result << " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_63) {
    }
    result << "} ;\n" ;
  }else if (kBoolFalse == test_62) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_operators & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor\n"
    "kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\",\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NULL" ;
  }else if (kBoolFalse == test_0) {
    result << "& kTypeDescriptor_GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_INDEX.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue () ;
  }
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::staticTypeDescriptor (void) const {\n"
    "  return & kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_GALGAS_root * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::clonedObject (void) const {\n"
    "  AC_GALGAS_root * result = NULL ;\n"
    "  if (isValid ()) {\n"
    "    macroMyNew (result, GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*this)) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inObject.embeddedObject () ;\n"
    "  if (NULL != p) {\n"
    "    if (NULL != dynamic_cast <const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *> (p)) {\n"
    "      result = *p ;\n"
    "    }else{\n"
    "      inCompiler->castError (\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n"
    "    }  \n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Predeclarations (from GALGAS extern type declaration\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_PRE_5F_DECLARATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//---\n"
    "  public: virtual bool isValid (void) const ;\n"
    "  public: virtual void drop (void) ;\n"
    "\n"
    "//--- For log instruction\n"
    "  public: virtual void description (C_String & ioString,\n"
    "                                     const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Code (from GALGAS extern type declaration)\n" ;
  result << in_CODE.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_graph {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_graph () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyGraph (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyGraph (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_758_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_758 (in_INSERT_5F_MODIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_758.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_758.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_1128_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).isValid ()) {
        cEnumerator_functionSignature enumerator_1128 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)), kENUMERATION_UP) ;
        while (enumerator_1128.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_1128.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result << " inArgument_" ;
          result << index_1128_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1128_IDX.increment () ;
          enumerator_1128.gotoNextObject () ;
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  capCollectionElement attributes ;\n"
        "  GALGAS_" ;
      result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue () ;
      result << "::makeAttributesFromObjects (attributes" ;
      GALGAS_uint index_1563_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).isValid ()) {
        cEnumerator_functionSignature enumerator_1563 (in_ASSOCIATED_5F_LIST_5F_TYPE.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)), kENUMERATION_UP) ;
        while (enumerator_1563.hasCurrentObject ()) {
          result << ", inArgument_" ;
          result << index_1563_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1563_IDX.increment () ;
          enumerator_1563.gotoNextObject () ;
        }
      }
      result << " COMMA_THERE) ;\n"
        "  const char * kErrorMessage = " ;
      result << enumerator_758.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_758_.increment () ;
      enumerator_758.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_topologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_reversedGraph (LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subgraphFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inKeysToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstringlist GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_accessibleNodesFrom (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inNodesToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_lstringlist result ;\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " resultingGraph ;\n"
    "  subGraph (resultingGraph,\n"
    "            inStartKeyList,\n"
    "            inNodesToExclude,\n"
    "            inCompiler\n"
    "            COMMA_THERE) ;\n"
    "  if (resultingGraph.isValid ()) {\n"
    "    result = resultingGraph.getter_lkeyList (THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: inline GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "  mSharedObject (NULL) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const {\n"
    "    return NULL != mSharedObject ;\n"
    "  }\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Private attribute\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedObject ;\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "  private: GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mObjectArray ;\n" ;
  GALGAS_uint index_432_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_432 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_432.hasCurrentObject ()) {
      result << "  private: uint32_t mSize" ;
      result << enumerator_432.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_432_.increment () ;
      enumerator_432.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_571_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_571 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_571.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_571.current_mValue (HERE).stringValue () ;
      if (enumerator_571.hasNextObject ()) {
        result << ",\n" ;
      }
      index_571_.increment () ;
      enumerator_571.gotoNextObject () ;
    }
  }
  result << "\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Destructor\n"
    "  public: virtual ~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Comparison\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const ;\n"
    "\n"
    "//--- \n" ;
  GALGAS_uint index_1187_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1187 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1187.hasCurrentObject ()) {
      result << "  public: inline uint32_t size" ;
      result << enumerator_1187.current_mValue (HERE).stringValue () ;
      result << " (void) const { return mSize" ;
      result << enumerator_1187.current_mValue (HERE).stringValue () ;
      result << " ; }\n" ;
      index_1187_.increment () ;
      enumerator_1187.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "                                                           const int32_t inIndex) ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1696_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1696 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1696 = enumerator_1696.hasCurrentObject () ;
    if (nonEmpty_enumerator_1696) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1696.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1696.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_1696_.increment () ;
      enumerator_1696.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1892_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1892 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1892.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1892.current_mValue (HERE).stringValue () ;
      if (enumerator_1892.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1892_.increment () ;
      enumerator_1892.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2189_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2189 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2189.hasCurrentObject ()) {
      result << "const uint32_t inSize" ;
      result << enumerator_2189.current_mValue (HERE).stringValue () ;
      if (enumerator_2189.hasNextObject ()) {
        result << ",\n"
          "                                                      " ;
      }
      index_2189_.increment () ;
      enumerator_2189.gotoNextObject () ;
    }
  }
  result << "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2409_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2409 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2409.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2409.current_mValue (HERE).stringValue () ;
      result << " (inSize" ;
      result << enumerator_2409.current_mValue (HERE).stringValue () ;
      result << ")" ;
      if (enumerator_2409.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2409_.increment () ;
      enumerator_2409.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_2574_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2574 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2574.hasCurrentObject ()) {
      result << " inSize" ;
      result << enumerator_2574.current_mValue (HERE).stringValue () ;
      if (enumerator_2574.hasNextObject ()) {
        result << " * " ;
      }
      index_2574_.increment () ;
      enumerator_2574.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2949_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2949 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2949.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2949.current_mValue (HERE).stringValue () ;
      result << " (inPointer->size" ;
      result << enumerator_2949.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_2949.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2949_.increment () ;
      enumerator_2949.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  const uint32_t size = " ;
  GALGAS_uint index_3082_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3082 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3082.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3082.current_mValue (HERE).stringValue () ;
      if (enumerator_3082.hasNextObject ()) {
        result << " * " ;
      }
      index_3082_.increment () ;
      enumerator_3082.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", size) ;\n"
    "  for (uint32_t i=0 ; i<size ; i++) {\n"
    "    mObjectArray [i] = inPointer->mObjectArray [i] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static inline uint32_t " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3510_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3510 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3510.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3510.current_mValue (HERE).stringValue () ;
      if (enumerator_3510.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3510_.increment () ;
      enumerator_3510.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3621_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3621 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kENUMERATION_UP) ;
    while (enumerator_3621.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_3621.current_mValue (HERE).stringValue () ;
      index_3621_.increment () ;
      enumerator_3621.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3754_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3754 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kENUMERATION_UP) ;
    while (enumerator_3754.hasCurrentObject ()) {
      result << "  idx *= inSize" ;
      result << enumerator_3754.current_mValue (HERE).stringValue () ;
      result << " ;\n"
        "  idx += inIndex" ;
      result << enumerator_3754.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_3754_.increment () ;
      enumerator_3754.gotoNextObject () ;
    }
  }
  result << "  return idx ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "int32_t cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4052_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4052 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4052.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_4052.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_4052_.increment () ;
      enumerator_4052.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  int32_t result = -1 ;\n"
    "  " ;
  GALGAS_uint index_4224_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4224 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4224.hasCurrentObject ()) {
      result << "if (inIndex" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " >= size" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " ()) {\n"
        "    C_String s ;\n"
        "    s << \"array index " ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " : \" << cStringWithUnsigned (inIndex" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << ") << \" >= size \" << cStringWithUnsigned (size" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n"
        "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4224.hasNextObject ()) {
        result << "  }else " ;
      }
      index_4224_.increment () ;
      enumerator_4224.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    result = (int32_t) " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_4605_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4605 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4605.hasCurrentObject ()) {
      result << "inIndex" ;
      result << enumerator_4605.current_mValue (HERE).stringValue () ;
      if (enumerator_4605.hasNextObject ()) {
        result << ", " ;
      }
      index_4605_.increment () ;
      enumerator_4605.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4695_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)).isValid ()) {
    cEnumerator_stringlist enumerator_4695 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)), kENUMERATION_UP) ;
    while (enumerator_4695.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_4695.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_4695_.increment () ;
      enumerator_4695.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n"
    "  return mObjectArray [inIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setObjectAtAbsoluteIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndex) {\n"
    "  mObjectArray [inIndex] = inObject ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroMyDeleteArray (mObjectArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5755_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5755 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5755.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_5755.current_mValue (HERE).stringValue () ;
      if (enumerator_5755.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5755_.increment () ;
      enumerator_5755.gotoNextObject () ;
    }
  }
  result << "      \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNewArrayThere (p, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_5989_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5989 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5989.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_5989.current_mValue (HERE).stringValue () ;
      if (enumerator_5989.hasNextObject ()) {
        result << " * " ;
      }
      index_5989_.increment () ;
      enumerator_5989.gotoNextObject () ;
    }
  }
  result << ") ;\n" ;
  GALGAS_uint index_6064_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6064 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6064.hasCurrentObject ()) {
      result << "  uint32_t min" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << " = uimin32 (size" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << " (), inSize" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << ") ;\n" ;
      index_6064_.increment () ;
      enumerator_6064.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6178_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6178 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6178.hasCurrentObject ()) {
      result << "  for (uint32_t i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "=0 ; i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "<min" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << " ; i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "++) {\n" ;
      index_6178_.increment () ;
      enumerator_6178.gotoNextObject () ;
    }
  }
  result << "        const uint32_t idxSource = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6363_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6363 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6363.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6363.current_mValue (HERE).stringValue () ;
      if (enumerator_6363.hasNextObject ()) {
        result << ", " ;
      }
      index_6363_.increment () ;
      enumerator_6363.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6447_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)).isValid ()) {
    cEnumerator_stringlist enumerator_6447 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)), kENUMERATION_UP) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_6447.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_6447_.increment () ;
      enumerator_6447.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        const uint32_t idxTarget = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6580_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6580 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6580.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6580.current_mValue (HERE).stringValue () ;
      if (enumerator_6580.hasNextObject ()) {
        result << ", " ;
      }
      index_6580_.increment () ;
      enumerator_6580.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6664_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)).isValid ()) {
    cEnumerator_stringlist enumerator_6664 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)), kENUMERATION_UP) ;
    while (enumerator_6664.hasCurrentObject ()) {
      result << ", inSize" ;
      result << enumerator_6664.current_mValue (HERE).stringValue () ;
      index_6664_.increment () ;
      enumerator_6664.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6778_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6778 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6778.hasCurrentObject ()) {
      result << "  }\n" ;
      index_6778_.increment () ;
      enumerator_6778.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6824_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6824 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6824.hasCurrentObject ()) {
      result << "  mSize" ;
      result << enumerator_6824.current_mValue (HERE).stringValue () ;
      result << " = inSize" ;
      result << enumerator_6824.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_6824_.increment () ;
      enumerator_6824.gotoNextObject () ;
    }
  }
  result << "  macroMyDeleteArray (mObjectArray) ;\n"
    "  mObjectArray = p ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedObject (NULL) {\n"
    "  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) {\n"
    "  if (this != & inSourceObject) {\n"
    "    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "  }\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8333_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8333 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8333.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inSize" ;
      result << enumerator_8333.current_mValue (HERE).stringValue () ;
      if (enumerator_8333.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8333_.increment () ;
      enumerator_8333.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_8500_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8500 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8500.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8500.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_8500.hasNextObject ()) {
        result << " && " ;
      }
      index_8500_.increment () ;
      enumerator_8500.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroMyNew (result.mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8652_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8652 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8652.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8652.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_8652.hasNextObject ()) {
        result << ", " ;
      }
      index_8652_.increment () ;
      enumerator_8652.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<@ptrint:\" ;\n"
    "  if (NULL == mSharedObject) {\n"
    "    ioString << \"NULL\" ;\n"
    "  }else{\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    ioString " ;
  columnMarker = result.currentColumn () ;
  result << "<< \"array [\"" ;
  GALGAS_uint index_9217_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9217 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9217.hasCurrentObject ()) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "<< cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_9217.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_9217.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_9217_.increment () ;
      enumerator_9217.gotoNextObject () ;
    }
  }
  result << "             << \"] of @uint\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_axisCount (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid ()) {\n"
    "    result = GALGAS_uint (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 263)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_range GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_rangeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_range result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 276)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10354_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10354 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10354.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10354.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10354.current_mValue (HERE).stringValue () ;
      result << " ())) ;\n" ;
      index_10354_.increment () ;
      enumerator_10354.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_sizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 297)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_11192_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11192 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11192.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_11192.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_uint (mSharedObject->size" ;
      result << enumerator_11192.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n" ;
      index_11192_.increment () ;
      enumerator_11192.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11567_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11567 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11567.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_11567.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_11567_.increment () ;
      enumerator_11567.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_11758_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11758 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11758.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_11758.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_11758_.increment () ;
      enumerator_11758.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11964_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11964 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11964.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_11964.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_11964_.increment () ;
      enumerator_11964.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = GALGAS_bool (mSharedObject->objectAtAbsoluteIndex (idx).isValid ()) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12525_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12525 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12525.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_12525.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_12525_.increment () ;
      enumerator_12525.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_12738_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12738 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12738.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_12738.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_12738_.increment () ;
      enumerator_12738.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12944_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12944 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12944.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_12944.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_12944_.increment () ;
      enumerator_12944.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n"
    "      if (! result.isValid ()) {\n"
    "        C_String s ;\n"
    "        s << \"getter @ptrint valueAtIndex: object at index (\"" ;
  GALGAS_uint index_13357_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13357 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13357.hasCurrentObject ()) {
      result << "\n"
        "             << cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_13357.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_13357.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_13357_.increment () ;
      enumerator_13357.gotoNextObject () ;
    }
  }
  result << "\n"
    "             << \") is invalid\" ;\n"
    "        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if (isValid () && !mSharedObject->isUniquelyReferenced ()) {\n"
    "    cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedObject COMMA_THERE)) ;\n"
    "    macroAssignSharedObject (mSharedObject, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_14398_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14398 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14398.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_14398.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_14398_.increment () ;
      enumerator_14398.gotoNextObject () ;
    }
  }
  result << "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14583_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14583 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14583.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_14583.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_14583_.increment () ;
      enumerator_14583.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14911_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14911 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14911.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_14911.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_14911_.increment () ;
      enumerator_14911.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_15452_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15452 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15452.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inIndex" ;
      result << enumerator_15452.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_15452_.increment () ;
      enumerator_15452.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15632_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15632 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15632.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_15632.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_15632_.increment () ;
      enumerator_15632.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- Resize \?\n"
    "    const bool resize = " ;
  GALGAS_uint index_15942_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15942 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15942.hasCurrentObject ()) {
      result << "(inIndex" ;
      result << enumerator_15942.current_mValue (HERE).stringValue () ;
      result << ".uintValue () >= mSharedObject->size" ;
      result << enumerator_15942.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_15942.hasNextObject ()) {
        result << " || " ;
      }
      index_15942_.increment () ;
      enumerator_15942.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "    if (resize) {\n" ;
  GALGAS_uint index_16087_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16087 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16087.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << " = uimax32 (mSharedObject->size" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << " (), inIndex" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << ".uintValue () + 1) ;\n" ;
      index_16087_.increment () ;
      enumerator_16087.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_16280_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16280 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16280.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_16280.current_mValue (HERE).stringValue () ;
      if (enumerator_16280.hasNextObject ()) {
        result << ", " ;
      }
      index_16280_.increment () ;
      enumerator_16280.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  //---\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16438_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16438 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16438.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_16438.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_16438_.increment () ;
      enumerator_16438.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_uint inNewSize,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_uint inAxisIndex,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inNewSize.isValid () && inAxisIndex.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- \n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 451)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"setter @ptrint setSizeForAxis: axis index (\"\n"
    "        << cStringWithUnsigned (axisIndex) << \") >= dimension (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 454)).stringValue () ;
  result << ")\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "    }else{\n" ;
  GALGAS_uint index_17672_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17672 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17672.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " = (" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " () ;\n" ;
      index_17672_.increment () ;
      enumerator_17672.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_17873_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17873 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17873.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_17873.current_mValue (HERE).stringValue () ;
      if (enumerator_17873.hasNextObject ()) {
        result << ", " ;
      }
      index_17873_.increment () ;
      enumerator_17873.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_invalidateValueAtIndex (" ;
  GALGAS_uint index_18170_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18170 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_18170 = enumerator_18170.hasCurrentObject () ;
    if (nonEmpty_enumerator_18170) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_18170.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_18170.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_18170_.increment () ;
      enumerator_18170.gotoNextObject () ;
    }
  }
  result << "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_18335_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18335 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18335.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_18335.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_18335_.increment () ;
      enumerator_18335.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18663_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18663 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18663.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_18663.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_18663_.increment () ;
      enumerator_18663.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (), idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19178_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19178 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19178.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inNewSize" ;
      result << enumerator_19178.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_19178_.increment () ;
      enumerator_19178.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_19345_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19345 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19345.hasCurrentObject ()) {
      result << " && inNewSize" ;
      result << enumerator_19345.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_19345_.increment () ;
      enumerator_19345.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19647_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19647 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19647.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inNewSize" ;
      result << enumerator_19647.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_19647.hasNextObject ()) {
        result << ",\n" ;
      }
      index_19647_.increment () ;
      enumerator_19647.gotoNextObject () ;
    }
  }
  result << "\n"
    "                            COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_20072_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20072 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20072.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    if (mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << " < inOperand->mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandLowerThanSecond ;\n"
        "    }else if (mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << " > inOperand->mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandGreaterThanSecond ;\n"
        "    }\n"
        "  }\n" ;
      index_20072_.increment () ;
      enumerator_20072.gotoNextObject () ;
    }
  }
  result << "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_20393_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20393 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20393.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_20393.current_mValue (HERE).stringValue () ;
      if (enumerator_20393.hasNextObject ()) {
        result << "*" ;
      }
      index_20393_.increment () ;
      enumerator_20393.gotoNextObject () ;
    }
  }
  result << ")) && (result == kOperandEqual) ; i++) {\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject1 = & (mObjectArray [i]) ;\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject2 = & (inOperand->mObjectArray [i]) ;\n"
    "    if ((! ptrObject1->isValid ()) && ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ! ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ptrObject2->isValid ()) {\n"
    "      result = ptrObject1->objectCompare (* ptrObject2) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = (isValid () && inOperand.isValid ()) \? kOperandEqual : kOperandNotValid ;\n"
    "  if (kOperandEqual == result) {\n"
    "    result = mSharedObject->objectCompare (inOperand.mSharedObject) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_listmap {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_listmap () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyListMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_830_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_830 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_830.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_830.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      result << " & inOperand" ;
      result << index_830_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      index_830_IDX.increment () ;
      enumerator_830.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_1109_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1109.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_1109_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result << ".isValid ()" ;
      index_1109_IDX.increment () ;
      enumerator_1109.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1401_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1401 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1401.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_1401_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1401_IDX.increment () ;
      enumerator_1401.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    addObjectInListMap (inKey.stringValue (), attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_listForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (listForKey (inKey)) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mKey, p->mSharedListMapList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_string (p->mKey) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_mList (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (p->mSharedListMapList) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_411_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_411 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_411.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_411.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_411_.increment () ;
      enumerator_411.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_map {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  \n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_494_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_494 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_494.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_494.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_494.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_494_.increment () ;
      enumerator_494.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_821_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_821 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_821.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_821.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_821.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_821_.increment () ;
      enumerator_821.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                        const GALGAS_bool & in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_308_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_308.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_308.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_308.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_308_.increment () ;
      enumerator_308.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_582_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_582 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_582.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_582_.increment () ;
      enumerator_582.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mProperty_lkey.isValid ()" ;
  GALGAS_uint index_1017_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1017 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1017.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_1017.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_1017_.increment () ;
      enumerator_1017.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mProperty_lkey" ;
  GALGAS_uint index_1483_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1483 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1483.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1483.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 32)).stringValue () ;
      index_1483_.increment () ;
      enumerator_1483.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_2078_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2078 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2078.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_2078_.increment () ;
        enumerator_2078.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n" ;
  GALGAS_uint index_2853_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2853 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2853.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2853_.increment () ;
      enumerator_2853.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_map (" ;
  result << in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS.getter_cString (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 69)).stringValue () ;
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_map (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  * ((AC_GALGAS_map *) this) = inSource ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_mapWithMapToOverride (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inMapToOverride\n"
    "                                                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_overriddenMap (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  getOverridenMap (result, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_5360_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5360 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5360.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_5360.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      result << " & inArgument" ;
      result << index_5360_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      index_5360_IDX.increment () ;
      enumerator_5360.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inKey" ;
  GALGAS_uint index_5732_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5732 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5732.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_5732_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 122)).stringValue () ;
      index_5732_IDX.increment () ;
      enumerator_5732.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  capCollectionElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
  }
  result << "const char * kInsertErrorMessage = \"@" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " insert error: '%K' already in map\" ;\n"
    "const char * kShadowErrorMessage = \"\" ;\n"
    "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_6261_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_6261 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6261.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_6261.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 137)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6611_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6611 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6611.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_6611.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          result << " inArgument" ;
          result << index_6611_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          index_6611_IDX.increment () ;
          enumerator_6611.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = NULL ;\n"
        "  macroMyNew (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (inKey" ;
      GALGAS_uint index_6999_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6999 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6999.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_6999_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue () ;
          index_6999_IDX.increment () ;
          enumerator_6999.gotoNextObject () ;
        }
      }
      result << " COMMA_HERE)) ;\n"
        "  capCollectionElement attributes ;\n"
        "  attributes.setPointer (p) ;\n"
        "  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kInsertErrorMessage = " ;
      result << enumerator_6261.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
      result << " ;\n"
        "const char * kShadowErrorMessage = " ;
      result << enumerator_6261.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 154)).stringValue () ;
      result << " ;\n"
        "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_6261_.increment () ;
      enumerator_6261.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7561_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_7561 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7561.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_7561.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " = " ;
      result << enumerator_7561.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_7561.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 164)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_8186_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8186 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8186.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_8186.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          result << " & outArgument" ;
          result << index_8186_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          index_8186_IDX.increment () ;
          enumerator_8186.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_1 = enumerator_7561.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_location & outKeyLocation" ;
      }else if (kBoolFalse == test_1) {
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result << "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inCompiler,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_7561.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 175)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_8859_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8859 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8859.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_8859_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 179)).stringValue () ;
          result << ".drop () ;\n" ;
          index_8859_IDX.increment () ;
          enumerator_8859.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_2 = enumerator_7561.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    outKeyLocation.drop () ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_9168_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9168 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9168.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_9168_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_9168.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " ;\n" ;
          index_9168_IDX.increment () ;
          enumerator_9168.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_3 = enumerator_7561.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    outKeyLocation = p->mProperty_lkey.mProperty_location ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_7561_.increment () ;
      enumerator_7561.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9460_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_9460 (in_REMOVE_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9460.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_9460.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_9800_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9800 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9800.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_9800.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          result << " & outArgument" ;
          result << index_9800_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          index_9800_IDX.increment () ;
          enumerator_9800.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  const char * kRemoveErrorMessage = " ;
      result << enumerator_9460.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 205)).stringValue () ;
      result << " ;\n"
        "  capCollectionElement attributes ;\n"
        "  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_10405_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10405 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10405.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_10405_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue () ;
          result << ".drop () ;\n" ;
          index_10405_IDX.increment () ;
          enumerator_10405.gotoNextObject () ;
        }
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_10642_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10642 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10642.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_10642_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_10642.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " ;\n" ;
          index_10642_IDX.increment () ;
          enumerator_10642.gotoNextObject () ;
        }
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_9460_.increment () ;
      enumerator_9460.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_lstring inKey" ;
    GALGAS_uint index_11118_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11118 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11118.hasCurrentObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_" ;
        result << enumerator_11118.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        result << " inArgument" ;
        result << index_11118_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        index_11118_IDX.increment () ;
        enumerator_11118.gotoNextObject () ;
      }
    }
    result << "\n"
      " " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
      "  cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = NULL ;\n"
      "  macroMyNew (p, cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (inKey" ;
    GALGAS_uint index_11467_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11467 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11467.hasCurrentObject ()) {
        result << ", inArgument" ;
        result << index_11467_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 233)).stringValue () ;
        index_11467_IDX.increment () ;
        enumerator_11467.gotoNextObject () ;
      }
    }
    result << " COMMA_HERE)) ;\n"
      "  capCollectionElement attributes ;\n"
      "  attributes.setPointer (p) ;\n"
      "  macroDetachSharedObject (p) ;\n"
      "  performInsertOrReplace (attributes) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  GALGAS_uint index_11794_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11794 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11794.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_11794.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_11794.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_string & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  GALGAS_" ;
      result << enumerator_11794.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_11794.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_11794_IDX.increment () ;
      enumerator_11794.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12874_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12874.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_12874.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_12874.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << " inAttributeValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_string inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    p->mProperty_" ;
      result << enumerator_12874.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 269)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_12874_IDX.increment () ;
      enumerator_12874.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::readWriteAccessForWithInstruction (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mProperty_lkey" ;
  GALGAS_uint index_15360_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15360 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15360.hasCurrentObject ()) {
      result << ", p->mProperty_" ;
      result << enumerator_15360.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).stringValue () ;
      index_15360_.increment () ;
      enumerator_15360.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_15885_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15885 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15885.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_15885.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_15885.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mProperty_" ;
      result << enumerator_15885.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 319)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_15885_IDX.increment () ;
      enumerator_15885.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_16770_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16770 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16770.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_16770.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      result << " & outArgument" ;
      result << index_16770_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      index_16770_IDX.increment () ;
      enumerator_16770.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "inKey) ;\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_17218_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17218 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17218.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_17218_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_17218.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_17218_IDX.increment () ;
      enumerator_17218.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_17427_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17427 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17427.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_17427_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 338)).stringValue () ;
      result << ".drop () ;\n" ;
      index_17427_IDX.increment () ;
      enumerator_17427.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Attributes\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedDict ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedDict != NULL ; }\n"
    "\n"
    "//--- drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Implementation of reader 'description'\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Object compare\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const ;\n"
    "\n"
    "//--- Enumeration\n"
    "  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element {\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mInfPtr ;\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSupPtr ;\n"
    "  public: int32_t mBalance ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & in_key" ;
  GALGAS_uint index_502_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_502 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_502.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_502.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      result << " & inProperty_" ;
      result << enumerator_502.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      index_502_.increment () ;
      enumerator_502.gotoNextObject () ;
    }
  }
  result << ") :\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (in_key" ;
  GALGAS_uint index_778_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_778 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_778.hasCurrentObject ()) {
      result << ", inProperty_" ;
      result << enumerator_778.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue () ;
      index_778_.increment () ;
      enumerator_778.gotoNextObject () ;
    }
  }
  result << "),\n"
    "  mInfPtr (NULL),\n"
    "  mSupPtr (NULL),\n"
    "  mBalance (0) {\n"
    "  }\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "& operator = (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: virtual ~ cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mInfPtr) ;\n"
    "    macroMyDelete (mSupPtr) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "//--------------------------------- Attributes\n"
    "  private: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mRoot ;\n"
    "  private: uint32_t mCount ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  protected: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (LOCATION_ARGS) :\n"
    "  C_SharedObject (THERE),\n"
    "  mRoot (NULL),\n"
    "  mCount (0) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  protected: virtual ~ cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mRoot) ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- No copy\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--------------------------------- Copy a map\n"
    "  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) ;\n"
    "\n"
    "//--------------------------------- Insert\n"
    "  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode) {\n"
    "    macroUniqueSharedObject (this) ;\n"
    "    bool extension = false ;\n"
    "    bool entryAdded = false ;\n"
    "    recursiveAddEntry (mRoot, inNewNode, entryAdded, extension) ;\n"
    "    if (entryAdded) {\n"
    "      mCount ++ ;\n"
    "    }\n"
    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      checkDict (HERE) ;\n"
    "    #endif\n"
    "  }\n"
    "\n"
    "  protected: static void rotateLeft (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mSupPtr ;\n"
    "    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n"
    "    ptr->mInfPtr = ioRootPtr;\n"
    "\n"
    "    if (ptr->mBalance >= 0) {\n"
    "      ioRootPtr->mBalance ++ ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n"
    "    }\n"
    "\n"
    "    if (ioRootPtr->mBalance > 0) {\n"
    "      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n"
    "    }else{\n"
    "      ptr->mBalance ++ ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void rotateRight (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mInfPtr ;\n"
    "    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n"
    "    ptr->mSupPtr = ioRootPtr ;\n"
    "   \n"
    "    if (ptr->mBalance > 0) {\n"
    "      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance -- ;\n"
    "    }\n"
    "    if (ioRootPtr->mBalance >= 0) {\n"
    "      ptr->mBalance -- ;\n"
    "    }else{\n"
    "      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void recursiveAddEntry (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr,\n"
    "                                             const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode,\n"
    "                                             bool & outEntryAdded,\n"
    "                                             bool & ioExtension) {\n"
    "    if (ioRootPtr == NULL) {\n"
    "      macroMyNew (ioRootPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNewNode.mProperty_key" ;
  GALGAS_uint index_4239_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4239 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4239.hasCurrentObject ()) {
      result << ", inNewNode.mProperty_" ;
      result << enumerator_4239.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 119)).stringValue () ;
      index_4239_.increment () ;
      enumerator_4239.gotoNextObject () ;
    }
  }
  result << ")) ;\n"
    "      ioExtension = true ;\n"
    "      outEntryAdded = true ;\n"
    "    }else{\n"
    "      macroValidPointer (ioRootPtr) ;\n"
    "      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAdded, ioExtension) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance++;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false;\n"
    "          }else if (ioRootPtr->mBalance == 2) {\n"
    "            if (ioRootPtr->mInfPtr->mBalance == -1) {\n"
    "              rotateLeft (ioRootPtr->mInfPtr) ;\n"
    "            }\n"
    "            rotateRight (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAdded, ioExtension) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance-- ;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false ;\n"
    "          }else if (ioRootPtr->mBalance == -2) {\n"
    "            if (ioRootPtr->mSupPtr->mBalance == 1) {\n"
    "              rotateRight (ioRootPtr->mSupPtr) ;\n"
    "            }\n"
    "            rotateLeft (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else{  // Found\n"
    "        ioExtension = false ;\n"
    "        outEntryAdded = false ;\n" ;
  GALGAS_uint index_5804_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5804 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5804.hasCurrentObject ()) {
      result << "        ioRootPtr->mProperty_" ;
      result << enumerator_5804.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 160)).stringValue () ;
      result << " = inNewNode.mProperty_" ;
      result << enumerator_5804.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 160)).stringValue () ;
      result << " ;\n" ;
      index_5804_.increment () ;
      enumerator_5804.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Search\n"
    "  private: VIRTUAL_IN_DEBUG cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * findEntryInDict (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey) const {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = NULL ;\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * currentNode = mRoot ;\n"
    "    while ((currentNode != NULL) && (NULL == result)) {\n"
    "      macroValidPointer (currentNode) ;\n"
    "      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        currentNode = currentNode->mInfPtr ;\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        currentNode = currentNode->mSupPtr ;\n"
    "      }else{ // Found\n"
    "        result = currentNode ;\n"
    "      }\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Remove\n"
    "  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNodePtr) {\n"
    "    bool branchHasBeenRemoved = false ; // Unused here\n"
    "    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n"
    "    if (NULL != outRemovedNodePtr) {\n"
    "      mCount -- ;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void supBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance ++ ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case 1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case 2:\n"
    "      switch (ioRoot->mInfPtr->mBalance) {\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot->mInfPtr) ;\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateRight (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case 1:\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void infBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance -- ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case -1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case -2:\n"
    "      switch (ioRoot->mSupPtr->mBalance) {\n"
    "      case 1:\n"
    "        rotateRight (ioRoot->mSupPtr) ;\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void  getPreviousElement (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                               cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioElement,\n"
    "                                               bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot->mSupPtr == NULL) {\n"
    "      ioElement = ioRoot ;\n"
    "      ioRoot = ioRoot->mInfPtr ;\n"
    "      ioBranchHasBeenRemoved = true ;\n"
    "    }else{\n"
    "      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n"
    "      if (ioBranchHasBeenRemoved) {\n"
    "        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void internalRemoveRecursively (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                                     const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKeyToRemove,\n"
    "                                                     cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNode,\n"
    "                                                     bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot != NULL) {\n"
    "      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n"
    "        }\n"
    "      }else{\n"
    "        cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = ioRoot ;\n"
    "        if (p->mInfPtr == NULL) {\n"
    "          ioRoot = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else if (p->mSupPtr == NULL) {\n"
    "          ioRoot = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else{\n"
    "          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          ioRoot->mSupPtr = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioRoot->mInfPtr = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioRoot->mBalance = p->mBalance;\n"
    "          p->mBalance = 0;\n"
    "          if (ioBranchHasBeenRemoved) {\n"
    "            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          }\n"
    "        }\n"
    "        outRemovedNode = p ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Internal method for enumeration\n"
    "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n"
    "//--------------------------------- Check Dictionary\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n"
    "      uint32_t n = 0 ;\n"
    "      checkNode (mRoot, n) ;\n"
    "      MF_AssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    private: static void checkNode (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                     uint32_t & ioCount) {\n"
    "      if (NULL != inNode) {\n"
    "        checkNode (inNode->mInfPtr, ioCount) ;\n"
    "        ioCount ++ ;\n"
    "        checkNode (inNode->mSupPtr, ioCount) ;\n"
    "      }\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "//--------------------------------- Compare Dictionaries\n"
    "  public: typeComparisonResult compare (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "    typeComparisonResult result = kOperandEqual ;\n"
    "    if (mCount < inOperand->mCount) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mCount > inOperand->mCount) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      capCollectionElementArray enumerationArray ;\n"
    "      populateEnumerationArray (enumerationArray) ;\n"
    "      capCollectionElementArray operandEnumerationArray ;\n"
    "      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n"
    "      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Friend\n"
    "  friend class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "} ;\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyDict (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  macroMyNew (result.mSharedDict, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Description\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                 C_String & ioString,\n"
    "                                 const int32_t inIndentation) {\n"
    "  if (NULL != inNode) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioString, inIndentation) ;\n"
    "    ioString << \"\\n\" ;\n"
    "    inNode->description (ioString, inIndentation) ;\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioString, inIndentation) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString,\n"
    "                                             const int32_t inIndentation) const {\n"
    "  ioString << \"<dict @\" << staticTypeDescriptor ()->mGalgasTypeName << \":\" ;\n"
    "  if (isValid ()) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedDict->mRoot, ioString, inIndentation) ;\n"
    "  }else{\n"
    "    ioString << \" not built\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insulate\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) :\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (inNode->mProperty_key" ;
  GALGAS_uint index_16130_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16130 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16130.hasCurrentObject ()) {
      result << ", inNode->mProperty_" ;
      result << enumerator_16130.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 436)).stringValue () ;
      index_16130_.increment () ;
      enumerator_16130.gotoNextObject () ;
    }
  }
  result << "),\n"
    "mInfPtr (NULL),\n"
    "mSupPtr (NULL),\n"
    "mBalance (inNode->mBalance) {\n"
    "  if (inNode->mInfPtr != NULL) {\n"
    "    macroMyNew (mInfPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr)) ;\n"
    "  }\n"
    "  if (inNode->mSupPtr != NULL) {\n"
    "    macroMyNew (mSupPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr)) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) {\n"
    "  macroUniqueSharedObject (this) ;\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    inSource->checkDict (HERE) ;\n"
    "  #endif\n"
    "  macroValidSharedObject (inSource, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  mCount = inSource->mCount ;\n"
    "  if (NULL != inSource->mRoot) {\n"
    "    macroMyNew (mRoot, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inSource->mRoot)) ;\n"
    "  }\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if ((NULL != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n"
    "    cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "    p->copyFrom (mSharedDict) ;\n"
    "    macroAssignSharedObject (mSharedDict, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insert\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_18101_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18101 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18101.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_18101.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 489)).stringValue () ;
      result << " & inArgument" ;
      result << index_18101_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 489)).stringValue () ;
      index_18101_IDX.increment () ;
      enumerator_18101.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element newElement (inKey" ;
  GALGAS_uint index_18438_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18438 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18438.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_18438_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 495)).stringValue () ;
      index_18438_IDX.increment () ;
      enumerator_18438.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  if (isValid () && newElement.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    mSharedDict->performInsert (newElement) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_hasKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    result = GALGAS_bool (p != NULL) ;\n"
    "   }\n"
    "   return result ;\n"
    " }\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_19435_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19435 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19435.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_19435.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 521)).stringValue () ;
      result << " & outArgument" ;
      result << index_19435_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 521)).stringValue () ;
      index_19435_IDX.increment () ;
      enumerator_19435.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot search in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_20103_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20103 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20103.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20103_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 539)).stringValue () ;
      result << ".drop () ;\n" ;
      index_20103_IDX.increment () ;
      enumerator_20103.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_20326_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20326 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20326.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20326_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 545)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_20326.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 545)).stringValue () ;
      result << " ;\n" ;
      index_20326_IDX.increment () ;
      enumerator_20326.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_20757_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20757 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20757.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_20757.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 553)).stringValue () ;
      result << " & outArgument" ;
      result << index_20757_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 553)).stringValue () ;
      index_20757_IDX.increment () ;
      enumerator_20757.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    mSharedDict->performRemove (inKey, p) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot remove in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_21477_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21477 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21477.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_21477_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 573)).stringValue () ;
      result << ".drop () ;\n" ;
      index_21477_IDX.increment () ;
      enumerator_21477.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_21700_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21700 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21700.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_21700_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 579)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_21700.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 579)).stringValue () ;
      result << " ;\n" ;
      index_21700_IDX.increment () ;
      enumerator_21700.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_21902_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21902 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21902.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_21902.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 586)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_21902.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 586)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_21902.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 589)).stringValue () ;
      result << " result ;\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "  const cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "   if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot get " ;
      result << enumerator_21902.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 595)).stringValue () ;
      result << " ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      macroValidSharedObject (p, cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "      result = p->mProperty_" ;
      result << enumerator_21902.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 600)).stringValue () ;
      result << "  ;\n"
        "    }\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_21902_.increment () ;
      enumerator_21902.gotoNextObject () ;
    }
  }
  GALGAS_uint index_23234_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23234 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23234.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_23234.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_23234.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 609)).stringValue () ;
      result << " inPropertyValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "    insulate (THERE) ;\n"
        "    macroUniqueSharedObject (mSharedDict) ;\n"
        "    cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "    if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot set" ;
      result << enumerator_23234.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 620)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 620)).stringValue () ;
      result << "ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      p->mProperty_" ;
      result << enumerator_23234.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 624)).stringValue () ;
      result << " = inPropertyValue ;\n"
        "    }\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_23234_.increment () ;
      enumerator_23234.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Object compare\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = mSharedDict->compare (inOperand.mSharedDict) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark map Enumeration\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mElement ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inElement) :\n"
    "  cCollectionElement (HERE),\n"
    "  mElement (inElement) {\n"
    "  }\n"
    "\n"
    "//--- No copy\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {\n"
    "    const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "    return mElement.objectCompare (p->mElement) ;\n"
    "  }\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mElement)) ;\n"
    "    return p ;\n"
    "  }\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const {\n"
    "    mElement.description (ioString, inIndentation) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                                       capCollectionElementArray & ioEnumerationArray) {\n"
    "  if (inNode != NULL) {\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioEnumerationArray) ;\n"
    "    cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*inNode)) ;\n"
    "    capCollectionElement element ;\n"
    "    element.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    ioEnumerationArray.appendObject (element) ;\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "  ioEnumerationArray.setCapacity (mCount) ;\n"
    "  enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mRoot, ioEnumerationArray) ;\n"
    "  MF_Assert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  if (NULL != mSharedDict) {\n"
    "    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                                                        const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mElement) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mElement.mProperty_key ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_30033_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30033 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30033.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_30033.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 750)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_30033.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 750)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "* p = dynamic_cast  <const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "*> (currentObjectPtr (THERE)) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mElement.mProperty_" ;
      result << enumerator_30033.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 753)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_30033_IDX.increment () ;
      enumerator_30033.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_30985_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30985 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30985.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << enumerator_30985.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 759)).stringValue () ;
      result << " & outArgument" ;
      result << index_30985_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 759)).stringValue () ;
      index_30985_IDX.increment () ;
      enumerator_30985.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if ((mSharedDict != NULL) && inKey.isValid ()) {\n"
    "    p = (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mSharedDict->findEntryInDict (inKey) ;\n"
    "  }\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_31516_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31516 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31516.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_31516_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 770)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_31516.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 770)).stringValue () ;
      result << " ;\n" ;
      index_31516_IDX.increment () ;
      enumerator_31516.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_31732_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31732 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31732.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_31732_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 774)).stringValue () ;
      result << ".drop () ;\n" ;
      index_31732_IDX.increment () ;
      enumerator_31732.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                   const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR,
                                                                                   const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "  value class\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 15)) COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 15)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Embedded object pointer\n"
    "  public: inline const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr (void) const {\n"
    "    return (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mObjectPtr ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n"
    "//--------------------------------- Property read access\n" ;
  GALGAS_uint index_1251_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1251 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1251.hasCurrentObject ()) {
      result << "  public: class GALGAS_" ;
      result << enumerator_1251.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_1251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " (void) const ;\n"
        "\n" ;
      index_1251_.increment () ;
      enumerator_1251.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                           const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                           const GALGAS_bool & /* in_IS_5F_ABSTRACT */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                           const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Properties\n" ;
  GALGAS_uint index_110_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_110 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_110.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_110.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_110.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_110_.increment () ;
      enumerator_110.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_398_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_398 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_398.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_398.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_398.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_398_.increment () ;
      enumerator_398.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  GALGAS_uint index_885_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_885 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_885.hasCurrentObject ()) {
      result << "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
      result << enumerator_885.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result << " getter_" ;
      result << enumerator_885.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result << " (LOCATION_ARGS) const ;\n" ;
      const enumGalgasBool test_2 = enumerator_885.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "  public: VIRTUAL_IN_DEBUG void setter_set" ;
        result << enumerator_885.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result << " (GALGAS_" ;
        result << enumerator_885.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result << " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_885_.increment () ;
      enumerator_885.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const = 0 ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;\n" ;
  }else if (kBoolFalse == test_3) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                               const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                               const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   Object comparison                                                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n"
      "  typeComparisonResult result = kOperandEqual ;\n"
      "  const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = (const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " *) inOperandPtr ;\n"
      "  macroValidSharedObject (p, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ") ;\n" ;
    GALGAS_uint index_1127_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1127 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1127.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mProperty_" ;
        result << enumerator_1127.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mProperty_" ;
        result << enumerator_1127.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1127_.increment () ;
        enumerator_1127.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    if (mySlot < operandSlot) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mySlot > operandSlot) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 55)) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 55)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2880_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2880 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_2880.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_2880.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << "::constructor_" ;
          result << enumerator_2880.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2880.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2880_.increment () ;
          enumerator_2880.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_4) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (LOCATION_ARGS) {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (THERE)) ;\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4335_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4335 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4335.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << enumerator_4335.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 95)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4335.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 95)).stringValue () ;
        if (enumerator_4335.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4335_.increment () ;
        enumerator_4335.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_8) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4739_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4739 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4739.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4739.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4739.hasNextObject ()) {
          result << " && " ;
        }
        index_4739_.increment () ;
        enumerator_4739.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_5003_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_5003 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_5003.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_5003.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue () ;
        if (enumerator_5003.hasNextObject ()) {
          result << ", " ;
        }
        index_5003_.increment () ;
        enumerator_5003.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_5251_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5251 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5251.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_5251.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 124)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::readProperty_" ;
      result << enumerator_5251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 124)).stringValue () ;
      result << " (void) const {\n"
        "  if (NULL == mObjectPtr) {\n"
        "    return GALGAS_" ;
      result << enumerator_5251.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 126)).stringValue () ;
      result << " () ;\n"
        "  }else{\n"
        "    const cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) mObjectPtr ;\n"
        "    macroValidSharedObject (p, cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    return p->mProperty_" ;
      result << enumerator_5251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 130)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_5251.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 134)).stringValue () ;
      result << " cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_5251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 134)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return mProperty_" ;
      result << enumerator_5251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_5251_.increment () ;
      enumerator_5251.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6396_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6396 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6396.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_6396.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6396.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6396.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  if (NULL != mObjectPtr) {\n"
          "    insulate (THERE) ;\n"
          "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mProperty_" ;
        result << enumerator_6396.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6396.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6396.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  mProperty_" ;
        result << enumerator_6396.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 154)).stringValue () ;
        result << " = inValue ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_6396_.increment () ;
      enumerator_6396.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 160)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 160)).stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8047_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8047 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8047.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8047.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 165)).stringValue () ;
      result << " & in_" ;
      result << enumerator_8047.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 165)).stringValue () ;
      if (enumerator_8047.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8047_.increment () ;
      enumerator_8047.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_10) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_11) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_8489_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8489 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8489.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_8489.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 176)).stringValue () ;
      if (enumerator_8489.hasNextObject ()) {
        result << ", " ;
      }
      index_8489_.increment () ;
      enumerator_8489.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_12) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_8752_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8752 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8752.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_8752.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 186)).stringValue () ;
      result << " (in_" ;
      result << enumerator_8752.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 186)).stringValue () ;
      result << ")" ;
      index_8752_.increment () ;
      enumerator_8752.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 197)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t /* inIndentation */) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << "]\" ;\n"
        "}\n"
        "\n" ;
    }else if (kBoolFalse == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t inIndentation) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << ":\" ;\n" ;
      GALGAS_uint index_9745_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9745 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9745.hasCurrentObject ()) {
          result << "  mProperty_" ;
          result << enumerator_9745.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 207)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_9745.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_9745_.increment () ;
          enumerator_9745.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_15 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 215)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_10331_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_10331 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_10331 = enumerator_10331.hasCurrentObject () ;
      while (enumerator_10331.hasCurrentObject ()) {
        result << "mProperty_" ;
        result << enumerator_10331.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 222)).stringValue () ;
        if (enumerator_10331.hasNextObject ()) {
          result << ", " ;
        }
        index_10331_.increment () ;
        enumerator_10331.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10331) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                       const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR,
                                                                                       const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result << " reference class\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 15)) COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 15)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Embedded object pointer\n"
    " public: inline acStrongPtr_class * embeddedObjectPtr (void) const {\n"
    "   return (acStrongPtr_class *) mObjectPtr ;\n"
    " }\n"
    "  \n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n"
    "//--------------------------------- Property read access\n" ;
  GALGAS_uint index_1247_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1247 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result << "  public: class GALGAS_" ;
      result << enumerator_1247.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_1247.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " (void) const ;\n"
        "\n" ;
      index_1247_.increment () ;
      enumerator_1247.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                               const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                               const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                               const GALGAS_getterMap & in_GETTER_5F_MAP
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "acStrongPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_664_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_664 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_664.hasCurrentObject ()) {
      result << function_generateClassGetterDeclaration (enumerator_664.current_lkey (HERE), enumerator_664.current_mArgumentTypeList (HERE), enumerator_664.current_mHasCompilerArgument (HERE), enumerator_664.current_mReturnedType (HERE), enumerator_664.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 13)).stringValue () ;
      index_664_.increment () ;
      enumerator_664.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                               const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Properties\n" ;
  GALGAS_uint index_110_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_110 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_110.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << enumerator_110.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_110.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_110_.increment () ;
      enumerator_110.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_398_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_398 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_398.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_398.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_398.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_398_.increment () ;
      enumerator_398.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const = 0 ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                   const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                   const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                   const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                   const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue () ;
  result << " reference class\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n"
      "  typeComparisonResult result = kOperandEqual ;\n"
      "  const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = (const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " *) inOperandPtr ;\n"
      "  macroValidSharedObject (p, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ") ;\n" ;
    GALGAS_uint index_1073_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1073 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1073.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mProperty_" ;
        result << enumerator_1073.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mProperty_" ;
        result << enumerator_1073.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1073_.increment () ;
        enumerator_1073.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    const size_t myObjectPtr = size_t (mObjectPtr) ;\n"
    "    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n"
    "    if (myObjectPtr < operandObjectPtr) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (myObjectPtr > operandObjectPtr) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 60)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2800_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2800 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_2800.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_2800.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << "::constructor_" ;
          result << enumerator_2800.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2800.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2800_.increment () ;
          enumerator_2800.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_4) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (LOCATION_ARGS) {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (THERE)) ;\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4259_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4259 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4259.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << enumerator_4259.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4259.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).stringValue () ;
        if (enumerator_4259.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4259_.increment () ;
        enumerator_4259.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_8) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4663_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4663 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4663.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4663.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 107)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4663.hasNextObject ()) {
          result << " && " ;
        }
        index_4663_.increment () ;
        enumerator_4663.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_4927_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4927 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4927.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4927.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 113)).stringValue () ;
        if (enumerator_4927.hasNextObject ()) {
          result << ", " ;
        }
        index_4927_.increment () ;
        enumerator_4927.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_5175_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5175 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5175.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_5175.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_5175.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_5175.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  if (NULL != mObjectPtr) {\n"
          "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mProperty_" ;
        result << enumerator_5175.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_5175_.increment () ;
      enumerator_5175.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5974_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5974 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5974.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_5974.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::readProperty_" ;
      result << enumerator_5974.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue () ;
      result << " (void) const {\n"
        "  if (NULL == mObjectPtr) {\n"
        "    return GALGAS_" ;
      result << enumerator_5974.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).stringValue () ;
      result << " () ;\n"
        "  }else{\n"
        "    cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) mObjectPtr ;\n"
        "    macroValidSharedObject (p, cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    return p->mProperty_" ;
      result << enumerator_5974.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 145)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_5974_.increment () ;
      enumerator_5974.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 151)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 151)).stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7090_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7090 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7090.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7090.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).stringValue () ;
      result << " & in_" ;
      result << enumerator_7090.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).stringValue () ;
      if (enumerator_7090.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7090_.increment () ;
      enumerator_7090.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_10) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "acStrongPtr_class" ;
  }else if (kBoolFalse == test_11) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_7538_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7538 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7538.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_7538.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).stringValue () ;
      if (enumerator_7538.hasNextObject ()) {
        result << ", " ;
      }
      index_7538_.increment () ;
      enumerator_7538.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_12) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_7801_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7801 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7801.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_7801.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 177)).stringValue () ;
      result << " (in_" ;
      result << enumerator_7801.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 177)).stringValue () ;
      result << ")" ;
      index_7801_.increment () ;
      enumerator_7801.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 183)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 188)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t /* inIndentation */) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << "]\" ;\n"
        "}\n"
        "\n" ;
    }else if (kBoolFalse == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t inIndentation) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << ":\" ;\n" ;
      GALGAS_uint index_8794_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8794 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8794.hasCurrentObject ()) {
          result << "  mProperty_" ;
          result << enumerator_8794.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 198)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_8794.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_8794_.increment () ;
          enumerator_8794.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_15 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 206)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_9380_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9380 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9380 = enumerator_9380.hasCurrentObject () ;
      while (enumerator_9380.hasCurrentObject ()) {
        result << "mProperty_" ;
        result << enumerator_9380.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 213)).stringValue () ;
        if (enumerator_9380.hasNextObject ()) {
          result << ", " ;
        }
        index_9380_.increment () ;
        enumerator_9380.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9380) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Constructor and assignment from strong reference\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const class GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const class GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "//--------------------------------- Bang operator\n"
    "  public: GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " bang_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                                       const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */,
                                                                                                       const GALGAS_bool & /* in_HAS_5F_DEFAULT_5F_CONSTRUCTOR */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;\n"
    "    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;\n"
    "    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;\n"
    "    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;\n"
    "    if (myObjectPtr < operandObjectPtr) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (myObjectPtr > operandObjectPtr) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  cPtr_weakReference_class * proxyPtr = NULL ;\n"
    "  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;\n"
    "  if (p != NULL) {\n"
    "    proxyPtr = p->getProxy () ;\n"
    "  }\n"
    "  macroAssignSharedObject (mObjectPtr, proxyPtr) ;\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_1) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_nil (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::bang_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mObjectPtr != NULL) {\n"
    "    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;\n"
    "    acStrongPtr_class * strongPtr = p->strongObject () ;\n"
    "    if (strongPtr == NULL) {\n"
    "      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n"
    "    }else{\n"
    "      macroValidSharedObject (strongPtr, cPtr_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "      result = GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((cPtr_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) strongPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

