#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-31.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_14974 ;
  GGS_semanticExpressionForGeneration var_messageExpression_15002 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_15029 ;
  {
  const GGS_errorInstructionAST temp_0 = this ;
  const GGS_errorInstructionAST temp_1 = this ;
  const GGS_errorInstructionAST temp_2 = this ;
  const GGS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_14974, var_messageExpression_15002, var_fixitListForGeneration_15029, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 373)) ;
  }
  GGS_stringlist var_builtVariableCppNameList_15093 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_errorInstructionAST temp_4 = this ;
  UpEnumerator_lstringlist enumerator_15142 (temp_4.readProperty_mBuiltVariableList ()) ;
  while (enumerator_15142.hasCurrentObject ()) {
    GGS_string var_varCppName_15238 ;
    {
    GGS_unifiedTypeMapEntry joker_15230 ; // Joker input parameter
    GGS_string joker_15249 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15142.current_mValue (HERE), joker_15230, var_varCppName_15238, joker_15249, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 391)) ;
    }
    var_builtVariableCppNameList_15093.addAssignOperation (var_varCppName_15238  COMMA_SOURCE_FILE ("instruction-error.galgas", 392)) ;
    enumerator_15142.gotoNextObject () ;
  }
  const GGS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_errorInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_locationExpression_14974, var_messageExpression_15002, var_builtVariableCppNameList_15093, var_fixitListForGeneration_15029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-error.galgas", 395)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_18651 ;
  const GGS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18651, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
  GGS_string var_messageCppVarName_18860 ;
  const GGS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_18860, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)) ;
  GGS_string var_fixItArrayCppName_19118 ;
  const GGS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19118, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 490)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) ;
  }
  const GGS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GGS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (var_receiverCppVarName_18651, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (var_messageCppVarName_18860, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (var_fixItArrayCppName_19118, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 500)) ;
  const GGS_errorInstructionForGeneration temp_4 = this ;
  UpEnumerator_stringlist enumerator_19494 (temp_4.readProperty_mBuiltVariableCppNameList ()) ;
  while (enumerator_19494.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19494.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 507)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_19494.current_mValue (HERE).add_operation (GGS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 508)) ;
    enumerator_19494.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 514)) ;
  const GGS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
  const GGS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 516)) ;
  const GGS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
  const GGS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 518)) ;
  const GGS_forInstructionAST temp_5 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_17986 (temp_5.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_17986.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_17986.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)) ;
    enumerator_17986.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 531)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 537)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                                              GGS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GGS_string & outArgument_outEnumeratorCppName,
                                                                              GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 576)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  const GGS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)).getter_string (SOURCE_FILE ("instruction-for.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptorList_20814 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 584)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptorList_20814.getter_count (SOURCE_FILE ("instruction-for.galgas", 585)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 586)) ;
    }
  }
  GGS_string var_suggestion_21166 = GGS_string ("(") ;
  UpEnumerator_enumerationDescriptorList enumerator_21206 (var_enumerationDescriptorList_20814) ;
  while (enumerator_21206.hasCurrentObject ()) {
    const GGS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_21166.plusAssignOperation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21206.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 592)) ;
    const GGS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GGS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (enumerator_21206.current_mEnumeratedType (HERE), GGS_lstring::init_21__21_ (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21206.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 595)), temp_7.readProperty_mEndOfAnonymousEnumeration (), inCompiler COMMA_HERE), GGS_bool (true), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (enumerator_21206.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597))  COMMA_SOURCE_FILE ("instruction-for.galgas", 593)) ;
    enumerator_21206.gotoNextObject () ;
    if (enumerator_21206.hasCurrentObject ()) {
      var_suggestion_21166.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 599)) ;
    }
  }
  var_suggestion_21166.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_suggestion_21166) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GGS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GGS_string & outArgument_outEnumeratorCppName,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 624)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)) ;
  const GGS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).getter_string (SOURCE_FILE ("instruction-for.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptorList_22901 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 632)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GGS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 637)) COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_enumerationDescriptorList var_currentTypedAttributeList_23316 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).readProperty_enumerationDescriptorList () ;
        UpEnumerator_enumerationDescriptorList enumerator_23447 (var_currentTypedAttributeList_23316) ;
        while (enumerator_23447.hasCurrentObject ()) {
          {
          const GGS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (enumerator_23447.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression (), inCompiler COMMA_HERE), enumerator_23447.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (enumerator_23447.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (enumerator_23447.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
          }
          enumerator_23447.gotoNextObject () ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GGS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 647)).operator_and (GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 647)).objectCompare (var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 647)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GGS_string temp_13 ;
          const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 651)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            temp_13 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          const GGS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GGS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 650)).getter_string (SOURCE_FILE ("instruction-for.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (GGS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 651)).add_operation (temp_15.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 653)).getter_string (SOURCE_FILE ("instruction-for.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 648)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          const GGS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GGS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GGS_bool (ComparisonKind::greaterThan, temp_19.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 654)).objectCompare (var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 654)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 654)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            const GGS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GGS_string temp_21 ;
            const GalgasBool test_22 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 658)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              temp_21 = GGS_string ("s") ;
            }else if (GalgasBool::boolFalse == test_22) {
              temp_21 = GGS_string::makeEmptyString () ;
            }
            const GGS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GGS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 657)).getter_string (SOURCE_FILE ("instruction-for.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GGS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GGS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 658)).add_operation (temp_23.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 660)).getter_string (SOURCE_FILE ("instruction-for.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            GGS_bool test_26 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (GalgasBool::boolTrue == test_26.boolEnum ()) {
              const GGS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GGS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 662)).objectCompare (temp_27.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 662)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GGS_uint var_missingArgumentCount_25016 = var_enumerationDescriptorList_22901.getter_count (SOURCE_FILE ("instruction-for.galgas", 663)).substract_operation (temp_28.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
              const GGS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              GenericArray <FixItDescription> fixItArray30 ;
              GGS_string temp_31 ;
              const GalgasBool test_32 = GGS_bool (ComparisonKind::equal, var_missingArgumentCount_25016.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_32) {
                temp_31 = GGS_string ("*") ;
              }else if (GalgasBool::boolFalse == test_32) {
                temp_31 = GGS_string (" ").add_operation (var_missingArgumentCount_25016.getter_string (SOURCE_FILE ("instruction-for.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (GGS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)) ;
              }
              appendFixItActions (fixItArray30, EnumFixItKind::fixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GGS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 664)) ;
            }
          }
          const GGS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          UpEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_25411 (temp_33.readProperty_mElementList ()) ;
          UpEnumerator_enumerationDescriptorList enumerator_25473 (var_enumerationDescriptorList_22901) ;
          while (enumerator_25411.hasCurrentObject () && enumerator_25473.hasCurrentObject ()) {
            GalgasBool test_34 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_34) {
              test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_25411.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_34) {
                GalgasBool test_35 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_35) {
                  test_35 = GGS_bool (ComparisonKind::notEqual, enumerator_25411.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_35) {
                    GGS_unifiedTypeMapEntry var_foundType_25664 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_25411.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 671)) ;
                    GalgasBool test_36 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_36) {
                      test_36 = GGS_bool (ComparisonKind::notEqual, var_foundType_25664.objectCompare (enumerator_25473.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_36) {
                        GenericArray <FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_25411.current_mOptionalTypeName (HERE).readProperty_location (), GGS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_25664, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GGS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (extensionGetter_definition (enumerator_25473.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GGS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 673)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (enumerator_25473.current_mEnumeratedType (HERE), enumerator_25411.current_mOptionalConstantName (HERE), enumerator_25411.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (enumerator_25473.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680))  COMMA_SOURCE_FILE ("instruction-for.galgas", 676)) ;
              }
            }
            enumerator_25411.gotoNextObject () ;
            enumerator_25473.gotoNextObject () ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GGS_string & outArgument_outEnumeratorCppName,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 702)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
  const GGS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GGS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).getter_string (SOURCE_FILE ("instruction-for.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)) ;
  GGS_unifiedTypeMapEntry var_enumeratedElementType_27267 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).readProperty_typeForEnumeratedElement () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_enumeratedElementType_27267.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 711)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_enumeratedCollectionVarInExpAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GGS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).add_operation (GGS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 712)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssignOperation (var_enumeratedElementType_27267, temp_7.readProperty_mEnumerationVariable (), GGS_bool (false), outArgument_outEnumeratorCppName.add_operation (GGS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 714))  COMMA_SOURCE_FILE ("instruction-for.galgas", 714)) ;
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GGS_unifiedTypeMapEntry var_explicitType_27851 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_enumeratedElementType_27267, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_27851, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_enumeratedCollectionVarInExpAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_27267, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).add_operation (GGS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
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
  GGS_semanticInstructionListForGeneration var_before_5F_instructionList_29237 ;
  {
  const GGS_forInstructionAST temp_0 = this ;
  const GGS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_29237, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
  }
  {
  const GGS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
  }
  GGS_semanticInstructionListForGeneration var_between_5F_instructionList_29768 ;
  {
  const GGS_forInstructionAST temp_3 = this ;
  const GGS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_29768, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
  }
  {
  const GGS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 772)) ;
  }
  GGS_semanticInstructionListForGeneration var_after_5F_instructionList_30333 ;
  {
  const GGS_forInstructionAST temp_6 = this ;
  const GGS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_30333, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
  }
  {
  const GGS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 786)) ;
  }
  GGS_localConstantList var_localConstantListForDoBranch_30477 = GGS_localConstantList::init (inCompiler COMMA_HERE) ;
  GGS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_30567 = GGS_forInstructionEnumeratedObjectListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionAST temp_9 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListAST enumerator_30607 (temp_9.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_30607.hasCurrentObject ()) {
    GGS_string var_enumeratorCppName_30896 ;
    GGS_semanticExpressionForGeneration var_enumerationExpression_30958 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_30607.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_30477, var_enumeratorCppName_30896, var_enumerationExpression_30958, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
    GGS_string temp_10 ;
    const GalgasBool test_11 = enumerator_30607.current_mAscending (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      temp_10 = GGS_string ("Up") ;
    }else if (GalgasBool::boolFalse == test_11) {
      temp_10 = GGS_string ("Down") ;
    }
    var_enumerationList_30567.addAssignOperation (temp_10, var_enumerationExpression_30958, var_enumeratorCppName_30896  COMMA_SOURCE_FILE ("instruction-for.galgas", 802)) ;
    enumerator_30607.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
  }
  UpEnumerator_localConstantList enumerator_31278 (var_localConstantListForDoBranch_30477) ;
  while (enumerator_31278.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_31278.current (HERE).readProperty_mName (), enumerator_31278.current (HERE).readProperty_mType (), enumerator_31278.current (HERE).readProperty_mCppName (), enumerator_31278.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
    }
    enumerator_31278.gotoNextObject () ;
  }
  GGS_semanticExpressionForGeneration var_uncheckedWhileExpression_31769 ;
  const GGS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 823)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_31769, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
  GGS_semanticExpressionForGeneration var_whileExpression_31956 ;
  {
  const GGS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_31769, var_whileExpression_31956, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
  }
  {
  const GGS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 836)) ;
  }
  {
  const GGS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 837)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 839)) ;
  }
  GGS_string var_indexCppName_32188 = GGS_string::makeEmptyString () ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_forInstructionAST temp_17 = this ;
    test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_forInstructionAST temp_18 = this ;
      var_indexCppName_32188 = GGS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)).getter_string (SOURCE_FILE ("instruction-for.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
      const GGS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_30477.addAssignOperation (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GGS_bool (false), var_indexCppName_32188  COMMA_SOURCE_FILE ("instruction-for.galgas", 843)) ;
    }
  }
  GGS_semanticInstructionListForGeneration var_do_5F_instructionList_32932 ;
  {
  const GGS_forInstructionAST temp_20 = this ;
  const GGS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_30477, GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_32932, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 850)) ;
  }
  {
  const GGS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 864)) ;
  }
  {
  const GGS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)) ;
  }
  {
  const GGS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 867)) ;
  }
  const GGS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_forInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_enumerationList_30567, var_indexCppName_32188, var_whileExpression_31956, var_before_5F_instructionList_29237, var_between_5F_instructionList_29768, var_do_5F_instructionList_32932, var_after_5F_instructionList_30333, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 869)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GGS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_enumerationVarCppNameList_35191 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_forInstructionForGeneration temp_0 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35254 (temp_0.readProperty_mEnumeratedObjectList ()) ;
  while (enumerator_35254.hasCurrentObject ()) {
    GGS_string var_enumerationVar_35462 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_35254.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_35462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
    var_enumerationVarCppNameList_35191.addAssignOperation (var_enumerationVar_35462  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
    enumerator_35254.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_1 = this ;
  UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35563 (temp_1.readProperty_mEnumeratedObjectList ()) ;
  UpEnumerator_stringlist enumerator_35587 (var_enumerationVarCppNameList_35191) ;
  while (enumerator_35563.hasCurrentObject () && enumerator_35587.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_35563.current (HERE).readProperty_mEnumerationOrder ().add_operation (GGS_string ("Enumerator_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (extensionGetter_identifierRepresentation (enumerator_35563.current (HERE).readProperty_mEnumeratedExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_35563.current (HERE).readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (enumerator_35587.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 928)) ;
    enumerator_35563.gotoNextObject () ;
    enumerator_35587.gotoNextObject () ;
  }
  const GGS_forInstructionForGeneration temp_2 = this ;
  GGS_bool var_whileExpressionIsAllwaysTrue_35899 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 931)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_forInstructionForGeneration temp_4 = this ;
    const GGS_forInstructionForGeneration temp_5 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 933)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 933)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 933)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_35899.operator_not (SOURCE_FILE ("instruction-for.galgas", 933)) COMMA_SOURCE_FILE ("instruction-for.galgas", 933)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_forInstructionForGeneration temp_7 = this ;
        test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 936)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 936)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 936)) ;
        }
      }
      GGS_string var_boolVarCppName_36345 = GGS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 938)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 939)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_35899.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool ").add_operation (var_boolVarCppName_36345, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 941)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 941)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GGS_string var_whileVar_36706 ;
        const GGS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36706, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 943)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_boolVarCppName_36345, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)).add_operation (var_whileVar_36706, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 944)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 946)) ;
      const GGS_forInstructionForGeneration temp_11 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36863 (temp_11.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_36863.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_36863.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 948)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 948)) ;
        enumerator_36863.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_36345.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 950)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 950)) ;
      {
      const GGS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 951)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 959)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 960)) ;
      const GGS_forInstructionForGeneration temp_13 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37368 (temp_13.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_37368.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_37368.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 962)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 962)) ;
        enumerator_37368.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_36345.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 964)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 964)) ;
      {
      const GGS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 966)) ;
      }
      const GGS_forInstructionForGeneration temp_15 = this ;
      UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37853 (temp_15.readProperty_mEnumeratedObjectList ()) ;
      while (enumerator_37853.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_37853.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 976)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 976)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 976)) ;
        enumerator_37853.gotoNextObject () ;
      }
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_forInstructionForGeneration temp_17 = this ;
        test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 979)).add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 979)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 979)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_35899.operator_not (SOURCE_FILE ("instruction-for.galgas", 982)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 983)) ;
          const GGS_forInstructionForGeneration temp_20 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38255 (temp_20.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_38255.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_38255.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 985)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 985)) ;
            enumerator_38255.gotoNextObject () ;
            if (enumerator_38255.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 986)) ;
            }
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 988)) ;
          GGS_string var_whileVar_38645 ;
          const GGS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_38645, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 989)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    ").add_operation (var_boolVarCppName_36345, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 996)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 996)).add_operation (var_whileVar_38645, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 996)).add_operation (GGS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 996)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 996)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_forInstructionForGeneration temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::greaterThan, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1000)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1001)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1002)) ;
          const GGS_forInstructionForGeneration temp_24 = this ;
          UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38981 (temp_24.readProperty_mEnumeratedObjectList ()) ;
          while (enumerator_38981.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_38981.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1004)) ;
            enumerator_38981.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(var_boolVarCppName_36345.add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
          {
          const GGS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1015)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1019)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1021)) ;
      }
      {
      const GGS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1030)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_forInstructionForGeneration temp_28 = this ;
      test_27 = GGS_bool (ComparisonKind::notEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        const GGS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1033)).add_operation (GGS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1033)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1033)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1035)) ;
    const GGS_forInstructionForGeneration temp_30 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40177 (temp_30.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_40177.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_40177.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1037)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1037)) ;
      enumerator_40177.gotoNextObject () ;
      if (enumerator_40177.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1040)) ;
    {
    const GGS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1042)) ;
    }
    const GGS_forInstructionForGeneration temp_32 = this ;
    UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40672 (temp_32.readProperty_mEnumeratedObjectList ()) ;
    while (enumerator_40672.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_40672.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)) ;
      enumerator_40672.gotoNextObject () ;
    }
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      const GGS_forInstructionForGeneration temp_34 = this ;
      test_33 = GGS_bool (ComparisonKind::greaterThan, temp_34.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1055)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)) ;
        const GGS_forInstructionForGeneration temp_35 = this ;
        UpEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40994 (temp_35.readProperty_mEnumeratedObjectList ()) ;
        while (enumerator_40994.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_40994.current_mEnumeratorCppName (HERE).add_operation (GGS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1059)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1059)) ;
          enumerator_40994.gotoNextObject () ;
          if (enumerator_40994.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1062)) ;
        {
        const GGS_forInstructionForGeneration temp_36 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_36.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1063)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1071)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1072)) ;
        }
      }
    }
    GalgasBool test_37 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_37) {
      const GGS_forInstructionForGeneration temp_38 = this ;
      test_37 = GGS_bool (ComparisonKind::notEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) ;
        }
        const GGS_forInstructionForGeneration temp_39 = this ;
        const GGS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GGS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1080)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 366)) ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_16645 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_16645.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16645.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 368)) ;
    enumerator_16645.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 377)) ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_17081 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_17081.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_17081.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)) ;
    enumerator_17081.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInFileInstructionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_17812 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 395)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_17812 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 396)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_18137 ;
  GGS_bool var_hasTranslateFeature_18175 ;
  const GGS_grammarInFileInstructionAST temp_1 = this ;
  GGS_bool joker_18157 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18137, joker_18157, var_hasTranslateFeature_18175, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 398)) ;
  GGS_formalParameterSignature var_labelSignature_18303 ;
  const GGS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18137.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18303, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 405)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_18746 ;
  const GGS_grammarInFileInstructionAST temp_3 = this ;
  const GGS_grammarInFileInstructionAST temp_4 = this ;
  const GGS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)), var_labelSignature_18303, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18746, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 410)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_19102 ;
  const GGS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 426)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_19102, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_19102.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInFileInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_19102.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 434)) ;
    }
  }
  const GGS_grammarInFileInstructionAST temp_10 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_19573 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)) ;
  GGS_stringlist var_assignementList_19714 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18175, var_syntaxDirectedTranslationResultVarName_19573, var_assignementList_19714, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 441)) ;
  const GGS_grammarInFileInstructionAST temp_12 = this ;
  const GGS_grammarInFileInstructionAST temp_13 = this ;
  const GGS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceFileForGeneration::init_21__21__21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_19102, var_actualParameterListForGeneration_18746, var_hasTranslateFeature_18175, var_assignementList_19714, var_syntaxDirectedTranslationResultVarName_19573, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInStringInstructionAST temp_0 = this ;
  GGS_lstring var_grammarUsefulnessName_20851 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 472)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_20851 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)) ;
  }
  GGS_grammarLabelMap var_grammarLabelMap_21190 ;
  GGS_bool var_hasTranslateFeature_21228 ;
  const GGS_grammarInStringInstructionAST temp_1 = this ;
  GGS_bool joker_21210 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21190, joker_21210, var_hasTranslateFeature_21228, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 475)) ;
  GGS_formalParameterSignature var_labelSignature_21356 ;
  const GGS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21190.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21356, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 482)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_21799 ;
  const GGS_grammarInStringInstructionAST temp_3 = this ;
  const GGS_grammarInStringInstructionAST temp_4 = this ;
  const GGS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GGS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)).add_operation (GGS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)), var_labelSignature_21356, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_21799, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 487)) ;
  GGS_semanticExpressionForGeneration var_sourceExpression_22155 ;
  const GGS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 503)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_22155, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_sourceExpression_22155.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInStringInstructionAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GGS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22155.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_nameExpression_22829 ;
  const GGS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 519)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_22829, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 516)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_nameExpression_22829.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_grammarInStringInstructionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GGS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22155.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)) ;
    }
  }
  const GGS_grammarInStringInstructionAST temp_14 = this ;
  GGS_string var_syntaxDirectedTranslationResultVarName_23241 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)) ;
  GGS_stringlist var_assignementList_23382 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21228, var_syntaxDirectedTranslationResultVarName_23241, var_assignementList_23382, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 534)) ;
  const GGS_grammarInStringInstructionAST temp_16 = this ;
  const GGS_grammarInStringInstructionAST temp_17 = this ;
  const GGS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_grammarInstructionWithSourceExpressionForGeneration::init_21__21__21__21__21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_22155, var_nameExpression_22829, var_actualParameterListForGeneration_21799, var_hasTranslateFeature_21228, var_assignementList_23382, var_syntaxDirectedTranslationResultVarName_23241, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 543)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GGS_string & ioArgument_ioGeneratedCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580)) ;
  GGS_string var_sourceVar_25494 ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25494, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)) ;
  GGS_stringlist var_parameterCppNameList_25537 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_25583 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_25637 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_25681 (temp_2.readProperty_mActualParameterList ()) ;
  while (enumerator_25681.hasCurrentObject ()) {
    GGS_string var_parameterCppName_25990 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_25681.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25583, var_inputVariableList_25637, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_25990, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)) ;
    var_parameterCppNameList_25537.addAssignOperation (var_parameterCppName_25990  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 603)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_25681.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_25990.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)) ;
      }
    }
    enumerator_25681.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)) ;
    }
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GGS_string temp_10 ;
  const GalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_11) {
    const GGS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)) ;
  }else if (GalgasBool::boolFalse == test_11) {
    temp_10 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (GGS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (var_sourceVar_25494, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)) ;
  UpEnumerator_stringlist enumerator_26780 (var_parameterCppNameList_25537) ;
  while (enumerator_26780.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_26780.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
    enumerator_26780.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
  }
  const GGS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  UpEnumerator_stringlist enumerator_27028 (temp_14.readProperty_mAssignementList ()) ;
  while (enumerator_27028.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_27028.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
    enumerator_27028.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651)) ;
  GGS_string var_sourceVar_28623 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28623, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 653)) ;
  GGS_string var_nameVar_28844 ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_28844, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)) ;
  GGS_stringlist var_parameterCppNameList_28885 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_28931 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_28985 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_29029 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_29029.hasCurrentObject ()) {
    GGS_string var_parameterCppName_29345 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_29029.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_28931, var_inputVariableList_28985, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29345, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)) ;
    var_parameterCppNameList_28885.addAssignOperation (var_parameterCppName_29345  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_29029.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(var_parameterCppName_29345.add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)) ;
      }
    }
    enumerator_29029.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)) ;
    }
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (GGS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (var_sourceVar_28623, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)).add_operation (var_nameVar_28844, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)) ;
  UpEnumerator_stringlist enumerator_30154 (var_parameterCppNameList_28885) ;
  while (enumerator_30154.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_30154.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)) ;
    enumerator_30154.gotoNextObject () ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) ;
  }
  const GGS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  UpEnumerator_stringlist enumerator_30402 (temp_15.readProperty_mAssignementList ()) ;
  while (enumerator_30402.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_30402.current (HERE).readProperty_mValue ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)) ;
    enumerator_30402.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_7344 ;
  GGS_string var_targetVariableCppName_7369 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailable_7485 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 208)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 208)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = extensionGetter_selfIsMutable (var_selfAvailable_7485.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 209)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              const GGS_incDecInstructionAST temp_4 = this ;
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
            }
          }
          GGS_propertyMap var_propertyMap_7718 = extensionGetter_definition (var_selfAvailable_7485.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_7833 ;
          const GGS_incDecInstructionAST temp_6 = this ;
          GGS_AccessControl joker_7825 ; // Joker input parameter
          var_propertyMap_7718.method_searchKey (temp_6.readProperty_mReceiverName (), joker_7825, var_isConstant_7833, var_targetType_7344, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
          const GGS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_7369 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 215)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_7833.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_incDecInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
            }
          }
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfAvailable_7485.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 220)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 220)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_incDecInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_incDecInstructionAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 224)) ;
        var_targetType_7344.drop () ; // Release error dropped variable
        var_targetVariableCppName_7369.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_incDecInstructionAST temp_16 = this ;
    GGS_string joker_8693 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_7344, var_targetVariableCppName_7369, joker_8693, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)) ;
    }
  }
  const GGS_incDecInstructionAST temp_17 = this ;
  UpEnumerator_lstringlist enumerator_8760 (temp_17.readProperty_mStructAttributeList ()) ;
  while (enumerator_8760.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_8807 = extensionGetter_definition (var_targetType_7344, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_8896 ;
    GGS_bool var_isConstant_8915 ;
    var_propertyMap_8807.method_searchKey (enumerator_8760.current_mValue (HERE), var_accessControl_8896, var_isConstant_8915, var_targetType_7344, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 238)) ;
    extensionMethod_checkSetAccess (var_accessControl_8896, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_8760.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = var_isConstant_8915.boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8760.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)) ;
      }
    }
    enumerator_8760.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_7344, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 248)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 248)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_incDecInstructionAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_7344, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).add_operation (GGS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 249)) ;
    }
  }
  const GGS_incDecInstructionAST temp_23 = this ;
  const GGS_incDecInstructionAST temp_24 = this ;
  const GGS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_incDecInstructionForGeneration::init_21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_7369, var_targetType_7344, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_targetType_10329 ;
  GGS_string var_targetVariableCppName_10421 ;
  {
  const GGS_incDecNoOVFInstructionAST temp_0 = this ;
  GGS_string joker_10443 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_10329, var_targetVariableCppName_10421, joker_10443, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
  }
  const GGS_incDecNoOVFInstructionAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_10454 (temp_1.readProperty_mStructAttributeList ()) ;
  while (enumerator_10454.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_10501 = extensionGetter_definition (var_targetType_10329, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 276)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_10590 ;
    GGS_bool var_isConstant_10609 ;
    var_propertyMap_10501.method_searchKey (enumerator_10454.current_mValue (HERE), var_accessControl_10590, var_isConstant_10609, var_targetType_10329, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 277)) ;
    extensionMethod_checkSetAccess (var_accessControl_10590, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_10454.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_isConstant_10609.boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10454.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 283)) ;
      }
    }
    enumerator_10454.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_10329, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 287)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 287)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_incDecNoOVFInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10329, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).add_operation (GGS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 288)) ;
    }
  }
  const GGS_incDecNoOVFInstructionAST temp_7 = this ;
  const GGS_incDecNoOVFInstructionAST temp_8 = this ;
  const GGS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_incDecNoOVFInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_10421, var_targetType_10329, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11995 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_11995.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 312)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_11995.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 316)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 316)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_11995.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).add_operation (GGS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 317)) ;
        }
      }
      const GGS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GGS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_incDecNoOVFInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_11995.readProperty_type (), GGS_lstringlist::init (inCompiler COMMA_HERE), temp_8.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 321)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                       GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_13402 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 343)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-inc-dec.galgas", 343)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_13402.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 344)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 344)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfIncDecInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_13402.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 348)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 348)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfIncDecInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_13402.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).add_operation (GGS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)) ;
        }
      }
      const GGS_selfIncDecInstructionAST temp_7 = this ;
      const GGS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_incDecInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_13402.readProperty_type (), GGS_lstringlist::init (inCompiler COMMA_HERE), temp_8.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfIncDecInstructionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 361)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 397)) ;
  }
  const GGS_incDecInstructionForGeneration temp_1 = this ;
  GGS_string var_receiverCppName_15667 = temp_1.readProperty_mReceiverCppName () ;
  const GGS_incDecInstructionForGeneration temp_2 = this ;
  UpEnumerator_lstringlist enumerator_15714 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_15714.hasCurrentObject ()) {
    var_receiverCppName_15667.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_15714.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    enumerator_15714.gotoNextObject () ;
  }
  const GGS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_incDecKind::Enumeration::invalid:
    break ;
  case GGS_incDecKind::Enumeration::enum_increment:
    {
      const GGS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_15667.add_operation (GGS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) ;
      }
    }
    break ;
  case GGS_incDecKind::Enumeration::enum_decrement:
    {
      const GGS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_15667.add_operation (GGS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 425)) ;
  }
  const GGS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GGS_string var_receiverCppName_16885 = temp_1.readProperty_mReceiverCppName () ;
  const GGS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  UpEnumerator_lstringlist enumerator_16932 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_16932.hasCurrentObject ()) {
    var_receiverCppName_16885.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_16932.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)) ;
    enumerator_16932.gotoNextObject () ;
  }
  const GGS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_incDecKind::Enumeration::invalid:
    break ;
  case GGS_incDecKind::Enumeration::enum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_16885.add_operation (GGS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)) ;
    }
    break ;
  case GGS_incDecKind::Enumeration::enum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_16885.add_operation (GGS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
  const GGS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
  const GGS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration var_testListForGeneration_7492 ;
  const GGS_ifInstructionAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mExpressions (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_7492, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  GGS_semanticInstructionListForGeneration var_then_5F_instructionList_7914 ;
  {
  const GGS_ifInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_7914, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 185)) ;
  }
  const GGS_ifInstructionAST temp_2 = this ;
  GGS_CommaSeparatedExpressionList var_expressions_7949 = temp_2.readProperty_mExpressions () ;
  {
  GGS_ifExpressionKind joker_8008 ; // Joker input parameter
  var_expressions_7949.setter_popLast (joker_8008, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 198)) ;
  }
  UpEnumerator_CommaSeparatedExpressionList enumerator_8021 (var_expressions_7949) ;
  while (enumerator_8021.hasCurrentObject ()) {
    {
    const GGS_ifInstructionAST temp_3 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 200)) ;
    }
    {
    const GGS_ifInstructionAST temp_4 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_4.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 201)) ;
    }
    enumerator_8021.gotoNextObject () ;
  }
  {
  const GGS_ifInstructionAST temp_5 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  }
  GGS_semanticInstructionListForGeneration var_else_5F_instructionList_8649 ;
  {
  const GGS_ifInstructionAST temp_6 = this ;
  const GGS_ifInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_m_5F_else_5F_instructionList (), temp_7.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_8649, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  }
  {
  const GGS_ifInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
  }
  const GGS_ifInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_ifInstructionForGeneration::init_21__21__21__21_ (temp_9.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_7492, var_then_5F_instructionList_7914, var_else_5F_instructionList_8649, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_testVar_10822 ;
  const GGS_ifInstructionForGeneration temp_0 = this ;
  extensionMethod_generateInstruction (temp_0.readProperty_mExpressions (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_testVar_10822, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_10822, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 275)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 275)) ;
  {
  const GGS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 276)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 284)) ;
  const GGS_ifInstructionForGeneration temp_2 = this ;
  UpEnumerator_ifTestListForGeneration enumerator_11203 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_11203.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 286)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 287)) ;
    enumerator_11203.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 290)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolFalse == ").add_operation (var_testVar_10822, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 291)) ;
      {
      const GGS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 292)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 300)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GGS_unifiedTypeMapEntry joker_6370 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6370, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 163)) ;
      }
    }
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_7284 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
  const GGS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GGS_string var_targetVariableCppName_7359 = GGS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  {
  const GGS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7284, var_targetVariableCppName_7359, var_targetVariableCppName_7359, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 182)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_undefinedLocalConstantDeclarationForGeneration::init_21__21_ (var_targetType_7284, var_targetVariableCppName_7359, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 189)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_8750 ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 208)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8750, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8799 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)).getter_string (SOURCE_FILE ("instruction-let.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)) ;
  {
  const GGS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8750.readProperty_mResultType (), var_targetVariableCppName_8799, var_targetVariableCppName_8799, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 217)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_8750.readProperty_mResultType (), GGS_bool (true), var_targetVariableCppName_8799, var_expression_8750, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_9989 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
  GGS_semanticExpressionForGeneration var_expression_10360 ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9989, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10360, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GGS_string var_targetVariableCppName_10409 = GGS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)).getter_string (SOURCE_FILE ("instruction-let.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9989, var_targetVariableCppName_10409, var_targetVariableCppName_10409, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 255)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GGS_bool (true), var_targetType_9989, var_targetVariableCppName_10409, var_targetVariableCppName_10409, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 262)) ;
    }
  }
  {
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9989, var_expression_10360.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10360, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 271)) ;
  }
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_targetType_9989, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10409, var_expression_10360, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                      GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GGS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 320)) ;
  GGS_string var_sourceVar_13605 ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13605, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 321)) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (var_sourceVar_13605, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logInstructionAST temp_0 = this ;
  UpEnumerator_logListAST enumerator_4599 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_4599.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4599.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    enumerator_4599.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logInstructionAST temp_0 = this ;
  UpEnumerator_logListAST enumerator_5312 (temp_0.readProperty_mLogList ()) ;
  while (enumerator_5312.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_5646 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5312.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5646, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 143)) ;
    ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_logInstructionForGeneration::init_21__21_ (enumerator_5312.current_mLogMessage (HERE), var_expression_5646, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-log.galgas", 153)) ;
    enumerator_5312.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GGS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_logVar_6734 ;
  const GGS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6734, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 178)) ;
  const GGS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_logVar_6734.add_operation (GGS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 185)) ;
  const GGS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 186)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 131)) ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 132)) ;
  const GGS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 133)) ;
  const GGS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 134)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_variantExpression_6593 ;
  const GGS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6593, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_variantExpression_6593.readProperty_mResultType (), var_variantExpression_6593.readProperty_mLocation (), var_variantExpression_6593, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GGS_semanticExpressionForGeneration var_loopExpression_7127 ;
  const GGS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7127, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 166)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_loopExpression_7127.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_loopInstructionWithVariantAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GGS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (extensionGetter_definition (var_loopExpression_7127.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 181)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_8016 ;
  {
  const GGS_loopInstructionWithVariantAST temp_5 = this ;
  const GGS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_8016, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 183)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_8434 ;
  {
  const GGS_loopInstructionWithVariantAST temp_7 = this ;
  const GGS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8434, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 197)) ;
  }
  {
  const GGS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 211)) ;
  }
  const GGS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithVariantForGeneration::init_21__21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6593, var_first_5F_instructionList_8016, var_loopExpression_7127, var_second_5F_instructionList_8434, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_variantCppVarName_9966 ;
  const GGS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9966, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_variantCppVarName_9966, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GGS_string var_variantVar_10111 = GGS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("uint32_t ").add_operation (var_variantVar_10111, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (var_variantCppVarName_9966, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GGS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  const GGS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GGS_string var_loopVar_10303 = GGS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GGS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  }
  {
  const GGS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  }
  GGS_string var_loopExpressionVar_10878 ;
  const GGS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_10303.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)).add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)).add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopExpressionVar_10878, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 267)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  }
  const GGS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GGS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_variantVar_10111, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GGS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GGS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)).add_operation (var_loopVar_10303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_variantVar_10111, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (GGS_string (" -= 1 ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  {
  const GGS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 289)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 290)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_enterExpressionListInSemanticContext (temp_0.readProperty_mLoopExpression (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 110)) ;
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 111)) ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 112)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestListForGeneration var_testListForGeneration_5756 ;
  const GGS_loopInstructionWithoutVariantAST temp_0 = this ;
  extensionMethod_analyzeSemanticExpressionList (temp_0.readProperty_mLoopExpression (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_testListForGeneration_5756, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 124)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 146)) ;
  }
  GGS_semanticInstructionListForGeneration var_first_5F_instructionList_7019 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_1 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_2 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_1.readProperty_mFirstInstructions (), temp_2.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7019, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 148)) ;
  }
  GGS_semanticInstructionListForGeneration var_second_5F_instructionList_7465 ;
  {
  const GGS_loopInstructionWithoutVariantAST temp_3 = this ;
  const GGS_loopInstructionWithoutVariantAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mSecondInstructions (), temp_4.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7465, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 162)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 176)) ;
  }
  const GGS_loopInstructionWithoutVariantAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_loopInstructionWithoutVariantForGeneration::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_first_5F_instructionList_7019, var_testListForGeneration_5756, var_second_5F_instructionList_7465, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GGS_string & ioArgument_ioGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GGS_string var_loopVar_8962 = GGS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_8962, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 208)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 208)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_loopVar_8962, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 210)) ;
  }
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 211)) ;
  }
  GGS_string var_loopExpressionVar_9584 ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  extensionMethod_generateInstruction (temp_2.readProperty_mLoopExpression (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, var_loopExpressionVar_9584, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_8962.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)).add_operation (var_loopExpressionVar_9584, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)).add_operation (GGS_string (" == GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_loopVar_8962, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 230)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 230)) ;
  {
  const GGS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 231)) ;
  }
  GGS_bool var_first_10163 = GGS_bool (true) ;
  const GGS_loopInstructionWithoutVariantForGeneration temp_4 = this ;
  UpEnumerator_ifTestListForGeneration enumerator_10185 (temp_4.readProperty_mLoopExpression ()) ;
  while (enumerator_10185.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_first_10163.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_first_10163 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 244)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_loopVar_8962, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 245)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 245)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 247)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 248)) ;
    }
    enumerator_10185.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 250)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 251)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 252)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4270 ;
  const GGS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4270, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 87)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expression_4270.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_messageInstructionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4270.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)).add_operation (GGS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
    }
  }
  const GGS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_messageInstructionForGeneration::init_21__21_ (var_expression_4270, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_messageCppVarName_5716 ;
  const GGS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5716, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 126)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (GGS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (var_messageCppVarName_5716, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 134)) ;
  const GGS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) COMMA_SOURCE_FILE ("instruction-message.galgas", 136)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
  const GGS_methodCallInstructionAST temp_1 = this ;
  UpEnumerator_actualParameterListAST enumerator_4208 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_4208.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4208.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 100)) ;
    enumerator_4208.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_methodCallInstructionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiverExpression ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_methodCallInstructionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_5341 ;
  const GGS_methodCallInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 122)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5341, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 119)) ;
  GGS_methodKind var_kind_5512 ;
  GGS_formalParameterSignature var_routineSignature_5528 ;
  GGS_bool var_hasCompilerArgument_5565 ;
  GGS_string var_errorMessage_5605 ;
  const GGS_methodCallInstructionAST temp_4 = this ;
  GGS_location joker_5551 ; // Joker input parameter
  GGS_methodQualifier joker_5591 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5341.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)).readProperty_instanceMethodMap ().method_searchKey (temp_4.readProperty_mMethodName (), var_kind_5512, var_routineSignature_5528, joker_5551, var_hasCompilerArgument_5565, joker_5591, var_errorMessage_5605, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5605.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_methodCallInstructionAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5605, fixItArray7  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 139)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_6155 ;
  const GGS_methodCallInstructionAST temp_8 = this ;
  const GGS_methodCallInstructionAST temp_9 = this ;
  const GGS_methodCallInstructionAST temp_10 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_10.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)), var_routineSignature_5528, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6155, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 142)) ;
  GGS_unifiedTypeMapEntry var_baseType_6252 = var_receiverExpression_5341.readProperty_mResultType () ;
  GGS_bool var_searching_6302 = GGS_bool (true) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 157)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).isValid ()) {
        uint32_t variant_6359 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 158)).uintValue () ;
        bool loop_6359 = true ;
        while (loop_6359) {
          loop_6359 = var_searching_6302.isValid () ;
          if (loop_6359) {
            loop_6359 = var_searching_6302.boolValue () ;
          }
          if (loop_6359 && (0 == variant_6359)) {
            loop_6359 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
          }
          if (loop_6359) {
            variant_6359 -= 1 ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = extensionGetter_definition (var_baseType_6252, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 159)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                var_searching_6302 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                const GGS_methodCallInstructionAST temp_14 = this ;
                test_13 = extensionGetter_definition (extensionGetter_definition (var_baseType_6252, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).readProperty_instanceMethodMap ().getter_hasKey (temp_14.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_baseType_6252 = extensionGetter_definition (var_baseType_6252, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_searching_6302 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_methodCallInstructionAST temp_15 = this ;
  const GGS_methodCallInstructionAST temp_16 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_methodCallInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_15.readProperty_mInstructionLocation (), var_receiverExpression_5341.readProperty_mResultType (), var_receiverExpression_5341, temp_16.readProperty_mMethodName ().readProperty_string (), var_kind_5512, var_actualParameterListForGeneration_6155, var_hasCompilerArgument_5565, var_baseType_6252, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppName_8436 ;
  const GGS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8436 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
  }
  GGS_stringlist var_parameterCppNameList_8525 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_8569 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_8621 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_methodCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8663 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_8663.hasCurrentObject ()) {
    GGS_string var_parameterCppName_8906 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8663.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8569, var_inputVariableList_8621, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8906, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
    var_parameterCppNameList_8525.addAssignOperation (var_parameterCppName_8906  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
    enumerator_8663.gotoNextObject () ;
  }
  const GGS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_methodCallInstructionForGeneration temp_3 = this ;
      const GGS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_methodCallInstructionForGeneration temp_7 = this ;
          const GGS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (var_receiverCppName_8436, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_8436.add_operation (GGS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_9840 (var_parameterCppNameList_8525) ;
  while (enumerator_9840.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_9840.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)) ;
    enumerator_9840.gotoNextObject () ;
    if (enumerator_9840.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 238)) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_8525.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 240)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 244)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_11) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_methodCallInstructionForGeneration temp_15 = this ;
      test_14 = temp_15.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)) ;
    }
  }
  const GGS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)) ;
  const GGS_methodCallInstructionForGeneration temp_17 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_10526 (temp_17.readProperty_mActualParameterList ()) ;
  while (enumerator_10526.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10526.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 256)) ;
    enumerator_10526.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superInitInstructionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_3743 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3743.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3743.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 95)) ;
    enumerator_3743.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_4459 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 108)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-super-init.galgas", 108)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_selfAvailable_4459.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("instruction-super-init.galgas", 109)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = extensionGetter_definition (var_selfAvailable_4459.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 110)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-init.galgas", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          switch (extensionGetter_definition (var_selfAvailable_4459.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)).readProperty_superType ().enumValue ()) {
          case GGS_unifiedTypeMapEntry::Enumeration::invalid:
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
            {
              GGS_unifiedTypeMapElementClass_2E_weak extractedValue_4723_superType_0 ;
              extensionGetter_definition (var_selfAvailable_4459.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 111)).readProperty_superType ().getAssociatedValuesFor_element (extractedValue_4723_superType_0) ;
              GGS_unifiedTypeDefinition var_superTypeDefinition_4748 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) extractedValue_4723_superType_0.bang_unifiedTypeMapElementClass_2E_weak (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 113)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 113)) ;
              GGS_initializerMap var_superClassInitializerMap_4857 = var_superTypeDefinition_4748.readProperty_initializerMap () ;
              const GGS_superInitInstructionAST temp_1 = this ;
              const GGS_superInitInstructionAST temp_2 = this ;
              GGS_lstring var_signature_4931 = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (temp_1.readProperty_mActualParameterList (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 116)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
              GGS_functionSignature var_formalSignature_5091 ;
              var_superClassInitializerMap_4857.method_searchKey (var_signature_4931, var_formalSignature_5091, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 117)) ;
              UpEnumerator_typedPropertyList enumerator_5207 (var_superTypeDefinition_4748.readProperty_allTypedPropertyList ()) ;
              while (enumerator_5207.hasCurrentObject ()) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = GGS_bool (ComparisonKind::equal, enumerator_5207.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("instruction-super-init.galgas", 120)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    const GGS_superInitInstructionAST temp_4 = this ;
                    GGS_unifiedTypeMapEntry joker_5427_3 ; // Joker input parameter
                    GGS_string joker_5427_2 ; // Joker input parameter
                    GGS_string joker_5427_1 ; // Joker input parameter
                    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (enumerator_5207.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 122)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), joker_5427_3, joker_5427_2, joker_5427_1, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 121)) ;
                    }
                  }
                }
                enumerator_5207.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_5 = this ;
              extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 127)) ;
              GGS_semanticExpressionListForGeneration var_actualParameterListForGeneration_5656 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
              const GGS_superInitInstructionAST temp_6 = this ;
              UpEnumerator_functionSignature enumerator_5756 (var_formalSignature_5091) ;
              UpEnumerator_actualOutputArgumentList enumerator_5791 (temp_6.readProperty_mActualParameterList ()) ;
              while (enumerator_5756.hasCurrentObject () && enumerator_5791.hasCurrentObject ()) {
                GGS_semanticExpressionForGeneration var_expression_6167 ;
                callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5791.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5756.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6167, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 133)) ;
                {
                routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5756.current (HERE).readProperty_mFormalArgumentType (), var_expression_6167.readProperty_mResultType (), enumerator_5791.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6167, inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 142)) ;
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::notEqual, enumerator_5756.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5791.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GGS_string temp_8 ;
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_5756.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_9) {
                      temp_8 = enumerator_5756.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 150)) ;
                    }else if (GalgasBool::boolFalse == test_9) {
                      temp_8 = GGS_string::makeEmptyString () ;
                    }
                    GGS_string var_s_6519 = GGS_string ("!").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 149)) ;
                    GenericArray <FixItDescription> fixItArray10 ;
                    appendFixItActions (fixItArray10, EnumFixItKind::fixItReplace, var_s_6519) ;
                    inCompiler->emitSemanticError (enumerator_5791.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6519, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)), fixItArray10  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 153)) ;
                  }
                }
                var_actualParameterListForGeneration_5656.addAssignOperation (var_expression_6167  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 156)) ;
                enumerator_5756.gotoNextObject () ;
                enumerator_5791.gotoNextObject () ;
              }
              const GGS_superInitInstructionAST temp_11 = this ;
              ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superInitInstructionForGeneration::init_21__21__21__21_ (temp_11.readProperty_mInstructionLocation (), extensionGetter_initializerSignature (var_formalSignature_5091, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 161)), var_actualParameterListForGeneration_5656, var_superTypeDefinition_4748.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 159)) ;
            }
            break ;
          case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
            {
              const GGS_superInitInstructionAST temp_12 = this ;
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("superinit  is not available, current class has no super class"), fixItArray13  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 166)) ;
            }
            break ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_superInitInstructionAST temp_14 = this ;
    GenericArray <FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("superinit  should be call in a class initializer"), fixItArray15  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superInitInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                         GGS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_getterArgumentCppNameList_8509 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superInitInstructionForGeneration temp_0 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8550 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8550.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8769 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8550.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8769, inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 196)) ;
    var_getterArgumentCppNameList_8509.addAssignOperation (var_argumentCppName_8769  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 203)) ;
    enumerator_8550.gotoNextObject () ;
  }
  const GGS_superInitInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mSuperTypeName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 205)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 205)) ;
  const GGS_superInitInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_2.readProperty_mSuperInitializerSignature ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-init.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 206)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 207)) ;
  UpEnumerator_stringlist enumerator_9049 (var_getterArgumentCppNameList_8509) ;
  while (enumerator_9049.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_9049.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 209)) ;
    enumerator_9049.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)) COMMA_SOURCE_FILE ("instruction-super-init.galgas", 211)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)).add_operation (GGS_string (") ; \n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas", 212)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_superMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3930 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3930.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3930.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 98)) ;
    enumerator_3930.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_selfType_4652 ;
  switch (constinArgument_inAnalysisContext.readProperty_selfAvailability ().enumValue ()) {
  case GGS_selfAvailability::Enumeration::invalid:
    break ;
  case GGS_selfAvailability::Enumeration::enum_none:
    {
      const GGS_superMethodCallInstructionAST temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mMethodName ().readProperty_location (), GGS_string ("'super' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 114)) ;
      var_selfType_4652.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_selfAvailability::Enumeration::enum_available:
    {
      GGS_unifiedTypeMapEntry extractedValue_4849_type_0 ;
      GGS_selfMutability extractedValue_4877_selfMutability_1 ;
      constinArgument_inAnalysisContext.readProperty_selfAvailability ().getAssociatedValuesFor_available (extractedValue_4849_type_0, extractedValue_4877_selfMutability_1) ;
      var_selfType_4652 = extractedValue_4849_type_0 ;
    }
    break ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_selfType_4652, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 119)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-super-method-call.galgas", 119)).operator_not (SOURCE_FILE ("instruction-super-method-call.galgas", 119)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_superMethodCallInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), GGS_string ("self type is not a class"), fixItArray4  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 120)) ;
    }
  }
  GGS_formalParameterSignature var_routineSignature_5232 ;
  GGS_bool var_hasCompilerArgument_5269 ;
  GGS_string var_errorMessage_5309 ;
  const GGS_superMethodCallInstructionAST temp_5 = this ;
  GGS_methodKind joker_5206 ; // Joker input parameter
  GGS_location joker_5255 ; // Joker input parameter
  GGS_methodQualifier joker_5295 ; // Joker input parameter
  extensionGetter_definition (var_selfType_4652, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 123)).readProperty_instanceMethodMap ().method_searchKey (temp_5.readProperty_mMethodName (), joker_5206, var_routineSignature_5232, joker_5255, var_hasCompilerArgument_5269, joker_5295, var_errorMessage_5309, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 123)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, var_errorMessage_5309.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_superMethodCallInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5309, fixItArray8  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 133)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5859 ;
  const GGS_superMethodCallInstructionAST temp_9 = this ;
  const GGS_superMethodCallInstructionAST temp_10 = this ;
  const GGS_superMethodCallInstructionAST temp_11 = this ;
  extensionMethod_analyzeRoutineArguments (temp_9.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_10.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_11.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 142)).add_operation (GGS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 142)), var_routineSignature_5232, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5859, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 136)) ;
  GGS_unifiedTypeMapEntry var_baseType_5956 = var_selfType_4652 ;
  GGS_bool var_searching_5984 = GGS_bool (true) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-super-method-call.galgas", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 152)).isValid ()) {
        uint32_t variant_6041 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-super-method-call.galgas", 152)).uintValue () ;
        bool loop_6041 = true ;
        while (loop_6041) {
          loop_6041 = var_searching_5984.isValid () ;
          if (loop_6041) {
            loop_6041 = var_searching_5984.boolValue () ;
          }
          if (loop_6041 && (0 == variant_6041)) {
            loop_6041 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-super-method-call.galgas", 152)) ;
          }
          if (loop_6041) {
            variant_6041 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 153)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-super-method-call.galgas", 153)).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_searching_5984 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                const GGS_superMethodCallInstructionAST temp_15 = this ;
                test_14 = extensionGetter_definition (extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).readProperty_instanceMethodMap ().getter_hasKey (temp_15.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  var_baseType_5956 = extensionGetter_definition (var_baseType_5956, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 157)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                var_searching_5984 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_superMethodCallInstructionAST temp_16 = this ;
  const GGS_superMethodCallInstructionAST temp_17 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_superMethodCallInstructionForGeneration::init_21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mMethodName ().readProperty_string (), var_actualParameterListForGeneration_5859, var_hasCompilerArgument_5269, var_baseType_5956, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@superMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_parameterCppNameList_7892 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_7938 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_7992 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_superMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_8036 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_8036.hasCurrentObject ()) {
    GGS_string var_parameterCppName_8281 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8036.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7938, var_inputVariableList_7992, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8281, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 203)) ;
    var_parameterCppNameList_7892.addAssignOperation (var_parameterCppName_8281  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 204)) ;
    enumerator_8036.gotoNextObject () ;
  }
  const GGS_superMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_superMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("method-").add_operation (extensionGetter_definition (temp_1.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)).add_operation (temp_2.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 207)) ;
  const GGS_superMethodCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_definition (temp_3.readProperty_mBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 208)) ;
  const GGS_superMethodCallInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::method_").add_operation (temp_4.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 209)) ;
  UpEnumerator_stringlist enumerator_8732 (var_parameterCppNameList_7892) ;
  while (enumerator_8732.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_8732.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 211)) ;
    enumerator_8732.gotoNextObject () ;
    if (enumerator_8732.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 212)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_parameterCppNameList_7892.getter_count (SOURCE_FILE ("instruction-super-method-call.galgas", 214)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_superMethodCallInstructionForGeneration temp_7 = this ;
        test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 216)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 216)) ;
          }
          ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 217)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 218)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_superMethodCallInstructionForGeneration temp_9 = this ;
      test_8 = temp_9.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 221)) COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 221)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 222)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 223)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 225)) ;
    }
  }
  const GGS_superMethodCallInstructionForGeneration temp_10 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 227)) ;
  const GGS_superMethodCallInstructionForGeneration temp_11 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_9456 (temp_11.readProperty_mActualParameterList ()) ;
  while (enumerator_9456.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_9456.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-super-method-call.galgas", 230)) ;
    enumerator_9456.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3299 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3299.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3299.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
    enumerator_3299.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_routineSignature_4279 ;
  GGS_bool var_isFilePrivate_4329 ;
  GGS_lstring var_routineMangledName_4375 ;
  const GGS_procCallInstructionAST temp_0 = this ;
  const GGS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4279, var_isFilePrivate_4329, var_routineMangledName_4375, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
  GGS_lstring var_usefulnessName_4428 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4375, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4428 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isFilePrivate_4329.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_procCallInstructionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_4656 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_routineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_procCallInstructionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).objectCompare (var_procDeclarationLocation_4656.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_procCallInstructionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4656.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
        }
      }
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5420 ;
  const GGS_procCallInstructionAST temp_8 = this ;
  const GGS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GGS_string ("'").add_operation (var_routineMangledName_4375.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)).add_operation (GGS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 112)), var_routineSignature_4279, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5420, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_procCallInstructionForGeneration::init_21_routineMangledName_21_ (var_routineMangledName_4375, var_actualParameterListForGeneration_5420, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GGS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
  GGS_stringlist var_parameterCppNameList_6839 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6886 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6941 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_procCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_6974 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_6974.hasCurrentObject ()) {
    GGS_string var_parameterCppName_7273 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6974.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6886, var_inputVariableList_6941, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7273, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
    var_parameterCppNameList_6839.addAssignOperation (var_parameterCppName_7273  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 160)) ;
    enumerator_6974.gotoNextObject () ;
  }
  const GGS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 163)) ;
  UpEnumerator_stringlist enumerator_7493 (var_parameterCppNameList_6839) ;
  while (enumerator_7493.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7493.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 165)) ;
    enumerator_7493.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  }
  const GGS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
  const GGS_procCallInstructionForGeneration temp_4 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_7825 (temp_4.readProperty_mActualParameterList ()) ;
  while (enumerator_7825.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7825.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 172)) ;
    enumerator_7825.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 79)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_4060 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 94)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-assignment.galgas", 94)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_4060.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 95)).operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfAssignmentInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 96)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_4605 ;
      const GGS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_4060.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4605, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 99)) ;
      {
      const GGS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_4060.readProperty_type (), var_expression_4605.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4605, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 109)) ;
      }
      const GGS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfAvailable_4060.readProperty_type (), var_selfAvailable_4060.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 116)).readProperty_string (), var_expression_4605, temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 111)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfAssignmentInstructionAST temp_7 = this ;
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 121)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 187)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_8187 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 199)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 199)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_8187.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 200)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 200)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 201)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_8187.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 204)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_8187.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)).add_operation (GGS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 206)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 205)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_9122 ;
      const GGS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_8187.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9122, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) ;
      {
      const GGS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_8187.readProperty_type (), var_expression_9122.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9122, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 220)) ;
      }
      const GGS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_8187.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_9122, GGS_string ("divAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 227)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 237)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 255)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_11185 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 267)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 267)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_11185.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 268)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 269)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_11185.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 272)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 272)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_11185.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 274)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_12126 ;
      const GGS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_11185.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12126, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
      {
      const GGS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_11185.readProperty_type (), var_expression_12126.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_12126, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 288)) ;
      }
      const GGS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_11185.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_12126, GGS_string ("plusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 305)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_14191 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 335)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 335)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_14191.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 336)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 337)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_14191.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 340)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 340)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 340)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_14191.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)).add_operation (GGS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 341)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_15133 ;
      const GGS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_14191.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_15133, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      {
      const GGS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_14191.readProperty_type (), var_expression_15133.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15133, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
      }
      const GGS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_14191.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_15133, GGS_string ("minusAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 363)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 373)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_17195 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 403)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 403)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_17195.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 404)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 404)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 405)) ;
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfAvailable_17195.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 408)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 408)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 408)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_17195.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)).add_operation (GGS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 409)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_expression_18131 ;
      const GGS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfAvailable_17195.readProperty_type (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_18131, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 414)) ;
      {
      const GGS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfAvailable_17195.readProperty_type (), var_expression_18131.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18131, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 424)) ;
      }
      const GGS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_opAssignInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_selfAvailable_17195.readProperty_type (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), GGS_string::makeEmptyString (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_expression_18131, GGS_string ("mulAssignOperation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 441)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 459)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_20184 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 471)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-self-concat.galgas", 471)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_20184.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 472)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 472)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)) ;
        }
      }
      GGS_functionSignature var_addAssignOperatorArguments_20476 = extensionGetter_definition (var_selfAvailable_20184.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 476)).readProperty_addAssignOperatorArguments () ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_20476.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 477)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20184.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)).add_operation (GGS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 479)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 478)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 482)).objectCompare (var_addAssignOperatorArguments_20476.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 482)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            const GGS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GGS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfAvailable_20184.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).add_operation (GGS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)).add_operation (var_addAssignOperatorArguments_20476.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 486)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 485)).add_operation (GGS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 486)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 487)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 486)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 487)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 483)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GGS_semanticExpressionListForGeneration var_effectiveParameterList_21335 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
          const GGS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          UpEnumerator_actualOutputArgumentList enumerator_21434 (temp_12.readProperty_mExpressions ()) ;
          UpEnumerator_functionSignature enumerator_21469 (var_addAssignOperatorArguments_20476) ;
          while (enumerator_21434.hasCurrentObject () && enumerator_21469.hasCurrentObject ()) {
            GGS_semanticExpressionForGeneration var_expression_21863 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_21434.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_21469.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_21863, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 491)) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_21469.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_21434.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_string temp_14 ;
                const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_21469.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_15) {
                  temp_14 = enumerator_21469.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 502)) ;
                }else if (GalgasBool::boolFalse == test_15) {
                  temp_14 = GGS_string::makeEmptyString () ;
                }
                GGS_string var_s_22001 = GGS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 501)) ;
                GenericArray <FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, EnumFixItKind::fixItReplace, var_s_22001) ;
                inCompiler->emitSemanticError (enumerator_21434.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_22001, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_21469.current (HERE).readProperty_mFormalArgumentType (), var_expression_21863.readProperty_mResultType (), enumerator_21434.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_21863, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 507)) ;
            }
            var_effectiveParameterList_21335.addAssignOperation (var_expression_21863  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 513)) ;
            enumerator_21434.gotoNextObject () ;
            enumerator_21469.gotoNextObject () ;
          }
          const GGS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_20184.readProperty_type (), GGS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GGS_lstringlist::init (inCompiler COMMA_HERE), var_effectiveParameterList_21335, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 516)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    GenericArray <FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 526)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_setterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_7338 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_7338.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7338.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
    enumerator_7338.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selfSetterCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_7684 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_7684.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7684.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 223)) ;
    enumerator_7684.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_receiverType_8529 ;
  GGS_string var_targetVariableCppName_8556 ;
  GGS_string var_nameForCheckingFormalParameterUsing_8592 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_selfAvailability_2E_available var_selfAvailability_8670 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 242)).unwrappedValue () ;
        if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 242)).isValuated ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_typeKindEnum_2E_classType var_classTypeKind_8819 = extensionGetter_definition (var_selfAvailability_8670.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 244)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("instruction-setter-call.galgas", 244)).unwrappedValue () ;
            if (!extensionGetter_definition (var_selfAvailability_8670.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 244)).readProperty_typeKind ().getter_getClassType (SOURCE_FILE ("instruction-setter-call.galgas", 244)).isValuated ()) {
              test_3 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_3) {
              test_3 = var_classTypeKind_8819.readProperty_isReference ().boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = extensionGetter_selfIsMutable (var_selfAvailability_8670.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 245)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 245)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                const GGS_setterCallInstructionAST temp_5 = this ;
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 246)) ;
              }
            }
          }
          GGS_propertyMap var_propertyMap_9085 = extensionGetter_definition (var_selfAvailability_8670.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 248)).readProperty_propertyMap () ;
          GGS_bool var_isConstant_9203 ;
          const GGS_setterCallInstructionAST temp_7 = this ;
          GGS_AccessControl joker_9195 ; // Joker input parameter
          var_propertyMap_9085.method_searchKey (temp_7.readProperty_mReceiverName (), joker_9195, var_isConstant_9203, var_receiverType_8529, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 249)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_isConstant_9203.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              const GGS_setterCallInstructionAST temp_9 = this ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 251)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_8592 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GGS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_8556 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 254)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 255)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        const GGS_setterCallInstructionAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 257)) ;
        var_receiverType_8529.drop () ; // Release error dropped variable
        var_targetVariableCppName_8556.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_8592.drop () ; // Release error dropped variable
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    const GGS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_8529, var_targetVariableCppName_8556, var_nameForCheckingFormalParameterUsing_8592, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 262)) ;
    }
  }
  GGS_bool var_ok_9982 = GGS_bool (true) ;
  const GGS_setterCallInstructionAST temp_15 = this ;
  GGS_location var_errorLocation_9998 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GGS_setterCallInstructionAST temp_16 = this ;
  UpEnumerator_lstringlist enumerator_10049 (temp_16.readProperty_mReceiverStructProperties ()) ;
  bool bool_17 = var_ok_9982.isValidAndTrue () ;
  if (enumerator_10049.hasCurrentObject () && bool_17) {
    while (enumerator_10049.hasCurrentObject () && bool_17) {
      var_ok_9982 = extensionGetter_definition (var_receiverType_8529, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 273)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 273)) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_9982.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 274)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_9998, GGS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 275)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_propertyMap var_propertyMap_10268 = extensionGetter_definition (var_receiverType_8529, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)).readProperty_propertyMap () ;
        GGS_AccessControl var_accessControl_10361 ;
        GGS_bool var_isConstant_10380 ;
        var_propertyMap_10268.method_searchKey (enumerator_10049.current_mValue (HERE), var_accessControl_10361, var_isConstant_10380, var_receiverType_8529, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 278)) ;
        extensionMethod_checkSetAccess (var_accessControl_10361, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_10049.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 279)) ;
        var_errorLocation_9998 = enumerator_10049.current_mValue (HERE).readProperty_location () ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_isConstant_10380.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_10049.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 282)) ;
          }
        }
      }
      enumerator_10049.gotoNextObject () ;
      if (enumerator_10049.hasCurrentObject ()) {
        bool_17 = var_ok_9982.isValidAndTrue () ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_castType_10689 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    const GGS_setterCallInstructionAST temp_23 = this ;
    test_22 = GGS_bool (ComparisonKind::notEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_setterCallInstructionAST temp_24 = this ;
      var_castType_10689 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)) ;
      {
      const GGS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_8529, var_castType_10689, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 290)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    var_castType_10689 = var_receiverType_8529 ;
  }
  GGS_methodKind var_kind_11049 ;
  GGS_formalParameterSignature var_routineSignature_11063 ;
  GGS_bool var_hasCompilerArgument_11089 ;
  GGS_string var_setterErrorMessage_11125 ;
  const GGS_setterCallInstructionAST temp_26 = this ;
  GGS_methodQualifier joker_11113 ; // Joker input parameter
  extensionGetter_definition (var_castType_10689, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)).readProperty_setterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_11049, var_routineSignature_11063, var_hasCompilerArgument_11089, joker_11113, var_setterErrorMessage_11125, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 295)) ;
  GalgasBool test_27 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_27) {
    test_27 = GGS_bool (ComparisonKind::notEqual, var_setterErrorMessage_11125.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_27) {
      const GGS_setterCallInstructionAST temp_28 = this ;
      GenericArray <FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_11125, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304)) ;
    }
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_11652 ;
  const GGS_setterCallInstructionAST temp_30 = this ;
  const GGS_setterCallInstructionAST temp_31 = this ;
  const GGS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)), var_routineSignature_11063, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11652, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)) ;
  GGS_unifiedTypeMapEntry var_baseType_11743 = var_castType_10689 ;
  GGS_bool var_searching_11769 = GGS_bool (true) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 322)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      if (GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 323)).isValid ()) {
        uint32_t variant_11822 = GGS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 323)).uintValue () ;
        bool loop_11822 = true ;
        while (loop_11822) {
          loop_11822 = var_searching_11769.isValid () ;
          if (loop_11822) {
            loop_11822 = var_searching_11769.boolValue () ;
          }
          if (loop_11822 && (0 == variant_11822)) {
            loop_11822 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 323)) ;
          }
          if (loop_11822) {
            variant_11822 -= 1 ;
            GalgasBool test_34 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_11743, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 324)).boolEnum () ;
              if (GalgasBool::boolTrue == test_34) {
                var_searching_11769 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_34) {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_11743, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).readProperty_setterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_baseType_11743 = extensionGetter_definition (var_baseType_11743, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)).readProperty_superType () ;
                }
              }
              if (GalgasBool::boolFalse == test_35) {
                var_searching_11769 = GGS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GGS_setterCallInstructionAST temp_37 = this ;
  const GGS_setterCallInstructionAST temp_38 = this ;
  const GGS_setterCallInstructionAST temp_39 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_setterCallInstructionForGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_8556, var_nameForCheckingFormalParameterUsing_8592, temp_38.readProperty_mReceiverStructProperties (), var_castType_10689, var_receiverType_8529, temp_39.readProperty_mSetterName (), var_kind_11049, var_actualParameterListForGeneration_11652, var_hasCompilerArgument_11089, var_baseType_11743, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_13105 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 361)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("instruction-setter-call.galgas", 361)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfAvailable_13105.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 362)).operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 362)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selfSetterCallInstructionAST temp_2 = this ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
        }
      }
      const GGS_selfSetterCallInstructionAST temp_4 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_4.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
      GGS_methodKind var_kind_13564 ;
      GGS_formalParameterSignature var_routineSignature_13574 ;
      GGS_bool var_hasCompilerArgument_13596 ;
      const GGS_selfSetterCallInstructionAST temp_5 = this ;
      GGS_methodQualifier joker_13616 ; // Joker input parameter
      GGS_string joker_13619 ; // Joker input parameter
      extensionGetter_definition (var_selfAvailable_13105.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 368)).readProperty_setterMap ().method_searchKey (temp_5.readProperty_mSetterName (), var_kind_13564, var_routineSignature_13574, var_hasCompilerArgument_13596, joker_13616, joker_13619, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 368)) ;
      GGS_actualParameterListForGeneration var_actualParameterListForGeneration_14062 ;
      const GGS_selfSetterCallInstructionAST temp_6 = this ;
      const GGS_selfSetterCallInstructionAST temp_7 = this ;
      const GGS_selfSetterCallInstructionAST temp_8 = this ;
      extensionMethod_analyzeRoutineArguments (temp_6.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_7.readProperty_mSetterName (), GGS_string ("'").add_operation (temp_8.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)).add_operation (GGS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 376)), var_routineSignature_13574, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_14062, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)) ;
      const GGS_selfSetterCallInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selfSetterCallInstructionForGeneration::init_21__21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfAvailable_13105.readProperty_type (), temp_9.readProperty_mSetterName (), var_kind_13564, var_actualParameterListForGeneration_14062, var_hasCompilerArgument_13596, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfSetterCallInstructionAST temp_10 = this ;
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mSetterName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
  const GGS_setterCallInstructionForGeneration temp_0 = this ;
  GGS_string var_receiverCppName_16128 = temp_0.readProperty_mReceiverCppName () ;
  const GGS_setterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_lstringlist enumerator_16175 (temp_1.readProperty_mReceiverStructAttributes ()) ;
  while (enumerator_16175.hasCurrentObject ()) {
    var_receiverCppName_16128.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_16175.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)) ;
    enumerator_16175.gotoNextObject () ;
  }
  {
  const GGS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)) ;
  }
  GGS_stringlist var_parameterCppNameList_16408 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_16453 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_16506 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_setterCallInstructionForGeneration temp_3 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_16537 (temp_3.readProperty_mActualParameterList ()) ;
  while (enumerator_16537.hasCurrentObject ()) {
    GGS_string var_parameterCppName_16822 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_16537.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16453, var_inputVariableList_16506, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16822, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
    var_parameterCppNameList_16408.addAssignOperation (var_parameterCppName_16822  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
    enumerator_16537.gotoNextObject () ;
  }
  const GGS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_setterCallInstructionForGeneration temp_5 = this ;
      const GGS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 459)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 459)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GGS_bool (ComparisonKind::greaterThan, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)).readProperty_allTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 460)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_16128.add_operation (GGS_string (".insulate ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).add_operation (GGS_string (" COMMA_HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) ;
              }
            }
          }
          const GGS_setterCallInstructionForGeneration temp_11 = this ;
          GGS_string var_pointerUniqueName_17508 = GGS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) ;
          const GGS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).add_operation (var_pointerUniqueName_17508, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)) ;
          const GGS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).add_operation (var_receiverCppName_16128, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)) ;
          GalgasBool test_14 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_14) {
            const GGS_setterCallInstructionForGeneration temp_15 = this ;
            const GGS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
              const GGS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_17508, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (GGS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (var_pointerUniqueName_17508, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GGS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
              }
              const GGS_setterCallInstructionForGeneration temp_19 = this ;
              const GGS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).add_operation (GGS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).add_operation (GGS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_pointerUniqueName_17508, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (GGS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)) ;
            }
          }
          const GGS_setterCallInstructionForGeneration temp_21 = this ;
          const GGS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (GGS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (var_pointerUniqueName_17508, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        const GGS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (var_receiverCppName_16128, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      const GGS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
      const GGS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(var_receiverCppName_16128.add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_19255 (var_parameterCppNameList_16408) ;
  while (enumerator_19255.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_19255.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
    enumerator_19255.gotoNextObject () ;
    if (enumerator_19255.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 489)) ;
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    const GGS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_16408.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 492)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 495)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 497)) ;
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_16408.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 498)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 499)) ;
      }
    }
  }
  const GGS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 502)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
  {
  const GGS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 514)) ;
  }
  GGS_stringlist var_parameterCppNameList_20298 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_20342 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_20394 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_selfSetterCallInstructionForGeneration temp_1 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_20436 (temp_1.readProperty_mActualParameterList ()) ;
  while (enumerator_20436.hasCurrentObject ()) {
    GGS_string var_parameterCppName_20729 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_20436.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_20342, var_inputVariableList_20394, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20729, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 520)) ;
    var_parameterCppNameList_20298.addAssignOperation (var_parameterCppName_20729  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 528)) ;
    enumerator_20436.gotoNextObject () ;
  }
  const GGS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GGS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 534)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 534)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 537)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 540)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 540)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GGS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssignOperation(temp_13.readProperty_mSelfCppName ().add_operation (GGS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        const GGS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GGS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssignOperation(temp_15.readProperty_mSelfCppName ().add_operation (GGS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 543)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 543)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 543)) ;
      }
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_21709 (var_parameterCppNameList_20298) ;
  while (enumerator_21709.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_21709.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 547)) ;
    enumerator_21709.gotoNextObject () ;
    if (enumerator_21709.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)) ;
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_20298.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 551)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 555)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)) ;
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_parameterCppNameList_20298.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 557)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 558)) ;
      }
    }
  }
  const GGS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 560)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 560)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 561)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 228)) ;
  const GGS_switchInstructionAST temp_1 = this ;
  UpEnumerator_switchBranchesAST enumerator_8035 (temp_1.readProperty_mBranches ()) ;
  while (enumerator_8035.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8035.current (HERE).readProperty_mInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 230)) ;
    enumerator_8035.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_8995 ;
  const GGS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 246)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_8995, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_9087 = extensionGetter_definition (var_switchExpression_8995.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 253)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_8995.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("instruction-switch.galgas", 253)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_9217 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      {
      extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 257)) ;
      }
      GGS_switchBranchesForGeneration var_switchBranchesForGeneration_9374 = GGS_switchBranchesForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_switchInstructionAST temp_2 = this ;
      UpEnumerator_switchBranchesAST enumerator_9433 (temp_2.readProperty_mBranches ()) ;
      while (enumerator_9433.hasCurrentObject ()) {
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 260)) ;
        }
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9535 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_9615 (enumerator_9433.current (HERE).readProperty_mSwitchConstantList ()) ;
        while (enumerator_9615.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_9087.readProperty_constantMap ().getter_hasKey (enumerator_9615.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_9217.getter_hasKey (enumerator_9615.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_9615.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9615.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_9217.plusPlusAssignOperation (enumerator_9615.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_10073 ;
              GGS_uint joker_10065 ; // Joker input parameter
              var_enumType_9087.readProperty_constantMap ().method_searchKey (enumerator_9615.current (HERE), joker_10065, var_associatedTypeList_10073, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10073.getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_9433.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_9615.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_9615.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_10073.getter_count (SOURCE_FILE ("instruction-switch.galgas", 273)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_9433.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 273)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_9615.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9615.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_10073.getter_count (SOURCE_FILE ("instruction-switch.galgas", 276)).objectCompare (enumerator_9433.current (HERE).readProperty_mAssociatedValuesExtraction ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 276)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_10073.getter_count (SOURCE_FILE ("instruction-switch.galgas", 280)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_9615.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9615.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (var_associatedTypeList_10073.getter_count (SOURCE_FILE ("instruction-switch.galgas", 278)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)), fixItArray13  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_10931 (var_associatedTypeList_10073) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_10977 (enumerator_9433.current (HERE).readProperty_mAssociatedValuesExtraction ()) ;
                    GGS_uint index_10913 (uint32_t (0)) ;
                    while (enumerator_10931.hasCurrentObject () && enumerator_10977.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_10977.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_10931.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_10977.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_10977.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10931.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_11487 = GGS_string ("extractedValue_").add_operation (enumerator_10977.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)).add_operation (enumerator_10977.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)).add_operation (index_10913.getter_string (SOURCE_FILE ("instruction-switch.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)) ;
                      var_extractedAssociatedValuesForGeneration_9535.addAssignOperation (enumerator_10931.current (HERE).readProperty_type (), var_cppName_11487, enumerator_10931.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_10977.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          GalgasBool test_18 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_18) {
                            test_18 = enumerator_10977.current (HERE).readProperty_mMarkedAsUnused ().boolEnum () ;
                            if (GalgasBool::boolTrue == test_18) {
                              {
                              extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10977.current (HERE).readProperty_mExtractedValueName (), enumerator_10931.current (HERE).readProperty_type (), var_cppName_11487, var_cppName_11487, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_18) {
                            {
                            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10977.current (HERE).readProperty_mExtractedValueName (), enumerator_10931.current (HERE).readProperty_type (), var_cppName_11487, var_cppName_11487, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
                            }
                          }
                        }
                      }
                      enumerator_10931.gotoNextObject () ;
                      enumerator_10977.gotoNextObject () ;
                      index_10913.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_9615.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_9615.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (extensionGetter_definition (var_switchExpression_8995.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 319)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 319)), fixItArray19  COMMA_SOURCE_FILE ("instruction-switch.galgas", 317)) ;
          }
          enumerator_9615.gotoNextObject () ;
        }
        GGS_semanticInstructionListForGeneration var_instructionList_13232 ;
        {
        routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_localConstantList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), GGS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_9433.current (HERE).readProperty_mInstructions (), ioArgument_ioVariableMap, var_instructionList_13232, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
        }
        {
        extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9433.current (HERE).readProperty_mEndOfBranch (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 334)) ;
        }
        var_switchBranchesForGeneration_9374.addAssignOperation (enumerator_9433.current (HERE).readProperty_mSwitchConstantList (), var_extractedAssociatedValuesForGeneration_9535, enumerator_9433.current (HERE).readProperty_mEndOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 338)), var_instructionList_13232  COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)) ;
        enumerator_9433.gotoNextObject () ;
      }
      {
      const GGS_switchInstructionAST temp_20 = this ;
      extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 341)) ;
      }
      GGS_stringset var_forgottenConstants_13659 = var_enumType_9087.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)).substract_operation (var_constantsNamedInSwitchInstruction_9217, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 343)) ;
      GalgasBool test_21 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_21) {
        test_21 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_13659.getter_count (SOURCE_FILE ("instruction-switch.galgas", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          GGS_string var_s_13811 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_13831 (var_forgottenConstants_13659) ;
          while (enumerator_13831.hasCurrentObject ()) {
            var_s_13811.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_13831.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 347)) ;
            enumerator_13831.gotoNextObject () ;
          }
          const GGS_switchInstructionAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13811, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 350)), fixItArray23  COMMA_SOURCE_FILE ("instruction-switch.galgas", 349)) ;
        }
      }
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_switchInstructionForGeneration::init_21__21__21_ (var_switchExpression_8995.readProperty_mResultType (), var_switchExpression_8995, var_switchBranchesForGeneration_9374, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 353)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_switchInstructionAST temp_24 = this ;
    GenericArray <FixItDescription> fixItArray25 ;
    inCompiler->emitSemanticError (temp_24.readProperty_mEndOfSwitchExpression (), GGS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8995.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 361)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 360)).add_operation (GGS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 361)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 359)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVar_16445 ;
  const GGS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_16445, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVar_16445, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 412)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 413)) ;
  const GGS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 415)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 416)) ;
  const GGS_switchInstructionForGeneration temp_2 = this ;
  UpEnumerator_switchBranchesForGeneration enumerator_16762 (temp_2.readProperty_mBranches ()) ;
  while (enumerator_16762.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_16808 (enumerator_16762.current (HERE).readProperty_mSwitchConstantList ()) ;
    while (enumerator_16808.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)) ;
      const GGS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 420)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 421)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16808.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 422)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 423)) ;
      enumerator_16808.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 425)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_16762.current (HERE).readProperty_mInstructions ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 426)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 427)) ;
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_16762.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("instruction-switch.galgas", 428)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17366 (enumerator_16762.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17366.hasCurrentObject ()) {
              extensionMethod_addHeaderFileName (enumerator_17366.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 430)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_17366.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 431)) ;
              ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_17366.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 432)) ;
              enumerator_17366.gotoNextObject () ;
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVar_16445, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 434)) ;
            ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16762.current (HERE).readProperty_mSwitchConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 435)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 435)) ;
            UpEnumerator_extractedAssociatedValuesForGeneration enumerator_17866 (enumerator_16762.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
            while (enumerator_17866.hasCurrentObject ()) {
              ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_17866.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 437)) ;
              enumerator_17866.gotoNextObject () ;
              if (enumerator_17866.hasCurrentObject ()) {
                ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 438)) ;
              }
            }
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 440)) ;
          }
        }
        {
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_16762.current (HERE).readProperty_mInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 442)) ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 450)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 452)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 453)) ;
    }
    enumerator_16762.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 455)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  UpEnumerator_actualParameterListAST enumerator_3798 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_3798.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3798.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
    enumerator_3798.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_typeMethodCallInstructionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_type_4569 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GGS_formalParameterSignature var_routineSignature_4725 ;
  GGS_bool var_hasCompilerArgument_4747 ;
  const GGS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4569, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)).readProperty_classMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4725, var_hasCompilerArgument_4747, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_5186 ;
  const GGS_typeMethodCallInstructionAST temp_2 = this ;
  const GGS_typeMethodCallInstructionAST temp_3 = this ;
  const GGS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GGS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)).add_operation (GGS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)), var_routineSignature_4725, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5186, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GGS_typeMethodCallInstructionAST temp_5 = this ;
  const GGS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_typeMethodCallInstructionForGeneration::init_21__21__21__21_ (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5186, var_hasCompilerArgument_4747, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
  GGS_stringlist var_parameterCppNameList_6348 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_6392 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_6444 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_typeMethodCallInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_6486 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_6486.hasCurrentObject ()) {
    GGS_string var_parameterCppName_6779 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6486.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6392, var_inputVariableList_6444, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6779, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
    var_parameterCppNameList_6348.addAssignOperation (var_parameterCppName_6779  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
    enumerator_6486.gotoNextObject () ;
  }
  const GGS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GGS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (GGS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 163)) ;
  UpEnumerator_stringlist enumerator_7060 (var_parameterCppNameList_6348) ;
  while (enumerator_7060.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_7060.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 166)) ;
    enumerator_7060.gotoNextObject () ;
    if (enumerator_7060.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 167)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) ;
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6348.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 171)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GGS_bool (ComparisonKind::greaterThan, var_parameterCppNameList_6348.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 176)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 176)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)) ;
    }
  }
  const GGS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 179)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 180)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 172)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7952 ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7952, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 188)) ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_8001 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 198)) ;
  {
  const GGS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GGS_bool (true), var_expression_7952.readProperty_mResultType (), var_targetVariableCppName_8001, var_targetVariableCppName_8001, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 199)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_7952.readProperty_mResultType (), GGS_bool (false), var_targetVariableCppName_8001, var_expression_7952, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 207)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_8937 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_8937, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 220)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationNoAssignmentAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_analyzeSemanticInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_targetType_9613 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)) ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GGS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GGS_string var_targetVariableCppName_9680 = GGS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 237)) ;
  {
  const GGS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_9613, var_targetVariableCppName_9680, var_targetVariableCppName_9680, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 238)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (var_targetType_9613, var_targetVariableCppName_9680, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 245)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 269)) ;
  const GGS_localVariableDeclarationForGeneration temp_1 = this ;
  const GGS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 270)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 87)) ;
  const GGS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  const GGS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_locationExpression_4964 ;
  GGS_semanticExpressionForGeneration var_messageExpression_4992 ;
  GGS_fixitListForGeneration var_fixitListForGeneration_5019 ;
  {
  const GGS_warningInstructionAST temp_0 = this ;
  const GGS_warningInstructionAST temp_1 = this ;
  const GGS_warningInstructionAST temp_2 = this ;
  const GGS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GGS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4964, var_messageExpression_4992, var_fixitListForGeneration_5019, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
  }
  const GGS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_warningInstructionForGeneration::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4964, var_messageExpression_4992, var_fixitListForGeneration_5019, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-warning.galgas", 120)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_receiverCppVarName_6324 ;
  const GGS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6324, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  GGS_string var_messageCppVarName_6532 ;
  const GGS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6532, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)) ;
  GGS_string var_fixItArrayCppName_6782 ;
  const GGS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6782, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 159)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 168)) ;
  }
  const GGS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GGS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (var_receiverCppVarName_6324, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (var_messageCppVarName_6532, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (var_fixItArrayCppName_6782, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) ;
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
  GGS_uint var_nonTerminalSymbolIndex_5437 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_5460 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5437, joker_5460, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_nonTerminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5437, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118)) ;
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
  GGS_nonterminalLabelMap var_labelMap_6909 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_6909, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 140)) ;
  GGS_formalParameterSignature var_signature_6953 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GGS_string ("parse"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_signature_6953 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_nonterminalCallInstruction temp_3 = this ;
    GGS_formalParameterListForGeneration joker_7083 ; // Joker input parameter
    GGS_location joker_7097 ; // Joker input parameter
    var_labelMap_6909.method_searchKey (temp_3.readProperty_mLabelName (), joker_7083, var_signature_6953, joker_7097, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
  }
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_7551 ;
  const GGS_nonterminalCallInstruction temp_4 = this ;
  const GGS_nonterminalCallInstruction temp_5 = this ;
  const GGS_nonterminalCallInstruction temp_6 = this ;
  extensionMethod_analyzeRoutineArguments (temp_4.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mNonterminalName (), GGS_string ("'<").add_operation (temp_6.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)).add_operation (GGS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)), var_signature_6953, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7551, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 148)) ;
  const GGS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161)) ;
  const GGS_nonterminalCallInstruction temp_8 = this ;
  const GGS_nonterminalCallInstruction temp_9 = this ;
  const GGS_nonterminalCallInstruction temp_10 = this ;
  const GGS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_7551, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GGS_actualParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200)) ;
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
    GGS_nonterminalInstructionForGeneration var_si_9881 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9881.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_9881.readProperty_mNonterminalName ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 218)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_nonterminalInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9881.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_10222 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10222.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_nonterminalInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_10222.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_nonterminalInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 227)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 230)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_nonterminalInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
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
  GGS_stringlist var_parameterCppNameList_11182 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_11226 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_11278 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_11320 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_11320.hasCurrentObject ()) {
    GGS_string var_parameterCppName_11613 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_11320.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11226, var_inputVariableList_11278, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11613, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 252)) ;
    var_parameterCppNameList_11182.addAssignOperation (var_parameterCppName_11613  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)) ;
    enumerator_11320.gotoNextObject () ;
  }
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  GGS_string var_sdtResultVarName_11721 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (var_sdtResultVarName_11721, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)) ;
    }
  }
  const GGS_nonterminalInstructionForGeneration temp_3 = this ;
  const GGS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)) ;
  UpEnumerator_stringlist enumerator_12086 (var_parameterCppNameList_11182) ;
  while (enumerator_12086.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12086.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)) ;
    enumerator_12086.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_sdtResultVarName_11721.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)) ;
  const GGS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_11721, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 277)) ;
  UpEnumerator_stringlist enumerator_12624 (var_jokerParametersToReleaseList_11226) ;
  while (enumerator_12624.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12624.current_mValue (HERE).add_operation (GGS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)) ;
    enumerator_12624.gotoNextObject () ;
  }
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
  GGS_uint var_addedNonTerminalIndex_4804 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 109)) ;
  GGS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4890 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4890, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 112)) ;
  }
  GGS_branchListForGrammarAnalysis var_repeatBranchList_5234 = GGS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_4890  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
  const GGS_repeatInstruction temp_1 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_5354 (temp_1.readProperty_mRepeatBranchList ()) ;
  while (enumerator_5354.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5394 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5354.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5394, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 123)) ;
    }
    var_repeatBranchList_5234.addAssignOperation (var_syntaxInstructionList_5394  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 130)) ;
    enumerator_5354.gotoNextObject () ;
  }
  const GGS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_repeatInstructionForGrammarAnalysis::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5234, var_addedNonTerminalIndex_4804, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 133)) ;
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
  GGS_uint var_choiceIndex_6770 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 162)) ;
  }
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7322 ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  const GGS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7322, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 164)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7422 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_7501 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_7501.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_7953 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7501.current_mSyntaxInstructionList (HERE), enumerator_7501.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7953, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 184)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7422.addAssignOperation (var_instructionList_7953, enumerator_7501.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 201)) ;
    enumerator_7501.gotoNextObject () ;
  }
  {
  const GGS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 204)) ;
  }
  const GGS_repeatInstruction temp_4 = this ;
  const GGS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6770, var_repeated_5F_instructionList_7322, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7422, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 206)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9426 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)) ;
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9537 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstructionForGeneration temp_1 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9653 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_9653.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9537.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9653.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)), enumerator_9653.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
    enumerator_9653.gotoNextObject () ;
  }
  const GGS_repeatInstructionForGeneration temp_2 = this ;
  const GGS_repeatInstructionForGeneration temp_3 = this ;
  const GGS_repeatInstructionForGeneration temp_4 = this ;
  const GGS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9426, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9537, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 244)) ;
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
    GGS_repeatInstructionForGeneration var_si_10564 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10564.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10564.readProperty_m_5F_repeated_5F_instructionList (), var_si_10564.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)).objectCompare (var_si_10564.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 264)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_repeatInstructionForGeneration temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10564.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 267)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 266)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)).add_operation (var_si_10564.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 269)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_repeatInstructionForGeneration temp_6 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11357 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11436 (var_si_10564.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11357.hasCurrentObject () && enumerator_11436.hasCurrentObject () && bool_7) {
        while (enumerator_11357.hasCurrentObject () && enumerator_11436.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11357.current_mInstructionList (HERE), enumerator_11436.current_mInstructionList (HERE), enumerator_11436.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 273)) ;
          enumerator_11357.gotoNextObject () ;
          enumerator_11436.gotoNextObject () ;
          if (enumerator_11357.hasCurrentObject () && enumerator_11436.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_syntaxInstructionForGeneration var_si_11663 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11663.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11663.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 277)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_repeatInstructionForGeneration temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 284)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_repeatInstructionForGeneration temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
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
  GGS_string var_repeatFlagCppName_12620 = GGS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_repeatFlagCppName_12620, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_repeatFlagCppName_12620, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)) ;
  {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 314)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)) ;
      const GGS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)).add_operation (GGS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
      const GGS_repeatInstructionForGeneration temp_5 = this ;
      GGS_semanticInstructionListForGeneration var_instructionList_13383 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13383, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 318)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12620, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)) ;
    const GGS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
    const GGS_repeatInstructionForGeneration temp_8 = this ;
    UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_14054 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
    GGS_uint index_14032 (uint32_t (0)) ;
    while (enumerator_14054.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_14032.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_14054.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 342)) ;
      enumerator_14054.gotoNextObject () ;
      index_14032.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 344)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12620, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 347)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 349)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 350)) ;
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
  GGS_uint var_addedNonTerminalIndex_4475 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  GGS_branchListForGrammarAnalysis var_selectBranchList_4561 = GGS_branchListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_4643 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_4643.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4683 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4643.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4683, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_selectBranchList_4561.addAssignOperation (var_syntaxInstructionList_4683  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
    enumerator_4643.gotoNextObject () ;
  }
  const GGS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_selectInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4561, var_addedNonTerminalIndex_4475, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 118)) ;
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
  GGS_uint var_choiceIndex_6060 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 144)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 146)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6210 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_6332 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_6332.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_6784 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6332.current_mSyntaxInstructionList (HERE), enumerator_6332.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6784, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6210.addAssignOperation (var_instructionList_6784, enumerator_6332.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
    enumerator_6332.gotoNextObject () ;
  }
  {
  const GGS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 170)) ;
  }
  const GGS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6060, var_listOfSemanticInstructionListForGeneration_6210, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_8052 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstructionForGeneration temp_0 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_8168 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_8168.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8052.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8168.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 199)), enumerator_8168.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
    enumerator_8168.gotoNextObject () ;
  }
  const GGS_selectInstructionForGeneration temp_1 = this ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  const GGS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_8052, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 202)) ;
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
    GGS_selectInstructionForGeneration var_si_9008 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9008.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bool (true) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)).objectCompare (var_si_9008.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 220)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 220)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selectInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9008.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 223)).getter_string (SOURCE_FILE ("instruction-select.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)).add_operation (var_si_9008.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 225)).getter_string (SOURCE_FILE ("instruction-select.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 224)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 221)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_selectInstructionForGeneration temp_5 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9608 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9695 (var_si_9008.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject () && bool_6) {
        while (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9608.current_mInstructionList (HERE), enumerator_9695.current_mInstructionList (HERE), enumerator_9695.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
          enumerator_9608.gotoNextObject () ;
          enumerator_9695.gotoNextObject () ;
          if (enumerator_9608.hasCurrentObject () && enumerator_9695.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_syntaxInstructionForGeneration var_si_9922 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9922.ptr ()) {
        test_7 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9922.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_selectInstructionForGeneration temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 237)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 240)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_selectInstructionForGeneration temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 241)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) ;
  }
  const GGS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  const GGS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11210 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  GGS_uint index_11188 (uint32_t (0)) ;
  while (enumerator_11210.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_11188.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11210.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_11210.gotoNextObject () ;
    index_11188.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
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
  GGS_uint var_terminalSymbolIndex_7271 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_terminalCheckInstructionAST temp_1 = this ;
    const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element var_entry_7302 = ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_terminalSymbolIndex_7271 = var_entry_7302.readProperty_mTerminalIndex () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_terminalSymbolIndex_7271 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 159)) ;
    {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_2.readProperty_mTerminalName (), var_terminalSymbolIndex_7271, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 160)) ;
    }
  }
  const GGS_terminalCheckInstructionAST temp_3 = this ;
  const GGS_terminalCheckInstructionAST temp_4 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_terminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTerminalName (), var_terminalSymbolIndex_7271, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 162)) ;
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
  GGS_lexicalSentValueList var_sentAttributeList_8591 ;
  const GGS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8591, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 185)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 187)).objectCompare (var_sentAttributeList_8591.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 187)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_terminalCheckInstructionAST temp_3 = this ;
      const GGS_terminalCheckInstructionAST temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_sentAttributeList_8591.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 190)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_terminalCheckInstructionAST temp_7 = this ;
      const GGS_terminalCheckInstructionAST temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 193)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GGS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GGS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (var_sentAttributeList_8591.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 189)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (GGS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 192)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 192)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 192)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)) ;
    }
  }
  GGS_terminalCheckAssignementList var_terminalCheckAssignementList_9136 = GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE) ;
  const GGS_terminalCheckInstructionAST temp_12 = this ;
  UpEnumerator_actualInputParameterListAST enumerator_9225 (temp_12.readProperty_mActualInputParameterList ()) ;
  UpEnumerator_lexicalSentValueList enumerator_9323 (var_sentAttributeList_8591) ;
  while (enumerator_9225.hasCurrentObject () && enumerator_9323.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9225.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9323.current_mLexicalType (HERE), enumerator_9323.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9136, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 198)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_9323.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9225.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string temp_14 ;
        const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_9323.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          temp_14 = GGS_string (":") ;
        }else if (GalgasBool::boolFalse == test_15) {
          temp_14 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9225.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the actual selector should be '\?").add_operation (enumerator_9323.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9323.current_mLexicalFormalSelector (HERE).readProperty_location (), GGS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 208)) ;
      }
    }
    enumerator_9225.gotoNextObject () ;
    enumerator_9323.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_18 = this ;
  UpEnumerator__32_lstringlist enumerator_9930 (temp_18.readProperty_mIndexingKeyList ()) ;
  while (enumerator_9930.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9930.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 213)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9930.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9930.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)).add_operation (GGS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)) ;
      }
    }
    enumerator_9930.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 218)) ;
  const GGS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 224)) ;
  const GGS_terminalCheckInstructionAST temp_23 = this ;
  const GGS_terminalCheckInstructionAST temp_24 = this ;
  const GGS_terminalCheckInstructionAST temp_25 = this ;
  const GGS_terminalCheckInstructionAST temp_26 = this ;
  const GGS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9136, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 231)) ;
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
  GGS_string var_nodeName_12378 ;
  {
  const GGS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 265)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 265)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12378, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (var_nodeName_12378, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)) ;
  ioArgument_ioCurrentNode = var_nodeName_12378 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 273)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE), temp_3.readProperty_mIndexingKeyList (), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 307)) ;
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
    GGS_terminalCheckInstructionForGeneration var_si_14793 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_14793.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_14793.readProperty_mTerminalName ().readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 326)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_14793.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 328)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 328)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_15133 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_15133.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_15133.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 332)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 332)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 335)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 338)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_terminalCheckInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 339)) ;
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
  UpEnumerator_terminalCheckAssignementList enumerator_16143 (temp_0.readProperty_mTerminalCheckAssignementList ()) ;
  while (enumerator_16143.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_16143.current_mTypeName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (enumerator_16143.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 357)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 357)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16143.current_mTargetVarCppName (HERE).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)).add_operation (GGS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16143.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 361)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 362)) ;
    enumerator_16143.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  UpEnumerator__32_lstringlist enumerator_16580 (temp_2.readProperty_mIndexingKeyList ()) ;
  while (enumerator_16580.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)) ;
    const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)).add_operation (GGS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16580.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_16580.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 369)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 369)) ;
    enumerator_16580.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 372)) ;
  const GGS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 378)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)).add_operation (GGS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)) ;
  const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)) ;
  const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 388)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 388)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseLoopInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                               GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                               GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_parseLoopInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 111)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GGS_semanticExpressionForGeneration var_variant_5F_expression_6195 ;
  const GGS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 142)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_6195, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 139)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_variant_5F_expression_6195.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_parseLoopInstruction temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GGS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6195.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (GGS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_while_5F_expression_6849 ;
  const GGS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 157)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_6849, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 154)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_while_5F_expression_6849.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_parseLoopInstruction temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GGS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6195.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (GGS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 164)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 170)) ;
  }
  GGS_semanticInstructionListForGeneration var_instructionList_7704 ;
  {
  const GGS_parseLoopInstruction temp_8 = this ;
  const GGS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7704, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 172)) ;
  }
  {
  const GGS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  }
  const GGS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_parseLoopInstructionForGeneration::init_21__21__21__21_ (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_6195, var_while_5F_expression_6849, var_instructionList_7704, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_parseLoopInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssignOperation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GGS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  }
  GGS_string var_variantVarCppName_9719 ;
  const GGS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9719, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_variantVarCppName_9719, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  }
  GGS_string var_variantVar_9881 = GGS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("uint32_t ").add_operation (var_variantVar_9881, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (var_variantVarCppName_9719, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GGS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  GGS_string var_loopVar_10094 = GGS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_loopVar_10094, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_loopVar_10094, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_10094.add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  GGS_string var_whileVarCppName_10512 ;
  const GGS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_10512, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_whileVarCppName_10512, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)).add_operation (GGS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(var_loopVar_10094.add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_variantVar_9881.add_operation (GGS_string (" -= 1 ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)).add_operation (GGS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)) ;
  {
  const GGS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 253)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)).add_operation (GGS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 262)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 263)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 264)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 265)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 266)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 269)) ;
  {
  const GGS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GGS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 270)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)).add_operation (GGS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseRewindInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                 GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                 GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionList var_syntaxInstructionList_4504 ;
  const GGS_parseRewindInstruction temp_0 = this ;
  GGS_location joker_4526 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_4504, joker_4526, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 106)) ;
  {
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_syntaxInstructionList_4504, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 108)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5641 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  GGS_uint var_referenceSelectMethodCount_5745 = ioArgument_ioSelectMethodCount ;
  const GGS_parseRewindInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_5824 (temp_0.readProperty_mParseRewindBranchList ()) ;
  while (enumerator_5824.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_5745 ;
    GGS_semanticInstructionListForGeneration var_instructionList_5940 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxInstructionList enumerator_6008 (enumerator_5824.current_mSyntaxInstructionList (HERE)) ;
    while (enumerator_6008.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_6008.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_5940, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 143)) ;
      enumerator_6008.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_5641.addAssignOperation (var_instructionList_5940, enumerator_5824.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 159)) ;
    enumerator_5824.gotoNextObject () ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_6646 = var_listOfSemanticInstructionListForGeneration_5641 ;
  GGS_semanticInstructionListForGeneration var_instructionList_6748 ;
  {
  GGS_location joker_6764 ; // Joker input parameter
  var_tempListOfBranches_6646.setter_popFirst (var_instructionList_6748, joker_6764, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 163)) ;
  }
  GGS_semanticInstructionListForGeneration var_referenceSignature_6812 = function_syntaxSignatureOfInstructionList (GGS_string ("parse"), var_instructionList_6748, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 164)) ;
  GGS_bool var_ok_6906 = GGS_bool (true) ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_6940 (var_tempListOfBranches_6646) ;
  bool bool_1 = var_ok_6906.isValidAndTrue () ;
  if (enumerator_6940.hasCurrentObject () && bool_1) {
    while (enumerator_6940.hasCurrentObject () && bool_1) {
      var_ok_6906 = function_compareSyntaxSignature (var_referenceSignature_6812, function_syntaxSignatureOfInstructionList (GGS_string ("parse"), enumerator_6940.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 169)), enumerator_6940.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)) ;
      enumerator_6940.gotoNextObject () ;
      if (enumerator_6940.hasCurrentObject ()) {
        bool_1 = var_ok_6906.isValidAndTrue () ;
      }
    }
  }
  const GGS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_parseRewindInstructionForGeneration::init_21__21_ (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_5641, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 174)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                             GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration var_instructionList_8224 ;
  const GGS_parseRewindInstructionForGeneration temp_0 = this ;
  GGS_location joker_8240 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_8224, joker_8240, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)) ;
  ioArgument_ioInstructionListForGeneration.plusAssignOperation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_8224, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 197)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) ;
  }
  GGS_string var_parsingContextVar_8910 = GGS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 212)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_8910, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)).add_operation (GGS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 214)) ;
  const GGS_parseRewindInstructionForGeneration temp_0 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9164 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_9164.hasCurrentObject ()) {
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_9164.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 217)) ;
    }
    enumerator_9164.gotoNextObject () ;
    if (enumerator_9164.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 226)).add_operation (GGS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 226)).add_operation (var_parsingContextVar_8910, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 226)).add_operation (GGS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 226)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseWhenInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                               GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                               GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_parseWhenInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mElseInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 181)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GGS_semanticExpressionForGeneration var_when_5F_expression_8949 ;
  const GGS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-when.galgas", 212)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_when_5F_expression_8949, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 219)) ;
  }
  GGS_uint var_localSelectMethodCount_9066 = ioArgument_ioSelectMethodCount ;
  GGS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_9498 ;
  {
  const GGS_parseWhenInstruction temp_1 = this ;
  const GGS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_9066, var_when_5F_instructionListForGeneration_9498, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 222)) ;
  }
  GGS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_9940 ;
  {
  const GGS_parseWhenInstruction temp_3 = this ;
  const GGS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_9940, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 240)) ;
  }
  {
  const GGS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 258)) ;
  }
  const GGS_parseWhenInstruction temp_6 = this ;
  GGS_bool var_ok_10101 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GGS_string ("parse"), var_when_5F_instructionListForGeneration_9498, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 261)), function_syntaxSignatureOfInstructionList (GGS_string ("parse"), var_else_5F_instructionListForGeneration_9940, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 262)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 260)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_ok_10101.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_parseWhenInstructionForGeneration::init_21__21__21__21_ (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_8949, var_when_5F_instructionListForGeneration_9498, var_else_5F_instructionListForGeneration_9940, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_parseWhenInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssignOperation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GGS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_12240 ;
  const GGS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12240, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 306)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_sourceVar_12240, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)).add_operation (GGS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)) ;
  {
  const GGS_parseWhenInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 308)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 316)) ;
  {
  const GGS_parseWhenInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 317)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 325)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                   const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                   GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                   GGS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                     const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                     const GGS_string /* constinArgument_inLexiqueName */,
                                                                     const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GGS_string /* constinArgument_inComponentName */,
                                                                     const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                     GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 92)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_syntaxSendInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 93)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_expression_5012 ;
  const GGS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5012, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expression_5012.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_syntaxSendInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GGS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_syntaxSendInstructionForGeneration::init_21__21_ (temp_7.readProperty_mInstructionLocation (), var_expression_5012, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GGS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceVar_6531 ;
  const GGS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6531, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_sourceVar_6531, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (".appendString (").add_operation (var_sourceVar_6531, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 147)) ;
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
  UpEnumerator_semanticInstructionListForGeneration enumerator_2040 (constinArgument_inInstructionList) ;
  while (enumerator_2040.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2040.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 43)) ;
    enumerator_2040.gotoNextObject () ;
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
                                                                              const cObjectArray & inEffectiveParameterArray,
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
  GGS_bool result_outOk ; // Returned variable
  result_outOk = GGS_bool (true) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2924 (constinArgument_inReferenceSignature) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2968 (constinArgument_inTestedSignature) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject () && bool_0) {
    while (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2924.current_mInstruction (HERE).ptr (), enumerator_2968.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      enumerator_2924.gotoNextObject () ;
      enumerator_2968.gotoNextObject () ;
      if (enumerator_2924.hasCurrentObject () && enumerator_2968.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_outOk.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3233 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3328 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3233.ptr ())) ;
        if (nullptr == var_si_3328.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3328.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result_outOk.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3867 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 83)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3962 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3867.ptr ())) ;
          if (nullptr == var_si_3962.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3962.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 87)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 90)) ;
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

static const GALGAS_TypeDescriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
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
    var_componentNameSet_1621.plusPlusAssignOperation (enumerator_1663.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 33)) ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1759 = enumerator_1663.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GGS_syntaxRuleListAST var_ruleList_1834 = enumerator_1663.current (HERE).readProperty_mRuleList () ;
    UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1904 (extensionGetter_listForKey (constinArgument_inSyntaxExtensions, enumerator_1663.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 36))) ;
    while (enumerator_1904.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1759.plusAssignOperation(enumerator_1904.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 37)) ;
      var_ruleList_1834.plusAssignOperation(enumerator_1904.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 38)) ;
      enumerator_1904.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssignOperation (GGS_galgas_33_SyntaxComponentAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), enumerator_1663.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1663.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1759, var_ruleList_1834, enumerator_1663.current (HERE).readProperty_mHasTranslateFeature (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 40)) ;
    enumerator_1663.gotoNextObject () ;
  }
  UpEnumerator_syntaxExtensionsDictionary enumerator_2420 (constinArgument_inSyntaxExtensions.readProperty_dictionary ()) ;
  while (enumerator_2420.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_componentNameSet_1621.getter_hasKey (enumerator_2420.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 50)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 50)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2547 (enumerator_2420.current_extensionList (HERE)) ;
        while (enumerator_2547.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2547.current_mSyntaxComponentName (HERE).readProperty_location (), GGS_string ("there is no '").add_operation (enumerator_2547.current_mSyntaxComponentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)).add_operation (GGS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 52)) ;
          enumerator_2547.gotoNextObject () ;
        }
      }
    }
    enumerator_2420.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'transformLabelMap'
//
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GGS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GGS_nonterminalSymbolLabelMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_1635 (constinArgument_inLabels) ;
  while (enumerator_1635.hasCurrentObject ()) {
    GGS_signatureForGrammarAnalysis var_formalParametersList_1690 = GGS_signatureForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_1781 (enumerator_1635.current_mFormalArgumentList (HERE)) ;
    while (enumerator_1781.hasCurrentObject ()) {
      var_formalParametersList_1690.addAssignOperation (enumerator_1781.current_mFormalArgumentPassingMode (HERE), enumerator_1781.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 33)) ;
      enumerator_1781.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_1635.current_mLabelName (HERE), var_formalParametersList_1690, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 35)) ;
    }
    enumerator_1635.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_transformLabelMap (Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalLabelListAST operand0 = GGS_nonTerminalLabelListAST::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

void routine_checkLabelMap_3F__3F__3F__3F_ (const GGS_location constinArgument_inNonTerminalLocation,
                                            const GGS_nonTerminalLabelListAST constinArgument_inLabels,
                                            const GGS_location constinArgument_inOriginalNonTerminalLocation,
                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_labelStringSet_2391 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalLabelListAST enumerator_2450 (constinArgument_inLabels) ;
  while (enumerator_2450.hasCurrentObject ()) {
    var_labelStringSet_2391.plusPlusAssignOperation (enumerator_2450.current_mLabelName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)) ;
    GGS_signatureForGrammarAnalysis var_formalParametersList_2587 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2450.current_mLabelName (HERE), var_formalParametersList_2587, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)).objectCompare (var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 54)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 57)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string::makeEmptyString () ;
        }
        GGS_string temp_3 ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 61)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          temp_3 = GGS_string ("s") ;
        }else if (GalgasBool::boolFalse == test_4) {
          temp_3 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2450.current_mLabelName (HERE).readProperty_location (), enumerator_2450.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 55)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (GGS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 56)).add_operation (GGS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 57)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (var_formalParametersList_2587.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 60)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (GGS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 55)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      UpEnumerator_formalParameterListAST enumerator_3217 (enumerator_2450.current_mFormalArgumentList (HERE)) ;
      UpEnumerator_signatureForGrammarAnalysis enumerator_3290 (var_formalParametersList_2587) ;
      while (enumerator_3217.hasCurrentObject () && enumerator_3290.hasCurrentObject ()) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_3290.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3217.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3290.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GGS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_3290.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)).add_operation (GGS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (GGS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (extensionGetter_string (enumerator_3217.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (GGS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 65)) ;
          }
        }
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_3290.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().objectCompare (enumerator_3217.current_mFormalArgumentTypeName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GenericArray <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3290.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GGS_string (" this formal parameter is declared of '@").add_operation (enumerator_3290.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 74)).add_operation (GGS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 75)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2450.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 76)).add_operation (GGS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).add_operation (enumerator_3217.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 73)) ;
          }
        }
        enumerator_3217.gotoNextObject () ;
        enumerator_3290.gotoNextObject () ;
      }
    }
    enumerator_2450.gotoNextObject () ;
  }
  UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4396 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis) ;
  while (enumerator_4396.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_labelStringSet_2391.getter_hasKey (enumerator_4396.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas", 85)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 85)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GGS_string ("this non terminal does not declare the '").add_operation (enumerator_4396.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GGS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 87)).add_operation (GGS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 88)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 86)) ;
      }
    }
    enumerator_4396.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                    const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_nonterminalDeclarationListAST enumerator_5041 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_5041.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_5096 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5041.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5041.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5041.current_mNonterminalName (HERE).readProperty_location (), enumerator_5041.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5041.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 104)), var_entry_5096.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 101)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5041.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 110)), function_transformLabelMap (enumerator_5041.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 108)) ;
      }
    }
    enumerator_5041.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList&?'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (GGS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxRuleListAST enumerator_5881 (constinArgument_inRuleList) ;
  while (enumerator_5881.hasCurrentObject ()) {
    GGS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5918 = GGS_nonTerminalLabelListAST::init (inCompiler COMMA_HERE) ;
    UpEnumerator_syntaxRuleLabelListAST enumerator_6034 (enumerator_5881.current_mLabelList (HERE)) ;
    while (enumerator_6034.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5918.addAssignOperation (enumerator_6034.current_mLabelName (HERE), enumerator_6034.current_mFormalArguments (HERE), enumerator_6034.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 125)) ;
      enumerator_6034.gotoNextObject () ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element var_entry_6184 = ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5881.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!ioArgument_ioNonTerminalMapForGrammarAnalysis.readSubscript__3F_ (enumerator_5881.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_checkLabelMap_3F__3F__3F__3F_ (enumerator_5881.current_mNonterminalName (HERE).readProperty_location (), var_nonTerminalLabelListAST_5918, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5881.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 134)), var_entry_6184.readProperty_mNonterminalSymbolParametersMap (), inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 131)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5881.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 140)), function_transformLabelMap (var_nonTerminalLabelListAST_5918, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 138)) ;
      }
    }
    enumerator_5881.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                 GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                 GGS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'transformInstructionListForGrammarAnalysis?&usedTerminalMap?nonTerminalSymbolMap&addedTerminalIndex&'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (const GGS_syntaxInstructionList constinArgument_inInstructionList,
                                                                                                                                  GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                                                                  const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                                                                  GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                                                                                  GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_syntaxInstructionList enumerator_8369 (constinArgument_inInstructionList) ;
  while (enumerator_8369.hasCurrentObject ()) {
    callExtensionMethod_transformInstructionForGrammarAnalysis ((cPtr_syntaxInstructionAST *) enumerator_8369.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 175)) ;
    enumerator_8369.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList???&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList_3F__3F__3F__26__26__26_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                    const GGS_lstring constinArgument_inSyntaxComponentName,
                                                    const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                                    GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                    GGS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                                                    GGS_uint & ioArgument_ioAddedNonTerminalCount,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis var_productionRulesList_9145 = GGS_productionRuleListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_syntaxRuleListAST enumerator_9232 (constinArgument_inRuleList) ;
  while (enumerator_9232.hasCurrentObject ()) {
    GGS_uint var_nonTerminalIndex_9334 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9351 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9232.current_mNonterminalName (HERE), var_nonTerminalIndex_9334, joker_9351, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 195)) ;
    GGS_syntaxInstructionList var_parsedSyntaxInstructionList_9437 ;
    GGS_lstring joker_9487 ; // Joker input parameter
    GGS_formalParameterListAST joker_9490 ; // Joker input parameter
    GGS_location joker_9493 ; // Joker input parameter
    GGS_location joker_9525 ; // Joker input parameter
    enumerator_9232.current_mLabelList (HERE).method_first (joker_9487, joker_9490, joker_9493, var_parsedSyntaxInstructionList_9437, joker_9525, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    GGS_syntaxInstructionListForGrammarAnalysis var_instructionList_9572 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_parsedSyntaxInstructionList_9437, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9572, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 201)) ;
    }
    var_productionRulesList_9145.addAssignOperation (enumerator_9232.current_mNonterminalName (HERE), var_nonTerminalIndex_9334, var_instructionList_9572, var_productionRulesList_9145.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 213))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 209)) ;
    enumerator_9232.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssignOperation (var_productionRulesList_9145, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
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

GGS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (Compiler * inCompiler,
                                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                          const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                          const GGS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                          const GGS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                          const GGS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                          const GGS_string & in_GRAMMAR_5F_NAME,
                                                                                          const GGS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  GRAMMAR ") ;
  result.appendString (in_GRAMMAR_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_") ;
  result.appendString (in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue ()) ;
  result.appendString (" : ") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    UpEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS) ;
    while (enumerator_331.hasCurrentObject ()) {
      result.appendString ("public cParser_") ;
      result.appendString (enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue ()) ;
      enumerator_331.gotoNextObject () ;
      if (enumerator_331.hasCurrentObject ()) {
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
    }
  }
  result.appendString (" {\n") ;
  GGS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP) ;
    while (enumerator_503.hasCurrentObject ()) {
      result.appendString ("//------------------------------------- '") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("' non terminal\n//--- 'parse' label\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("_parse (") ;
      columnMarker = result.currentColumn () ;
      const GalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("String & ") ;
        result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue ()) ;
        result.appendString (",\n") ;
        result.appendSpacesUntilColumn (columnMarker) ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n//--- indexing\n  public: virtual void nt_") ;
      result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue ()) ;
      result.appendString ("_indexing (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * inCompiler) ;\n\n") ;
      GGS_uint index_1116_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1116 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE)) ;
        while (enumerator_1116.hasCurrentObject ()) {
          result.appendString ("//----------- '") ;
          result.appendString (enumerator_1116.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("' label\n  public: virtual void nt_") ;
          result.appendString (enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1116.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue ()) ;
          result.appendString (" (") ;
          columnMarker = result.currentColumn () ;
          GGS_uint index_1437_IDX (0) ;
          if (enumerator_1116.current_mFormalParametersList (HERE).isValid ()) {
            UpEnumerator_signatureForGrammarAnalysis enumerator_1437 (enumerator_1116.current_mFormalParametersList (HERE)) ;
            while (enumerator_1437.hasCurrentObject ()) {
              const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_1437.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              switch (test_1) {
              case GalgasBool::boolTrue : {
                result.appendString ("const GGS_") ;
                result.appendString (enumerator_1437.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                result.appendString (" inArgument") ;
                result.appendString (index_1437_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue ()) ;
                } break ;
              case GalgasBool::boolFalse : {
                const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1437.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                switch (test_2) {
                case GalgasBool::boolTrue : {
                  result.appendString ("GGS_") ;
                  result.appendString (enumerator_1437.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  result.appendString (" & ioArgument") ;
                  result.appendString (index_1437_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1437.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  switch (test_3) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1437.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    result.appendString (" & outArgument") ;
                    result.appendString (index_1437_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_1437.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    result.appendString (" inArgument") ;
                    result.appendString (index_1437_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                } break ;
              case GalgasBool::boolNotValid :
                break ;
              }
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              enumerator_1437.gotoNextObject () ;
              index_1437_IDX.increment () ;
            }
          }
          const GalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          switch (test_4) {
          case GalgasBool::boolTrue : {
            result.appendString ("String & ") ;
            result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue ()) ;
            result.appendString (",\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          result.appendString ("Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString (" * inCompiler) ;\n\n") ;
          const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          switch (test_5) {
          case GalgasBool::boolTrue : {
            result.appendString ("//--- Start symbol\n  public: static void _performSourceFileParsing_") ;
            result.appendString (enumerator_1116.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_6) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_lstring inFileName") ;
            GGS_uint index_2935_IDX (0) ;
            if (enumerator_1116.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_2935 (enumerator_1116.current_mFormalParametersList (HERE)) ;
              while (enumerator_2935.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_7 = GGS_bool (ComparisonKind::equal, enumerator_2935.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                switch (test_7) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_2935.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_2935_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_2935.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  switch (test_8) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_2935.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_2935_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, enumerator_2935.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    switch (test_9) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2935.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_2935_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_2935.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_2935_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolNotValid :
                      break ;
                    }
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                enumerator_2935.gotoNextObject () ;
                index_2935_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_") ;
            result.appendString (enumerator_1116.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue ()) ;
            result.appendString (" (") ;
            columnMarker = result.currentColumn () ;
            result.appendString ("Compiler * inCompiler,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const GalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            switch (test_10) {
            case GalgasBool::boolTrue : {
              result.appendString ("String & ") ;
              result.appendString (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue ()) ;
              result.appendString (",\n") ;
              result.appendSpacesUntilColumn (columnMarker) ;
              } break ;
            case GalgasBool::boolFalse : {
              } break ;
            case GalgasBool::boolNotValid :
              break ;
            }
            result.appendString ("GGS_string inSourceString,\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("GGS_string inNameString") ;
            GGS_uint index_4275_IDX (0) ;
            if (enumerator_1116.current_mFormalParametersList (HERE).isValid ()) {
              UpEnumerator_signatureForGrammarAnalysis enumerator_4275 (enumerator_1116.current_mFormalParametersList (HERE)) ;
              while (enumerator_4275.hasCurrentObject ()) {
                result.appendString (",\n") ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, enumerator_4275.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                switch (test_11) {
                case GalgasBool::boolTrue : {
                  result.appendString ("const GGS_") ;
                  result.appendString (enumerator_4275.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  result.appendString (" inArgument") ;
                  result.appendString (index_4275_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue ()) ;
                  } break ;
                case GalgasBool::boolFalse : {
                  const GalgasBool test_12 = GGS_bool (ComparisonKind::equal, enumerator_4275.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  switch (test_12) {
                  case GalgasBool::boolTrue : {
                    result.appendString ("GGS_") ;
                    result.appendString (enumerator_4275.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    result.appendString (" & ioArgument") ;
                    result.appendString (index_4275_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue ()) ;
                    } break ;
                  case GalgasBool::boolFalse : {
                    const GalgasBool test_13 = GGS_bool (ComparisonKind::equal, enumerator_4275.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    switch (test_13) {
                    case GalgasBool::boolTrue : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4275.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      result.appendString (" & outArgument") ;
                      result.appendString (index_4275_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolFalse : {
                      result.appendString ("GGS_") ;
                      result.appendString (enumerator_4275.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      result.appendString (" inArgument") ;
                      result.appendString (index_4275_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue ()) ;
                      } break ;
                    case GalgasBool::boolNotValid :
                      break ;
                    }
                    } break ;
                  case GalgasBool::boolNotValid :
                    break ;
                  }
                  } break ;
                case GalgasBool::boolNotValid :
                  break ;
                }
                enumerator_4275.gotoNextObject () ;
                index_4275_IDX.increment () ;
              }
            }
            result.appendString ("\n") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("COMMA_LOCATION_ARGS) ;\n\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            } break ;
          case GalgasBool::boolNotValid :
            break ;
          }
          enumerator_1116.gotoNextObject () ;
          index_1116_.increment () ;
        }
      }
      const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      switch (test_14) {
      case GalgasBool::boolTrue : {
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
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_503.gotoNextObject () ;
      index_503_.increment () ;
    }
  }
  GGS_uint index_5812_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_nonTerminalToAddList enumerator_5812 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST) ;
    while (enumerator_5812.hasCurrentObject ()) {
      result.appendString ("  public: virtual int32_t select_") ;
      result.appendString (enumerator_5812.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_5812.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (" (Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) ;\n") ;
      enumerator_5812.gotoNextObject () ;
      if (enumerator_5812.hasCurrentObject ()) {
        result.appendString ("\n") ;
      }
      index_5812_.increment () ;
    }
  }
  result.appendString ("} ;\n\n//--------------------------------------------------------------------------------------------------\n") ;
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
  GGS_lstring var_usefulnessName_2720 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 60)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2720, var_usefulnessName_2720, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 61)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_2720  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 62)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_2931 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_3035 (constinArgument_inPrologueList) ;
  while (enumerator_3035.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_3535 ;
    {
    GGS_formalParameterListForGeneration joker_3583 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_2720, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), enumerator_3035.current_mInstructionList (HERE), enumerator_3035.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_3535, joker_3583, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 66)) ;
    }
    var_semanticInstructionListForGeneration_2931.addAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3535, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 79)) ;
    enumerator_3035.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2931, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 83)) ;
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
  GGS_uint var_ruleIndex_4705 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_programRuleList enumerator_4824 (constinArgument_inProgramRules) ;
  while (enumerator_4824.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4876 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4824.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 110)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4876, var_usefulnessName_4876, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 111)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_4876  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 112)) ;
    GGS_formalParameterListAST temp_0 = GGS_formalParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 114)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas", 114)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas", 114)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 114)), inCompiler COMMA_HERE), enumerator_4824.current_mSourceFileVariableName (HERE), enumerator_4824.current_mSourceFileVariableNameIsUnused (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 114)) ;
    GGS_formalParameterListAST var_argumentList_5102 = temp_0 ;
    GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_5635 ;
    GGS_formalParameterListForGeneration var_routineSignature_5683 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_4876, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_5102, GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), enumerator_4824.current_mInstructionList (HERE), enumerator_4824.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_5635, var_routineSignature_5683, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 116)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4705.getter_string (SOURCE_FILE ("programComponentCompilation.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 133)), var_routineSignature_5683, GGS_bool (true), var_semanticInstructionListForGeneration_5635, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 129)) ;
    var_ruleIndex_4705.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 138)) ;
    enumerator_4824.gotoNextObject () ;
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
  GGS_lstring var_usefulnessName_6704 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 156)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6704, var_usefulnessName_6704, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 157)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_6704  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 158)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6951 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_7018 (constinArgument_inEpilogueList) ;
  while (enumerator_7018.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_7570 ;
    {
    GGS_formalParameterListForGeneration joker_7618 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F_nonMutablePropertyList_3F_mutablePropertyList_3F__3F__21__21_ (var_usefulnessName_6704, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_typedPropertyList::init (inCompiler COMMA_HERE), enumerator_7018.current_mInstructionList (HERE), enumerator_7018.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_7570, joker_7618, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 162)) ;
    }
    var_semanticInstructionListForGeneration_6951.addAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_7570, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 176)) ;
    enumerator_7018.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6951, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 179)) ;
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
  GGS_analysisContext var_analysisContext_8858 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 209)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas", 211)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_HERE) ;
  GGS_programListForGeneration var_decoratedDeclarationListForGeneration_9219 = GGS_programListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8858, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_9219, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 217)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8858, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_9219, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 226)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8858, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_9219, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 235)) ;
  }
  GGS_stringset var_inclusionSet_9968 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9993 = GGS_string::makeEmptyString () ;
  UpEnumerator_programListForGeneration enumerator_10028 (var_decoratedDeclarationListForGeneration_9219) ;
  while (enumerator_10028.hasCurrentObject ()) {
    var_beforeAfterRulesString_9993.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_10028.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 247)) ;
    GGS_string var_code_10249 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_10028.current_mDeclaration (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9968, var_code_10249, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 248)) ;
    var_beforeAfterRulesString_9993.plusAssignOperation(var_code_10249, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 249)) ;
    enumerator_10028.gotoNextObject () ;
  }
  UpEnumerator_programRuleList enumerator_10331 (constinArgument_inProgramRules) ;
  while (enumerator_10331.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_10331.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9968.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_10331.current_mReferenceGrammar (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 253))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 253)) ;
      }
    }
    enumerator_10331.gotoNextObject () ;
  }
  GGS_string var_cppContents_10497 = GGS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GGS_string ("program"), GGS_stringlist::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9993, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 256))) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_bool (false), GGS_string ("program"), var_inclusionSet_9968, var_cppContents_10497, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject??galgas4?'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject_3F__3F_galgas_34__3F_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                                           const GGS_bool constinArgument_inGalgas_34_,
                                                           const GGS_string constinArgument_inSourceToAnalyze,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 163)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Parsing project files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 164)) ;
      }
    }
  }
  GGS_galgas_33_ProjectComponentAST var_projectComponentAST_6736 ;
  var_projectComponentAST_6736.drop () ;
  cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFile, var_projectComponentAST_6736  COMMA_SOURCE_FILE ("galgasProgram.galgas", 166)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      routine_compileProject_3F__3F__3F_galgas_34__3F_ (constinArgument_inProjectSourceFile, constinArgument_inSourceToAnalyze, constinArgument_inGalgas_34_, var_projectComponentAST_6736, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 168)) ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 170)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_string var_cppCompilationTarget_6986 = GGS_string (gOption_galgas_5F_cli_5F_options_cppCompile.readProperty_value ()) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::notEqual, var_cppCompilationTarget_6986.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 173)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  routine_println_3F_ (GGS_string ("*** Perform C++ compilation"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 174)) ;
                  }
                }
              }
              GGS_string var_buildFile_7213 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (var_cppCompilationTarget_6986, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_buildFile_7213.getter_fileExists (SOURCE_FILE ("galgasProgram.galgas", 177)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  GGS_sint var_resultCode_7377 = GGS_string ("python ").add_operation (var_buildFile_7213, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 178)).getter_system (SOURCE_FILE ("galgasProgram.galgas", 178)) ;
                  GalgasBool test_6 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_6) {
                    test_6 = GGS_bool (ComparisonKind::notEqual, var_resultCode_7377.objectCompare (GGS_sint (int32_t (0L)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_6) {
                      GenericArray <FixItDescription> fixItArray7 ;
                      inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 180)).readProperty_location (), GGS_string ("Running '").add_operation (var_buildFile_7213, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)).add_operation (GGS_string ("' returns "), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)).add_operation (var_resultCode_7377.getter_string (SOURCE_FILE ("galgasProgram.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)), fixItArray7  COMMA_SOURCE_FILE ("galgasProgram.galgas", 180)) ;
                    }
                  }
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 183)).readProperty_location (), GGS_string ("Cannot perform C++ compilation of '").add_operation (var_cppCompilationTarget_6986, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)).add_operation (GGS_string ("' : the '"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)).add_operation (var_buildFile_7213, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 184)).add_operation (GGS_string ("' file does not exist"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 184)), fixItArray8  COMMA_SOURCE_FILE ("galgasProgram.galgas", 183)) ;
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

void routine_compileProject_3F__3F__3F_galgas_34__3F_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                                       const GGS_string constinArgument_inSourceToAnalyze,
                                                       const GGS_bool constinArgument_inGalgas_34_,
                                                       const GGS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasDeclarationAST var_declarationAST_8156 = GGS_galgasDeclarationAST::init (inCompiler COMMA_HERE) ;
  cGrammar_galgas_34_Grammar::_performSourceStringParsing_ (inCompiler, GGS_filewrapper (gWrapperDirectory_0_typeGenerationTemplate).getter_textFileContentsAtPath (GGS_string ("galgas-predefined-types.ggs"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 200)), GGS_string ("GALGAS predefined types"), var_declarationAST_8156  COMMA_SOURCE_FILE ("galgasProgram.galgas", 199)) ;
  UpEnumerator_lstringlist enumerator_8421 (constinArgument_inProjectComponentAST.readProperty_mProjectSourceList ()) ;
  while (enumerator_8421.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_8421.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 204)).objectCompare (GGS_string ("galgas"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteSourcePath_8533 = enumerator_8421.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 205)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 205)) ;
        cGrammar_galgas_33_Grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteSourcePath_8533, enumerator_8421.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), var_declarationAST_8156  COMMA_SOURCE_FILE ("galgasProgram.galgas", 206)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_8421.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 207)).objectCompare (GGS_string ("ggs"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteSourcePath_8797 = enumerator_8421.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 208)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 208)) ;
          cGrammar_galgas_34_Grammar::_performSourceFileParsing_ (inCompiler, GGS_lstring::init_21__21_ (var_absoluteSourcePath_8797, enumerator_8421.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE), var_declarationAST_8156  COMMA_SOURCE_FILE ("galgasProgram.galgas", 209)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_8421.current_mValue (HERE).readProperty_location (), GGS_string ("only \".galgas\" or \".ggs\" extensions are allowed here"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 211)) ;
      }
    }
    enumerator_8421.gotoNextObject () ;
  }
  GGS_stringlist var_handCodedLinkToolFileList_9184 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_handCodedLinkAppFileList_9234 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_handCodedSourceAppFileList_9283 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_handCodedSourceToolFileList_9334 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkToolFileList_9386 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_handCodedSourceDirectorySet_9431 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgas_33_QualifiedFeatureList enumerator_9484 (constinArgument_inProjectComponentAST.readProperty_mQualifiedFeatureList ()) ;
  while (enumerator_9484.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("tool-source").objectCompare (enumerator_9484.current_mFeatureName (HERE).readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_handCodedSourceToolFileList_9334.addAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 223)) ;
        GGS_string var_directory_9657 = enumerator_9484.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 224)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_directory_9657.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (GGS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 226)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::notEqual, var_directory_9657.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 227)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (GGS_string ("../").add_operation (var_directory_9657, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 228))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 228)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (var_directory_9657  COMMA_SOURCE_FILE ("galgasProgram.galgas", 230)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("tool-include"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 233)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("tool-framework"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            var_frameworkToolFileList_9386.addAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 235))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 235)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("app-source"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_handCodedSourceAppFileList_9283.addAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 237)) ;
              GGS_string var_directory_10318 = enumerator_9484.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 238)) ;
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, var_directory_10318.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (GGS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 240)) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_10 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_10) {
                  test_10 = GGS_bool (ComparisonKind::notEqual, var_directory_10318.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 241)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_10) {
                    var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (GGS_string ("../").add_operation (var_directory_10318, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 242))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 242)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_10) {
                  var_handCodedSourceDirectorySet_9431.plusPlusAssignOperation (var_directory_10318  COMMA_SOURCE_FILE ("galgasProgram.galgas", 244)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("tool-link"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_handCodedLinkToolFileList_9184.addAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 247)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("app-link"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  var_handCodedLinkAppFileList_9234.addAssignOperation (enumerator_9484.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 249)) ;
                }
              }
              if (GalgasBool::boolFalse == test_12) {
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("libpmAtPath"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("applicationBundleBase"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                    }
                  }
                  if (GalgasBool::boolFalse == test_14) {
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("macCodeSign"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                      }
                    }
                    if (GalgasBool::boolFalse == test_15) {
                      GalgasBool test_16 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_16) {
                        test_16 = GGS_bool (ComparisonKind::equal, enumerator_9484.current_mFeatureName (HERE).readProperty_string ().objectCompare (GGS_string ("MacOSDeployment"))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_16) {
                        }
                      }
                      if (GalgasBool::boolFalse == test_16) {
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (enumerator_9484.current_mFeatureName (HERE).readProperty_location (), GGS_string ("unknown feature"), fixItArray17  COMMA_SOURCE_FILE ("galgasProgram.galgas", 255)) ;
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
    enumerator_9484.gotoNextObject () ;
  }
  {
  routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (var_declarationAST_8156.readProperty_mSyntaxComponentList (), var_declarationAST_8156.readProperty_mSyntaxExtensions (), var_declarationAST_8156.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 268)) ;
  }
  GGS_usefulEntitiesGraph var_usefulEntitiesGraph_12060 = GGS_usefulEntitiesGraph::init (inCompiler COMMA_HERE) ;
  GGS_string var_buildDirectoryName_12120 ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = constinArgument_inGalgas_34_.boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      var_buildDirectoryName_12120 = constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 277)).getter_stringByReplacingStringByString (GGS_string ("."), GGS_string ("+"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 277)).add_operation (GGS_string ("+BUILD"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 277)) ;
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    var_buildDirectoryName_12120 = GGS_string ("build") ;
  }
  GGS_string var_absoluteBuildDirectory_12331 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 281)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 281)).add_operation (var_buildDirectoryName_12120, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 281)) ;
  GGS_string var_productDirectory_12445 = var_absoluteBuildDirectory_12331.add_operation (GGS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 282)) ;
  GGS_stringlist var_appProductFileList_12517 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_semanticContext var_semanticContext_12565 ;
  GGS_unifiedTypeMap var_typeMap_12603 ;
  GGS_semanticDeclarationListForGeneration var_semanticDeclarationSortedListForGeneration_12655 ;
  GGS_lstringlist var_usefulnessRootEntities_12717 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 288)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      routine_compileSemanticDeclarationsGalgas_26__26__3F_galgas_34__3F__3F__3F__21__21__21_ (var_usefulnessRootEntities_12717, var_usefulEntitiesGraph_12060, constinArgument_inGalgas_34_, var_productDirectory_12445, constinArgument_inProjectComponentAST.readProperty_mEndOfSourceFile (), var_declarationAST_8156, var_semanticContext_12565, var_typeMap_12603, var_semanticDeclarationSortedListForGeneration_12655, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 289)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    var_semanticDeclarationSortedListForGeneration_12655 = GGS_semanticDeclarationListForGeneration::init (inCompiler COMMA_HERE) ;
    var_semanticContext_12565 = GGS_semanticContext::init_21_galgas_34_ (constinArgument_inGalgas_34_, inCompiler COMMA_HERE) ;
    var_typeMap_12603 = GGS_unifiedTypeMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_optionComponentMapForGeneration var_optionComponentMapForGeneration_13332 ;
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 307)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (var_declarationAST_8156.readProperty_mGUIComponentList (), var_semanticContext_12565, var_optionComponentMapForGeneration_13332, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 308)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_20) {
    var_optionComponentMapForGeneration_13332 = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 317)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string var_projectVersionString_13707 = constinArgument_inProjectComponentAST.readProperty_mMajorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 318)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 318)).add_operation (constinArgument_inProjectComponentAST.readProperty_mMinorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 319)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 319)).add_operation (constinArgument_inProjectComponentAST.readProperty_mRevisionVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 320)) ;
      GGS_programComponentForGeneration var_programComponentForGeneration_14236 ;
      {
      routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (var_usefulnessRootEntities_12717, var_usefulEntitiesGraph_12060, var_declarationAST_8156.readProperty_mPrologueDeclarationList (), var_declarationAST_8156.readProperty_mSourceRuleList (), var_declarationAST_8156.readProperty_mEpilogueDeclarationList (), var_semanticContext_12565, var_typeMap_12603, var_projectVersionString_13707, var_programComponentForGeneration_14236, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 321)) ;
      }
      var_semanticDeclarationSortedListForGeneration_12655.addAssignOperation (GGS_string ("zprogram"), var_programComponentForGeneration_14236  COMMA_SOURCE_FILE ("galgasProgram.galgas", 332)) ;
    }
  }
  {
  routine_checkUsefulEntities_3F__3F__3F_ (var_usefulEntitiesGraph_12060, var_usefulnessRootEntities_12717, var_productDirectory_12445, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 335)) ;
  }
  GGS_string var_typeDumpFilePath_14629 = var_productDirectory_12445.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 337)).add_operation (constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 337)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 337)) ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = GGS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      GGS_stringset var_firstLetterSet_14820 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      UpEnumerator_unifiedTypeMap enumerator_14855 (var_typeMap_12603) ;
      while (enumerator_14855.hasCurrentObject ()) {
        var_firstLetterSet_14820.plusPlusAssignOperation (enumerator_14855.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 341)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 341))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 341)) ;
        enumerator_14855.gotoNextObject () ;
      }
      GGS_string var_tableOfTypeString_14963 = GGS_string::makeEmptyString () ;
      GGS_char var_currentFirstLetter_15000 = GGS_char (utf32 (32)) ;
      UpEnumerator_unifiedTypeMap enumerator_15044 (var_typeMap_12603) ;
      while (enumerator_15044.hasCurrentObject ()) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, var_currentFirstLetter_15000.objectCompare (enumerator_15044.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 346)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            var_currentFirstLetter_15000 = enumerator_15044.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 347)) ;
            var_tableOfTypeString_14963.plusAssignOperation(GGS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_15000.getter_uint (SOURCE_FILE ("galgasProgram.galgas", 348)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 348)) ;
            var_tableOfTypeString_14963.plusAssignOperation(GGS_string ("\"><b>").add_operation (var_currentFirstLetter_15000.getter_string (SOURCE_FILE ("galgasProgram.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 349)).add_operation (GGS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 349)) ;
          }
        }
        var_tableOfTypeString_14963.plusAssignOperation(function_linkForType (enumerator_15044.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)).add_operation (GGS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)) ;
        enumerator_15044.gotoNextObject () ;
      }
      GGS_string var_typeDumpString_15448 = GGS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 354)), var_typeMap_12603, var_firstLetterSet_14820, var_tableOfTypeString_14963 COMMA_SOURCE_FILE ("galgasProgram.galgas", 353))) ;
      GGS_bool joker_15700 ; // Joker input parameter
      var_typeDumpString_15448.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_14629, joker_15700, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 359)) ;
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    {
    GGS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_14629, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 361)) ;
    }
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 364)))).operator_and (GGS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 364)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (var_typeMap_12603, var_declarationAST_8156.readProperty_mDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 365)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint (uint32_t (0U)).objectCompare (GGS_uint::class_func_errorCount (SOURCE_FILE ("galgasProgram.galgas", 371)))).operator_and (GGS_bool (ComparisonKind::equal, constinArgument_inSourceToAnalyze.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 371)).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_projectGeneration_3F__3F_absoluteBuildDir_3F_buildDirName_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F_ (var_typeMap_12603, var_absoluteBuildDirectory_12331, var_buildDirectoryName_12120, var_optionComponentMapForGeneration_13332, var_appProductFileList_12517, var_semanticDeclarationSortedListForGeneration_12655, var_declarationAST_8156.readProperty_mSourceRuleList (), constinArgument_inProjectComponentAST, constinArgument_inProjectSourceFile.readProperty_string (), var_handCodedSourceDirectorySet_9431, var_handCodedSourceToolFileList_9334, var_frameworkToolFileList_9386, var_handCodedSourceAppFileList_9283, var_handCodedLinkAppFileList_9234, var_handCodedLinkToolFileList_9184, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 372)) ;
      }
    }
  }
}


