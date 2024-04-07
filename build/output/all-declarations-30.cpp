#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-30.h"

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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_24497 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 654)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_24497, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_24654 = var_receiverExpression_24497.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_24725 = extensionGetter_definition (var_receiverType_24654, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).readProperty_optionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_24848 ;
  const cMapElement_optionalMethodMap * objectArray_24874 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_24725.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (nullptr != objectArray_24874) {
      macroValidSharedObject (objectArray_24874, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_24848 = objectArray_24874->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_24994 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_25079 (var_optionalMethodMap_24725, EnumerationOrder::up) ;
    while (enumerator_25079.hasCurrentObject ()) {
      var_s_24994.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_25079.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
      enumerator_25079.gotoNextObject () ;
    }
    TC_Array <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_24994, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
    var_optionalMethodSignature_24848.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 677)).objectCompare (var_optionalMethodSignature_24848.getter_count (SOURCE_FILE ("instruction-if.galgas", 677)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (extensionGetter_definition (var_receiverType_24654, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (var_optionalMethodSignature_24848.getter_count (SOURCE_FILE ("instruction-if.galgas", 680)).getter_string (SOURCE_FILE ("instruction-if.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).add_operation (constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 681)).getter_string (SOURCE_FILE ("instruction-if.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_25703 = GALGAS_optionalMethodActualArgumentListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 683)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_25753 (constinArgument_inActualParameters, EnumerationOrder::up) ;
    cEnumerator_optionalMethodSignature enumerator_25830 (var_optionalMethodSignature_24848, EnumerationOrder::up) ;
    while (enumerator_25753.hasCurrentObject () && enumerator_25830.hasCurrentObject ()) {
      switch (enumerator_25753.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_26693 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_25753.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_25917_expression = extractPtr_26693->mAssociatedValue0 ;
          const GALGAS_location extractedValue_25928_location = extractPtr_26693->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_26246 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_25917_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_25830.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_26246, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25753.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26345 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)) ;
              TC_Array <FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_26345) ;
              inCompiler->emitSemanticError (enumerator_25753.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26345, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 699)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_25830.current_mFormalArgumentType (HERE), var_exp_26246.readProperty_mResultType (), extractedValue_25928_location, var_exp_26246, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 701)) ;
          }
          var_actualParameterList_25703.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualOutput (var_exp_26246  COMMA_SOURCE_FILE ("instruction-if.galgas", 702))  COMMA_SOURCE_FILE ("instruction-if.galgas", 702)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_27832 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_25753.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_26731_actualTypeName = extractPtr_27832->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_26755_constantName = extractPtr_27832->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_26731_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704)).readProperty_typeName ().readProperty_string ().objectCompare (extractedValue_26731_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707))) ;
              inCompiler->emitSemanticError (extractedValue_26731_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 705)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_27114 = GALGAS_string ("var_").add_operation (extractedValue_26755_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 709)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 709)).add_operation (extractedValue_26755_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 710)).getter_string (SOURCE_FILE ("instruction-if.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 710)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_26755_constantName, enumerator_25830.current_mFormalArgumentType (HERE), var_targetVariableCppName_27114, var_targetVariableCppName_27114, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 711)) ;
          }
          var_actualParameterList_25703.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualLetInput (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 717)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_27114  COMMA_SOURCE_FILE ("instruction-if.galgas", 717))  COMMA_SOURCE_FILE ("instruction-if.galgas", 717)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25753.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 719)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27648 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 719)) ;
              TC_Array <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_27648) ;
              inCompiler->emitSemanticError (enumerator_25753.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27648, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 720)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 720)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 720)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_29009 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_25753.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_27872_actualTypeName = extractPtr_29009->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_27896_variableName = extractPtr_29009->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_27872_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 723)).readProperty_typeName ().readProperty_string ().objectCompare (extractedValue_27872_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 726)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 726))) ;
              inCompiler->emitSemanticError (extractedValue_27872_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 724)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_28256 = GALGAS_string ("var_").add_operation (extractedValue_27896_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 728)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 728)).add_operation (extractedValue_27896_variableName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 729)).getter_string (SOURCE_FILE ("instruction-if.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 729)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_27896_variableName, GALGAS_bool (true), enumerator_25830.current_mFormalArgumentType (HERE), var_targetVariableCppName_28256, var_targetVariableCppName_28256, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 730)) ;
          }
          var_actualParameterList_25703.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 737)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_28256  COMMA_SOURCE_FILE ("instruction-if.galgas", 737))  COMMA_SOURCE_FILE ("instruction-if.galgas", 737)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25753.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 739)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_28825 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 739)) ;
              TC_Array <FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_28825) ;
              inCompiler->emitSemanticError (enumerator_25753.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28825, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 740)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 740)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 740)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_29592 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_25753.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_29042_checkSelector = extractPtr_29592->mAssociatedValue0 ;
          const GALGAS_location extractedValue_29056_location = extractPtr_29592->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_29065_idx = extractPtr_29592->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_29084 = GALGAS_string ("var_unused_").add_operation (extractedValue_29065_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).add_operation (extractedValue_29056_location.getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).getter_string (SOURCE_FILE ("instruction-if.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)) ;
          var_actualParameterList_25703.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25830.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 744)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_29084  COMMA_SOURCE_FILE ("instruction-if.galgas", 744))  COMMA_SOURCE_FILE ("instruction-if.galgas", 744)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_29042_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25753.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_25830.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 746)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_29408 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 746)) ;
              TC_Array <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_29408) ;
              inCompiler->emitSemanticError (enumerator_25753.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_29408, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 747)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 747)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 747)) ;
            }
          }
        }
        break ;
      }
      enumerator_25753.gotoNextObject () ;
      enumerator_25830.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::class_func_optionalMethodCall (var_receiverExpression_24497, constinArgument_inOptionalMethodName, var_actualParameterList_25703  COMMA_SOURCE_FILE ("instruction-if.galgas", 751))  COMMA_SOURCE_FILE ("instruction-if.galgas", 751)) ;
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
  GALGAS_string var_testVar_32615 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 832)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 833)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_32778 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_32778.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 835)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
    }
    switch (enumerator_32778.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_33207 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_32778.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32959_exp = extractPtr_33207->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_33132 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32959_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33132, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_32615.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)).add_operation (var_cppVarName_33132, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 846)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_33952 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_32778.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_33243_targetVarCppName = extractPtr_33952->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33260_exp = extractPtr_33952->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_33264_targetType = extractPtr_33952->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_33275_testType = extractPtr_33952->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_33297 = extensionGetter_identifierRepresentation (extractedValue_33264_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 848)) ;
        GALGAS_string var_testTypeName_33362 = extensionGetter_identifierRepresentation (extractedValue_33275_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 849)) ;
        GALGAS_string var_cppVarName_33579 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33260_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33579, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_33297, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)).add_operation (extractedValue_33243_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 857)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_33362, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (var_cppVarName_33579, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 858)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr == ").add_operation (extractedValue_33243_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 860)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 860)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 860)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 861)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_35689 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_32778.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33987_receiverExpression = extractPtr_35689->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_34006_optionalMethodName = extractPtr_35689->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_34025_parameters = extractPtr_35689->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_34220 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33987_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_34220, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)) ;
        GALGAS_stringlist var_actualParameterNameList_34261 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 870)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_34302 (extractedValue_34025_parameters, EnumerationOrder::up) ;
        while (enumerator_34302.hasCurrentObject ()) {
          switch (enumerator_34302.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_34659 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_34302.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_34382_expression = extractPtr_34659->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_34593 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_34382_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_34593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 874)) ;
              var_actualParameterNameList_34261.addAssign_operation (var_argumentCppName_34593  COMMA_SOURCE_FILE ("instruction-if.galgas", 881)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_34880 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_34302.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34704_typeName = extractPtr_34880->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34713_constantName = extractPtr_34880->mAssociatedValue1 ;
              var_actualParameterNameList_34261.addAssign_operation (extractedValue_34713_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 883)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34704_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 884)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (extractedValue_34713_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 884)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_35092 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_34302.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34916_typeName = extractPtr_35092->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34925_variableName = extractPtr_35092->mAssociatedValue1 ;
              var_actualParameterNameList_34261.addAssign_operation (extractedValue_34925_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 886)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34916_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (extractedValue_34925_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 887)) ;
            }
            break ;
          }
          enumerator_34302.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_35131 = GALGAS_string ("optionalResult").add_operation (extractedValue_34006_optionalMethodName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 890)).getter_string (SOURCE_FILE ("instruction-if.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 890)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_35131, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)).add_operation (var_cppVarName_34220, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 891)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_34006_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 892)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 892)) ;
        cEnumerator_stringlist enumerator_35361 (var_actualParameterNameList_34261, EnumerationOrder::up) ;
        while (enumerator_35361.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35361.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 895)) ;
          if (enumerator_35361.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 897)) ;
          }
          enumerator_35361.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 899)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_35131, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 900)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 901)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 901)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 901)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 902)) ;
      }
      break ;
    }
    enumerator_32778.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 906)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 906)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 906)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 907)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 915)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_36040 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_36040.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 917)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 918)) ;
    enumerator_36040.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 921)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_32615, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 922)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 922)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 922)) ;
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
      GALGAS_unifiedTypeMapEntry joker_6412 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6412, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 163)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_7321 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7396 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7321, var_targetVariableCppName_7396, var_targetVariableCppName_7396, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 182)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::class_func_new (var_targetType_7321, var_targetVariableCppName_7396  COMMA_SOURCE_FILE ("instruction-let.galgas", 189))  COMMA_SOURCE_FILE ("instruction-let.galgas", 189)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_8809 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 208)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8809, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8857 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)).getter_string (SOURCE_FILE ("instruction-let.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8809.readProperty_mResultType (), var_targetVariableCppName_8857, var_targetVariableCppName_8857, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 217)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_8809.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8857, var_expression_8809  COMMA_SOURCE_FILE ("instruction-let.galgas", 224))  COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_10070 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
  GALGAS_semanticExpressionForGeneration var_expression_10440 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10070, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10440, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_10488 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)).getter_string (SOURCE_FILE ("instruction-let.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_10070, var_targetVariableCppName_10488, var_targetVariableCppName_10488, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 255)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_10070, var_targetVariableCppName_10488, var_targetVariableCppName_10488, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 262)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10070, var_expression_10440.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10440, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 271)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_targetType_10070, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10488, var_expression_10440  COMMA_SOURCE_FILE ("instruction-let.galgas", 273))  COMMA_SOURCE_FILE ("instruction-let.galgas", 273)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 320)) ;
  GALGAS_string var_sourceVar_13750 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13750, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 321)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (var_sourceVar_13750, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 328)) ;
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
  cEnumerator_logListAST enumerator_4612 (temp_0.readProperty_mLogList (), EnumerationOrder::up) ;
  while (enumerator_4612.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4612.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    enumerator_4612.gotoNextObject () ;
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
  cEnumerator_logListAST enumerator_5320 (temp_0.readProperty_mLogList (), EnumerationOrder::up) ;
  while (enumerator_5320.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_5653 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5320.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5653, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 143)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::class_func_new (enumerator_5320.current_mLogMessage (HERE), var_expression_5653  COMMA_SOURCE_FILE ("instruction-log.galgas", 153))  COMMA_SOURCE_FILE ("instruction-log.galgas", 153)) ;
    enumerator_5320.gotoNextObject () ;
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
  GALGAS_string var_logVar_6762 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6762, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 178)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_6762.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 185)) ;
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
  GALGAS_semanticExpressionForGeneration var_variantExpression_6550 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6550, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_variantExpression_6550.readProperty_mResultType (), var_variantExpression_6550.readProperty_mLocation (), var_variantExpression_6550, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_7082 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7082, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_loopExpression_7082.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (extensionGetter_definition (var_loopExpression_7082.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 181)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7968 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 188)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 189)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 190)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7968, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 183)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_8385 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 202)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 203)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 204)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8385, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 197)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 211)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::class_func_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6550, var_first_5F_instructionList_7968, var_loopExpression_7082, var_second_5F_instructionList_8385  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213)) ;
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
  GALGAS_string var_variantCppVarName_9936 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9936, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9936, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_10081 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_10081, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (var_variantCppVarName_9936, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_10273 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  }
  GALGAS_string var_loopExpressionVar_10848 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10848, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10273.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopExpressionVar_10848, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopExpressionVar_10848, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_variantVar_10081, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (var_loopVar_10273, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_10081, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 290)) ;
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
  GALGAS_semanticExpressionForGeneration var_loopExpression_5937 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_5937, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 130)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_loopExpression_5937.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (extensionGetter_definition (var_loopExpression_5937.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 141)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 145)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6823 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 152)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 153)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 154)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6823, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 147)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7240 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 167)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 168)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7240, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 161)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 175)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6823, var_loopExpression_5937, var_second_5F_instructionList_7240  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177)) ;
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
  GALGAS_string var_loopVar_8844 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8844, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8844, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)) ;
  }
  GALGAS_string var_loopExpressionVar_9445 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_9445, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8844.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopExpressionVar_9445, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopVar_8844, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (var_loopVar_8844, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (var_loopExpressionVar_9445, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8844, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 72)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_4224 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4224, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 87)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expression_4224.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4224.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::class_func_new (var_expression_4224, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 102))  COMMA_SOURCE_FILE ("instruction-message.galgas", 102)) ;
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
  GALGAS_string var_messageCppVarName_5689 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5689, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 126)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (var_messageCppVarName_5689, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 134)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_4157 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_4157.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4157.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 100)) ;
    enumerator_4157.gotoNextObject () ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_methodCallInstructionAST temp_1 = this ;
    test_0 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiverExpression ().ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_methodCallInstructionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_receiverExpression_5285 ;
  const GALGAS_methodCallInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 122)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5285, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119)) ;
  GALGAS_methodKind var_kind_5455 ;
  GALGAS_formalParameterSignature var_routineSignature_5471 ;
  GALGAS_bool var_hasCompilerArgument_5508 ;
  GALGAS_string var_errorMessage_5548 ;
  const GALGAS_methodCallInstructionAST temp_4 = this ;
  GALGAS_location joker_5494 ; // Joker input parameter
  GALGAS_methodQualifier joker_5534 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5285.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)).readProperty_instanceMethodMap ().method_searchKey (temp_4.readProperty_mMethodName (), var_kind_5455, var_routineSignature_5471, joker_5494, var_hasCompilerArgument_5508, joker_5534, var_errorMessage_5548, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_errorMessage_5548.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_methodCallInstructionAST temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5548, fixItArray7  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 139)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6097 ;
  const GALGAS_methodCallInstructionAST temp_8 = this ;
  const GALGAS_methodCallInstructionAST temp_9 = this ;
  const GALGAS_methodCallInstructionAST temp_10 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_10.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)), var_routineSignature_5471, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6097, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 142)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_6193 = var_receiverExpression_5285.readProperty_mResultType () ;
  GALGAS_bool var_searching_6243 = GALGAS_bool (true) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 157)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).isValid ()) {
        uint32_t variant_6300 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).uintValue () ;
        bool loop_6300 = true ;
        while (loop_6300) {
          loop_6300 = var_searching_6243.isValid () ;
          if (loop_6300) {
            loop_6300 = var_searching_6243.boolValue () ;
          }
          if (loop_6300 && (0 == variant_6300)) {
            loop_6300 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
          }
          if (loop_6300) {
            variant_6300 -- ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = extensionGetter_definition (var_baseType_6193, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 159)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_searching_6243 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_methodCallInstructionAST temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_6193, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_instanceMethodMap ().getter_hasKey (temp_14.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_6193 = extensionGetter_definition (var_baseType_6193, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_6243 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_15 = this ;
  const GALGAS_methodCallInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::class_func_new (temp_15.readProperty_mInstructionLocation (), var_receiverExpression_5285.readProperty_mResultType (), var_receiverExpression_5285, temp_16.readProperty_mMethodName ().readProperty_string (), var_kind_5455, var_actualParameterListForGeneration_6097, var_hasCompilerArgument_5508, var_baseType_6193  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
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
  GALGAS_string var_receiverCppName_8395 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8395, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8395 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_8483 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8528 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 215)) ;
  GALGAS_stringlist var_inputVariableList_8581 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 216)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_8624 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_8624.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8867 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8624.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8528, var_inputVariableList_8581, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8867, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
    var_parameterCppNameList_8483.addAssign_operation (var_parameterCppName_8867  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
    enumerator_8624.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 225)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (var_receiverCppName_8395, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (var_receiverCppName_8395, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_8395.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_9800 (var_parameterCppNameList_8483, EnumerationOrder::up) ;
  while (enumerator_9800.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9800.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)) ;
    if (enumerator_9800.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 238)) ;
    }
    enumerator_9800.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::equal, var_parameterCppNameList_8483.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 240)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
  cEnumerator_actualParameterListForGeneration enumerator_10485 (temp_17.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_10485.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10485.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 256)) ;
    enumerator_10485.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@superInitInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_superInitInstructionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_3157 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_3157.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3157.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 78)) ;
    enumerator_3157.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@superInitInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3927 ;
    GALGAS_selfMutability var_selfMutability_4013 ;
    const bool optionalResult3906 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_3927, var_selfMutability_4013) ;
    if (!optionalResult3906) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, var_selfMutability_4013.objectCompare (GALGAS_selfMutability::class_func_initializer (SOURCE_FILE ("instruction-super-init.galgas", 93)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        test_0 = extensionGetter_definition (var_selfType_3927, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 94)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-init.galgas", 94)).boolEnum () ;
        if (kBoolTrue == test_0) {
          switch (extensionGetter_definition (var_selfType_3927, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 95)).readProperty_superType ().enumValue ()) {
          case GALGAS_unifiedTypeMapEntry::kNotBuilt:
            break ;
          case GALGAS_unifiedTypeMapEntry::kEnum_element:
            {
              const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_6583 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (extensionGetter_definition (var_selfType_3927, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 95)).readProperty_superType ().unsafePointer ()) ;
              const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_4193_superType = extractPtr_6583->mAssociatedValue0 ;
              GALGAS_unifiedTypeDefinition var_superTypeDefinition_4218 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) extractedValue_4193_superType.bang_unifiedTypeMapElementClass_2D_weak (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 97)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 97)) ;
              GALGAS_initializerMap var_superClassInitializerMap_4326 = var_superTypeDefinition_4218.readProperty_initializerMap () ;
              const GALGAS_superInitInstructionAST temp_1 = this ;
              const GALGAS_superInitInstructionAST temp_2 = this ;
              GALGAS_lstring var_signature_4400 = GALGAS_lstring::class_func_new (extensionGetter_initializerSignature (temp_1.readProperty_mActualParameterList (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 100)), temp_2.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 100)) ;
              GALGAS_functionSignature var_formalSignature_4564 ;
              var_superClassInitializerMap_4326.method_searchKey (var_signature_4400, var_formalSignature_4564, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 101)) ;
              cEnumerator_typedPropertyList enumerator_4679 (var_superTypeDefinition_4218.readProperty_allTypedPropertyList (), EnumerationOrder::up) ;
              while (enumerator_4679.hasCurrentObject ()) {
                enumGalgasBool test_3 = kBoolTrue ;
                if (kBoolTrue == test_3) {
                  test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_4679.current (HERE).readProperty_initialization ().objectCompare (GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("instruction-super-init.galgas", 104)))).boolEnum () ;
                  if (kBoolTrue == test_3) {
                    {
                    const GALGAS_superInitInstructionAST temp_4 = this ;
                    GALGAS_unifiedTypeMapEntry joker_4903_3 ; // Joker input parameter
                    GALGAS_string joker_4903_2 ; // Joker input parameter
                    GALGAS_string joker_4903_1 ; // Joker input parameter
                    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GALGAS_lstring::class_func_new (GALGAS_string ("self.").add_operation (enumerator_4679.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 106)), temp_4.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 106)), joker_4903_3, joker_4903_2, joker_4903_1, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 105)) ;
                    }
                  }
                }
                enumerator_4679.gotoNextObject () ;
              }
              const GALGAS_superInitInstructionAST temp_5 = this ;
              extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)) ;
              GALGAS_semanticExpressionListForGeneration var_actualParameterListForGeneration_5076 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-super-init.galgas", 113)) ;
              const GALGAS_superInitInstructionAST temp_6 = this ;
              cEnumerator_functionSignature enumerator_5177 (var_formalSignature_4564, EnumerationOrder::up) ;
              cEnumerator_actualOutputArgumentList enumerator_5212 (temp_6.readProperty_mActualParameterList (), EnumerationOrder::up) ;
              while (enumerator_5177.hasCurrentObject () && enumerator_5212.hasCurrentObject ()) {
                GALGAS_semanticExpressionForGeneration var_expression_5588 ;
                callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5212.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5177.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5588, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 115)) ;
                {
                routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5177.current (HERE).readProperty_mFormalArgumentType (), var_expression_5588.readProperty_mResultType (), enumerator_5212.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_5588, inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 124)) ;
                }
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5177.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5212.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    GALGAS_string temp_8 ;
                    const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5177.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      temp_8 = enumerator_5177.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 132)) ;
                    }else if (kBoolFalse == test_9) {
                      temp_8 = GALGAS_string::makeEmptyString () ;
                    }
                    GALGAS_string var_s_5940 = GALGAS_string ("!").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 131)) ;
                    TC_Array <FixItDescription> fixItArray10 ;
                    appendFixItActions (fixItArray10, kFixItReplace, var_s_5940) ;
                    inCompiler->emitSemanticError (enumerator_5212.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5940, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 135)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 135)), fixItArray10  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 135)) ;
                  }
                }
                var_actualParameterListForGeneration_5076.addAssign_operation (var_expression_5588  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 138)) ;
                enumerator_5177.gotoNextObject () ;
                enumerator_5212.gotoNextObject () ;
              }
              const GALGAS_superInitInstructionAST temp_11 = this ;
              ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_superInitInstructionForGeneration::class_func_new (temp_11.readProperty_mInstructionLocation (), extensionGetter_initializerSignature (var_formalSignature_4564, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 143)), var_actualParameterListForGeneration_5076, var_superTypeDefinition_4218.readProperty_typeName ().readProperty_string ()  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 141))  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 141)) ;
            }
            break ;
          case GALGAS_unifiedTypeMapEntry::kEnum_null:
            {
              const GALGAS_superInitInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("super.init is not available, current class has no super class"), fixItArray13  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 148)) ;
            }
            break ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_superInitInstructionAST temp_14 = this ;
    TC_Array <FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("super.init should be call in a class initializer"), fixItArray15  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 151)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@superInitInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_getterArgumentCppNameList_7927 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-super-init.galgas", 176)) ;
  const GALGAS_superInitInstructionForGeneration temp_0 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_7968 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_7968.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_8187 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7968.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8187, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 178)) ;
    var_getterArgumentCppNameList_7927.addAssign_operation (var_argumentCppName_8187  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 185)) ;
    enumerator_7968.gotoNextObject () ;
  }
  const GALGAS_superInitInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_1.readProperty_mSuperTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 187)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 187)) ;
  const GALGAS_superInitInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_2.readProperty_mSuperInitializerSignature ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 189)) ;
  cEnumerator_stringlist enumerator_8467 (var_getterArgumentCppNameList_7927, EnumerationOrder::up) ;
  while (enumerator_8467.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8467.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 191)) ;
    enumerator_8467.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 193)) COMMA_SOURCE_FILE ("instruction-super-init.galgas", 193)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 194)).add_operation (GALGAS_string (") ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 194)) ;
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
  cEnumerator_actualParameterListAST enumerator_3262 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_3262.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3262.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
    enumerator_3262.gotoNextObject () ;
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
  GALGAS_formalParameterSignature var_routineSignature_4239 ;
  GALGAS_bool var_isFilePrivate_4289 ;
  GALGAS_lstring var_routineMangledName_4335 ;
  const GALGAS_procCallInstructionAST temp_0 = this ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4239, var_isFilePrivate_4289, var_routineMangledName_4335, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
  GALGAS_lstring var_usefulnessName_4387 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4335, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4387 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isFilePrivate_4289.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_4604 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).objectCompare (var_procDeclarationLocation_4604.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4604.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5367 ;
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (var_routineMangledName_4335.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)), var_routineSignature_4239, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5367, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::class_func_new (var_routineMangledName_4335, var_actualParameterListForGeneration_5367  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
  GALGAS_stringlist var_parameterCppNameList_6777 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6824 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  GALGAS_stringlist var_inputVariableList_6879 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 149)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6912 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_6912.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7211 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6912.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6824, var_inputVariableList_6879, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7211, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
    var_parameterCppNameList_6777.addAssign_operation (var_parameterCppName_7211  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    enumerator_6912.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
  cEnumerator_stringlist enumerator_7430 (var_parameterCppNameList_6777, EnumerationOrder::up) ;
  while (enumerator_7430.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7430.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)) ;
    enumerator_7430.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
  const GALGAS_procCallInstructionForGeneration temp_4 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7761 (temp_4.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_7761.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7761.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
    enumerator_7761.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 79)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_4081 ;
    GALGAS_selfMutability var_selfMutability_4111 ;
    const bool optionalResult4060 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_4081, var_selfMutability_4111) ;
    if (!optionalResult4060) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_4111, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 95)).operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 96)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_4581 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_4081, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4581, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 99)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_4081, var_expression_4581.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4581, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 109)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::class_func_new (var_selfType_4081, var_selfType_4081, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 116)).readProperty_string (), var_expression_4581, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <FixItDescription> fixItArray8 ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_10453 ;
    GALGAS_selfMutability var_selfMutability_10489 ;
    const bool optionalResult10426 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_10453, var_selfMutability_10489) ;
    if (!optionalResult10426) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_10489, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 256)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 257)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_10706 = extensionGetter_definition (var_selfType_10453, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_10706.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 261)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_10453, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 265)).objectCompare (var_addAssignOperatorArguments_10706.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 265)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_10453, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)).add_operation (var_addAssignOperatorArguments_10706.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 268)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 269)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 269)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_11495 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 271)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputArgumentList enumerator_11600 (temp_12.readProperty_mExpressions (), EnumerationOrder::up) ;
          cEnumerator_functionSignature enumerator_11686 (var_addAssignOperatorArguments_10706, EnumerationOrder::up) ;
          while (enumerator_11600.hasCurrentObject () && enumerator_11686.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_12038 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11600.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11686.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12038, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11686.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11600.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11686.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_11686.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_12146 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
                TC_Array <FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_12146) ;
                inCompiler->emitSemanticError (enumerator_11600.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12146, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 284)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 284)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 284)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11686.current_mFormalArgumentType (HERE), var_expression_12038.readProperty_mResultType (), enumerator_11600.current_mEndOfExpressionLocation (HERE), var_expression_12038, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 286)) ;
            }
            var_effectiveParameterList_11495.addAssign_operation (var_expression_12038  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 287)) ;
            enumerator_11600.gotoNextObject () ;
            enumerator_11686.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfType_10453, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 295)), var_effectiveParameterList_11495  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 290))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 290)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_13615 ;
    GALGAS_selfMutability var_selfMutability_13651 ;
    const bool optionalResult13588 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_13615, var_selfMutability_13651) ;
    if (!optionalResult13588) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_13651, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 319)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 319)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 320)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13615, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 323)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 323)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13615, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 325)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 325)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 325)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 324)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_14454 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_13615, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_14454, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 328)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_13615, var_expression_14454.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_14454, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 338)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_13615, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 345)), var_expression_14454, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 350)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_15626 ;
    GALGAS_selfMutability var_selfMutability_15662 ;
    const bool optionalResult15599 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_15626, var_selfMutability_15662) ;
    if (!optionalResult15599) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_15662, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 367)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 367)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_15626, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 378)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 378)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 378)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_15626, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 380)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 380)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 380)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 379)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_16772 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_15626, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_16772, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 383)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_15626, var_expression_16772.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_16772, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 393)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_15626, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 400)), var_expression_16772, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 395))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 395)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 405)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_17943 ;
    GALGAS_selfMutability var_selfMutability_17979 ;
    const bool optionalResult17916 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_17943, var_selfMutability_17979) ;
    if (!optionalResult17916) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_17979, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 422)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 422)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 423)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_17943, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 426)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 426)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_17943, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 427)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_18777 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_17943, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_18777, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_17943, var_expression_18777.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18777, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 441)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_17943, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 448)), var_expression_18777, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 443))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 443)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 453)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_20021 ;
    GALGAS_selfMutability var_selfMutability_20057 ;
    const bool optionalResult19994 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_20021, var_selfMutability_20057) ;
    if (!optionalResult19994) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_20057, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 472)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 472)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_20021, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 476)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 476)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_20021, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 477)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_20855 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_20021, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_20855, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 481)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_20021, var_expression_20855.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_20855, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 491)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_20021, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 498)), var_expression_20855, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 493))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 493)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 503)) ;
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
  cEnumerator_actualParameterListAST enumerator_7303 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_7303.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7303.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
    enumerator_7303.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_7669 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_7669.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7669.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 223)) ;
    enumerator_7669.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_receiverType_8509 ;
  GALGAS_string var_targetVariableCppName_8536 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8572 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_8727 ;
        GALGAS_selfMutability var_selfMutability_8777 ;
        const bool optionalResult8686 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_8727, var_selfMutability_8777) ;
        if (!optionalResult8686) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_9088 ;
            const bool optionalResult9060 = extensionGetter_definition (var_selfType_8727, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 249)).readProperty_typeKind ().optional_classType (var_isReference_9088) ;
            if (!optionalResult9060) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_9088.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = extensionGetter_selfIsMutable (var_selfMutability_8777, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 250)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 250)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 251)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_9261 = extensionGetter_definition (var_selfType_8727, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 253)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_9366 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_AccessControl joker_9358 ; // Joker input parameter
          var_propertyMap_9261.method_searchKey (temp_7.readProperty_mReceiverName (), joker_9358, var_isConstant_9366, var_receiverType_8509, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 254)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9366.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 256)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_8572 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_8536 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 259)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 260)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)) ;
        var_receiverType_8509.drop () ; // Release error dropped variable
        var_targetVariableCppName_8536.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_8572.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_8509, var_targetVariableCppName_8536, var_nameForCheckingFormalParameterUsing_8572, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 267)) ;
    }
  }
  GALGAS_bool var_ok_10144 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_10160 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_10211 (temp_16.readProperty_mReceiverStructProperties (), EnumerationOrder::up) ;
  bool bool_17 = var_ok_10144.isValidAndTrue () ;
  if (enumerator_10211.hasCurrentObject () && bool_17) {
    while (enumerator_10211.hasCurrentObject () && bool_17) {
      var_ok_10144 = extensionGetter_definition (var_receiverType_8509, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 278)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 278)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_10144.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 279)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_10160, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 280)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_10430 = extensionGetter_definition (var_receiverType_8509, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 282)).readProperty_propertyMap () ;
        GALGAS_AccessControl var_accessControl_10523 ;
        GALGAS_bool var_isConstant_10542 ;
        var_propertyMap_10430.method_searchKey (enumerator_10211.current_mValue (HERE), var_accessControl_10523, var_isConstant_10542, var_receiverType_8509, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 283)) ;
        extensionMethod_checkSetAccess (var_accessControl_10523, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_10211.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)) ;
        var_errorLocation_10160 = enumerator_10211.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isConstant_10542.boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_10211.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 287)) ;
          }
        }
      }
      enumerator_10211.gotoNextObject () ;
      if (enumerator_10211.hasCurrentObject ()) {
        bool_17 = var_ok_10144.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_10850 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_setterCallInstructionAST temp_23 = this ;
    test_22 = GALGAS_bool (ComparisonKind::notEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_setterCallInstructionAST temp_24 = this ;
      var_castType_10850 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 294)) ;
      {
      const GALGAS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_8509, var_castType_10850, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)) ;
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_castType_10850 = var_receiverType_8509 ;
  }
  GALGAS_methodKind var_kind_11209 ;
  GALGAS_formalParameterSignature var_routineSignature_11223 ;
  GALGAS_bool var_hasCompilerArgument_11249 ;
  GALGAS_string var_setterErrorMessage_11285 ;
  const GALGAS_setterCallInstructionAST temp_26 = this ;
  GALGAS_methodQualifier joker_11273 ; // Joker input parameter
  extensionGetter_definition (var_castType_10850, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 300)).readProperty_setterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_11209, var_routineSignature_11223, var_hasCompilerArgument_11249, joker_11273, var_setterErrorMessage_11285, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 300)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (ComparisonKind::notEqual, var_setterErrorMessage_11285.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_setterCallInstructionAST temp_28 = this ;
      TC_Array <FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_11285, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 309)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_11811 ;
  const GALGAS_setterCallInstructionAST temp_30 = this ;
  const GALGAS_setterCallInstructionAST temp_31 = this ;
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), var_routineSignature_11223, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11811, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 312)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_11901 = var_castType_10850 ;
  GALGAS_bool var_searching_11927 = GALGAS_bool (true) ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 327)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 328)).isValid ()) {
        uint32_t variant_11980 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 328)).uintValue () ;
        bool loop_11980 = true ;
        while (loop_11980) {
          loop_11980 = var_searching_11927.isValid () ;
          if (loop_11980) {
            loop_11980 = var_searching_11927.boolValue () ;
          }
          if (loop_11980 && (0 == variant_11980)) {
            loop_11980 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
          }
          if (loop_11980) {
            variant_11980 -- ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_11901, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 329)).boolEnum () ;
              if (kBoolTrue == test_34) {
                var_searching_11927 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_11901, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)).readProperty_setterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_baseType_11901 = extensionGetter_definition (var_baseType_11901, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).readProperty_superType () ;
                }
              }
              if (kBoolFalse == test_35) {
                var_searching_11927 = GALGAS_bool (false) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::class_func_new (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_8536, var_nameForCheckingFormalParameterUsing_8572, temp_38.readProperty_mReceiverStructProperties (), var_castType_10850, var_receiverType_8509, temp_39.readProperty_mSetterName (), var_kind_11209, var_actualParameterListForGeneration_11811, var_hasCompilerArgument_11249, var_baseType_11901  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_13348 ;
    GALGAS_selfMutability var_selfMutability_13384 ;
    const bool optionalResult13321 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_13348, var_selfMutability_13384) ;
    if (!optionalResult13321) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_13384, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 369)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)) ;
        }
      }
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_4.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)) ;
      GALGAS_methodKind var_kind_13767 ;
      GALGAS_formalParameterSignature var_routineSignature_13777 ;
      GALGAS_bool var_hasCompilerArgument_13799 ;
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      GALGAS_methodQualifier joker_13819 ; // Joker input parameter
      GALGAS_string joker_13822 ; // Joker input parameter
      extensionGetter_definition (var_selfType_13348, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 375)).readProperty_setterMap ().method_searchKey (temp_5.readProperty_mSetterName (), var_kind_13767, var_routineSignature_13777, var_hasCompilerArgument_13799, joker_13819, joker_13822, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 375)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_14264 ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      extensionMethod_analyzeRoutineArguments (temp_6.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_7.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_8.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)), var_routineSignature_13777, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_14264, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 377)) ;
      const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfType_13348, temp_9.readProperty_mSetterName (), var_kind_13767, var_actualParameterListForGeneration_14264, var_hasCompilerArgument_13799  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_10 = this ;
    TC_Array <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 399)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_16364 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_16411 (temp_1.readProperty_mReceiverStructAttributes (), EnumerationOrder::up) ;
  while (enumerator_16411.hasCurrentObject ()) {
    var_receiverCppName_16364.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_16411.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)) ;
    enumerator_16411.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 445)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_16643 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_16688 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 448)) ;
  GALGAS_stringlist var_inputVariableList_16741 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_16772 (temp_3.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_16772.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_17057 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_16772.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16688, var_inputVariableList_16741, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_17057, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 451)) ;
    var_parameterCppNameList_16643.addAssign_operation (var_parameterCppName_17057  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)) ;
    enumerator_16772.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 466)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (ComparisonKind::greaterThan, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 467)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16364.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_17640 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (var_pointerUniqueName_17640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)).add_operation (var_receiverCppName_16364, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_17640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (var_pointerUniqueName_17640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_17640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (GALGAS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (var_pointerUniqueName_17640, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)).add_operation (var_receiverCppName_16364, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16364.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_19387 (var_parameterCppNameList_16643, EnumerationOrder::up) ;
  while (enumerator_19387.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19387.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)) ;
    if (enumerator_19387.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)) ;
    }
    enumerator_19387.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (ComparisonKind::notEqual, var_parameterCppNameList_16643.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 498)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 499)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (ComparisonKind::notEqual, var_parameterCppNameList_16643.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 504)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 520)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 521)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_20509 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 523)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_20554 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 524)) ;
  GALGAS_stringlist var_inputVariableList_20607 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 525)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_20650 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_20650.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_20943 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_20650.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_20554, var_inputVariableList_20607, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20943, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 527)) ;
    var_parameterCppNameList_20509.addAssign_operation (var_parameterCppName_20943  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)) ;
    enumerator_20650.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 541)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 542)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 542)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 542)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 542)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 544)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 547)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 547)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_21922 (var_parameterCppNameList_20509, EnumerationOrder::up) ;
  while (enumerator_21922.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_21922.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
    if (enumerator_21922.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 555)) ;
    }
    enumerator_21922.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (ComparisonKind::notEqual, var_parameterCppNameList_20509.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 558)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 559)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 561)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 561)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 562)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 563)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (ComparisonKind::notEqual, var_parameterCppNameList_20509.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 564)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 565)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 568)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_8197 (temp_1.readProperty_mBranches (), EnumerationOrder::up) ;
  while (enumerator_8197.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8197.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 234)) ;
    enumerator_8197.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_9168 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 254)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_9168, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 251)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_constantIndexMap var_enumConstantMap_9332 ;
    const bool optionalResult9305 = extensionGetter_definition (var_switchExpression_9168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).readProperty_typeKind ().optional_enumType (var_enumConstantMap_9332) ;
    if (!optionalResult9305) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      GALGAS_stringset var_constantsNamedInSwitchInstruction_9484 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("instruction-switch.galgas", 264)) ;
      {
      extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)) ;
      }
      GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_9634 = GALGAS_switchBranchesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 267)) ;
      const GALGAS_switchInstructionAST temp_2 = this ;
      cEnumerator_switchBranchesAST enumerator_9739 (temp_2.readProperty_mBranches (), EnumerationOrder::up) ;
      while (enumerator_9739.hasCurrentObject ()) {
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
        }
        GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9859 = GALGAS_extractedAssociatedValuesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 270)) ;
        GALGAS_bool var_firstConstant_9920 = GALGAS_bool (true) ;
        cEnumerator_lstringlist enumerator_9952 (enumerator_9739.current_mSwitchConstantList (HERE), EnumerationOrder::up) ;
        while (enumerator_9952.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_enumConstantMap_9332.getter_hasKey (enumerator_9952.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_9484.getter_hasKey (enumerator_9952.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_9952.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9952.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_9484.addAssign_operation (enumerator_9952.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)) ;
              GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10386 ;
              GALGAS_uint joker_10353 ; // Joker input parameter
              var_enumConstantMap_9332.method_searchKey (enumerator_9952.current_mValue (HERE), joker_10353, var_associatedTypeList_10386, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10386.getter_count (SOURCE_FILE ("instruction-switch.galgas", 280)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_9739.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 280)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_9952.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_9952.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (ComparisonKind::equal, var_associatedTypeList_10386.getter_count (SOURCE_FILE ("instruction-switch.galgas", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_9739.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_9952.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9952.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeList_10386.getter_count (SOURCE_FILE ("instruction-switch.galgas", 286)).objectCompare (enumerator_9739.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 286)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      GALGAS_string temp_11 ;
                      const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10386.getter_count (SOURCE_FILE ("instruction-switch.galgas", 289)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        temp_11 = GALGAS_string ("s") ;
                      }else if (kBoolFalse == test_12) {
                        temp_11 = GALGAS_string::makeEmptyString () ;
                      }
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_9952.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9952.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (var_associatedTypeList_10386.getter_count (SOURCE_FILE ("instruction-switch.galgas", 288)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)), fixItArray13  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
                    }
                  }
                  if (kBoolFalse == test_10) {
                    GALGAS_bigint var_associatedValueIndex_11134 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)) ;
                    cEnumerator_unifiedTypeMapEntryList enumerator_11176 (var_associatedTypeList_10386, EnumerationOrder::up) ;
                    cEnumerator_switchExtractedValuesListAST enumerator_11251 (enumerator_9739.current_mAssociatedValuesExtraction (HERE), EnumerationOrder::up) ;
                    while (enumerator_11176.hasCurrentObject () && enumerator_11251.hasCurrentObject ()) {
                      enumGalgasBool test_14 = kBoolTrue ;
                      if (kBoolTrue == test_14) {
                        test_14 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11251.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_14) {
                          enumGalgasBool test_15 = kBoolTrue ;
                          if (kBoolTrue == test_15) {
                            test_15 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_11176.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_11251.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                            if (kBoolTrue == test_15) {
                              TC_Array <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_11251.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_11176.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)), fixItArray16  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
                            }
                          }
                        }
                      }
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = var_firstConstant_9920.operator_and (GALGAS_bool (ComparisonKind::notEqual, enumerator_11251.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          GALGAS_string var_cppName_11722 = GALGAS_string ("extractedValue_").add_operation (enumerator_11251.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)).add_operation (enumerator_11251.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
                          var_extractedAssociatedValuesForGeneration_9859.addAssign_operation (enumerator_11176.current_mEntry (HERE), var_cppName_11722, var_associatedValueIndex_11134.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
                          enumGalgasBool test_18 = kBoolTrue ;
                          if (kBoolTrue == test_18) {
                            test_18 = enumerator_11251.current_mMarkedAsUnused (HERE).boolEnum () ;
                            if (kBoolTrue == test_18) {
                              {
                              extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_11251.current_mExtractedValueName (HERE), enumerator_11176.current_mEntry (HERE), var_cppName_11722, var_cppName_11722, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)) ;
                              }
                            }
                          }
                          if (kBoolFalse == test_18) {
                            {
                            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_11251.current_mExtractedValueName (HERE), enumerator_11176.current_mEntry (HERE), var_cppName_11722, var_cppName_11722, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
                            }
                          }
                        }
                      }
                      var_associatedValueIndex_11134.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)) ;
                      enumerator_11176.gotoNextObject () ;
                      enumerator_11251.gotoNextObject () ;
                    }
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            TC_Array <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_9952.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_9952.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)).add_operation (extensionGetter_definition (var_switchExpression_9168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)), fixItArray19  COMMA_SOURCE_FILE ("instruction-switch.galgas", 311)) ;
          }
          var_firstConstant_9920 = GALGAS_bool (false) ;
          enumerator_9952.gotoNextObject () ;
        }
        GALGAS_semanticInstructionListForGeneration var_instructionList_12960 ;
        {
        routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 321)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 322)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 323)), enumerator_9739.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_12960, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)) ;
        }
        {
        extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9739.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 328)) ;
        }
        var_switchBranchesForGeneration_9634.addAssign_operation (enumerator_9739.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_9859, enumerator_9739.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 329)), var_instructionList_12960  COMMA_SOURCE_FILE ("instruction-switch.galgas", 329)) ;
        enumerator_9739.gotoNextObject () ;
      }
      {
      const GALGAS_switchInstructionAST temp_20 = this ;
      extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 331)) ;
      }
      GALGAS_stringset var_forgottenConstants_13311 = var_enumConstantMap_9332.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 333)).substract_operation (var_constantsNamedInSwitchInstruction_9484, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)) ;
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = GALGAS_bool (ComparisonKind::greaterThan, var_forgottenConstants_13311.getter_count (SOURCE_FILE ("instruction-switch.galgas", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_string var_s_13454 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringset enumerator_13472 (var_forgottenConstants_13311, EnumerationOrder::up) ;
          while (enumerator_13472.hasCurrentObject ()) {
            var_s_13454.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_13472.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 337)) ;
            enumerator_13472.gotoNextObject () ;
          }
          const GALGAS_switchInstructionAST temp_22 = this ;
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13454, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 340)), fixItArray23  COMMA_SOURCE_FILE ("instruction-switch.galgas", 339)) ;
        }
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::class_func_new (var_switchExpression_9168.readProperty_mResultType (), var_switchExpression_9168, var_switchBranchesForGeneration_9634  COMMA_SOURCE_FILE ("instruction-switch.galgas", 343))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_switchInstructionAST temp_24 = this ;
    TC_Array <FixItDescription> fixItArray25 ;
    inCompiler->emitSemanticError (temp_24.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_9168.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 349)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 350)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 348)) ;
  }
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
  GALGAS_string var_switchVar_15848 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_15848, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_15848, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_16176 (temp_2.readProperty_mBranches (), EnumerationOrder::up) ;
  while (enumerator_16176.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_16221 (enumerator_16176.current_mSwitchConstantList (HERE), EnumerationOrder::up) ;
    while (enumerator_16221.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (enumerator_16221.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)) ;
      enumerator_16221.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 406)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_16176.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 407)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_16576 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (enumerator_16176.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 409)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 409)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 409)) ;
        GALGAS_string var_varPtr_16736 = GALGAS_string ("extractPtr_").add_operation (enumerator_16176.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_16576, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (var_varPtr_16736, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (var_type_16576, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (var_switchVar_15848, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_16928 (enumerator_16176.current_mExtractedAssociatedValuesForGeneration (HERE), EnumerationOrder::up) ;
        while (enumerator_16928.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16928.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (enumerator_16928.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)).add_operation (var_varPtr_16736, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)).add_operation (enumerator_16928.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)) ;
          enumerator_16928.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_16176.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 417)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 425)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 426)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 427)) ;
    }
    enumerator_16176.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 429)) ;
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
  cEnumerator_actualParameterListAST enumerator_3767 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_3767.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3767.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
    enumerator_3767.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_type_4532 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_formalParameterSignature var_routineSignature_4687 ;
  GALGAS_bool var_hasCompilerArgument_4709 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4532, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)).readProperty_classMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4687, var_hasCompilerArgument_4709, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5147 ;
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)), var_routineSignature_4687, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5147, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::class_func_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5147, var_hasCompilerArgument_4709  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
  GALGAS_stringlist var_parameterCppNameList_6329 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 148)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6374 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 149)) ;
  GALGAS_stringlist var_inputVariableList_6427 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 150)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6470 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_6470.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_6763 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6470.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6374, var_inputVariableList_6427, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6763, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
    var_parameterCppNameList_6329.addAssign_operation (var_parameterCppName_6763  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
    enumerator_6470.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)) ;
  cEnumerator_stringlist enumerator_7046 (var_parameterCppNameList_6329, EnumerationOrder::up) ;
  while (enumerator_7046.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7046.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 166)) ;
    if (enumerator_7046.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 167)) ;
    }
    enumerator_7046.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6329.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 171)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6329.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 176)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 180)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 171)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_7924 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 190)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7924, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 187)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7972 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_7924.readProperty_mResultType (), var_targetVariableCppName_7972, var_targetVariableCppName_7972, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_7924.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_7972, var_expression_7924  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 206))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 206)) ;
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
  GALGAS_unifiedTypeMapEntry joker_8906 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_8906, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 219)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_9576 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)) ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_9643 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)) ;
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_9576, var_targetVariableCppName_9643, var_targetVariableCppName_9643, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (var_targetType_9576, var_targetVariableCppName_9643  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 244))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 244)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 87)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 89)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_4927 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_4955 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_4982 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4927, var_messageExpression_4955, var_fixitListForGeneration_4982, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4927, var_messageExpression_4955, var_fixitListForGeneration_4982  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120)) ;
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
  GALGAS_string var_receiverCppVarName_6307 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6307, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  GALGAS_string var_messageCppVarName_6514 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6514, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)) ;
  GALGAS_string var_fixItArrayCppName_6763 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6763, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 159)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (var_receiverCppVarName_6307, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (var_messageCppVarName_6514, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (var_fixItArrayCppName_6763, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 363)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 364)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 365)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 366)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 374)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 375)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 376)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_15138 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 394)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_15138, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 391)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_15167 = var_receiverExpression_15138.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_15315 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_15356 (extensionGetter_definition (var_receiverType_15167, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 404)).readProperty_mMapSearchMethodList (), EnumerationOrder::up) ;
      bool bool_3 = var_found_15315.operator_not (SOURCE_FILE ("instruction-with.galgas", 404)).isValidAndTrue () ;
      if (enumerator_15356.hasCurrentObject () && bool_3) {
        while (enumerator_15356.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_15315 = GALGAS_bool (ComparisonKind::equal, enumerator_15356.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_15356.gotoNextObject () ;
          if (enumerator_15356.hasCurrentObject ()) {
            bool_3 = var_found_15315.operator_not (SOURCE_FILE ("instruction-with.galgas", 404)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_15315.operator_not (SOURCE_FILE ("instruction-with.galgas", 407)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 408)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 408)).add_operation (extensionGetter_definition (var_receiverType_15167, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 409)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 409)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 409)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 408)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_16090 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 416)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_16090, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::equal, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_keyExpression_16090.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16090.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 426)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 426)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 426)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_keyExpression_16090.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16090.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 430)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 430)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 430)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_16727 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).getter_string (SOURCE_FILE ("instruction-with.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_15167, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 435)).operator_not (SOURCE_FILE ("instruction-with.galgas", 435)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_15167, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 436)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
  }
  GALGAS_localConstantList var_localConstantList_17216 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 441)) ;
  cEnumerator_typedPropertyList enumerator_17300 (extensionGetter_definition (var_receiverType_15167, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_17300.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_17216.addAssign_operation (enumerator_17300.current_typeEntry (HERE), GALGAS_lstring::class_func_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_17300.current_name (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)), temp_23.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 445)), GALGAS_bool (true), var_objectArrayCppName_16727.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447)).add_operation (enumerator_17300.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447))  COMMA_SOURCE_FILE ("instruction-with.galgas", 443)) ;
    enumerator_17300.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_17216.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)), GALGAS_lstring::class_func_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)), temp_25.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 452)), GALGAS_bool (true), var_objectArrayCppName_16727.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454))  COMMA_SOURCE_FILE ("instruction-with.galgas", 450)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_18328 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_17216, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 461)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 462)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_18328, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 455)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_18782 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 474)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 475)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 476)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_18782, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 469)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::class_func_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_15138, var_objectArrayCppName_16727, var_keyExpression_16090, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_18328, var_else_5F_instructionList_18782  COMMA_SOURCE_FILE ("instruction-with.galgas", 484))  COMMA_SOURCE_FILE ("instruction-with.galgas", 484)) ;
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
  GALGAS_semanticExpressionForGeneration var_keyExpression_20156 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 508)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_20156, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 505)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_keyExpression_20156.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 516)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20156.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 517)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_keyExpression_20156.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20156.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 521)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_20793 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)).getter_string (SOURCE_FILE ("instruction-with.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 525)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_20949 ;
  GALGAS_string var_receiverVariableCppName_20974 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_21132 ;
        GALGAS_selfMutability var_selfMutability_21186 ;
        const bool optionalResult21086 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_21132, var_selfMutability_21186) ;
        if (!optionalResult21086) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (ComparisonKind::equal, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_20974 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
              var_targetType_20949 = var_selfType_21132 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_21376 = extensionGetter_definition (var_selfType_21132, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 537)).readProperty_propertyMap () ;
            GALGAS_bool var_isConstant_21483 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_AccessControl joker_21475 ; // Joker input parameter
            var_propertyMap_21376.method_searchKey (temp_15.readProperty_mReceiverName (), joker_21475, var_isConstant_21483, var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 538)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_21483.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 540)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = extensionGetter_propertiesAreMutable (var_selfMutability_21186, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 541)).operator_not (SOURCE_FILE ("instruction-with.galgas", 541)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 542)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_20974 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 544)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 545)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 548)) ;
        var_targetType_20949.drop () ; // Release error dropped variable
        var_receiverVariableCppName_20974.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_22212 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_20949, var_receiverVariableCppName_20974, joker_22212, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 551)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_22234 (temp_26.readProperty_mFieldList (), EnumerationOrder::up) ;
  while (enumerator_22234.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22271 = extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 559)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_22360 ;
    GALGAS_bool var_isConstant_22379 ;
    var_propertyMap_22271.method_searchKey (enumerator_22234.current_mValue (HERE), var_accessControl_22360, var_isConstant_22379, var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 560)) ;
    extensionMethod_checkSetAccess (var_accessControl_22360, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_22234.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 561)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isConstant_22379.boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_22234.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 566)) ;
      }
    }
    enumerator_22234.gotoNextObject () ;
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 570)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 570)).operator_not (SOURCE_FILE ("instruction-with.galgas", 570)).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_readWriteAccessWithInstructionAST temp_30 = this ;
      TC_Array <FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 571)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 571)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 571)), fixItArray31  COMMA_SOURCE_FILE ("instruction-with.galgas", 571)) ;
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_readWriteAccessWithInstructionAST temp_33 = this ;
    test_32 = GALGAS_bool (ComparisonKind::notEqual, temp_33.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_bool var_found_23070 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_23111 (extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 576)).readProperty_mMapSearchMethodList (), EnumerationOrder::up) ;
      bool bool_34 = var_found_23070.operator_not (SOURCE_FILE ("instruction-with.galgas", 576)).isValidAndTrue () ;
      if (enumerator_23111.hasCurrentObject () && bool_34) {
        while (enumerator_23111.hasCurrentObject () && bool_34) {
          const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
          var_found_23070 = GALGAS_bool (ComparisonKind::equal, enumerator_23111.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_23111.gotoNextObject () ;
          if (enumerator_23111.hasCurrentObject ()) {
            bool_34 = var_found_23070.operator_not (SOURCE_FILE ("instruction-with.galgas", 576)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_found_23070.operator_not (SOURCE_FILE ("instruction-with.galgas", 579)).boolEnum () ;
        if (kBoolTrue == test_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_38 = this ;
          TC_Array <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_38.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)).add_operation (extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 580)), fixItArray39  COMMA_SOURCE_FILE ("instruction-with.galgas", 580)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_23646 = GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 586)) ;
  cEnumerator_typedPropertyList enumerator_23722 (extensionGetter_definition (var_targetType_20949, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 587)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
  while (enumerator_23722.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_41 = this ;
    var_localInitializedVariableList_23646.addAssign_operation (enumerator_23722.current_typeEntry (HERE), GALGAS_lstring::class_func_new (temp_40.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_23722.current_name (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 590)), temp_41.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 590)), var_objectArrayCppName_20793.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 591)).add_operation (enumerator_23722.current_name (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 591))  COMMA_SOURCE_FILE ("instruction-with.galgas", 588)) ;
    enumerator_23722.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_42 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 597)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = this ;
  temp_42.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 594)), GALGAS_lstring::class_func_new (temp_43.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 595)), temp_44.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 595)), GALGAS_bool (true), var_objectArrayCppName_20793.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 597))  COMMA_SOURCE_FILE ("instruction-with.galgas", 597)) ;
  GALGAS_localConstantList var_localConstantList_24030 = temp_42 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_24739 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_24030, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 605)), var_localInitializedVariableList_23646, temp_45.readProperty_m_5F_do_5F_Instructions (), temp_46.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_24739, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 599)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_25151 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 618)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 619)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 620)), temp_47.readProperty_m_5F_else_5F_Instructions (), temp_48.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_25151, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 613)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_49.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 626)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::class_func_new (temp_50.readProperty_mInstructionLocation (), var_receiverVariableCppName_20974, var_targetType_20949, temp_51.readProperty_mFieldList (), var_objectArrayCppName_20793, var_keyExpression_20156, temp_52.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_24739, var_else_5F_instructionList_25151  COMMA_SOURCE_FILE ("instruction-with.galgas", 628))  COMMA_SOURCE_FILE ("instruction-with.galgas", 628)) ;
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
  GALGAS_string var_receiverVarCppName_27702 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_27702, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 680)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_27731 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_27969 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_27969, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 689)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_27731, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 697)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 697)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 698)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 698)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27731, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (var_receiverVarCppName_27702, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 700)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 697)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_27969, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 702)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_27969, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27731, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 704)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)) COMMA_SOURCE_FILE ("instruction-with.galgas", 709)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27731, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 711)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 714)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (ComparisonKind::greaterThan, temp_12.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 722)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 723)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 724)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 733)) ;
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
  GALGAS_string var_receiverCppName_30052 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_30107 (temp_1.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_30107.hasCurrentObject ()) {
    var_receiverCppName_30052.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30107.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 747)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 747)) ;
    enumerator_30107.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_30419 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_30419, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 750)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 758)) COMMA_SOURCE_FILE ("instruction-with.galgas", 758)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 759)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 760)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (var_receiverCppName_30052, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 761)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::equal, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (var_keyVarCppName_30419, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 765)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (var_keyVarCppName_30419, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 767)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 768)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)).add_operation (GALGAS_string ("if (nullptr != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 770)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 773)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (ComparisonKind::greaterThan, temp_18.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 781)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 782)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 783)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 792)) ;
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
  GALGAS_uint var_nonTerminalSymbolIndex_5407 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_5430 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5407, joker_5430, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5407  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118)) ;
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
  GALGAS_nonterminalLabelMap var_labelMap_6881 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_6881, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 140)) ;
  GALGAS_formalParameterSignature var_signature_6925 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_6925 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 143)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_7055 ; // Joker input parameter
    GALGAS_location joker_7069 ; // Joker input parameter
    var_labelMap_6881.method_searchKey (temp_3.readProperty_mLabelName (), joker_7055, var_signature_6925, joker_7069, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7522 ;
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  extensionMethod_analyzeRoutineArguments (temp_4.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_6.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)), var_signature_6925, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7522, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 148)) ;
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_7522, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)) ;
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
    GALGAS_nonterminalInstructionForGeneration var_si_9846 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9846.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_9846.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 218)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9846.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_10187 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10187.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_10187.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 227)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
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
  GALGAS_stringlist var_parameterCppNameList_11141 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 248)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_11186 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 249)) ;
  GALGAS_stringlist var_inputVariableList_11239 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 250)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_11282 (temp_0.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_11282.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_11575 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_11282.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11186, var_inputVariableList_11239, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11575, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 252)) ;
    var_parameterCppNameList_11141.addAssign_operation (var_parameterCppName_11575  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)) ;
    enumerator_11282.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_11682 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (var_sdtResultVarName_11682, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)) ;
  cEnumerator_stringlist enumerator_12047 (var_parameterCppNameList_11141, EnumerationOrder::up) ;
  while (enumerator_12047.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12047.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)) ;
    enumerator_12047.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_11682.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_11682, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 277)) ;
  cEnumerator_stringlist enumerator_12584 (var_jokerParametersToReleaseList_11186, EnumerationOrder::up) ;
  while (enumerator_12584.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12584.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)) ;
    enumerator_12584.gotoNextObject () ;
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
  GALGAS_uint var_addedNonTerminalIndex_4757 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 109)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4843 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 111)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4843, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 112)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_5170 = GALGAS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_4843  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5290 (temp_1.readProperty_mRepeatBranchList (), EnumerationOrder::up) ;
  while (enumerator_5290.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5330 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 122)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5290.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5330, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 123)) ;
    }
    var_repeatBranchList_5170.addAssign_operation (var_syntaxInstructionList_5330  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 130)) ;
    enumerator_5290.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5170, var_addedNonTerminalIndex_4757  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133)) ;
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
  GALGAS_uint var_choiceIndex_6688 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 162)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7238 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7238, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 164)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7337 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 182)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_7416 (temp_2.readProperty_mRepeatBranchList (), EnumerationOrder::up) ;
  while (enumerator_7416.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_7868 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7416.current_mSyntaxInstructionList (HERE), enumerator_7416.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7868, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 184)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7337.addAssign_operation (var_instructionList_7868, enumerator_7416.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 201)) ;
    enumerator_7416.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 204)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6688, var_repeated_5F_instructionList_7238, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7337  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206)) ;
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
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9336 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9447 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 237)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9564 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_9564.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9447.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9564.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)), enumerator_9564.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
    enumerator_9564.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9336, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9447  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244)) ;
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
    GALGAS_repeatInstructionForGeneration var_si_10473 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10473.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10473.readProperty_m_5F_repeated_5F_instructionList (), var_si_10473.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)).objectCompare (var_si_10473.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10473.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 267)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 266)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)).add_operation (var_si_10473.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 269)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11264 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11343 (var_si_10473.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11264.hasCurrentObject () && enumerator_11343.hasCurrentObject () && bool_7) {
        while (enumerator_11264.hasCurrentObject () && enumerator_11343.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11264.current_mInstructionList (HERE), enumerator_11343.current_mInstructionList (HERE), enumerator_11343.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 273)) ;
          enumerator_11264.gotoNextObject () ;
          enumerator_11343.gotoNextObject () ;
          if (enumerator_11264.hasCurrentObject () && enumerator_11343.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_11570 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11570.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11570.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 277)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 284)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
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
  GALGAS_string var_repeatFlagCppName_12521 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_12521, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_12521, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 314)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)) ;
      const GALGAS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GALGAS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
      const GALGAS_repeatInstructionForGeneration temp_5 = this ;
      GALGAS_semanticInstructionListForGeneration var_instructionList_13285 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13285, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 318)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12521, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)) ;
    const GALGAS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
    const GALGAS_repeatInstructionForGeneration temp_8 = this ;
    cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13956 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
    GALGAS_uint index_13934 (uint32_t (0)) ;
    while (enumerator_13956.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_13934.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_13956.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 342)) ;
      enumerator_13956.gotoNextObject () ;
      index_13934.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 344)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12521, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 347)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 349)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 350)) ;
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
  GALGAS_uint var_addedNonTerminalIndex_4428 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_4514 = GALGAS_branchListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4597 (temp_0.readProperty_mSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_4597.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4637 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 107)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4597.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4637, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_selectBranchList_4514.addAssign_operation (var_syntaxInstructionList_4637  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
    enumerator_4597.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4514, var_addedNonTerminalIndex_4428  COMMA_SOURCE_FILE ("instruction-select.galgas", 118))  COMMA_SOURCE_FILE ("instruction-select.galgas", 118)) ;
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
  GALGAS_uint var_choiceIndex_5996 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 144)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 146)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6144 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 148)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6267 (temp_0.readProperty_mSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_6267.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_6719 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6267.current_mSyntaxInstructionList (HERE), enumerator_6267.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6719, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6144.addAssign_operation (var_instructionList_6719, enumerator_6267.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
    enumerator_6267.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 170)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5996, var_listOfSemanticInstructionListForGeneration_6144  COMMA_SOURCE_FILE ("instruction-select.galgas", 171))  COMMA_SOURCE_FILE ("instruction-select.galgas", 171)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7983 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 196)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8100 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_8100.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7983.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8100.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 199)), enumerator_8100.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
    enumerator_8100.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_7983  COMMA_SOURCE_FILE ("instruction-select.galgas", 202))  COMMA_SOURCE_FILE ("instruction-select.galgas", 202)) ;
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
    GALGAS_selectInstructionForGeneration var_si_8939 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_8939.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)).objectCompare (var_si_8939.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 220)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8939.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 223)).getter_string (SOURCE_FILE ("instruction-select.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)).add_operation (var_si_8939.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 225)).getter_string (SOURCE_FILE ("instruction-select.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 221)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9539 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9626 (var_si_8939.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9539.hasCurrentObject () && enumerator_9626.hasCurrentObject () && bool_6) {
        while (enumerator_9539.hasCurrentObject () && enumerator_9626.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9539.current_mInstructionList (HERE), enumerator_9626.current_mInstructionList (HERE), enumerator_9626.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
          enumerator_9539.gotoNextObject () ;
          enumerator_9626.gotoNextObject () ;
          if (enumerator_9539.hasCurrentObject () && enumerator_9626.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_9853 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9853.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9853.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_selectInstructionForGeneration temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 237)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_selectInstructionForGeneration temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 241)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11136 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
  GALGAS_uint index_11114 (uint32_t (0)) ;
  while (enumerator_11136.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_11114.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11136.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_11136.gotoNextObject () ;
    index_11114.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
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
  GALGAS_uint var_terminalSymbolIndex_7169 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_7193 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (nullptr != objectArray_7193) {
      macroValidSharedObject (objectArray_7193, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_7169 = objectArray_7193->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_7169 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 158)) ;
    {
    const GALGAS_terminalCheckInstructionAST temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_7169, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 159)) ;
    }
  }
  const GALGAS_terminalCheckInstructionAST temp_2 = this ;
  const GALGAS_terminalCheckInstructionAST temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_7169  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161)) ;
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
  GALGAS_lexicalSentValueList var_sentAttributeList_8474 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8474, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)).objectCompare (var_sentAttributeList_8474.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstructionAST temp_3 = this ;
      const GALGAS_terminalCheckInstructionAST temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_sentAttributeList_8474.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 189)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstructionAST temp_7 = this ;
      const GALGAS_terminalCheckInstructionAST temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 192)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (var_sentAttributeList_8474.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 188)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 191)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_9017 = GALGAS_terminalCheckAssignementList::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 195)) ;
  const GALGAS_terminalCheckInstructionAST temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_9107 (temp_12.readProperty_mActualInputParameterList (), EnumerationOrder::up) ;
  cEnumerator_lexicalSentValueList enumerator_9205 (var_sentAttributeList_8474, EnumerationOrder::up) ;
  while (enumerator_9107.hasCurrentObject () && enumerator_9205.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9107.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9205.current_mLexicalType (HERE), enumerator_9205.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9017, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 197)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9205.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9107.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9205.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9107.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_9205.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)) ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9205.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
      }
    }
    enumerator_9107.gotoNextObject () ;
    enumerator_9205.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionAST temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9811 (temp_18.readProperty_mIndexingKeyList (), EnumerationOrder::up) ;
  while (enumerator_9811.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9811.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9811.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9811.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)) ;
      }
    }
    enumerator_9811.gotoNextObject () ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::class_func_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9017, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230)) ;
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
  GALGAS_string var_nodeName_12255 ;
  {
  const GALGAS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12255, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (var_nodeName_12255, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
  ioArgument_ioCurrentNode = var_nodeName_12255 ;
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
    GALGAS_terminalCheckInstructionForGeneration var_si_14661 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_14661.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_14661.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_14661.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 326)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_15001 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_15001.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_15001.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_terminalCheckInstructionForGeneration temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
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
  cEnumerator_terminalCheckAssignementList enumerator_16005 (temp_0.readProperty_mTerminalCheckAssignementList (), EnumerationOrder::up) ;
  while (enumerator_16005.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_16005.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_16005.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16005.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16005.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 361)) ;
    enumerator_16005.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_16444 (temp_2.readProperty_mIndexingKeyList (), EnumerationOrder::up) ;
  while (enumerator_16444.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16444.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_16444.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)) ;
    enumerator_16444.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_6122 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 142)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_6122, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_variant_5F_expression_6122.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6122.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_6775 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 157)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_6775, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 154)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_while_5F_expression_6775.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6122.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 164)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 170)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_7627 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7627, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 172)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::class_func_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_6122, var_while_5F_expression_6775, var_instructionList_7627  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
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
  GALGAS_string var_variantVarCppName_9631 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9631, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_9631, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  }
  GALGAS_string var_variantVar_9792 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9792, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (var_variantVarCppName_9631, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  GALGAS_string var_loopVar_10004 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10004, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_10004, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10004.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  GALGAS_string var_whileVarCppName_10422 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_10422, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_10422, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10004.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_9792.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)) ;
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
  GALGAS_syntaxInstructionList var_syntaxInstructionList_4454 ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  GALGAS_location joker_4476 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_4454, joker_4476, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 105)) ;
  {
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_syntaxInstructionList_4454, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 107)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5567 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 136)) ;
  GALGAS_uint var_referenceSelectMethodCount_5672 = ioArgument_ioSelectMethodCount ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5751 (temp_0.readProperty_mParseRewindBranchList (), EnumerationOrder::up) ;
  while (enumerator_5751.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_5672 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_5867 = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 140)) ;
    cEnumerator_syntaxInstructionList enumerator_5936 (enumerator_5751.current_mSyntaxInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5936.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_5936.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_5867, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 142)) ;
      enumerator_5936.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_5567.addAssign_operation (var_instructionList_5867, enumerator_5751.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 158)) ;
    enumerator_5751.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_6573 = var_listOfSemanticInstructionListForGeneration_5567 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6675 ;
  {
  GALGAS_location joker_6691 ; // Joker input parameter
  var_tempListOfBranches_6573.setter_popFirst (var_instructionList_6675, joker_6691, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 162)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_6739 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_6675, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 163)) ;
  GALGAS_bool var_ok_6833 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6867 (var_tempListOfBranches_6573, EnumerationOrder::up) ;
  bool bool_1 = var_ok_6833.isValidAndTrue () ;
  if (enumerator_6867.hasCurrentObject () && bool_1) {
    while (enumerator_6867.hasCurrentObject () && bool_1) {
      var_ok_6833 = function_compareSyntaxSignature (var_referenceSignature_6739, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_6867.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 168)), enumerator_6867.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
      enumerator_6867.gotoNextObject () ;
      if (enumerator_6867.hasCurrentObject ()) {
        bool_1 = var_ok_6833.isValidAndTrue () ;
      }
    }
  }
  const GALGAS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_5567  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173)) ;
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
  GALGAS_semanticInstructionListForGeneration var_instructionList_8147 ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  GALGAS_location joker_8163 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_8147, joker_8163, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 195)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_8147, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)) ;
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
  GALGAS_string var_parsingContextVar_8828 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_8828, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)) ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9082 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_9082.hasCurrentObject ()) {
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_9082.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 216)) ;
    }
    if (enumerator_9082.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (var_parsingContextVar_8828, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)) ;
    }
    enumerator_9082.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_8872 ;
  const GALGAS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-when.galgas", 212)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_when_5F_expression_8872, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 219)) ;
  }
  GALGAS_uint var_localSelectMethodCount_8987 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_9419 ;
  {
  const GALGAS_parseWhenInstruction temp_1 = this ;
  const GALGAS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_8987, var_when_5F_instructionListForGeneration_9419, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 222)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_9860 ;
  {
  const GALGAS_parseWhenInstruction temp_3 = this ;
  const GALGAS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_9860, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 240)) ;
  }
  {
  const GALGAS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 258)) ;
  }
  const GALGAS_parseWhenInstruction temp_6 = this ;
  GALGAS_bool var_ok_10019 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_9419, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 261)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_9860, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 262)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 260)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_ok_10019.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_8872, var_when_5F_instructionListForGeneration_9419, var_else_5F_instructionListForGeneration_9860  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267)) ;
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
  GALGAS_string var_sourceVar_12149 ;
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12149, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 306)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_12149, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)) ;
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
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 93)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_4966 ;
  const GALGAS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4966, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_expression_4966.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_syntaxSendInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GALGAS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), var_expression_4966  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
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
  GALGAS_string var_sourceVar_6481 ;
  const GALGAS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6481, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_6481, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".appendString (").add_operation (var_sourceVar_6481, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GALGAS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
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
  cEnumerator_semanticInstructionListForGeneration enumerator_2007 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_2007.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2007.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 43)) ;
    enumerator_2007.gotoNextObject () ;
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
  cEnumerator_semanticInstructionListForGeneration enumerator_2882 (constinArgument_inReferenceSignature, EnumerationOrder::up) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2926 (constinArgument_inTestedSignature, EnumerationOrder::up) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_2882.hasCurrentObject () && enumerator_2926.hasCurrentObject () && bool_0) {
    while (enumerator_2882.hasCurrentObject () && enumerator_2926.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2882.current_mInstruction (HERE).ptr (), enumerator_2926.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      enumerator_2882.gotoNextObject () ;
      enumerator_2926.gotoNextObject () ;
      if (enumerator_2882.hasCurrentObject () && enumerator_2926.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outOk.operator_and (GALGAS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_semanticInstructionForGeneration var_instruction_3191 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_syntaxInstructionForGeneration var_si_3286 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3191.ptr ())) ;
        if (nullptr == var_si_3286.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3286.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = result_outOk.operator_and (GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)) ;
        GALGAS_semanticInstructionForGeneration var_instruction_3825 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 83)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_syntaxInstructionForGeneration var_si_3920 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3825.ptr ())) ;
          if (nullptr == var_si_3920.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3920.readProperty_mInstructionLocation (), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 87)) ;
          }
        }
        if (kBoolFalse == test_7) {
          TC_Array <FixItDescription> fixItArray9 ;
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

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GALGAS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                                          const GALGAS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_componentNameSet_1595 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("syntaxCompilation.galgas", 31)) ;
  cEnumerator_galgas_33_SyntaxComponentListAST enumerator_1637 (constinArgument_inAllSyntaxComponents, EnumerationOrder::up) ;
  while (enumerator_1637.hasCurrentObject ()) {
    var_componentNameSet_1595.addAssign_operation (enumerator_1637.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 33)) ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1733 = enumerator_1637.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GALGAS_syntaxRuleListAST var_ruleList_1808 = enumerator_1637.current (HERE).readProperty_mRuleList () ;
    cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1878 (constinArgument_inSyntaxExtensions.getter_listForKey (enumerator_1637.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string () COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 36)), EnumerationOrder::up) ;
    while (enumerator_1878.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1733.plusAssign_operation(enumerator_1878.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 37)) ;
      var_ruleList_1808.plusAssign_operation(enumerator_1878.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 38)) ;
      enumerator_1878.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssign_operation (GALGAS_galgas_33_SyntaxComponentAST::class_func_new (GALGAS_bool (false), enumerator_1637.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1637.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1733, var_ruleList_1808, enumerator_1637.current (HERE).readProperty_mHasTranslateFeature ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 40))  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 40)) ;
    enumerator_1637.gotoNextObject () ;
  }
  cEnumerator_syntaxExtensions enumerator_2396 (constinArgument_inSyntaxExtensions, EnumerationOrder::up) ;
  while (enumerator_2396.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_componentNameSet_1595.getter_hasKey (enumerator_2396.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 50)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 50)).boolEnum () ;
      if (kBoolTrue == test_0) {
        cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2512 (enumerator_2396.current_mList (HERE), EnumerationOrder::up) ;
        while (enumerator_2512.hasCurrentObject ()) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2512.current_mSyntaxComponentName (HERE).readProperty_location (), GALGAS_string ("there is no '").add_operation (enumerator_2512.current_mSyntaxComponentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)).add_operation (GALGAS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)) ;
          enumerator_2512.gotoNextObject () ;
        }
      }
    }
    enumerator_2396.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GALGAS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (SOURCE_FILE ("grammarCompilation.galgas", 29)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_1610 (constinArgument_inLabels, EnumerationOrder::up) ;
  while (enumerator_1610.hasCurrentObject ()) {
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_1665 = GALGAS_signatureForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 31)) ;
    cEnumerator_formalParameterListAST enumerator_1756 (enumerator_1610.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_1756.hasCurrentObject ()) {
      var_formalParametersList_1665.addAssign_operation (enumerator_1756.current_mFormalArgumentPassingMode (HERE), enumerator_1756.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 33)) ;
      enumerator_1756.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_1610.current_mLabelName (HERE), var_formalParametersList_1665, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 35)) ;
    }
    enumerator_1610.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_transformLabelMap (Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_nonTerminalLabelListAST operand0 = GALGAS_nonTerminalLabelListAST::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_transformLabelMap (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_transformLabelMap ("transformLabelMap",
                                                                   functionWithGenericHeader_transformLabelMap,
                                                                   & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis,
                                                                   1,
                                                                   functionArgs_transformLabelMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkLabelMap????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap_3F__3F__3F__3F_ (const GALGAS_location constinArgument_inNonTerminalLocation,
                                            const GALGAS_nonTerminalLabelListAST constinArgument_inLabels,
                                            const GALGAS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_labelStringSet_2364 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("grammarCompilation.galgas", 50)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2423 (constinArgument_inLabels, EnumerationOrder::up) ;
  while (enumerator_2423.hasCurrentObject ()) {
    var_labelStringSet_2364.addAssign_operation (enumerator_2423.current_mLabelName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)) ;
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2560 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2423.current_mLabelName (HERE), var_formalParametersList_2560, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2423.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)).objectCompare (var_formalParametersList_2560.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_2423.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 57)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, var_formalParametersList_2560.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 61)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2423.current_mLabelName (HERE).readProperty_location (), enumerator_2423.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 55)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (GALGAS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 56)).add_operation (GALGAS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 57)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2423.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (var_formalParametersList_2560.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 60)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)) ;
      }
    }
    if (kBoolFalse == test_0) {
      cEnumerator_formalParameterListAST enumerator_3190 (enumerator_2423.current_mFormalArgumentList (HERE), EnumerationOrder::up) ;
      cEnumerator_signatureForGrammarAnalysis enumerator_3263 (var_formalParametersList_2560, EnumerationOrder::up) ;
      while (enumerator_3190.hasCurrentObject () && enumerator_3263.hasCurrentObject ()) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_3263.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3190.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3263.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3263.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)).add_operation (GALGAS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2423.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (GALGAS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (extensionGetter_string (enumerator_3190.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (GALGAS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 65)) ;
          }
        }
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_3263.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().objectCompare (enumerator_3190.current_mFormalArgumentTypeName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3263.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared of '@").add_operation (enumerator_3263.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 74)).add_operation (GALGAS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 75)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2423.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 76)).add_operation (GALGAS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).add_operation (enumerator_3190.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 73)) ;
          }
        }
        enumerator_3190.gotoNextObject () ;
        enumerator_3263.gotoNextObject () ;
      }
    }
    enumerator_2423.gotoNextObject () ;
  }
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4368 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis, EnumerationOrder::up) ;
  while (enumerator_4368.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_labelStringSet_2364.getter_hasKey (enumerator_4368.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GALGAS_string ("this non terminal does not declare the '").add_operation (enumerator_4368.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GALGAS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GALGAS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 86)) ;
      }
    }
    enumerator_4368.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_nonterminalDeclarationListAST enumerator_5011 (constinArgument_inNonterminalDeclarationList, EnumerationOrder::up) ;
  while (enumerator_5011.hasCurrentObject ()) {
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_5059 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5011.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_5059) {
        macroValidSharedObject (objectArray_5059, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5011.current_mNonterminalName (HERE).readProperty_location (), enumerator_5011.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5011.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 104)), objectArray_5059->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 101)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5011.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 110)), function_transformLabelMap (enumerator_5011.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 108)) ;
      }
    }
    enumerator_5011.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxRuleListAST enumerator_5832 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_5832.hasCurrentObject ()) {
    GALGAS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5869 = GALGAS_nonTerminalLabelListAST::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 123)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_5986 (enumerator_5832.current_mLabelList (HERE), EnumerationOrder::up) ;
    while (enumerator_5986.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5869.addAssign_operation (enumerator_5986.current_mLabelName (HERE), enumerator_5986.current_mFormalArguments (HERE), enumerator_5986.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 125)) ;
      enumerator_5986.gotoNextObject () ;
    }
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_6129 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5832.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_6129) {
        macroValidSharedObject (objectArray_6129, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5832.current_mNonterminalName (HERE).readProperty_location (), var_nonTerminalLabelListAST_5869, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5832.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 134)), objectArray_6129->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 131)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5832.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 140)), function_transformLabelMap (var_nonTerminalLabelListAST_5869, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 138)) ;
      }
    }
    enumerator_5832.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                               GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionList?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GALGAS_syntaxInstructionList constinArgument_inInstructionList,
                                                                                                                GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxInstructionList enumerator_8241 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_8241.hasCurrentObject ()) {
    callExtensionMethod_transformInstruction ((cPtr_syntaxInstructionAST *) enumerator_8241.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 175)) ;
    enumerator_8241.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GALGAS_lstring constinArgument_inSyntaxComponentName,
                                                    const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis var_productionRulesList_8997 = GALGAS_productionRuleListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 193)) ;
  cEnumerator_syntaxRuleListAST enumerator_9085 (constinArgument_inRuleList, EnumerationOrder::up) ;
  while (enumerator_9085.hasCurrentObject ()) {
    GALGAS_uint var_nonTerminalIndex_9187 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9204 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9085.current_mNonterminalName (HERE), var_nonTerminalIndex_9187, joker_9204, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 195)) ;
    GALGAS_syntaxInstructionList var_parsedSyntaxInstructionList_9289 ;
    GALGAS_lstring joker_9339 ; // Joker input parameter
    GALGAS_formalParameterListAST joker_9342 ; // Joker input parameter
    GALGAS_location joker_9345 ; // Joker input parameter
    GALGAS_location joker_9377 ; // Joker input parameter
    enumerator_9085.current_mLabelList (HERE).method_first (joker_9339, joker_9342, joker_9345, var_parsedSyntaxInstructionList_9289, joker_9377, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    GALGAS_syntaxInstructionListForGrammarAnalysis var_instructionList_9423 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_9289, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9423, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 201)) ;
    }
    var_productionRulesList_8997.addAssign_operation (enumerator_9085.current_mNonterminalName (HERE), var_nonTerminalIndex_9187, var_instructionList_9423, var_productionRulesList_8997.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 213))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 209)) ;
    enumerator_9085.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssign_operation (var_productionRulesList_8997, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (Compiler * inCompiler,
                                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  GRAMMAR ") ;
  result.appendString (in_GRAMMAR_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_") ;
  result.appendString (in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue ()) ;
  result.appendString (" : ") ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    cEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS, EnumerationOrder::up) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString ("public cParser_") ;
      result.appendString (enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue ()) ;
      if (enumerator_331.hasNextObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
      enumerator_331.gotoNextObject () ;
    }
  }
  result.appendString (" {\n") ;
  GALGAS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_503.hasCurrentObject ()) {
      result.appendString ("//------------------------------------- '") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("' non terminal\n//--- 'parse' label\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n//--- indexing\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue ()) ;
      result.appendString ("_indexing (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n") ;
      GALGAS_uint index_1114_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1114 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE), EnumerationOrder::up) ;
        while (enumerator_1114.hasCurrentObject ()) {
          result.appendString ("//----------- '") ;
          result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("' label\n  public: virtual void nt_") ;
          result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1434_IDX (0) ;
          if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
            cEnumerator_signatureForGrammarAnalysis enumerator_1434 (enumerator_1114.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
            while (enumerator_1434.hasCurrentObject ()) {
              const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              switch (test_1) {
              case kBoolTrue : {
                result.appendString ("const GALGAS_") ;
                result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                } break ;
              case kBoolFalse : {
                const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                switch (test_2) {
                case kBoolTrue : {
                  result.appendString ("GALGAS_") ;
                  result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1434.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  switch (test_3) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_1434.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_1434_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                } break ;
              default :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1434_IDX.increment () ;
              enumerator_1434.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_4) {
          case kBoolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString (" * inCompiler) ;\n\n") ;
          const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          switch (test_5) {
          case kBoolTrue : {
            result.appendString ("//--- Start symbol\n  public: static void _performSourceFileParsing_") ;
            result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_6) {
            case kBoolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
            result.appendString ("GALGAS_lstring inFileName") ;
            GALGAS_uint index_2945_IDX (0) ;
            if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_2945 (enumerator_1114.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
              while (enumerator_2945.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                switch (test_7) {
                case kBoolTrue : {
                  result.appendString ("const GALGAS_") ;
                  result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  switch (test_8) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_2945.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    switch (test_9) {
                    case kBoolTrue : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      } break ;
                    case kBoolFalse : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_2945.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_2945_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      } break ;
                    default :
                      break ;
                    }
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                index_2945_IDX.increment () ;
                enumerator_2945.gotoNextObject () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_") ;
            result.appendString (enumerator_1114.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_10) {
            case kBoolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
            result.appendString ("GALGAS_string inSourceString,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("GALGAS_string inNameString") ;
            GALGAS_uint index_4302_IDX (0) ;
            if (enumerator_1114.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_4302 (enumerator_1114.current_mFormalParametersList (HERE), EnumerationOrder::up) ;
              while (enumerator_4302.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                switch (test_11) {
                case kBoolTrue : {
                  result.appendString ("const GALGAS_") ;
                  result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  switch (test_12) {
                  case kBoolTrue : {
                    result.appendString ("GALGAS_") ;
                    result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    } break ;
                  case kBoolFalse : {
                    const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_4302.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    switch (test_13) {
                    case kBoolTrue : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      } break ;
                    case kBoolFalse : {
                      result.appendString ("GALGAS_") ;
                      result.appendString (enumerator_4302.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_4302_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      } break ;
                    default :
                      break ;
                    }
                    } break ;
                  default :
                    break ;
                  }
                  } break ;
                default :
                  break ;
                }
                index_4302_IDX.increment () ;
                enumerator_4302.gotoNextObject () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case kBoolFalse : {
            } break ;
          default :
            break ;
          }
          index_1114_.increment () ;
          enumerator_1114.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      switch (test_14) {
      case kBoolTrue : {
        result.appendString ("//--- Indexing\n  public: static void performIndexing (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only lexical analysis\n  public: static void performOnlyLexicalAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n//--- Only syntax analysis\n  public: static void performOnlySyntaxAnalysis (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("Compiler * inCompiler,\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result.appendString ("const String & inSourceFilePath) ;\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_503_.increment () ;
      enumerator_503.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5849_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_nonTerminalToAddList enumerator_5849 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5849.hasCurrentObject ()) {
      result.appendString ("  public: virtual int32_t select_") ;
      result.appendString (enumerator_5849.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_5849.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) ;\n") ;
      if (enumerator_5849.hasNextObject ()) {
        result.appendString ("\n") ;
      }
      index_5849_.increment () ;
      enumerator_5849.gotoNextObject () ;
    }
  }
  result.appendString ("} ;\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
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

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (Compiler * /* inCompiler */,
                                                                              const GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                              const GALGAS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("%!TEX encoding = UTF-8 Unicode\n\n\\documentclass[landscape]{book}\n\\usepackage[a3paper]{geometry}\n\n\\usepackage{verbatim}\n\n\\usepackage{hyperref}\n\n\\usepackage{tikz}\n\n\\usetikzlibrary{\n  arrows,\n  shapes.misc,% wg. rounded rectangle\n  shapes.arrows,%\n  matrix,%\n  scopes,%\n  shadows%\n}\n\n\\tikzset{\n  nonterminal/.style={\n    % The shape:\n    rectangle,\n    % The size:\n    minimum size=6mm,\n    % The border:\n    very thick,\n    draw=red!50!black!50,         % 50% red and 50% black,\n                                  % and that mixed with 50% white\n    % The filling:\n    top color=white,              % a shading that is white at the top...\n    bottom color=red!50!black!20, % and something else at the bottom\n    % Font\n    font=\\itshape\\small\n  },\n  terminal/.style={\n    % The shape:\n    rounded rectangle,\n    minimum size=6mm,\n    % The rest\n    very thick,draw=black!50,\n    top color=white,bottom color=black!20,\n    font=\\ttfamily\\small\n  },\n  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n  point/.style={coordinate,>=stealth',thick,draw=black!50},\n  tip/.style={->,shorten >=0.007pt},\n  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n  every join/.style={rounded corners}\n}\n\n\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n\\newcommand\\ruleMatrixColumnSeparation{3mm}\n\\newcommand\\ruleMatrixRowSeparation{3mm}\n\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n\n\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\nonTerminalSummarySeparator{, }\n\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n\n\\begin{document}\n\n\\title{\\Huge{Grammar \\texttt{") ;
  result.appendString (in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString ("}}}\n\\date \\today \n\n\\maketitle\n\n\\input{") ;
  result.appendString (in_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString (".tex}\n\n\\end{document}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_escapeForTex (const GALGAS_string & constinArgument_inString,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_1947 (GALGAS_range (GALGAS_uint (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 39)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 39))), EnumerationOrder::up) ;
  while (enumerator_1947.hasCurrentObject ()) {
    GALGAS_char var_c_1960 = constinArgument_inString.getter_characterAtIndex (enumerator_1947.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 40)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (95)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_result.plusAssign_operation(GALGAS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 42)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (123)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result.plusAssign_operation(GALGAS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 44)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (125)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_result.plusAssign_operation(GALGAS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (38)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 48)) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (35)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                result_result.plusAssign_operation(GALGAS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 50)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (36)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  result_result.plusAssign_operation(GALGAS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 52)) ;
                }
              }
              if (kBoolFalse == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    result_result.plusAssign_operation(GALGAS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 54)) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (37)))).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      result_result.plusAssign_operation(GALGAS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 56)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_8 = kBoolTrue ;
                    if (kBoolTrue == test_8) {
                      test_8 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (126)))).boolEnum () ;
                      if (kBoolTrue == test_8) {
                        result_result.plusAssign_operation(GALGAS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 58)) ;
                      }
                    }
                    if (kBoolFalse == test_8) {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = GALGAS_bool (ComparisonKind::equal, var_c_1960.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          result_result.plusAssign_operation(GALGAS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 60)) ;
                        }
                      }
                      if (kBoolFalse == test_9) {
                        result_result.plusAssign_operation(var_c_1960.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 62)) ;
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
    enumerator_1947.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_escapeForTex [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_escapeForTex (Compiler * inCompiler,
                                                             const cObjectArray & inEffectiveParameterArray,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const GALGAS_string constinArgument_inProductDirectory,
                                                               const GALGAS_string constinArgument_inGrammarComponentName,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                               const GALGAS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                                               const GALGAS_lstring constinArgument_inStartSymbol,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_texDocumentFilePath_3033 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (GALGAS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)) ;
  var_texDocumentFilePath_3033.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 78)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)) ;
  GALGAS_string var_document_3210 = GALGAS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 79))) ;
  GALGAS_bool joker_3419 ; // Joker input parameter
  var_document_3210.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3033, joker_3419, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)) ;
  GALGAS_string var_texFilePath_3429 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)).add_operation (GALGAS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)) ;
  GALGAS_string var_s_3515 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_startSymbolIndex_3590 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3607 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3590, joker_3607, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)) ;
  var_s_3515.plusAssign_operation(GALGAS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (var_startSymbolIndex_3590.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)) ;
  var_s_3515.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3760 (constinArgument_inNonTerminalMapForGrammarAnalysis, EnumerationOrder::up) ;
  while (enumerator_3760.hasCurrentObject ()) {
    var_s_3515.plusAssign_operation(GALGAS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3760.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (enumerator_3760.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)) ;
    if (enumerator_3760.hasNextObject ()) {
      var_s_3515.plusAssign_operation(GALGAS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 91)) ;
    }
    enumerator_3760.gotoNextObject () ;
  }
  var_s_3515.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 93)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4022 (constinArgument_inNonTerminalMapForGrammarAnalysis, EnumerationOrder::up) ;
  while (enumerator_4022.hasCurrentObject ()) {
    var_s_3515.plusAssign_operation(GALGAS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4022.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (enumerator_4022.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)) ;
    cEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4204 (constinArgument_inSyntaxComponentListForGrammarAnalysis, EnumerationOrder::up) ;
    while (enumerator_4204.hasCurrentObject ()) {
      cEnumerator_productionRuleListForGrammarAnalysis enumerator_4291 (enumerator_4204.current (HERE).readProperty_mProductionRulesList (), EnumerationOrder::up) ;
      while (enumerator_4291.hasCurrentObject ()) {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_4291.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_4022.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4291.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 99)).boolEnum () ;
              if (kBoolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4291.current (HERE), enumerator_4204.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3515, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 100)) ;
              }
            }
            if (kBoolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4291.current (HERE), enumerator_4204.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3515, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 102)) ;
            }
          }
        }
        enumerator_4291.gotoNextObject () ;
      }
      enumerator_4204.gotoNextObject () ;
    }
    enumerator_4022.gotoNextObject () ;
  }
  GALGAS_bool joker_4772 ; // Joker input parameter
  var_s_3515.method_writeToFileWhenDifferentContents (var_texFilePath_3429, joker_4772, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GALGAS_rowList & ioArgument_ioRowList,
                                                                                         const GALGAS_uint constinArgument_inRow,
                                                                                         GALGAS_uint & ioArgument_ioColumn,
                                                                                         GALGAS_string & ioArgument_ioCurrentNode,
                                                                                         GALGAS_string & ioArgument_ioArrowShape,
                                                                                         GALGAS_string & ioArgument_ioArrows,
                                                                                         GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                         const GALGAS_bool /* constinArgument_inDebug */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_nonTerminalInstructionForGrammarAnalysis temp_0 = this ;
  const GALGAS_nonTerminalInstructionForGrammarAnalysis temp_1 = this ;
  GALGAS_string var_nodeDefinition_11599 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)) ;
  GALGAS_string var_nodeName_11863 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_11599, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11863, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 328)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (var_nodeName_11863, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)) ;
  ioArgument_ioCurrentNode = var_nodeName_11863 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 337)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GALGAS_rowList & ioArgument_ioRowList,
                                                                                    const GALGAS_uint constinArgument_inRow,
                                                                                    GALGAS_uint & ioArgument_ioColumn,
                                                                                    GALGAS_string & ioArgument_ioCurrentNode,
                                                                                    GALGAS_string & ioArgument_ioArrowShape,
                                                                                    GALGAS_string & ioArgument_ioArrows,
                                                                                    GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GALGAS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_markerStartNodeName_12652 ;
      {
      const GALGAS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 355)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 355)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 355)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_12652, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (var_markerStartNodeName_12652, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_12652 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)) ;
    }
  }
  GALGAS_string var_startNodeName_12996 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] §[]"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_12996, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 366)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 367)) ;
  const GALGAS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GALGAS_branchListForGrammarAnalysis var_branches_13056 = temp_2.readProperty_mSelectBranchList () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_13159 ;
  {
  var_branches_13056.setter_popFirst (var_brancheZero_13159, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 370)) ;
  }
  GALGAS_uint var_branchZeroColumn_13178 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_13212 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_13159, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_13178, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_13212, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 373)) ;
  GALGAS_uint var_endColumn_13473 = var_branchZeroColumn_13178 ;
  GALGAS_stringlist var_endingNodes_13550 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 385)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_13584 (var_branches_13056, EnumerationOrder::up) ;
  while (enumerator_13584.hasCurrentObject ()) {
    var_maxUsedRowIndex_13212.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 387)) ;
    GALGAS_uint var_branchColumn_13629 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_13661 = var_startNodeName_12996 ;
    GALGAS_string var_arrowStyle_13697 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_13584.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_maxUsedRowIndex_13212, var_branchColumn_13629, var_currentNode_13661, var_arrowStyle_13697, ioArgument_ioArrows, var_maxUsedRowIndex_13212, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 391)) ;
    var_endingNodes_13550.addAssign_operation (var_currentNode_13661  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 401)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::lowerThan, var_endColumn_13473.objectCompare (var_branchColumn_13629)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_endColumn_13473 = var_branchColumn_13629 ;
      }
    }
    enumerator_13584.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_13473 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_13212)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_13212 ;
    }
  }
  GALGAS_string var_endNodeName_14333 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] §[]"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_14333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 411)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 412)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (var_endNodeName_14333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)) ;
  ioArgument_ioCurrentNode = var_endNodeName_14333 ;
  cEnumerator_stringlist enumerator_14539 (var_endingNodes_13550, EnumerationOrder::up) ;
  while (enumerator_14539.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_14539.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (var_endNodeName_14333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
    enumerator_14539.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_markerEndNodeName_14843 ;
      {
      const GALGAS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 423)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_14843, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 422)) ;
      }
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 428)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (var_markerEndNodeName_14843, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_14843 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GALGAS_rowList & ioArgument_ioRowList,
                                                                                    const GALGAS_uint constinArgument_inRow,
                                                                                    GALGAS_uint & ioArgument_ioColumn,
                                                                                    GALGAS_string & ioArgument_ioCurrentNode,
                                                                                    GALGAS_string & ioArgument_ioArrowShape,
                                                                                    GALGAS_string & ioArgument_ioArrows,
                                                                                    GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GALGAS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_markerStartNodeName_15651 ;
      {
      const GALGAS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 449)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 449)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 449)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_15651, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 448)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (var_markerStartNodeName_15651, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_15651 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 457)) ;
    }
  }
  GALGAS_string var_returnNodeName_15996 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] §[]"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_15996, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 460)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 461)) ;
  const GALGAS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GALGAS_branchListForGrammarAnalysis var_branches_16057 = temp_2.readProperty_mRepeatBranchList () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_16160 ;
  {
  var_branches_16057.setter_popFirst (var_brancheZero_16160, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 464)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_16179 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_16160, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_16179, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)) ;
  GALGAS_uint var_endColumn_16432 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_16573 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] §[]"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_16573, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 478)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 479)) ;
  GALGAS_bool var_oneEmptyBranch_16675 = GALGAS_bool (ComparisonKind::equal, var_branches_16057.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 481)).objectCompare (GALGAS_uint (uint32_t (1U)))) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_oneEmptyBranch_16675.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_16764 ;
      var_branches_16057.method_first (var_firstBranch_16764, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 483)) ;
      var_oneEmptyBranch_16675 = GALGAS_bool (ComparisonKind::equal, var_firstBranch_16764.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 484)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
  }
  GALGAS_stringlist var_endingNodes_16867 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 487)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_oneEmptyBranch_16675.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_endingNodes_16867.addAssign_operation (var_startNodeName_16573  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 489)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_uint var_nextBranchUsedRowIndex_16959 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_17008 (var_branches_16057, EnumerationOrder::up) ;
    while (enumerator_17008.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_16959.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 493)) ;
      GALGAS_uint var_branchColumn_17064 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_17098 = var_startNodeName_16573 ;
      GALGAS_string var_arrowStyle_17136 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_17008.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_nextBranchUsedRowIndex_16959, var_branchColumn_17064, var_currentNode_17098, var_arrowStyle_17136, ioArgument_ioArrows, var_nextBranchUsedRowIndex_16959, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 497)) ;
      var_endingNodes_16867.addAssign_operation (var_currentNode_17098  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 507)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::lowerThan, var_endColumn_16432.objectCompare (var_branchColumn_17064)).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_endColumn_16432 = var_branchColumn_17064 ;
        }
      }
      enumerator_17008.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_16432 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_16959 ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_16179)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_16179 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 519)) ;
  GALGAS_string var_returnUpperNodeName_17971 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] §[]"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_17971, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 521)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 522)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_17971, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (var_returnNodeName_15996, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)) ;
  cEnumerator_stringlist enumerator_18129 (var_endingNodes_16867, EnumerationOrder::up) ;
  while (enumerator_18129.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_18129.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (var_returnUpperNodeName_17971, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)) ;
    enumerator_18129.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string var_markerEndNodeName_18441 ;
      {
      const GALGAS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 531)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 531)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 531)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_18441, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 530)) ;
      }
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 536)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (var_markerEndNodeName_18441, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_18441 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonTerminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_nonTerminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_selectInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_repeatInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
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

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                           const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"project_header.h\"\n#include \"F_mainForLIBPM.h\"\n#include \"analyzeCommandLineOptions.h\"\n#include \"builtin-command-line-options.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"F_verbose_output.h\"\n#include \"cLexiqueIntrospection.h\"\n#include \"F_DisplayException.h\"\n") ;
  GALGAS_uint index_310_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_310 (in_IMPORTED_5F_COMPONENT_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_310.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_310.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_310_.increment () ;
      enumerator_310.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                      print_tool_help_message                                                  \n//--------------------------------------------------------------------------------------------------\n\nstatic void print_tool_help_message (void) {\n  gCout.appendCString (\"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileExtensions [] = {\n") ;
  GALGAS_uint index_1114_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1114 (in_PROGRAM_5F_RULE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1114.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1114.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n") ;
      index_1114_.increment () ;
      enumerator_1114.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileHelpMessages [] = {\n") ;
  GALGAS_uint index_1547_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1547 (in_PROGRAM_5F_RULE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1547.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1547.current_mSourceFileHelp (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (",\n") ;
      index_1547_.increment () ;
      enumerator_1547.gotoNextObject () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nconst char * projectVersionString (void) {\n  return ") ;
  result.appendString (in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 43)).stringValue ()) ;
  result.appendString (" ;\n}\n\n") ;
  result.appendString (in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue ()) ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                      M A I N    F O R    L I B P M                                            \n//\n//--------------------------------------------------------------------------------------------------\n\nint mainForLIBPM (int inArgc, const char * inArgv []) {\n//--- Analyze Command Line Options\n  TC_UniqueArray <String> sourceFilesArray ;\n  analyzeCommandLineOptions (inArgc, inArgv,\n                             sourceFilesArray,\n                             kSourceFileExtensions,\n                             kSourceFileHelpMessages,\n                             print_tool_help_message) ;\n//---\n  int returnCode = 0 ; // No error\n//--- Set Execution mode\n  String executionModeOptionErrorMessage ;\n  setExecutionMode (executionModeOptionErrorMessage) ;\n  if (executionModeOptionErrorMessage.length () > 0) {\n    gCout.appendString (executionModeOptionErrorMessage) ;\n    returnCode = 1 ;\n  }else{\n  //--- Common lexique object\n    Compiler * commonCompiler = nullptr ;\n    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;\n    try{\n      routine_before (commonCompiler COMMA_HERE) ;\n      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n      const bool verboseOptionOn = verboseOutput () ;\n      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;\n        const GALGAS_location location = commonCompiler->here () ;\n        const GALGAS_lstring sourceFilePath (sfp, location) ;\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_PROGRAM_5F_RULE_5F_LIST.getter_count (SOURCE_FILE ("program-file.cpp.galgasTemplate", 82)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("        int r = 0 ;\n        ") ;
    GALGAS_uint index_3878_IDX (0) ;
    if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_programRuleList enumerator_3878 (in_PROGRAM_5F_RULE_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3878.hasCurrentObject ()) {
        result.appendString ("if (fileExtension == ") ;
        result.appendString (enumerator_3878.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 87)).stringValue ()) ;
        result.appendString (") {\n") ;
        const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_3878.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GALGAS_string ("programRule_").add_operation (index_3878_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeIndexing :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeLatex :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          }\n") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GALGAS_string ("programRule_").add_operation (index_3878_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3878.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 112)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3878.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 115)).stringValue ()) ;
          result.appendString ("::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeIndexing :\n            cGrammar_") ;
          result.appendString (enumerator_3878.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 118)).stringValue ()) ;
          result.appendString ("::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeLatex :\n            cGrammar_") ;
          result.appendString (enumerator_3878.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          }\n") ;
          } break ;
        default :
          break ;
        }
        if (enumerator_3878.hasNextObject ()) {
          result.appendString ("        }else ") ;
        }
        index_3878_IDX.increment () ;
        enumerator_3878.gotoNextObject () ;
      }
    }
    result.appendString ("        }else{\n          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString ()) ;\n          r = 1 ;\n        }\n        if (r != 0) {\n          returnCode = r ;\n        }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("      }\n    //--- Error or warnings \?\n      if (totalErrorCount () > 0) {\n        returnCode = 1 ; // Error code\n      }else if (totalWarningCount () > 0) {\n        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n          returnCode = 1 ; // Error code\n          if (verboseOptionOn) {\n            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n          }\n        }\n      }\n    //--- Epilogue\n      routine_after (commonCompiler COMMA_HERE) ;\n    //--- Emit JSON issue file \?\n      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n      }\n    //--- Display error and warnings count\n      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n        String message ;\n        if (totalWarningCount () == 0) {\n          message.appendCString (\"No warning\") ;\n        }else if (totalWarningCount () == 1) {\n          message.appendCString (\"1 warning\") ;\n        }else{\n          message.appendSigned (totalWarningCount ()) ;\n          message.appendCString (\" warnings\") ;\n        }\n        message.appendCString (\", \") ;\n        if (totalErrorCount () == 0) {\n          message.appendCString (\"no error\") ;\n        }else if (totalErrorCount () == 1) {\n          message.appendCString (\"1 error\") ;\n        }else{\n          message.appendSigned (totalErrorCount ()) ;\n          message.appendCString (\" errors\") ;\n        }\n        message.appendCString (\".\\n\") ;\n        ggs_printMessage (message COMMA_HERE) ;\n      }\n    }catch (const ::std::exception & e) {\n      F_default_display_exception (e) ;\n      returnCode = 1 ; // Error code\n    }catch (...) {\n      printf (\"**** Unknow exception ****\\n\") ;\n      throw ;\n    }\n    macroDetachSharedObject (commonCompiler) ;\n  }\n  return returnCode ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                                                    GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_2681 = function_beforeNameForUsefulEntitiesGraph (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 60)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2681, var_usefulnessName_2681, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 61)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_2681  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 62)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_2891 = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 64)) ;
  cEnumerator_prologueEpilogueList enumerator_2996 (constinArgument_inPrologueList, EnumerationOrder::up) ;
  while (enumerator_2996.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_3496 ;
    {
    GALGAS_formalParameterListForGeneration joker_3544 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_2681, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_formalParameterListAST::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 71)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 72)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 73)), enumerator_2996.current_mInstructionList (HERE), enumerator_2996.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_3496, joker_3544, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 66)) ;
    }
    var_semanticInstructionListForGeneration_2891.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::class_func_new (var_blockSemanticInstructionListForGeneration_3496  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 79))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 79)) ;
    enumerator_2996.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("proc-before"), GALGAS_string ("before"), GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 88)), GALGAS_bool (true), var_semanticInstructionListForGeneration_2891  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 84))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 83)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GALGAS_programRuleList constinArgument_inProgramRules,
                                                                    GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_ruleIndex_4665 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_programRuleList enumerator_4784 (constinArgument_inProgramRules, EnumerationOrder::up) ;
  while (enumerator_4784.hasCurrentObject ()) {
    GALGAS_lstring var_usefulnessName_4836 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4784.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 110)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4836, var_usefulnessName_4836, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 111)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_4836  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 112)) ;
    GALGAS_formalParameterListAST temp_0 = GALGAS_formalParameterListAST::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 118)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas", 114)), GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas", 115)), GALGAS_lstring::class_func_new (GALGAS_string ("lstring"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 116)), enumerator_4784.current_mSourceFileVariableName (HERE), enumerator_4784.current_mSourceFileVariableNameIsUnused (HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 118)) ;
    GALGAS_formalParameterListAST var_argumentList_5062 = temp_0 ;
    GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_5651 ;
    GALGAS_formalParameterListForGeneration var_routineSignature_5699 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_4836, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_5062, GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 126)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 127)), enumerator_4784.current_mInstructionList (HERE), enumerator_4784.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_5651, var_routineSignature_5699, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 120)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("proc-programrule"), GALGAS_string ("programRule_").add_operation (var_ruleIndex_4665.getter_string (SOURCE_FILE ("programComponentCompilation.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 137)), var_routineSignature_5699, GALGAS_bool (true), var_semanticInstructionListForGeneration_5651  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 134))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 133)) ;
    var_ruleIndex_4665.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 142)) ;
    enumerator_4784.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                   GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_6715 = function_afterNameForUsefulEntitiesGraph (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 160)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6715, var_usefulnessName_6715, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 161)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_6715  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 162)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6961 = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 164)) ;
  cEnumerator_prologueEpilogueList enumerator_7028 (constinArgument_inEpilogueList, EnumerationOrder::up) ;
  while (enumerator_7028.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_7579 ;
    {
    GALGAS_formalParameterListForGeneration joker_7627 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_6715, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_formalParameterListAST::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 171)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 173)), GALGAS_typedPropertyList::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 174)), enumerator_7028.current_mInstructionList (HERE), enumerator_7028.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_7579, joker_7627, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 166)) ;
    }
    var_semanticInstructionListForGeneration_6961.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::class_func_new (var_blockSemanticInstructionListForGeneration_7579  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 180))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 180)) ;
    enumerator_7028.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("proc-after"), GALGAS_string ("after"), GALGAS_formalParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 187)), GALGAS_bool (true), var_semanticInstructionListForGeneration_6961  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 183))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 183)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                                                                    const GALGAS_programRuleList constinArgument_inProgramRules,
                                                                                    const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    const GALGAS_string constinArgument_inProjectVersionString,
                                                                                    GALGAS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GALGAS_analysisContext var_analysisContext_8865 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 213)), GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas", 215)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 211)) ;
  GALGAS_programListForGeneration var_decoratedDeclarationListForGeneration_9229 = GALGAS_programListForGeneration::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 220)) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8865, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_9229, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 221)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8865, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_9229, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 230)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8865, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_9229, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 239)) ;
  }
  GALGAS_stringset var_inclusionSet_9976 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("programComponentCompilation.galgas", 248)) ;
  GALGAS_string var_beforeAfterRulesString_10001 = GALGAS_string::makeEmptyString () ;
  cEnumerator_programListForGeneration enumerator_10036 (var_decoratedDeclarationListForGeneration_9229, EnumerationOrder::up) ;
  while (enumerator_10036.hasCurrentObject ()) {
    var_beforeAfterRulesString_10001.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_10036.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 251)) ;
    GALGAS_string var_code_10257 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_10036.current_mDeclaration (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9976, var_code_10257, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 252)) ;
    var_beforeAfterRulesString_10001.plusAssign_operation(var_code_10257, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 253)) ;
    enumerator_10036.gotoNextObject () ;
  }
  cEnumerator_programRuleList enumerator_10339 (constinArgument_inProgramRules, EnumerationOrder::up) ;
  while (enumerator_10339.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10339.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_inclusionSet_9976.addAssign_operation (GALGAS_string ("grammar-").add_operation (enumerator_10339.current_mReferenceGrammar (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 257))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 257)) ;
      }
    }
    enumerator_10339.gotoNextObject () ;
  }
  GALGAS_string var_cppContents_10505 = GALGAS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GALGAS_string ("program"), GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 262)), var_beforeAfterRulesString_10001, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 260))) ;
  outArgument_outProgramComponentForGeneration = GALGAS_programComponentForGeneration::class_func_new (GALGAS_bool (false), GALGAS_string ("program"), var_inclusionSet_9976, var_cppContents_10505  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 268)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject??galgas4?'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                                           const GALGAS_bool constinArgument_inGalgas_34_,
                                                           const GALGAS_string constinArgument_inSourceToAnalyze,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** Parsing project files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 164)) ;
      }
    }
  }
  GALGAS_galgas_33_ProjectComponentAST var_projectComponentAST_6684 ;
  var_projectComponentAST_6684.drop () ;
  cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFile, var_projectComponentAST_6684  COMMA_SOURCE_FILE ("galgasProgram.galgas", 166)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_compileProject_3F__3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, constinArgument_inSourceToAnalyze, constinArgument_inGalgas_34_, var_projectComponentAST_6684, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 168)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 170)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_cppCompilationTarget_6933 = GALGAS_string (gOption_galgas_5F_cli_5F_options_cppCompile.readProperty_value ()) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::notEqual, var_cppCompilationTarget_6933.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 173)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  routine_println_3F_ (GALGAS_string ("*** Perform C++ compilation"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 174)) ;
                  }
                }
              }
              GALGAS_string var_buildFile_7160 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (var_cppCompilationTarget_6933, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_buildFile_7160.getter_fileExists (SOURCE_FILE ("galgasProgram.galgas", 177)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  GALGAS_sint var_resultCode_7324 = GALGAS_string ("python ").add_operation (var_buildFile_7160, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 178)).getter_system (SOURCE_FILE ("galgasProgram.galgas", 178)) ;
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GALGAS_bool (ComparisonKind::notEqual, var_resultCode_7324.objectCompare (GALGAS_sint (int32_t (0L)))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      TC_Array <FixItDescription> fixItArray7 ;
                      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 180)).readProperty_location (), GALGAS_string ("Running '").add_operation (var_buildFile_7160, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)).add_operation (GALGAS_string ("' returns "), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)).add_operation (var_resultCode_7324.getter_string (SOURCE_FILE ("galgasProgram.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)), fixItArray7  COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_5) {
                TC_Array <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 183)).readProperty_location (), GALGAS_string ("Cannot perform C++ compilation of '").add_operation (var_cppCompilationTarget_6933, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)).add_operation (GALGAS_string ("' : the '"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)).add_operation (var_buildFile_7160, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 184)).add_operation (GALGAS_string ("' file does not exist"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 184)), fixItArray8  COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)) ;
              }
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProject???galgas4?'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject_3F__3F__3F_galgas_34__3F_ (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                                       const GALGAS_string constinArgument_inSourceToAnalyze,
                                                       const GALGAS_bool constinArgument_inGalgas_34_,
                                                       const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST var_declarationAST_8101 = GALGAS_galgasDeclarationAST::class_func_new (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 197)) ;
  cGrammar_galgas_34_Grammar::_performSourceStringParsing_ (inCompiler, GALGAS_filewrapper (gWrapperDirectory_0_typeGenerationTemplate).getter_textFileContentsAtPath (GALGAS_string ("galgas-predefined-types.ggs"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 201)), GALGAS_string ("GALGAS predefined types"), var_declarationAST_8101  COMMA_SOURCE_FILE ("galgasProgram.galgas", 200)) ;
  cEnumerator_lstringlist enumerator_8414 (constinArgument_inProjectComponentAST.readProperty_mProjectSourceList (), EnumerationOrder::up) ;
  while (enumerator_8414.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_8414.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 205)).objectCompare (GALGAS_string ("galgas"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteSourcePath_8526 = enumerator_8414.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 206)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 206)) ;
        cGrammar_galgas_33_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::class_func_new (var_absoluteSourcePath_8526, enumerator_8414.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 207)), var_declarationAST_8101  COMMA_SOURCE_FILE ("galgasProgram.galgas", 207)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_8414.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 208)).objectCompare (GALGAS_string ("ggs"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteSourcePath_8794 = enumerator_8414.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 209)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 209)) ;
          cGrammar_galgas_34_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::class_func_new (var_absoluteSourcePath_8794, enumerator_8414.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 210)), var_declarationAST_8101  COMMA_SOURCE_FILE ("galgasProgram.galgas", 210)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_8414.current_mValue (HERE).readProperty_location (), GALGAS_string ("only \".galgas\" or \".ggs\" extensions are allowed here"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 212)) ;
      }
    }
    enumerator_8414.gotoNextObject () ;
  }
  GALGAS_stringlist var_handCodedLinkToolFileList_10030 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 235)) ;
  GALGAS_stringlist var_handCodedLinkAppFileList_10080 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 236)) ;
  GALGAS_stringlist var_handCodedSourceAppFileList_10129 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 237)) ;
  GALGAS_stringlist var_handCodedSourceToolFileList_10180 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 238)) ;
  GALGAS_stringlist var_frameworkToolFileList_10232 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 239)) ;
  GALGAS_stringset var_handCodedSourceDirectorySet_10277 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 240)) ;
  cEnumerator_galgas_33_QualifiedFeatureList enumerator_10330 (constinArgument_inProjectComponentAST.readProperty_mQualifiedFeatureList (), EnumerationOrder::up) ;
  while (enumerator_10330.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("tool-source").objectCompare (enumerator_10330.current_mFeatureName (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_handCodedSourceToolFileList_10180.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 243)) ;
        GALGAS_string var_directory_10503 = enumerator_10330.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 244)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::equal, var_directory_10503.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_handCodedSourceDirectorySet_10277.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 246)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (ComparisonKind::notEqual, var_directory_10503.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 247)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_handCodedSourceDirectorySet_10277.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_10503, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 248))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 248)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_handCodedSourceDirectorySet_10277.addAssign_operation (var_directory_10503  COMMA_SOURCE_FILE ("galgasProgram.galgas", 250)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-include"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_handCodedSourceDirectorySet_10277.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 253)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-framework"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_frameworkToolFileList_10232.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 255))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 255)) ;
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("app-source"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_handCodedSourceAppFileList_10129.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 257)) ;
              GALGAS_string var_directory_11164 = enumerator_10330.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 258)) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (ComparisonKind::equal, var_directory_11164.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_handCodedSourceDirectorySet_10277.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 260)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (ComparisonKind::notEqual, var_directory_11164.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 261)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_handCodedSourceDirectorySet_10277.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_11164, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 262))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 262)) ;
                  }
                }
                if (kBoolFalse == test_10) {
                  var_handCodedSourceDirectorySet_10277.addAssign_operation (var_directory_11164  COMMA_SOURCE_FILE ("galgasProgram.galgas", 264)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-link"))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_handCodedLinkToolFileList_10030.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 267)) ;
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("app-link"))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  var_handCodedLinkAppFileList_10080.addAssign_operation (enumerator_10330.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 269)) ;
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("libpmAtPath"))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                  }
                }
                if (kBoolFalse == test_13) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("applicationBundleBase"))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                    }
                  }
                  if (kBoolFalse == test_14) {
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("macCodeSign"))).boolEnum () ;
                      if (kBoolTrue == test_15) {
                      }
                    }
                    if (kBoolFalse == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (ComparisonKind::equal, enumerator_10330.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("MacOSDeployment"))).boolEnum () ;
                        if (kBoolTrue == test_16) {
                        }
                      }
                      if (kBoolFalse == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (enumerator_10330.current_mFeatureName (HERE).readProperty_location (), GALGAS_string ("unknown feature"), fixItArray17  COMMA_SOURCE_FILE ("galgasProgram.galgas", 275)) ;
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
    enumerator_10330.gotoNextObject () ;
  }
  {
  routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (var_declarationAST_8101.readProperty_mSyntaxComponentList (), var_declarationAST_8101.readProperty_mSyntaxExtensions (), var_declarationAST_8101.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 288)) ;
  }
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_12919 = GALGAS_usefulEntitiesGraph::class_func_emptyGraph (SOURCE_FILE ("galgasProgram.galgas", 294)) ;
  GALGAS_string var_buildDirectoryName_12967 ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = constinArgument_inGalgas_34_.boolEnum () ;
    if (kBoolTrue == test_18) {
      var_buildDirectoryName_12967 = constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 297)).getter_stringByReplacingStringByString (GALGAS_string ("."), GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 297)).add_operation (GALGAS_string ("-build"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 297)) ;
    }
  }
  if (kBoolFalse == test_18) {
    var_buildDirectoryName_12967 = GALGAS_string ("build") ;
  }
  GALGAS_string var_absoluteBuildDirectory_13178 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 301)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 301)).add_operation (var_buildDirectoryName_12967, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 301)) ;
  GALGAS_string var_productDirectory_13292 = var_absoluteBuildDirectory_13178.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 302)) ;
  GALGAS_stringlist var_appProductFileList_13364 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 303)) ;
  GALGAS_semanticContext var_semanticContext_13412 ;
  GALGAS_unifiedTypeMap var_typeMap_13450 ;
  GALGAS_semanticDeclarationListForGeneration var_semanticDeclarationSortedListForGeneration_13502 ;
  GALGAS_lstringlist var_usefulnessRootEntities_13564 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 307)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 308)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (var_usefulnessRootEntities_13564, var_usefulEntitiesGraph_12919, constinArgument_inGalgas_34_, var_productDirectory_13292, constinArgument_inProjectComponentAST.readProperty_mEndOfSourceFile (), var_declarationAST_8101.readProperty_mDeclarationList (), var_semanticContext_13412, var_typeMap_13450, var_semanticDeclarationSortedListForGeneration_13502, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 309)) ;
      }
    }
  }
  if (kBoolFalse == test_19) {
    var_semanticDeclarationSortedListForGeneration_13502 = GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 321)) ;
    var_semanticContext_13412 = GALGAS_semanticContext::class_func_new (constinArgument_inGalgas_34_, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 322)) ;
    var_typeMap_13450 = GALGAS_unifiedTypeMap::class_func_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 323)) ;
  }
  GALGAS_optionComponentMapForGeneration var_optionComponentMapForGeneration_14200 ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 327)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (var_declarationAST_8101.readProperty_mGUIComponentList (), var_semanticContext_13412, var_optionComponentMapForGeneration_14200, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 328)) ;
      }
    }
  }
  if (kBoolFalse == test_20) {
    var_optionComponentMapForGeneration_14200 = GALGAS_optionComponentMapForGeneration::class_func_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 334)) ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 337)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string var_projectVersionString_14575 = constinArgument_inProjectComponentAST.readProperty_mMajorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 338)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 338)).add_operation (constinArgument_inProjectComponentAST.readProperty_mMinorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 339)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 339)).add_operation (constinArgument_inProjectComponentAST.readProperty_mRevisionVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 340)) ;
      GALGAS_programComponentForGeneration var_programComponentForGeneration_15104 ;
      {
      routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (var_usefulnessRootEntities_13564, var_usefulEntitiesGraph_12919, var_declarationAST_8101.readProperty_mPrologueDeclarationList (), var_declarationAST_8101.readProperty_mSourceRuleList (), var_declarationAST_8101.readProperty_mEpilogueDeclarationList (), var_semanticContext_13412, var_typeMap_13450, var_projectVersionString_14575, var_programComponentForGeneration_15104, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 341)) ;
      }
      var_semanticDeclarationSortedListForGeneration_13502.addAssign_operation (GALGAS_string ("zprogram"), var_programComponentForGeneration_15104  COMMA_SOURCE_FILE ("galgasProgram.galgas", 352)) ;
    }
  }
  {
  routine_checkUsefulEntities_3F__3F__3F_ (var_usefulEntitiesGraph_12919, var_usefulnessRootEntities_13564, var_productDirectory_13292, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 355)) ;
  }
  GALGAS_string var_typeDumpFilePath_15497 = var_productDirectory_13292.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 357)).add_operation (constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 357)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 357)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_22) {
      GALGAS_stringset var_firstLetterSet_15688 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 359)) ;
      cEnumerator_unifiedTypeMap enumerator_15723 (var_typeMap_13450, EnumerationOrder::up) ;
      while (enumerator_15723.hasCurrentObject ()) {
        var_firstLetterSet_15688.addAssign_operation (enumerator_15723.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 361)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 361))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 361)) ;
        enumerator_15723.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_15831 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_15868 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_15912 (var_typeMap_13450, EnumerationOrder::up) ;
      while (enumerator_15912.hasCurrentObject ()) {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (ComparisonKind::notEqual, var_currentFirstLetter_15868.objectCompare (enumerator_15912.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 366)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            var_currentFirstLetter_15868 = enumerator_15912.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 367)) ;
            var_tableOfTypeString_15831.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15868.getter_uint (SOURCE_FILE ("galgasProgram.galgas", 368)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 368)) ;
            var_tableOfTypeString_15831.plusAssign_operation(GALGAS_string ("\"><b>").add_operation (var_currentFirstLetter_15868.getter_string (SOURCE_FILE ("galgasProgram.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 369)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 369)) ;
          }
        }
        var_tableOfTypeString_15831.plusAssign_operation(function_linkForType (enumerator_15912.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 371)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 371)) ;
        enumerator_15912.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_16316 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 374)), var_typeMap_13450, var_firstLetterSet_15688, var_tableOfTypeString_15831 COMMA_SOURCE_FILE ("galgasProgram.galgas", 373))) ;
      GALGAS_bool joker_16568 ; // Joker input parameter
      var_typeDumpString_16316.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_15497, joker_16568, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 379)) ;
    }
  }
  if (kBoolFalse == test_22) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_15497, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 381)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 384)))).operator_and (GALGAS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 384)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (var_typeMap_13450, var_declarationAST_8101.readProperty_mDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 385)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 391)))).operator_and (GALGAS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 391)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (var_typeMap_13450, var_absoluteBuildDirectory_13178, var_buildDirectoryName_12967, var_optionComponentMapForGeneration_14200, var_appProductFileList_13364, var_semanticDeclarationSortedListForGeneration_13502, var_declarationAST_8101.readProperty_mSourceRuleList (), constinArgument_inProjectComponentAST, constinArgument_inProjectSourceFile.readProperty_string (), var_handCodedSourceDirectorySet_10277, var_handCodedSourceToolFileList_10180, var_frameworkToolFileList_10232, var_handCodedSourceAppFileList_10129, var_handCodedLinkAppFileList_10080, var_handCodedLinkToolFileList_10030, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 392)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration??absoluteBuildDir?buildDirName????????????'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                                                                                                        const GALGAS_string constinArgument_inAbsoluteBuildDirectory,
                                                                                                                        const GALGAS_string constinArgument_inBuildDirectoryName,
                                                                                                                        const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                                                                        const GALGAS_stringlist constinArgument_inAppProductFileList,
                                                                                                                        const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                                                                                                        const GALGAS_programRuleList constinArgument_inSourceRuleList,
                                                                                                                        const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                                                                                                                        const GALGAS_string constinArgument_inProjectSourceFile,
                                                                                                                        const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                                                                                                        const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                                                                                                        const GALGAS_stringlist constinArgument_inFrameworkToolFileList,
                                                                                                                        const GALGAS_stringlist constinArgument_inHandCodedSourceAppFileList,
                                                                                                                        const GALGAS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                                                                                                        const GALGAS_stringlist constinArgument_inHandCodedLinkToolFileList,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_appProductFileList_18569 = constinArgument_inAppProductFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 437)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** Generating files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 438)) ;
      }
    }
  }
  GALGAS_stringset var_allProductFileSet_18761 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 440)) ;
  GALGAS_string var_userHeadersDir_18871 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/user-headers"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 442)) ;
  var_userHeadersDir_18871.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 443)) ;
  GALGAS_bool var_quietOutputByDefault_19028 = GALGAS_stringset::class_func_setWithLStringList (constinArgument_inProjectComponentAST.readProperty_mGenerationFeatureList ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 445)).getter_hasKey (GALGAS_string ("quietOutputByDefault") COMMA_SOURCE_FILE ("galgasProgram.galgas", 445)) ;
  GALGAS_string var_productDirectory_19228 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 447)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 451)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26__26_ (constinArgument_inOptionComponentMapForGeneration, var_productDirectory_19228, var_quietOutputByDefault_19028, var_appProductFileList_18569, var_allProductFileSet_18761, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 452)) ;
      }
    }
  }
  GALGAS_stringlist var_toolCppFileList_19753 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 462)) ;
  GALGAS_stringlist var_toolHeaderFileList_19793 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("galgasProgram.galgas", 463)) ;
  {
  routine_generatePredefinedTypeFiles_3F__3F__26__26__26_ (var_productDirectory_19228, constinArgument_inSemanticDeclarationSortedListForGeneration, var_toolHeaderFileList_19793, var_toolCppFileList_19753, var_allProductFileSet_18761, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 464)) ;
  }
  {
  routine_generateSemanticDeclarationsGalgas_33__3F__3F__3F__26__26__26__26_ (constinArgument_inTypeMap, var_productDirectory_19228, constinArgument_inSemanticDeclarationSortedListForGeneration, var_appProductFileList_18569, var_toolCppFileList_19753, var_toolHeaderFileList_19793, var_allProductFileSet_18761, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 471)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringset var_handledExtensionSet_20362 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 483)) ;
      cEnumerator_programRuleList enumerator_20428 (constinArgument_inSourceRuleList, EnumerationOrder::up) ;
      while (enumerator_20428.hasCurrentObject ()) {
        var_handledExtensionSet_20362.addAssign_operation (enumerator_20428.current_mSourceFileExtension (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 485)) ;
        enumerator_20428.gotoNextObject () ;
      }
      GALGAS_stringset var_ignoredFeatureSet_20574 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 488)) ;
      var_ignoredFeatureSet_20574.addAssign_operation (GALGAS_string ("tool-framework")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 489)) ;
      var_ignoredFeatureSet_20574.addAssign_operation (GALGAS_string ("tool-source")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 490)) ;
      var_ignoredFeatureSet_20574.addAssign_operation (GALGAS_string ("tool-link")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 491)) ;
      var_ignoredFeatureSet_20574.addAssign_operation (GALGAS_string ("app-source")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 492)) ;
      GALGAS_projectQualifiedFeatureMap var_projectQualifiedFeatureMap_20794 = GALGAS_projectQualifiedFeatureMap::class_func_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 493)) ;
      cEnumerator_galgas_33_QualifiedFeatureList enumerator_20849 (constinArgument_inProjectComponentAST.readProperty_mQualifiedFeatureList (), EnumerationOrder::up) ;
      while (enumerator_20849.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_ignoredFeatureSet_20574.getter_hasKey (enumerator_20849.current_mFeatureName (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasProgram.galgas", 495)).operator_not (SOURCE_FILE ("galgasProgram.galgas", 495)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_projectQualifiedFeatureMap_20794.setter_insertKey (enumerator_20849.current_mFeatureName (HERE), enumerator_20849.current_mFeatureValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 496)) ;
            }
          }
        }
        enumerator_20849.gotoNextObject () ;
      }
      {
      routine_updateGalgasTargets_3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__3F__3F_ (constinArgument_inAbsoluteBuildDirectory, constinArgument_inBuildDirectoryName, constinArgument_inProjectSourceFile, constinArgument_inProjectComponentAST.readProperty_mTargetName ().readProperty_string (), constinArgument_inProjectComponentAST.readProperty_mEndOfSourceFile (), constinArgument_inProjectComponentAST.readProperty_mMajorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 508)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 508)).add_operation (constinArgument_inProjectComponentAST.readProperty_mMinorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 508)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 508)).add_operation (constinArgument_inProjectComponentAST.readProperty_mRevisionVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 508)), var_projectQualifiedFeatureMap_20794, constinArgument_inProjectComponentAST.readProperty_mGenerationFeatureList (), var_quietOutputByDefault_19028, var_toolCppFileList_19753, var_toolHeaderFileList_19793, var_appProductFileList_18569, constinArgument_inHandCodedSourceToolFileList, constinArgument_inFrameworkToolFileList, constinArgument_inHandCodedSourceDirectorySet, var_handledExtensionSet_20362, var_allProductFileSet_18761, constinArgument_inHandCodedSourceAppFileList, constinArgument_inHandCodedLinkAppFileList, constinArgument_inHandCodedLinkToolFileList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 502)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 526)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_stringset var_allActualFileSet_22080 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("galgasProgram.galgas", 527)) ;
      cEnumerator_stringlist enumerator_22112 (var_productDirectory_19228.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("galgasProgram.galgas", 528)), EnumerationOrder::up) ;
      while (enumerator_22112.hasCurrentObject ()) {
        var_allActualFileSet_22080.addAssign_operation (enumerator_22112.current_mValue (HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas", 529)) ;
        enumerator_22112.gotoNextObject () ;
      }
      GALGAS_stringset var_uselessFileSet_22215 = var_allActualFileSet_22080.substract_operation (var_allProductFileSet_18761, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 531)) ;
      cEnumerator_stringset enumerator_22278 (var_uselessFileSet_22215, EnumerationOrder::up) ;
      while (enumerator_22278.hasCurrentObject ()) {
        {
        GALGAS_string::class_method_deleteFile (var_productDirectory_19228.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 533)).add_operation (enumerator_22278.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 533)) ;
        }
        enumerator_22278.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeDumpGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'makefile-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'makefile-macosx'

const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate (
  "makefile-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_1,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_1
) ;

//--- All files of 'makefile-unix' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_5 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_5 [1] = {
  nullptr
} ;

//--- Directory 'makefile-unix'

const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate (
  "makefile-unix",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_5,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_5
) ;

//--- All files of 'makefile-win32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'makefile-win32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_2,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_2
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_7 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_7 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_7,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_7
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_6 [1] = {
  nullptr
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_6 [1] = {
  nullptr
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_6,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_6
) ;

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate (
  "Base.lproj",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_4,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_4
) ;

//--- All files of 'project-xcode-objc' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'project-xcode-objc' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_typeDumpGenerationTemplate,
  nullptr
} ;

//--- Directory 'project-xcode-objc'

const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate (
  "project-xcode-objc",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_3,
  1,
  gWrapperAllDirectories_typeDumpGenerationTemplate_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [7] = {
  & gWrapperDirectory_1_typeDumpGenerationTemplate,
  & gWrapperDirectory_5_typeDumpGenerationTemplate,
  & gWrapperDirectory_2_typeDumpGenerationTemplate,
  & gWrapperDirectory_7_typeDumpGenerationTemplate,
  & gWrapperDirectory_6_typeDumpGenerationTemplate,
  & gWrapperDirectory_3_typeDumpGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  6,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeDumpGenerationTemplate typeDump'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n<html>\n<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n<title>Types of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</title>\n<style type=\"text/css\">body {\n  font-family: Georgia, sans-serif ;\n  font-size: small ;\n}\n\nh1 {\n  text-align: center ;\n}\n\n.selecteur {\n  color:green ;\n}\n\na.header_link {\n  background-color: #FFFFCC ;\n}\n\na:visited, a:link, a:active{\n  color: blue ;\n  text-decoration: underline ;\n}\n\na:hover {\n  color:green ;\n  background-color: #FFFF00 ;\n  text-decoration: none ;\n}\n\ntable.result {\n  border: 1px solid #666666 ;\n  border-collapse: collapse ;\n}\n\ntd.result_title {\n  font-weight: bold ;\n  text-align: center ;\n  background-color: yellow ;\n  border-top: 2px solid #666666 ;\n}\n\ntr.result_line {\n  background-color: #EEEEEE ;\n  border-top: 1px solid #999999 ;\n}\n\n</style>\n</head>\n<body>\n<div>\n<h1>Types of ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</h1>\n<p>This document lists all ") ;
  result.appendString (in_UNIFIED_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue ()) ;
  result.appendString (" defined types, sorted by name.</p>\n<p>") ;
  GALGAS_uint index_1069_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1069 (in_FIRST_5F_LETTER_5F_SET, EnumerationOrder::up) ;
    while (enumerator_1069.hasCurrentObject ()) {
      result.appendString ("<a class=\"header_link\" href=\"#") ;
      result.appendString (enumerator_1069.current_key (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("\">") ;
      result.appendString (enumerator_1069.current_key (HERE).stringValue ()) ;
      result.appendString ("</a>") ;
      if (enumerator_1069.hasNextObject ()) {
        result.appendString (" - ") ;
      }
      index_1069_.increment () ;
      enumerator_1069.gotoNextObject () ;
    }
  }
  result.appendString ("</p>\n<p>") ;
  result.appendString (in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue ()) ;
  result.appendString ("\n</p>\n<table class=\"result\">\n") ;
  GALGAS_uint index_1286_ (0) ;
  if (in_UNIFIED_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1286 (in_UNIFIED_5F_TYPE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1286.hasCurrentObject ()) {
      result.appendString ("\n<tr><td colspan=\"2\" class=\"result_title\"><a name=\"") ;
      result.appendString (enumerator_1286.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\">@") ;
      result.appendString (enumerator_1286.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("</a></td></tr>\n<tr class=\"result_line\">\n  <td>Kind</td>\n  <td>\n    ") ;
      const enumGalgasBool test_0 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 72)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 72)).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("abstract ") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      switch (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).readProperty_typeKind ().enumValue ()) {
      case GALGAS_typeKindEnum::kNotBuilt :
        break ;
      case GALGAS_typeKindEnum::kEnum_classType :
        {
          result.appendString ("class") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_enumType :
        {
          result.appendString ("enum") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_listType :
        {
          result.appendString ("list") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_sortedListType :
        {
          result.appendString ("sorted list") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_mapType :
        {
          result.appendString ("map") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_sharedMapType :
        {
          result.appendString ("shared map") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_sharedMapEntryType :
        {
          result.appendString ("shared map entry") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_listMapType :
        {
          result.appendString ("list map") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_boolsetType :
        {
          result.appendString ("boolset") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_structType :
        {
          result.appendString ("struct") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_graphType :
        {
          result.appendString ("graph") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_externType :
        {
          result.appendString ("extern") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_otherType :
        {
          result.appendString ("other type") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_packageType :
        {
          result.appendString ("package type") ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_weakReferenceType :
        {
          result.appendString ("weak reference") ;
        }
        break ;
      }
      result.appendString ("\n</td></tr>\n") ;
      const enumGalgasBool test_1 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).readProperty_superType ().getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Superclass</td><td>") ;
        result.appendString (function_linkForType (extensionGetter_definition (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue ()) ;
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("\n<tr class=\"result_line\"><td>Operators</td>\n  <td>\n    ") ;
      const enumGalgasBool test_2 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 96)).readProperty_mHandledOperatorFlags ().getter_infixAddOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 96)).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("addition: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue ()) ;
        result.appendString (" + ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_3 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 99)).readProperty_mHandledOperatorFlags ().getter_infixSubOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 99)).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("substraction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue ()) ;
        result.appendString (" - ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_4 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 102)).readProperty_mHandledOperatorFlags ().getter_infixMulOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 102)).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("multiplication: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue ()) ;
        result.appendString (" * ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_5 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 105)).readProperty_mHandledOperatorFlags ().getter_infixDivOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 105)).boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.appendString ("division: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue ()) ;
        result.appendString (" / ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_6 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).readProperty_mHandledOperatorFlags ().getter_infixModOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).boolEnum () ;
      switch (test_6) {
      case kBoolTrue : {
        result.appendString ("modulo: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString (" <b>mod</b> ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_7 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).readProperty_mHandledOperatorFlags ().getter_infixShiftOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("left shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue ()) ;
        result.appendString (" &lt;&lt; ") ;
        result.appendString (function_linkForType (GALGAS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue ()) ;
        result.appendString ("<br><br>left shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue ()) ;
        result.appendString (" &lt;&lt; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue ()) ;
        result.appendString ("<br><br>right shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue ()) ;
        result.appendString (" &gt;&gt; ") ;
        result.appendString (function_linkForType (GALGAS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue ()) ;
        result.appendString ("<br><br>right shift: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue ()) ;
        result.appendString (" &gt;&gt; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_8 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 117)).readProperty_mHandledOperatorFlags ().getter_prefixPlusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 117)).boolEnum () ;
      switch (test_8) {
      case kBoolTrue : {
        result.appendString ("prefix +: + ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_9 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 120)).readProperty_mHandledOperatorFlags ().getter_prefixMinusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 120)).boolEnum () ;
      switch (test_9) {
      case kBoolTrue : {
        result.appendString ("prefix -: - ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_10 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 123)).readProperty_mHandledOperatorFlags ().getter_prefixTildeOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 123)).boolEnum () ;
      switch (test_10) {
      case kBoolTrue : {
        result.appendString ("bit wise negation: ~ ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_11 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 126)).readProperty_mHandledOperatorFlags ().getter_infixAndOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 126)).boolEnum () ;
      switch (test_11) {
      case kBoolTrue : {
        result.appendString ("boolean and: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue ()) ;
        result.appendString (" &amp; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_12 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).readProperty_mHandledOperatorFlags ().getter_infixOrOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).boolEnum () ;
      switch (test_12) {
      case kBoolTrue : {
        result.appendString ("inclusive or: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue ()) ;
        result.appendString (" | ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_13 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 132)).readProperty_mHandledOperatorFlags ().getter_infixXorOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 132)).boolEnum () ;
      switch (test_13) {
      case kBoolTrue : {
        result.appendString ("exclusive or: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (" ^ ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_14 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).readProperty_mHandledOperatorFlags ().getter_prefixNotOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).boolEnum () ;
      switch (test_14) {
      case kBoolTrue : {
        result.appendString ("boolean negation: <b>not</b> ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("equality test: ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" == ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (" &rarr; ") ;
      result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue ()) ;
      result.appendString ("<br><br>inequality test: ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
      result.appendString (" != ") ;
      result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
      result.appendString (" &rarr; ") ;
      result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue ()) ;
      result.appendString ("<br><br>") ;
      const enumGalgasBool test_15 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 140)).readProperty_mHandledOperatorFlags ().getter_isComparable (SOURCE_FILE ("typeDump.html.galgasTemplate", 140)).boolEnum () ;
      switch (test_15) {
      case kBoolTrue : {
        result.appendString ("lower than test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue ()) ;
        result.appendString (" &lt; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue ()) ;
        result.appendString ("<br><br>lower or equal test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (" &lt;= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue ()) ;
        result.appendString ("<br><br>greater than test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue ()) ;
        result.appendString (" &gt; ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue ()) ;
        result.appendString ("<br><br>greater or equal test: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue ()) ;
        result.appendString (" &gt;= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue ()) ;
        result.appendString (" &rarr; ") ;
        result.appendString (function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_16 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 146)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 146)).boolEnum () ;
      switch (test_16) {
      case kBoolTrue : {
        result.appendString ("+= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).stringValue ()) ;
        result.appendString (" += ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_17 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 149)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 149)).boolEnum () ;
      switch (test_17) {
      case kBoolTrue : {
        result.appendString ("-= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).stringValue ()) ;
        result.appendString (" -= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_18 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 152)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 152)).boolEnum () ;
      switch (test_18) {
      case kBoolTrue : {
        result.appendString ("*= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 153)).stringValue ()) ;
        result.appendString (" *= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 153)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_19 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 155)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 155)).boolEnum () ;
      switch (test_19) {
      case kBoolTrue : {
        result.appendString ("/= instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).stringValue ()) ;
        result.appendString (" /= ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).stringValue ()) ;
        result.appendString ("<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_20 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).boolEnum () ;
      switch (test_20) {
      case kBoolTrue : {
        result.appendString ("incrementation instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue ()) ;
        result.appendString (" ++<br><br>decrementation instruction: ") ;
        result.appendString (function_linkForType (enumerator_1286.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 160)).stringValue ()) ;
        result.appendString (" --<br><br>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("\n</td></tr>\n") ;
      const enumGalgasBool test_21 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 165)).readProperty_mAddAssignOperatorArguments ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_21) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>+= !... !...</td><td>") ;
        GALGAS_uint index_7806_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 167)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
          cEnumerator_functionSignature enumerator_7806 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 167)).readProperty_mAddAssignOperatorArguments (), EnumerationOrder::up) ;
          while (enumerator_7806.hasCurrentObject ()) {
            result.appendString ("<span class=\"selecteur\">\?") ;
            const enumGalgasBool test_22 = GALGAS_bool (ComparisonKind::notEqual, enumerator_7806.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            switch (test_22) {
            case kBoolTrue : {
              result.appendString (enumerator_7806.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 168)).stringValue ()) ;
              } break ;
            case kBoolFalse : {
              } break ;
            default :
              break ;
            }
            result.appendString ("</span>") ;
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_7806.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_7806.current_mFormalArgumentName (HERE).stringValue ()) ;
            result.appendString ("<br>") ;
            index_7806_.increment () ;
            enumerator_7806.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_23 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 173)).readProperty_enumerationDescriptorList ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 173)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_23) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td><b>for</b> constants</td><td>") ;
        GALGAS_uint index_8265_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 175)).readProperty_enumerationDescriptorList ().isValid ()) {
          cEnumerator_enumerationDescriptorList enumerator_8265 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 175)).readProperty_enumerationDescriptorList (), EnumerationOrder::up) ;
          while (enumerator_8265.hasCurrentObject ()) {
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_8265.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_8265.current_mEnumerationName (HERE).stringValue ()) ;
            result.appendString ("<br>") ;
            index_8265_.increment () ;
            enumerator_8265.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_24 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).readProperty_mTypeForEnumeratedElement ().getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).boolEnum () ;
      switch (test_24) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td><b>for</b> enumeration type</td><td>") ;
        result.appendString (function_linkForType (extensionGetter_definition (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).stringValue ()) ;
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_25 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 184)).readProperty_classFunctionMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 184)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_25) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Class Functions</td><td>") ;
        GALGAS_uint index_8871_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 186)).readProperty_classFunctionMap ().isValid ()) {
          cEnumerator_classFunctionMap enumerator_8871 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 186)).readProperty_classFunctionMap (), EnumerationOrder::up) ;
          while (enumerator_8871.hasCurrentObject ()) {
            result.appendString ("<b>class function</b> ") ;
            result.appendString (enumerator_8871.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GALGAS_uint index_9004_ (0) ;
            if (enumerator_8871.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_9004 (enumerator_8871.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
              while (enumerator_9004.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp; <span class=\"selecteur\">\?") ;
                const enumGalgasBool test_26 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9004.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                switch (test_26) {
                case kBoolTrue : {
                  result.appendString (enumerator_9004.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 190)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  } break ;
                default :
                  break ;
                }
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_9004.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 191)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 191)).stringValue ()) ;
                result.appendString ("</span> ") ;
                result.appendString (enumerator_9004.current_mFormalArgumentName (HERE).stringValue ()) ;
                index_9004_.increment () ;
                enumerator_9004.gotoNextObject () ;
              }
            }
            result.appendString (" &rarr; ") ;
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_8871.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 193)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 193)).stringValue ()) ;
            result.appendString ("<br><br>") ;
            index_8871_.increment () ;
            enumerator_8871.gotoNextObject () ;
          }
        }
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_27 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 197)).readProperty_getterMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 197)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_27) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Getters</td><td>") ;
        GALGAS_uint index_9626_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 199)).readProperty_getterMap ().isValid ()) {
          cEnumerator_getterMap enumerator_9626 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 199)).readProperty_getterMap (), EnumerationOrder::up) ;
          while (enumerator_9626.hasCurrentObject ()) {
            switch (enumerator_9626.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_9626.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtual :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>getter</b> ") ;
            result.appendString (enumerator_9626.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GALGAS_uint index_10130_ (0) ;
            if (enumerator_9626.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_10130 (enumerator_9626.current_mArgumentTypeList (HERE), EnumerationOrder::up) ;
              while (enumerator_10130.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp; \?<span class=\"selecteur\">") ;
                const enumGalgasBool test_28 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10130.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                switch (test_28) {
                case kBoolTrue : {
                  result.appendString (enumerator_10130.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 216)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  } break ;
                default :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_10130.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 217)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_10130.current_mFormalArgumentName (HERE).stringValue ()) ;
                index_10130_.increment () ;
                enumerator_10130.gotoNextObject () ;
              }
            }
            result.appendString (" &rarr; ") ;
            result.appendString (function_linkForType (extensionGetter_definition (enumerator_9626.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 219)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 219)).stringValue ()) ;
            result.appendString ("<br><br>") ;
            index_9626_.increment () ;
            enumerator_9626.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_29 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 224)).readProperty_instanceMethodMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 224)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_29) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Methods</td><td>") ;
        GALGAS_uint index_10761_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 226)).readProperty_instanceMethodMap ().isValid ()) {
          cEnumerator_instanceMethodMap enumerator_10761 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 226)).readProperty_instanceMethodMap (), EnumerationOrder::up) ;
          while (enumerator_10761.hasCurrentObject ()) {
            switch (enumerator_10761.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_10761.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtual :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>method</b> ") ;
            result.appendString (enumerator_10761.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GALGAS_uint index_11287_ (0) ;
            if (enumerator_10761.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_11287 (enumerator_10761.current_mParameterList (HERE), EnumerationOrder::up) ;
              while (enumerator_11287.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_11287.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const enumGalgasBool test_30 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11287.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                switch (test_30) {
                case kBoolTrue : {
                  result.appendString (enumerator_11287.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 249)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  } break ;
                default :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_11287.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 250)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_11287.current_mFormalArgumentName (HERE).stringValue ()) ;
                index_11287_.increment () ;
                enumerator_11287.gotoNextObject () ;
              }
            }
            result.appendString ("<br><br>") ;
            index_10761_.increment () ;
            enumerator_10761.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_31 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 257)).readProperty_setterMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 257)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_31) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Setters</td><td>") ;
        GALGAS_uint index_12081_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 259)).readProperty_setterMap ().isValid ()) {
          cEnumerator_setterMap enumerator_12081 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 259)).readProperty_setterMap (), EnumerationOrder::up) ;
          while (enumerator_12081.hasCurrentObject ()) {
            switch (enumerator_12081.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result.appendString ("(extension) ") ;
              }
              break ;
            }
            switch (enumerator_12081.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualAbstract :
              {
                result.appendString ("<b>abstract</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtual :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverriding :
              {
                result.appendString ("<b>override</b> ") ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract :
              {
                result.appendString ("<b>abstract override</b> ") ;
              }
              break ;
            }
            result.appendString ("<b>setter</b> ") ;
            result.appendString (enumerator_12081.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GALGAS_uint index_12607_ (0) ;
            if (enumerator_12081.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_12607 (enumerator_12081.current_mParameterList (HERE), EnumerationOrder::up) ;
              while (enumerator_12607.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_12607.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const enumGalgasBool test_32 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12607.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                switch (test_32) {
                case kBoolTrue : {
                  result.appendString (enumerator_12607.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 282)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  } break ;
                default :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_12607.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 283)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 283)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_12607.current_mFormalArgumentName (HERE).stringValue ()) ;
                index_12607_.increment () ;
                enumerator_12607.gotoNextObject () ;
              }
            }
            result.appendString ("<br><br>") ;
            index_12081_.increment () ;
            enumerator_12081.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      const enumGalgasBool test_33 = GALGAS_bool (ComparisonKind::greaterThan, callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 290)).readProperty_classMethodMap ().getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 290)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_33) {
      case kBoolTrue : {
        result.appendString ("<tr class=\"result_line\"><td>Type procs</td><td>") ;
        GALGAS_uint index_13383_ (0) ;
        if (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 292)).readProperty_classMethodMap ().isValid ()) {
          cEnumerator_classMethodMap enumerator_13383 (callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_1286.current_mElement (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 292)).readProperty_classMethodMap (), EnumerationOrder::up) ;
          while (enumerator_13383.hasCurrentObject ()) {
            result.appendString ("<b>proc</b> @") ;
            result.appendString (enumerator_13383.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_13383.current_lkey (HERE).readProperty_string ().stringValue ()) ;
            GALGAS_uint index_13544_ (0) ;
            if (enumerator_13383.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_13544 (enumerator_13383.current_mParameterList (HERE), EnumerationOrder::up) ;
              while (enumerator_13544.hasCurrentObject ()) {
                result.appendString ("<br>&nbsp;&nbsp;&nbsp;&nbsp;") ;
                switch (enumerator_13544.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result.appendString (" <span class=\"selecteur\">\?") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result.appendString (" <span class=\"selecteur\">\?!") ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result.appendString (" <span class=\"selecteur\">!") ;
                  }
                  break ;
                }
                const enumGalgasBool test_34 = GALGAS_bool (ComparisonKind::notEqual, enumerator_13544.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                switch (test_34) {
                case kBoolTrue : {
                  result.appendString (enumerator_13544.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 302)).stringValue ()) ;
                  } break ;
                case kBoolFalse : {
                  } break ;
                default :
                  break ;
                }
                result.appendString ("</span>") ;
                result.appendString (function_linkForType (extensionGetter_definition (enumerator_13544.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 303)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 303)).stringValue ()) ;
                result.appendString (" ") ;
                result.appendString (enumerator_13544.current_mFormalArgumentName (HERE).stringValue ()) ;
                index_13544_.increment () ;
                enumerator_13544.gotoNextObject () ;
              }
            }
            result.appendString ("<br><br>") ;
            index_13383_.increment () ;
            enumerator_13383.gotoNextObject () ;
          }
        }
        result.appendString ("</td></tr>") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1286_.increment () ;
      enumerator_1286.gotoNextObject () ;
    }
  }
  result.appendString ("\n</table>\n</div>\n</body>\n</html>\n") ;
  return GALGAS_string (result) ;
}

