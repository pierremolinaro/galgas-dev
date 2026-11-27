#include "all-declarations-21.h"

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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 871)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 872)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_39587 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 874)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 874)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 874)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 874)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 874)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 874)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_39732 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 875)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_39732, var_cppName_39587, var_cppName_39587, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 876)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_39908 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_39908.objectCompare (var_type_39732)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 880)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 880)).add_operation (extensionGetter_identifierRepresentation (var_type_39732, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 880)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 880)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 880)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_39908, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 881)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 881)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 881)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 879)) ;
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
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 894)) ;
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
  GGS_string var_cppName_41562 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 914)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 914)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 914)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 914)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 914)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 914)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_41562.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 915)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 915)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 915)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 915)) ;
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
  GGS_string var_cppName_42150 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 925)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 925)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 925)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 925)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 925)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 925)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_42150, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)) ;
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
  GGS_string var_cppName_42743 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 936)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 936)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 936)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 936)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 936)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 936)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_42743, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 937)) ;
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
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 960)) ;
  }
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_43918 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_43918.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_43918.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 963)) ;
    enumerator_43918.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 980)) ;
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
  GGS_localVarManager var_variableMap_45467 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_45467, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1009)) ;
  }
  outArgument_outSignature = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_45801 (outArgument_outSignatureForGeneration) ;
  while (enumerator_45801.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_45801.current (HERE).readProperty_mFormalSelector (), enumerator_45801.current (HERE).readProperty_mFormalArgumentType (), enumerator_45801.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_45801.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1019)) ;
    enumerator_45801.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_46121 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_46121.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_46121.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_45467, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1024)) ;
    enumerator_46121.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_45467, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1041)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GGS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                                                                        const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                                                                        const GGS_string constinArgument_inSyntaxComponentName,
                                                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                        const GGS_bool constinArgument_inHasIndexing,
                                                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GGS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GGS_nonterminalMap var_nonterminalMap_47698 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_47698, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1067)) ;
  }
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_47786 (constinArgument_inRuleList) ;
  while (enumerator_47786.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_47829 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_47879 (enumerator_47786.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_47879.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_47935 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_48009 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_48052 (enumerator_47879.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_48052.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_48084 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_48052.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1080)) ;
        var_signatureForGeneration_47935.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_48052.current (HERE).readProperty_mFormalSelector (), enumerator_48052.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_48084, enumerator_48052.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_48052.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1086)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1081)) ;
        var_signature_48009.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_48052.current (HERE).readProperty_mFormalSelector (), var_type_48084, enumerator_48052.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_48052.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1087)) ;
        enumerator_48052.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_47829.setter_insertKey (enumerator_47879.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_47935, var_signature_48009, enumerator_47879.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1089)) ;
      }
      enumerator_47879.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_47786.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_47829, var_nonterminalMap_47698, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1091)) ;
    }
    enumerator_47786.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_48788 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1098)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_selectMethodCount_49009 = GGS_u_33__32_ (uint32_t (0U)) ;
  GGS__5B_ruleDeclarationAST_5D_ var_ruleDeclarationList_49059 = GGS__5B_ruleDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_newRuleIndex_49096 = GGS_u_33__32_ (uint32_t (0U)) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_49128 (constinArgument_inRuleList) ;
  while (enumerator_49128.hasCurrentObject ()) {
    GGS__5B_ruleLabelImplementationAST_5D_ var_ruleLabelImplementationList_49188 = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_HERE) ;
    GGS_u_33__32_ var_localSelectMethodCount_49235 = var_selectMethodCount_49009 ;
    GGS_nonterminalLabelMap joker_49332 ; // Joker input parameter
    var_nonterminalMap_47698.method_searchKey (enumerator_49128.current (HERE).readProperty_mNonterminalName (), joker_49332, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1109)) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_49360 (enumerator_49128.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_49360.hasCurrentObject ()) {
      var_localSelectMethodCount_49235 = var_selectMethodCount_49009 ;
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_49917 ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_49954 ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionListForGeneration_49978 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_49360.current (HERE).readProperty_mFormalArguments (), enumerator_49360.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_48788, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1121)), var_nonterminalMap_47698, constinArgument_inSyntaxComponentName, enumerator_49360.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_49235, var_signatureForGeneration_49917, var_signature_49954, var_instructionListForGeneration_49978, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1112)) ;
      }
      var_ruleLabelImplementationList_49188.plusPlusAssignOperation (GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (enumerator_49360.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_49917, var_signature_49954, enumerator_49360.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_49978, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1131)) ;
      enumerator_49360.gotoNextObject () ;
    }
    var_selectMethodCount_49009 = var_localSelectMethodCount_49235 ;
    GGS_nonterminalLabelMap joker_50320 ; // Joker input parameter
    var_nonterminalMap_47698.method_searchKey (enumerator_49128.current (HERE).readProperty_mNonterminalName (), joker_50320, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1139)) ;
    var_ruleDeclarationList_49059.plusPlusAssignOperation (GGS_ruleDeclarationAST::init_21__21__21_ (enumerator_49128.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_49096, var_ruleLabelImplementationList_49188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1140)) ;
    var_newRuleIndex_49096.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1144)) ;
    enumerator_49128.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_47698, var_ruleDeclarationList_49059, var_selectMethodCount_49009, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionSetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_6677 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 155)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_6762 (var_descendantClasses_6677) ;
  while (enumerator_6762.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_6800 = extensionGetter_definition (enumerator_6762.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 157)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_6867 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_6800.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 158)) ;
    GGS_bool var_found_6976 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7007 (var_overridingMethods_6867) ;
    bool bool_0 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 160)).isValidAndTrue () ;
    if (enumerator_7007.hasCurrentObject () && bool_0) {
      while (enumerator_7007.hasCurrentObject () && bool_0) {
        var_found_6976 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7007.current (HERE).readProperty_string ())) ;
        enumerator_7007.gotoNextObject () ;
        if (enumerator_7007.hasCurrentObject ()) {
          bool_0 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 160)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_6976.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 163)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_6762.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 164)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 164)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_6800.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 165)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 175)).add_operation (var_descendantClassName_6800.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 174)) ;
        }
      }
    }
    enumerator_6762.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionMethodName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_8268 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 192)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_8353 (var_descendantClasses_8268) ;
  while (enumerator_8353.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_8391 = extensionGetter_definition (enumerator_8353.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 194)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_8458 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_8391.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 195)) ;
    GGS_bool var_found_8567 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_8600 (var_overridingMethods_8458) ;
    bool bool_0 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 197)).isValidAndTrue () ;
    if (enumerator_8600.hasCurrentObject () && bool_0) {
      while (enumerator_8600.hasCurrentObject () && bool_0) {
        var_found_8567 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_8600.current (HERE).readProperty_string ())) ;
        enumerator_8600.gotoNextObject () ;
        if (enumerator_8600.hasCurrentObject ()) {
          bool_0 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 197)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_8567.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 200)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_8353.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 201)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 201)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_8391.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 202)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 212)).add_operation (var_descendantClassName_8391.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 211)) ;
        }
      }
    }
    enumerator_8353.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionGetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionGetterListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_9863 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 229)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_9952 (var_descendantClasses_9863) ;
  while (enumerator_9952.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_9990 = extensionGetter_definition (enumerator_9952.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 231)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingReaders_10061 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_9990.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 232)) ;
    GGS_bool var_found_10170 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_10206 (var_overridingReaders_10061) ;
    bool bool_0 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 234)).isValidAndTrue () ;
    if (enumerator_10206.hasCurrentObject () && bool_0) {
      while (enumerator_10206.hasCurrentObject () && bool_0) {
        var_found_10170 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10206.current (HERE).readProperty_string ())) ;
        enumerator_10206.gotoNextObject () ;
        if (enumerator_10206.hasCurrentObject ()) {
          bool_0 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 234)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10170.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_9952.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 238)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 238)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9990.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 239)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 249)).add_operation (var_descendantClassName_9990.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 248)) ;
        }
      }
    }
    enumerator_9952.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS__5B_semanticDeclarationAST_5D_ constinArgument_inSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 261)) ;
      }
    }
  }
  GGS_descendantClassListMap var_descendantClassListMap_11513 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_11556 (ioArgument_ioTypeMap) ;
  while (enumerator_11556.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_11578 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_11556.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 267)).readProperty_superType () ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_superType_11578.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 268)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 268)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_11513, extensionGetter_definition (var_superType_11578, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 270)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11556.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 271)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 269)) ;
        }
      }
    }
    enumerator_11556.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_11898 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_11972 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12038 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12114 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12198 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_12272 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_12338 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_12414 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_12498 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_12572 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_12638 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_12714 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_12782 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_12782.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_12782.current (HERE).ptr (), var_abstractExtensionSetterListMap_12498, var_extensionSetterListMap_12572, var_overridingExtensionSetterListMap_12638, var_overridingAbstractExtensionSetterListMap_12714, var_abstractExtensionMethodListMap_11898, var_extensionMethodListMap_11972, var_overridingExtensionMethodListMap_12038, var_overridingAbstractExtensionMethodListMap_12114, var_abstractExtensionGetterListMap_12198, var_extensionReaderListMap_12272, var_overridingExtensionGetterListMap_12338, var_overridingAbstractExtensionGetterListMap_12414, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 289)) ;
    enumerator_12782.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 305)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13512 (var_abstractExtensionSetterListMap_12498.readProperty_dictionary ()) ;
      while (enumerator_13512.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13620 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_13664 (enumerator_13512.current_value (HERE)) ;
        while (enumerator_13664.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13620.setter_insertKey (enumerator_13664.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 310)) ;
          }
          enumerator_13664.gotoNextObject () ;
        }
        enumerator_13512.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13833 (var_extensionSetterListMap_12572.readProperty_dictionary ()) ;
      while (enumerator_13833.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13933 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_13977 (enumerator_13833.current_value (HERE)) ;
        while (enumerator_13977.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13933.setter_insertKey (enumerator_13977.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 317)) ;
          }
          enumerator_13977.gotoNextObject () ;
        }
        enumerator_13833.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14152 (var_overridingExtensionSetterListMap_12638.readProperty_dictionary ()) ;
      while (enumerator_14152.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14262 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14306 (enumerator_14152.current_value (HERE)) ;
        while (enumerator_14306.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14262.setter_insertKey (enumerator_14306.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 324)) ;
          }
          enumerator_14306.gotoNextObject () ;
        }
        enumerator_14152.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14490 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_14490.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14608 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14652 (enumerator_14490.current_value (HERE)) ;
        while (enumerator_14652.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14608.setter_insertKey (enumerator_14652.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 331)) ;
          }
          enumerator_14652.gotoNextObject () ;
        }
        enumerator_14490.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14880 (var_abstractExtensionSetterListMap_12498.readProperty_dictionary ()) ;
      while (enumerator_14880.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_14957 (enumerator_14880.current_value (HERE)) ;
        while (enumerator_14957.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_14880.current_key (HERE), enumerator_14880.current_key (HERE), enumerator_14957.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionSetterListMap_12638, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 337)) ;
          }
          enumerator_14957.gotoNextObject () ;
        }
        enumerator_14880.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15351 (var_overridingAbstractExtensionSetterListMap_12714.readProperty_dictionary ()) ;
      while (enumerator_15351.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15440 (enumerator_15351.current_value (HERE)) ;
        while (enumerator_15440.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15351.current_key (HERE), enumerator_15351.current_key (HERE), enumerator_15440.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionSetterListMap_12638, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 350)) ;
          }
          enumerator_15440.gotoNextObject () ;
        }
        enumerator_15351.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15761 (var_abstractExtensionMethodListMap_11898.readProperty_dictionary ()) ;
      while (enumerator_15761.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_15867 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_15911 (enumerator_15761.current_value (HERE)) ;
        while (enumerator_15911.hasCurrentObject ()) {
          {
          var_extensionMethodMap_15867.setter_insertKey (enumerator_15911.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 364)) ;
          }
          enumerator_15911.gotoNextObject () ;
        }
        enumerator_15761.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16069 (var_extensionMethodListMap_11972.readProperty_dictionary ()) ;
      while (enumerator_16069.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16167 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16211 (enumerator_16069.current_value (HERE)) ;
        while (enumerator_16211.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16167.setter_insertKey (enumerator_16211.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 371)) ;
          }
          enumerator_16211.gotoNextObject () ;
        }
        enumerator_16069.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16375 (var_overridingExtensionMethodListMap_12038.readProperty_dictionary ()) ;
      while (enumerator_16375.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16483 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16527 (enumerator_16375.current_value (HERE)) ;
        while (enumerator_16527.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16483.setter_insertKey (enumerator_16527.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 378)) ;
          }
          enumerator_16527.gotoNextObject () ;
        }
        enumerator_16375.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16700 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_16700.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16816 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16860 (enumerator_16700.current_value (HERE)) ;
        while (enumerator_16860.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16816.setter_insertKey (enumerator_16860.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 385)) ;
          }
          enumerator_16860.gotoNextObject () ;
        }
        enumerator_16700.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17068 (var_abstractExtensionMethodListMap_11898.readProperty_dictionary ()) ;
      while (enumerator_17068.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17145 (enumerator_17068.current_value (HERE)) ;
        while (enumerator_17145.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17068.current_key (HERE), enumerator_17068.current_key (HERE), enumerator_17145.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionMethodListMap_12038, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 391)) ;
          }
          enumerator_17145.gotoNextObject () ;
        }
        enumerator_17068.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17510 (var_overridingAbstractExtensionMethodListMap_12114.readProperty_dictionary ()) ;
      while (enumerator_17510.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17597 (enumerator_17510.current_value (HERE)) ;
        while (enumerator_17597.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17510.current_key (HERE), enumerator_17510.current_key (HERE), enumerator_17597.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionMethodListMap_12038, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 404)) ;
          }
          enumerator_17597.gotoNextObject () ;
        }
        enumerator_17510.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18065 (var_abstractExtensionGetterListMap_12198.readProperty_dictionary ()) ;
      while (enumerator_18065.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18173 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18217 (enumerator_18065.current_value (HERE)) ;
        while (enumerator_18217.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18173.setter_insertKey (enumerator_18217.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 420)) ;
          }
          enumerator_18217.gotoNextObject () ;
        }
        enumerator_18065.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18377 (var_extensionReaderListMap_12272.readProperty_dictionary ()) ;
      while (enumerator_18377.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18477 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18521 (enumerator_18377.current_value (HERE)) ;
        while (enumerator_18521.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18477.setter_insertKey (enumerator_18521.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 427)) ;
          }
          enumerator_18521.gotoNextObject () ;
        }
        enumerator_18377.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18687 (var_overridingExtensionGetterListMap_12338.readProperty_dictionary ()) ;
      while (enumerator_18687.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18797 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18841 (enumerator_18687.current_value (HERE)) ;
        while (enumerator_18841.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18797.setter_insertKey (enumerator_18841.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 434)) ;
          }
          enumerator_18841.gotoNextObject () ;
        }
        enumerator_18687.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19026 (var_abstractExtensionGetterListMap_12198.readProperty_dictionary ()) ;
      while (enumerator_19026.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19105 (enumerator_19026.current_value (HERE)) ;
        while (enumerator_19105.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19026.current_key (HERE), enumerator_19026.current_key (HERE), enumerator_19105.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionGetterListMap_12338, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 440)) ;
          }
          enumerator_19105.gotoNextObject () ;
        }
        enumerator_19026.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19447 (var_overridingAbstractExtensionGetterListMap_12414.readProperty_dictionary ()) ;
      while (enumerator_19447.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19536 (enumerator_19447.current_value (HERE)) ;
        while (enumerator_19536.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19447.current_key (HERE), enumerator_19447.current_key (HERE), enumerator_19536.current (HERE), var_descendantClassListMap_11513, var_overridingExtensionGetterListMap_12338, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 453)) ;
          }
          enumerator_19536.gotoNextObject () ;
        }
        enumerator_19447.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                              GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 35)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_1854 (constinArgument_inInstructionList) ;
  while (enumerator_1854.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1854.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 37)) ;
    enumerator_1854.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 217)).readProperty_headerFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 229)).readProperty_isPredefined () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 235)).readProperty_headerKind () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_implementationCppFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_generateHeader () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 264)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "execution-mode.h"
#include "filewrapper-utilities.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas4",
  "galgasTemplate",
  "galgas4project",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS4 project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1418 = GGS_buildOptionValue::class_func_create_5F_project (SOURCE_FILE ("galgasProgram.galgas4", 26)) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_buildOptionValue::class_func_printPredefinedLexicalActions (SOURCE_FILE ("galgasProgram.galgas4", 33)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 41)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 42)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_buildOptionValue::class_func_check_5F_big_5F_int (SOURCE_FILE ("galgasProgram.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_buildOptionValue::class_func_displayUnicodeLexicalTestFunctions (SOURCE_FILE ("galgasProgram.galgas4", 61)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 62)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_2943 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)) ;
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("galgas4project")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GGS__5B_string_5D_ var_candidateProjectFiles_3039 = var_parentDirectory_2943.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 78)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 80)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3320 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator__5B_string_5D_ enumerator_3398 (var_candidateProjectFiles_3039) ;
        while (enumerator_3398.hasCurrentObject ()) {
          var_s_3320.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3398.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)) ;
          enumerator_3398.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3320, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 85)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3501 = var_parentDirectory_2943.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)).add_operation (var_candidateProjectFiles_3039.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3501, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 88)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionAST_5D_ joker_4063 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_4063  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 102)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_ (constinArgument_inProjectSourceFile, GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = !gBuildOption_quiet.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas4") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4project") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_projectComponentGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gBuildOption_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value () != "") {
        commonCompiler->writeIssueJSONFile (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value ()) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".") ;
        ggs_printMessageLn (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

