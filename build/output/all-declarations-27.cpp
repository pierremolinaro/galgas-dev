#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

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
  GALGAS_lstring var_grammarUsefulnessName_19770 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 452)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_19770 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 453)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_20100 ;
  GALGAS_bool var_hasTranslateFeature_20138 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_20120 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_20100, joker_20120, var_hasTranslateFeature_20138, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 455)) ;
  GALGAS_formalParameterSignature var_labelSignature_20265 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_20100.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_20265, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 462)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_20713 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)), var_labelSignature_20265, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_20713, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_21040 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 484)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_21040, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_21040.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_21040.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_21686 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 500)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_21686, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 497)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_21686.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_21040.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_22098 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)) ;
  GALGAS_stringlist var_assignementList_22239 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 514)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_20138, var_syntaxDirectedTranslationResultVarName_22098, var_assignementList_22239, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 515)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_21040, var_nameExpression_21686, var_actualParameterListForGeneration_20713, var_hasTranslateFeature_20138, var_assignementList_22239, var_syntaxDirectedTranslationResultVarName_22098  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 524))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 524)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 561))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 561)) ;
  GALGAS_string var_sourceVar_24415 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_24415, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 563)) ;
  GALGAS_stringlist var_parameterCppNameList_24457 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 571)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_24503 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 572)) ;
  GALGAS_stringlist var_inputVariableList_24557 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 573)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_24601 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_24601.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24910 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_24601.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_24503, var_inputVariableList_24557, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24910, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575)) ;
    var_parameterCppNameList_24457.addAssign_operation (var_parameterCppName_24910  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_24601.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24910.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)) ;
      }
    }
    enumerator_24601.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 596)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 595)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 595)).add_operation (var_sourceVar_24415, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)) ;
  cEnumerator_stringlist enumerator_25701 (var_parameterCppNameList_24457, kENUMERATION_UP) ;
  while (enumerator_25701.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25701.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)) ;
    enumerator_25701.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 602)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 602)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_25949 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25949.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25949.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 604)) ;
    enumerator_25949.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 632))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 632)) ;
  GALGAS_string var_sourceVar_27605 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27605, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 634)) ;
  GALGAS_string var_nameVar_27825 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_27825, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 642)) ;
  GALGAS_stringlist var_parameterCppNameList_27865 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 650)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_27911 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 651)) ;
  GALGAS_stringlist var_inputVariableList_27965 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 652)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_28009 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_28009.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_28325 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_28009.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_27911, var_inputVariableList_27965, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_28325, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654)) ;
    var_parameterCppNameList_27865.addAssign_operation (var_parameterCppName_28325  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_28009.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_28325.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)) ;
      }
    }
    enumerator_28009.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 674)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)).add_operation (var_sourceVar_27605, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 674)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 675)).add_operation (var_nameVar_27825, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)) ;
  cEnumerator_stringlist enumerator_29135 (var_parameterCppNameList_27865, kENUMERATION_UP) ;
  while (enumerator_29135.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_29135.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)) ;
    enumerator_29135.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 681)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 681)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_29383 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_29383.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29383.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 683)) ;
    enumerator_29383.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_6319 ;
  GALGAS_string var_targetVariableCppName_6344 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_6508 ;
        GALGAS_bool var_selfIsMutable_6531 ;
        GALGAS_bool var_mutableProperties_6569 ;
        const bool optionalResult6487 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_6508, var_selfIsMutable_6531, var_mutableProperties_6569) ;
        if (!optionalResult6487) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_6531.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 187)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 188)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_6724 = extensionGetter_definition (var_selfType_6508, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_6830 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_6822 ; // Joker input parameter
          var_propertyMap_6724.method_searchKey (temp_6.readProperty_mReceiverName (), joker_6822, var_isConstant_6830, var_targetType_6319, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 191)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_6344 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 194)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_6830.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_6569.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 198)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 202)) ;
        var_targetType_6319.drop () ; // Release error dropped variable
        var_targetVariableCppName_6344.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_7656 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_6319, var_targetVariableCppName_6344, joker_7656, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 206)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_7723 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_7723.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_7770 = extensionGetter_definition (var_targetType_6319, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 215)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_7860 ;
    GALGAS_bool var_isConstant_7879 ;
    var_propertyMap_7770.method_searchKey (enumerator_7723.current_mValue (HERE), var_accessControl_7860, var_isConstant_7879, var_targetType_6319, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
    extensionMethod_checkSetAccess (var_accessControl_7860, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_7723.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 217)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_7879.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_7723.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
      }
    }
    enumerator_7723.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_6319, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 226)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 226)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 226)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_incDecInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_6319, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 227)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_23 = this ;
  const GALGAS_incDecInstructionAST temp_24 = this ;
  const GALGAS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_6344, var_targetType_6319, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 231))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 231)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_9306 ;
  GALGAS_string var_targetVariableCppName_9398 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_9420 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_9306, var_targetVariableCppName_9398, joker_9420, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 252)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_9431 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_9431.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_9478 = extensionGetter_definition (var_targetType_9306, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_9568 ;
    GALGAS_bool var_isConstant_9587 ;
    var_propertyMap_9478.method_searchKey (enumerator_9431.current_mValue (HERE), var_accessControl_9568, var_isConstant_9587, var_targetType_9306, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 255)) ;
    extensionMethod_checkSetAccess (var_accessControl_9568, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_9431.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 256)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isConstant_9587.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9431.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 261)) ;
      }
    }
    enumerator_9431.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_9306, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 265)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 265)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 265)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_9306, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 267)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 266)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_9398, var_targetType_9306, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_11036 ;
    GALGAS_bool var_selfIsMutable_11059 ;
    GALGAS_bool var_unused_0_11093 ;
    const bool optionalResult11015 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11036, var_selfIsMutable_11059, var_unused_0_11093) ;
    if (!optionalResult11015) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_11059.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 290)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 291)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_11036, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 294)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 294)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_11036, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 295)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_11036, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 303)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 307)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_12450 ;
    GALGAS_bool var_selfIsMutable_12473 ;
    GALGAS_bool var_unused_0_12507 ;
    const bool optionalResult12429 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12450, var_selfIsMutable_12473, var_unused_0_12507) ;
    if (!optionalResult12429) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12473.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 322)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12450, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 326)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 326)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 326)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12450, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12450, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 335)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 339)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 375)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_14737 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_14784 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_14784.hasCurrentObject ()) {
    var_receiverCppName_14737.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_14784.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) ;
    enumerator_14784.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14737.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14737.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 389)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 403)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_15973 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_16020 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_16020.hasCurrentObject ()) {
    var_receiverCppName_15973.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_16020.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)) ;
    enumerator_16020.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15973.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15973.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)) ;
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
  cEnumerator_ifExpressionList enumerator_12930 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12930.hasCurrentObject ()) {
    switch (enumerator_12930.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_13071 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12930.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13009_exp = extractPtr_13071->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13009_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 357)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13217 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12930.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13092_exp = extractPtr_13217->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_13107_typeName = extractPtr_13217->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13092_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 359)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_13215 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_13107_typeName, joker_13215, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 360)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13657 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12930.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13248_receiverExpression = extractPtr_13657->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_13269_parameters = extractPtr_13657->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13248_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 362)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13368 (extractedValue_13269_parameters, kENUMERATION_UP) ;
        while (enumerator_13368.hasCurrentObject ()) {
          switch (enumerator_13368.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13530 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13368.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13448_expression = extractPtr_13530->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13448_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 366)) ;
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
          enumerator_13368.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12930.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 374)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 375)) ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_15164 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 413)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_15198 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_15198.hasCurrentObject ()) {
    switch (enumerator_15198.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15846 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_15198.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15277_exp = extractPtr_15846->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15505 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15277_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 420)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15505, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 417)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15677 ;
        {
        const GALGAS_ifInstructionAST temp_1 = this ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15505, var_if_5F_expression_15677, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 426)) ;
        }
        var_testListForGeneration_15164.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15677  COMMA_SOURCE_FILE ("instruction-if.galgas", 432))  COMMA_SOURCE_FILE ("instruction-if.galgas", 432)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 433)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_19412 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_15198.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15865_constantName = extractPtr_19412->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15878_exp = extractPtr_19412->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15893_typeName = extractPtr_19412->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_16126 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15878_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 439)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_16126, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 436)) ;
        GALGAS_unifiedTypeMapEntry var_castType_16193 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 446)) ;
        GALGAS_unifiedTypeMapEntry var_testType_16240 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 447)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_analyzedExpression_16126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 449)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 449)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15893_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15893_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 451)) ;
                var_castType_16193.drop () ; // Release error dropped variable
                var_testType_16240.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_16193 = extensionGetter_searchKey (ioArgument_ioTypeMap, extractedValue_15893_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
              var_testType_16240 = var_castType_16193 ;
              GALGAS_unifiedTypeMapEntry var_t_16734 = var_castType_16193 ;
              GALGAS_bool var_found_16767 = GALGAS_bool (kIsEqual, var_t_16734.objectCompare (var_analyzedExpression_16126.readProperty_mResultType ())) ;
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).isValid ()) {
                uint32_t variant_16821 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).uintValue () ;
                bool loop_16821 = true ;
                while (loop_16821) {
                  loop_16821 = var_found_16767.operator_not (SOURCE_FILE ("instruction-if.galgas", 459)).operator_and (extensionGetter_definition (var_t_16734, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 459)).operator_not (SOURCE_FILE ("instruction-if.galgas", 459)) COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).isValid () ;
                  if (loop_16821) {
                    loop_16821 = var_found_16767.operator_not (SOURCE_FILE ("instruction-if.galgas", 459)).operator_and (extensionGetter_definition (var_t_16734, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 459)).operator_not (SOURCE_FILE ("instruction-if.galgas", 459)) COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).boolValue () ;
                  }
                  if (loop_16821 && (0 == variant_16821)) {
                    loop_16821 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 458)) ;
                  }
                  if (loop_16821) {
                    variant_16821 -- ;
                    var_t_16734 = extensionGetter_definition (var_t_16734, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).readProperty_mSuperType () ;
                    var_found_16767 = GALGAS_bool (kIsEqual, var_t_16734.objectCompare (var_analyzedExpression_16126.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16767.operator_not (SOURCE_FILE ("instruction-if.galgas", 463)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15893_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15893_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).add_operation (extensionGetter_definition (var_analyzedExpression_16126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 465)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 464)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMapEntry var_classType_17414 ;
            const bool optionalResult17376 = extensionGetter_definition (var_analyzedExpression_16126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 469)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_17414) ;
            if (!optionalResult17376) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15893_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_16193 = var_classType_17414 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_16193 = extensionGetter_searchKey (ioArgument_ioTypeMap, extractedValue_15893_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)) ;
              }
              var_testType_16240 = var_castType_16193 ;
              GALGAS_unifiedTypeMapEntry var_t_17638 = var_castType_16193 ;
              GALGAS_bool var_found_17669 = GALGAS_bool (kIsEqual, var_t_17638.objectCompare (var_analyzedExpression_16126.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17669.boolEnum () ;
                if (kBoolTrue == test_9) {
                  extensionGetter_definition (var_castType_16193, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16240, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17638.objectCompare (var_classType_17414)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17669 = GALGAS_bool (true) ;
                  }
                }
              }
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 483)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)).isValid ()) {
                uint32_t variant_17903 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 483)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)).uintValue () ;
                bool loop_17903 = true ;
                while (loop_17903) {
                  loop_17903 = var_found_17669.operator_not (SOURCE_FILE ("instruction-if.galgas", 484)).operator_and (extensionGetter_definition (var_t_17638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 484)).operator_not (SOURCE_FILE ("instruction-if.galgas", 484)) COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).isValid () ;
                  if (loop_17903) {
                    loop_17903 = var_found_17669.operator_not (SOURCE_FILE ("instruction-if.galgas", 484)).operator_and (extensionGetter_definition (var_t_17638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 484)).operator_not (SOURCE_FILE ("instruction-if.galgas", 484)) COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).boolValue () ;
                  }
                  if (loop_17903 && (0 == variant_17903)) {
                    loop_17903 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 483)) ;
                  }
                  if (loop_17903) {
                    variant_17903 -- ;
                    var_t_17638 = extensionGetter_definition (var_t_17638, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 485)).readProperty_mSuperType () ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17638.objectCompare (var_analyzedExpression_16126.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17669 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_16193, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 488)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16240, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 488)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17638.objectCompare (var_classType_17414)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17669 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17669.operator_not (SOURCE_FILE ("instruction-if.galgas", 493)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15893_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_16193, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).add_operation (extensionGetter_definition (var_analyzedExpression_16126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 494)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_16126.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_16126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 498)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 501)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)) ;
        }
        GALGAS_string var_targetVariableCppName_18862 = GALGAS_string ("var_").add_operation (extractedValue_15865_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (extractedValue_15865_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 504)).getter_string (SOURCE_FILE ("instruction-if.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 504)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, extractedValue_15865_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_15865_constantName, var_castType_16193, var_targetVariableCppName_18862, var_targetVariableCppName_18862, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)) ;
            }
          }
        }
        var_testListForGeneration_15164.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18862, var_analyzedExpression_16126, var_castType_16193, var_testType_16240  COMMA_SOURCE_FILE ("instruction-if.galgas", 513))  COMMA_SOURCE_FILE ("instruction-if.galgas", 513)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19829 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_15198.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_19443_receiverExpression = extractPtr_19829->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_19462_optionalMethodName = extractPtr_19829->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_19481_parameters = extractPtr_19829->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, extractedValue_19443_receiverExpression, extractedValue_19462_optionalMethodName, extractedValue_19481_parameters, var_testListForGeneration_15164, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 520)) ;
        }
      }
      break ;
    }
    enumerator_15198.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_20212 ;
  {
  const GALGAS_ifInstructionAST temp_17 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 539)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 540)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 541)), temp_17.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_20212, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 534)) ;
  }
  const GALGAS_ifInstructionAST temp_18 = this ;
  GALGAS_ifExpressionList var_expressions_20243 = temp_18.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_20300 ; // Joker input parameter
  var_expressions_20243.setter_popLast (joker_20300, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 547)) ;
  }
  cEnumerator_ifExpressionList enumerator_20311 (var_expressions_20243, kENUMERATION_UP) ;
  while (enumerator_20311.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 549)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_20 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 550)) ;
    }
    enumerator_20311.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_21.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 552)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20901 ;
  {
  const GALGAS_ifInstructionAST temp_22 = this ;
  const GALGAS_ifInstructionAST temp_23 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 559)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 560)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 561)), temp_22.readProperty_m_5F_else_5F_instructionList (), temp_23.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20901, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 554)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 567)) ;
  }
  const GALGAS_ifInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_25.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_15164, var_then_5F_instructionList_20212, var_else_5F_instructionList_20901  COMMA_SOURCE_FILE ("instruction-if.galgas", 569))  COMMA_SOURCE_FILE ("instruction-if.galgas", 569)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_22539 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 594)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_22539, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 591)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 600)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 601)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_22696 = var_receiverExpression_22539.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_22767 = extensionGetter_definition (var_receiverType_22696, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 604)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_22891 ;
  const cMapElement_optionalMethodMap * objectArray_22917 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_22767.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (nullptr != objectArray_22917) {
      macroValidSharedObject (objectArray_22917, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_22891 = objectArray_22917->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_23037 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_23122 (var_optionalMethodMap_22767, kENUMERATION_UP) ;
    while (enumerator_23122.hasCurrentObject ()) {
      var_s_23037.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_23122.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 612)) ;
      enumerator_23122.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_23037, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 614)) ;
    var_optionalMethodSignature_22891.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 617)).objectCompare (var_optionalMethodSignature_22891.getter_count (SOURCE_FILE ("instruction-if.galgas", 617)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (extensionGetter_definition (var_receiverType_22696, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (var_optionalMethodSignature_22891.getter_count (SOURCE_FILE ("instruction-if.galgas", 620)).getter_string (SOURCE_FILE ("instruction-if.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 619)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)).add_operation (constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 621)).getter_string (SOURCE_FILE ("instruction-if.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_23747 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 623)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_23796 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_23873 (var_optionalMethodSignature_22891, kENUMERATION_UP) ;
    while (enumerator_23796.hasCurrentObject () && enumerator_23873.hasCurrentObject ()) {
      switch (enumerator_23796.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_24711 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_23796.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_23960_expression = extractPtr_24711->mAssociatedValue0 ;
          const GALGAS_location extractedValue_23971_location = extractPtr_24711->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_24261 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_23960_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_23873.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_24261, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 628)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23796.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24360 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_24360) ;
              inCompiler->emitSemanticError (enumerator_23796.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24360, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 639)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 639)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_23873.current_mFormalArgumentType (HERE), var_exp_24261.readProperty_mResultType (), extractedValue_23971_location, var_exp_24261, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 641)) ;
          }
          var_actualParameterList_23747.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_24261  COMMA_SOURCE_FILE ("instruction-if.galgas", 642))  COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_25860 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_23796.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_24749_actualTypeName = extractPtr_25860->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_24773_constantName = extractPtr_25860->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_24749_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 644)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_24749_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 647)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 647))) ;
              inCompiler->emitSemanticError (extractedValue_24749_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 646)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 646)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 646)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 645)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_25138 = GALGAS_string ("var_").add_operation (extractedValue_24773_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 649)).add_operation (extractedValue_24773_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)).getter_string (SOURCE_FILE ("instruction-if.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_24773_constantName, enumerator_23873.current_mFormalArgumentType (HERE), var_targetVariableCppName_25138, var_targetVariableCppName_25138, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
          }
          var_actualParameterList_23747.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 657)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_25138  COMMA_SOURCE_FILE ("instruction-if.galgas", 657))  COMMA_SOURCE_FILE ("instruction-if.galgas", 657)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23796.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25673 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_25673) ;
              inCompiler->emitSemanticError (enumerator_23796.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25673, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_27047 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_23796.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25900_actualTypeName = extractPtr_27047->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25924_variableName = extractPtr_27047->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_25900_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_25900_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666))) ;
              inCompiler->emitSemanticError (extractedValue_25900_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 665)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 665)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 665)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 664)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26290 = GALGAS_string ("var_").add_operation (extractedValue_25924_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)).add_operation (extractedValue_25924_variableName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).getter_string (SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_25924_variableName, GALGAS_bool (true), enumerator_23873.current_mFormalArgumentType (HERE), var_targetVariableCppName_26290, var_targetVariableCppName_26290, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)) ;
          }
          var_actualParameterList_23747.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26290  COMMA_SOURCE_FILE ("instruction-if.galgas", 677))  COMMA_SOURCE_FILE ("instruction-if.galgas", 677)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23796.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26860 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_26860) ;
              inCompiler->emitSemanticError (enumerator_23796.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26860, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_27634 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_23796.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_27080_checkSelector = extractPtr_27634->mAssociatedValue0 ;
          const GALGAS_location extractedValue_27094_location = extractPtr_27634->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_27103_idx = extractPtr_27634->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_27122 = GALGAS_string ("var_unused_").add_operation (extractedValue_27103_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)).add_operation (extractedValue_27094_location.getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)).getter_string (SOURCE_FILE ("instruction-if.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)) ;
          var_actualParameterList_23747.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23873.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_27122  COMMA_SOURCE_FILE ("instruction-if.galgas", 684))  COMMA_SOURCE_FILE ("instruction-if.galgas", 684)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_27080_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23796.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_23873.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27447 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_27447) ;
              inCompiler->emitSemanticError (enumerator_23796.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27447, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
            }
          }
        }
        break ;
      }
      enumerator_23796.gotoNextObject () ;
      enumerator_23873.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_22539, constinArgument_inOptionalMethodName, var_actualParameterList_23747  COMMA_SOURCE_FILE ("instruction-if.galgas", 691))  COMMA_SOURCE_FILE ("instruction-if.galgas", 691)) ;
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
  GALGAS_string var_testVar_30723 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 771)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 772)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 773)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 773)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_30886 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_30886.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 775)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 775)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 776)) ;
    }
    switch (enumerator_30886.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_31315 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_30886.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31067_exp = extractPtr_31315->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_31240 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_31067_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31240, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 779)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_30723.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 786)).add_operation (var_cppVarName_31240, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 786)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 786)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_32060 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_30886.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_31351_targetVarCppName = extractPtr_32060->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31368_exp = extractPtr_32060->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31372_targetType = extractPtr_32060->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31383_testType = extractPtr_32060->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_31405 = extensionGetter_identifierRepresentation (extractedValue_31372_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 788)) ;
        GALGAS_string var_testTypeName_31470 = extensionGetter_identifierRepresentation (extractedValue_31383_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 789)) ;
        GALGAS_string var_cppVarName_31687 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_31368_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31687, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_31405, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 797)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 797)).add_operation (extractedValue_31351_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 797)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_31470, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)).add_operation (var_cppVarName_31687, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 798)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 798)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr == ").add_operation (extractedValue_31351_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 799)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 800)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 801)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_33796 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_30886.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32095_receiverExpression = extractPtr_33796->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_32114_optionalMethodName = extractPtr_33796->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_32133_parameters = extractPtr_33796->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_32328 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32095_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32328, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)) ;
        GALGAS_stringlist var_actualParameterNameList_32369 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 810)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_32409 (extractedValue_32133_parameters, kENUMERATION_UP) ;
        while (enumerator_32409.hasCurrentObject ()) {
          switch (enumerator_32409.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_32766 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_32409.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_32489_expression = extractPtr_32766->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_32700 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32489_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_32700, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 814)) ;
              var_actualParameterNameList_32369.addAssign_operation (var_argumentCppName_32700  COMMA_SOURCE_FILE ("instruction-if.galgas", 821)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_32987 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_32409.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32811_typeName = extractPtr_32987->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32820_constantName = extractPtr_32987->mAssociatedValue1 ;
              var_actualParameterNameList_32369.addAssign_operation (extractedValue_32820_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 823)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32811_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (extractedValue_32820_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 824)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_33199 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_32409.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_33023_typeName = extractPtr_33199->mAssociatedValue0 ;
              const GALGAS_string extractedValue_33032_variableName = extractPtr_33199->mAssociatedValue1 ;
              var_actualParameterNameList_32369.addAssign_operation (extractedValue_33032_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 826)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_33023_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)).add_operation (extractedValue_33032_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 827)) ;
            }
            break ;
          }
          enumerator_32409.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_33238 = GALGAS_string ("optionalResult").add_operation (extractedValue_32114_optionalMethodName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 830)).getter_string (SOURCE_FILE ("instruction-if.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 830)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_33238, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).add_operation (var_cppVarName_32328, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_32114_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 832)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 832)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 832)) ;
        cEnumerator_stringlist enumerator_33468 (var_actualParameterNameList_32369, kENUMERATION_UP) ;
        while (enumerator_33468.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33468.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 835)) ;
          if (enumerator_33468.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 837)) ;
          }
          enumerator_33468.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_33238, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 840)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 840)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 840)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 842)) ;
      }
      break ;
    }
    enumerator_30886.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 846)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 847)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 855)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_34147 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_34147.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 858)) ;
    enumerator_34147.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 861)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_30723, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 862)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 862)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 863)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 871)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
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
      GALGAS_unifiedTypeMapEntry joker_5842 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_5842, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 153)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_6795 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 167)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_6860 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).getter_string (SOURCE_FILE ("instruction-let.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_6795, var_targetVariableCppName_6860, var_targetVariableCppName_6860, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_6795, var_targetVariableCppName_6860  COMMA_SOURCE_FILE ("instruction-let.galgas", 177))  COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_8245 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 196)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8245, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 193)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8293 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 204)).getter_string (SOURCE_FILE ("instruction-let.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 204)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8245.readProperty_mResultType (), var_targetVariableCppName_8293, var_targetVariableCppName_8293, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_8245.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8293, var_expression_8245  COMMA_SOURCE_FILE ("instruction-let.galgas", 212))  COMMA_SOURCE_FILE ("instruction-let.galgas", 212)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_9506 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 228)) ;
  GALGAS_semanticExpressionForGeneration var_expression_9838 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9506, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9838, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 230)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_9886 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 241)).getter_string (SOURCE_FILE ("instruction-let.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 241)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9506, var_targetVariableCppName_9886, var_targetVariableCppName_9886, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 243)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_9506, var_targetVariableCppName_9886, var_targetVariableCppName_9886, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 250)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_9506, var_expression_9838.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9838, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 259)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_9506, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_9886, var_expression_9838  COMMA_SOURCE_FILE ("instruction-let.galgas", 261))  COMMA_SOURCE_FILE ("instruction-let.galgas", 261)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 297)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 308)) ;
  GALGAS_string var_sourceVar_13192 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13192, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 309)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (var_sourceVar_13192, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 316)) ;
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
  cEnumerator_logListAST enumerator_3765 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_3765.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3765.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)) ;
    enumerator_3765.gotoNextObject () ;
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
  cEnumerator_logListAST enumerator_4518 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4518.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_4823 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4518.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 129)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4823, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_4518.current_mLogMessage (HERE), var_expression_4823  COMMA_SOURCE_FILE ("instruction-log.galgas", 136))  COMMA_SOURCE_FILE ("instruction-log.galgas", 136)) ;
    enumerator_4518.gotoNextObject () ;
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
  GALGAS_string var_logVar_5979 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_5979, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 161)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_5979.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 168)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 168)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 169)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 169)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 114)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 115)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 116)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 117)) ;
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
  GALGAS_semanticExpressionForGeneration var_variantExpression_5705 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 135)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_5705, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 132)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_5705.readProperty_mResultType (), var_variantExpression_5705.readProperty_mLocation (), var_variantExpression_5705, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 142)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_6567 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 156)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_6567, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 153)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_6567.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)).add_operation (extensionGetter_definition (var_loopExpression_6567.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 165)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 164)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7454 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 176)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7454, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 170)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7868 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 189)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 190)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 191)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7868, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 184)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 198)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::constructor_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_5705, var_first_5F_instructionList_7454, var_loopExpression_6567, var_second_5F_instructionList_7868  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 200))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 200)) ;
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
  GALGAS_string var_variantCppVarName_9463 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9463, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 230)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9463, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 237)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 237)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 238)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_9608 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 239)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 239)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9608, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)).add_operation (var_variantCppVarName_9463, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_9800 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)).add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 245)) ;
  }
  GALGAS_string var_loopExpressionVar_10375 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10375, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9800.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (var_loopExpressionVar_10375, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (var_loopExpressionVar_10375, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (var_variantVar_9608, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (var_loopVar_9800, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_9608, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 96)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 97)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 98)) ;
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
  GALGAS_semanticExpressionForGeneration var_loopExpression_5126 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 116)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_5126, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 113)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5126.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)).add_operation (extensionGetter_definition (var_loopExpression_5126.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 124)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6013 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 137)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6013, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 130)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_6427 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 149)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 150)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 151)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6427, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 144)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 158)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6013, var_loopExpression_5126, var_second_5F_instructionList_6427  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 160))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 160)) ;
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
  GALGAS_string var_loopVar_8075 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 186)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 186)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8075, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 187)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 187)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8075, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 188)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 188)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 189)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 190)) ;
  }
  GALGAS_string var_loopExpressionVar_8676 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8676, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8075.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (var_loopExpressionVar_8676, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (var_loopVar_8075, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)).add_operation (var_loopVar_8075, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)).add_operation (var_loopExpressionVar_8676, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8075, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 210)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 219)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 220)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 87)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_3485 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3485.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3485.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 89)) ;
    enumerator_3485.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4516 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 109)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4516, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)) ;
  GALGAS_methodKind var_kind_4677 ;
  GALGAS_formalParameterSignature var_routineSignature_4691 ;
  GALGAS_bool var_hasCompilerArgument_4724 ;
  GALGAS_string var_errorMessage_4760 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_4712 ; // Joker input parameter
  GALGAS_methodQualifier joker_4748 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_4516.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_4677, var_routineSignature_4691, joker_4712, var_hasCompilerArgument_4724, joker_4748, var_errorMessage_4760, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_4760.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_4760, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 126)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5283 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 135)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 135)), var_routineSignature_4691, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5283, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_5373 = var_receiverExpression_4516.readProperty_mResultType () ;
  GALGAS_bool var_searching_5421 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 145)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 146)).isValid ()) {
        uint32_t variant_5474 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 146)).uintValue () ;
        bool loop_5474 = true ;
        while (loop_5474) {
          loop_5474 = var_searching_5421.isValid () ;
          if (loop_5474) {
            loop_5474 = var_searching_5421.boolValue () ;
          }
          if (loop_5474 && (0 == variant_5474)) {
            loop_5474 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
          }
          if (loop_5474) {
            variant_5474 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_5373, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 147)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_5421 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_5373, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 150)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 150)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 150)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_5373 = extensionGetter_definition (var_baseType_5373, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 151)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_5421 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_4516.readProperty_mResultType (), var_receiverExpression_4516, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_4677, var_actualParameterListForGeneration_5283, var_hasCompilerArgument_4724, var_baseType_5373  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)) ;
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
  GALGAS_string var_receiverCppName_7470 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_7470, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_7470 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_7558 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 198)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_7602 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 199)) ;
  GALGAS_stringlist var_inputVariableList_7654 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 200)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7696 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7696.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7939 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_7696.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7602, var_inputVariableList_7654, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7939, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 202)) ;
    var_parameterCppNameList_7558.addAssign_operation (var_parameterCppName_7939  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 203)) ;
    enumerator_7696.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 209)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)).add_operation (var_receiverCppName_7470, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 210)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)).add_operation (var_receiverCppName_7470, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 215)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_7470.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_8878 (var_parameterCppNameList_7558, kENUMERATION_UP) ;
  while (enumerator_8878.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8878.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 221)) ;
    if (enumerator_8878.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 222)) ;
    }
    enumerator_8878.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_7558.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 224)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 232)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 233)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 235)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)) ;
  const GALGAS_methodCallInstructionForGeneration temp_17 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_9563 (temp_17.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_9563.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_9563.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 240)) ;
    enumerator_9563.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_2477 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2477.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2477.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)) ;
    enumerator_2477.gotoNextObject () ;
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
  const GALGAS_procCallInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3236 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3236 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 77)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_3539 ;
  GALGAS_bool var_isInternal_3572 ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().method_searchKey (temp_1.readProperty_mRoutineName (), var_routineSignature_3539, var_isInternal_3572, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 79)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3572.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3637 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().getter_locationForKey (temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)).objectCompare (var_procDeclarationLocation_3637.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3637.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4375 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  const GALGAS_procCallInstructionAST temp_10 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_8.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (temp_9.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 98)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 98)), var_routineSignature_3539, temp_10.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4375, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 92)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.readProperty_mRoutineName (), var_actualParameterListForGeneration_4375  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  GALGAS_stringlist var_parameterCppNameList_5554 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5598 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 133)) ;
  GALGAS_stringlist var_inputVariableList_5650 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 134)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5680 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5680.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5963 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5680.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5598, var_inputVariableList_5650, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5963, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 136)) ;
    var_parameterCppNameList_5554.addAssign_operation (var_parameterCppName_5963  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
    enumerator_5680.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  cEnumerator_stringlist enumerator_6164 (var_parameterCppNameList_5554, kENUMERATION_UP) ;
  while (enumerator_6164.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6164.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) ;
    enumerator_6164.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 154)) ;
  const GALGAS_procCallInstructionForGeneration temp_4 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6476 (temp_4.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6476.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_6476.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 157)) ;
    enumerator_6476.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 63)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_3274 ;
    GALGAS_bool var_selfIsMutable_3297 ;
    GALGAS_bool var_unused_0_3331 ;
    const bool optionalResult3253 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3274, var_selfIsMutable_3297, var_unused_0_3331) ;
    if (!optionalResult3253) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_3297.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 79)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 80)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_3743 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_3274, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3743, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 83)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_3274, var_expression_3743.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_3743, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 93)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_3274, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 99)).readProperty_string (), var_expression_3743, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 95))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 95)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 104)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 203)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 209)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 215)) ;
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
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 221)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_9928 ;
    GALGAS_bool var_selfIsMutable_9957 ;
    GALGAS_bool var_unused_0_9997 ;
    const bool optionalResult9901 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9928, var_selfIsMutable_9957, var_unused_0_9997) ;
    if (!optionalResult9901) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9957.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 242)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 243)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_10491 = extensionGetter_definition (var_selfType_9928, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_10491.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_9928, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 255)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 258)).objectCompare (var_addAssignOperatorArguments_10491.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 258)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_9928, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).add_operation (var_addAssignOperatorArguments_10491.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 261)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 261)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 261)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 259)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_11282 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 264)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_11386 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_11471 (var_addAssignOperatorArguments_10491, kENUMERATION_UP) ;
          while (enumerator_11386.hasCurrentObject () && enumerator_11471.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_11795 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11386.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11471.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11795, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_11471.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11386.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_11471.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_11471.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_11903 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_11903) ;
                inCompiler->emitSemanticError (enumerator_11386.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11903, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_11471.current_mFormalArgumentType (HERE), var_expression_11795.readProperty_mResultType (), enumerator_11386.current_mEndOfExpressionLocation (HERE), var_expression_11795, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 279)) ;
            }
            var_effectiveParameterList_11282.addAssign_operation (var_expression_11795  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 280)) ;
            enumerator_11386.gotoNextObject () ;
            enumerator_11471.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_9928, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 288)), var_effectiveParameterList_11282  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_13367 ;
    GALGAS_bool var_selfIsMutable_13396 ;
    GALGAS_bool var_unused_0_13436 ;
    const bool optionalResult13340 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13367, var_selfIsMutable_13396, var_unused_0_13436) ;
    if (!optionalResult13340) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13396.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 313)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 314)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13367, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 324)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 324)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 324)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13367, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 325)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_14489 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_13367, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_14489, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 329)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_13367, var_expression_14489.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_14489, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 339)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_13367, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 346)), var_expression_14489, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 341))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 341)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_15728 ;
    GALGAS_bool var_selfIsMutable_15757 ;
    GALGAS_bool var_unused_0_15797 ;
    const bool optionalResult15701 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_15728, var_selfIsMutable_15757, var_unused_0_15797) ;
    if (!optionalResult15701) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_15757.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 371)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 372)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_15728, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 382)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 382)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_15728, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 384)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 384)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 384)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 383)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_16851 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_15728, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_16851, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 387)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_15728, var_expression_16851.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_16851, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 397)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_15728, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 404)), var_expression_16851, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 399))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 399)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 409)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_18089 ;
    GALGAS_bool var_selfIsMutable_18118 ;
    GALGAS_bool var_unused_0_18158 ;
    const bool optionalResult18062 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_18089, var_selfIsMutable_18118, var_unused_0_18158) ;
    if (!optionalResult18062) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_18118.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 429)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 430)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_18089, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 440)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 440)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_18089, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 442)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 442)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 442)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 441)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_19206 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_18089, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_19206, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 445)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_18089, var_expression_19206.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_19206, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 455)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_18089, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 462)), var_expression_19206, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 457))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 457)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 467)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_20442 ;
    GALGAS_bool var_selfIsMutable_20471 ;
    GALGAS_bool var_unused_0_20511 ;
    const bool optionalResult20415 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20442, var_selfIsMutable_20471, var_unused_0_20511) ;
    if (!optionalResult20415) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_20471.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 487)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 488)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_20442, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 498)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 498)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_20442, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 500)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 500)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 500)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 499)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_21559 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_20442, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_21559, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 503)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_20442, var_expression_21559.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_21559, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 513)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_20442, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 520)), var_expression_21559, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 515))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 515)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 525)) ;
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
  cEnumerator_actualParameterListAST enumerator_6713 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6713.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6713.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 204)) ;
    enumerator_6713.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_7079 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7079.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7079.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 214)) ;
    enumerator_7079.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_receiverType_8083 ;
  GALGAS_string var_targetVariableCppName_8110 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8146 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_8293 ;
        GALGAS_bool var_selfIsMutable_8336 ;
        GALGAS_bool var_unused_0_8390 ;
        const bool optionalResult8252 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8293, var_selfIsMutable_8336, var_unused_0_8390) ;
        if (!optionalResult8252) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_8476 ;
            const bool optionalResult8448 = extensionGetter_definition (var_selfType_8293, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 236)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_8476) ;
            if (!optionalResult8448) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_8476.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_8336.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 237)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 238)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_8632 = extensionGetter_definition (var_selfType_8293, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 240)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_8738 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_AccessControl joker_8730 ; // Joker input parameter
          var_propertyMap_8632.method_searchKey (temp_7.readProperty_mReceiverName (), joker_8730, var_isConstant_8738, var_receiverType_8083, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 241)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_8738.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 243)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_8146 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_8110 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 246)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 247)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 249)) ;
        var_receiverType_8083.drop () ; // Release error dropped variable
        var_targetVariableCppName_8110.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_8146.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_8083, var_targetVariableCppName_8110, var_nameForCheckingFormalParameterUsing_8146, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 254)) ;
    }
  }
  GALGAS_bool var_ok_9520 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_9536 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_9587 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_9520.isValidAndTrue () ;
  if (enumerator_9587.hasCurrentObject () && bool_17) {
    while (enumerator_9587.hasCurrentObject () && bool_17) {
      var_ok_9520 = extensionGetter_definition (var_receiverType_8083, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 265)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 265)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_9520.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 266)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_9536, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 267)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_9811 = extensionGetter_definition (var_receiverType_8083, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 269)).readProperty_mPropertyMap () ;
        GALGAS_AccessControl var_accessControl_9905 ;
        GALGAS_bool var_isConstant_9924 ;
        var_propertyMap_9811.method_searchKey (enumerator_9587.current_mValue (HERE), var_accessControl_9905, var_isConstant_9924, var_receiverType_8083, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 270)) ;
        extensionMethod_checkSetAccess (var_accessControl_9905, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_9587.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 271)) ;
        var_errorLocation_9536 = enumerator_9587.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isConstant_9924.boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_9587.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)) ;
          }
        }
      }
      enumerator_9587.gotoNextObject () ;
      if (enumerator_9587.hasCurrentObject ()) {
        bool_17 = var_ok_9520.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_10344 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_setterCallInstructionAST temp_23 = this ;
    test_22 = GALGAS_bool (kIsNotEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_setterCallInstructionAST temp_24 = this ;
      var_castType_10344 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)) ;
      {
      const GALGAS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes (var_receiverType_8083, var_castType_10344, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285)) ;
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_castType_10344 = var_receiverType_8083 ;
  }
  GALGAS_methodKind var_kind_10695 ;
  GALGAS_formalParameterSignature var_routineSignature_10709 ;
  GALGAS_bool var_hasCompilerArgument_10735 ;
  GALGAS_string var_setterErrorMessage_10771 ;
  const GALGAS_setterCallInstructionAST temp_26 = this ;
  GALGAS_methodQualifier joker_10759 ; // Joker input parameter
  extensionGetter_definition (var_castType_10344, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 290)).readProperty_mSetterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_10695, var_routineSignature_10709, var_hasCompilerArgument_10735, joker_10759, var_setterErrorMessage_10771, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 290)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_10771.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_setterCallInstructionAST temp_28 = this ;
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_10771, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 299)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_11303 ;
  {
  const GALGAS_setterCallInstructionAST temp_30 = this ;
  const GALGAS_setterCallInstructionAST temp_31 = this ;
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_30.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_31.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 308)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 308)), var_routineSignature_10709, temp_32.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11303, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 302)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_11393 = var_castType_10344 ;
  GALGAS_bool var_searching_11419 = GALGAS_bool (true) ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 318)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 319)).isValid ()) {
        uint32_t variant_11472 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 319)).uintValue () ;
        bool loop_11472 = true ;
        while (loop_11472) {
          loop_11472 = var_searching_11419.isValid () ;
          if (loop_11472) {
            loop_11472 = var_searching_11419.boolValue () ;
          }
          if (loop_11472 && (0 == variant_11472)) {
            loop_11472 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 319)) ;
          }
          if (loop_11472) {
            variant_11472 -- ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_11393, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 320)).boolEnum () ;
              if (kBoolTrue == test_34) {
                var_searching_11419 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_11393, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)).readProperty_mSetterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_baseType_11393 = extensionGetter_definition (var_baseType_11393, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_35) {
                var_searching_11419 = GALGAS_bool (false) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_8110, var_nameForCheckingFormalParameterUsing_8146, temp_38.readProperty_mReceiverStructProperties (), var_castType_10344, var_receiverType_8083, temp_39.readProperty_mSetterName (), var_kind_10695, var_actualParameterListForGeneration_11303, var_hasCompilerArgument_10735, var_baseType_11393  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_12838 ;
    GALGAS_bool var_selfIsMutable_12867 ;
    GALGAS_bool var_unused_0_12907 ;
    const bool optionalResult12811 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12838, var_selfIsMutable_12867, var_unused_0_12907) ;
    if (!optionalResult12811) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12867.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 361)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 362)) ;
        }
      }
      GALGAS_methodKind var_kind_13120 ;
      GALGAS_formalParameterSignature var_routineSignature_13130 ;
      GALGAS_bool var_hasCompilerArgument_13152 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_13172 ; // Joker input parameter
      GALGAS_string joker_13175 ; // Joker input parameter
      extensionGetter_definition (var_selfType_12838, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_13120, var_routineSignature_13130, var_hasCompilerArgument_13152, joker_13172, joker_13175, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_13625 ;
      {
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)), var_routineSignature_13130, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_13625, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
      }
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12838, temp_8.readProperty_mSetterName (), var_kind_13120, var_actualParameterListForGeneration_13625, var_hasCompilerArgument_13152  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 381))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 381)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_15770 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_15817 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_15817.hasCurrentObject ()) {
    var_receiverCppName_15770.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15817.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
    enumerator_15817.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_16049 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 438)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_16093 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 439)) ;
  GALGAS_stringlist var_inputVariableList_16145 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 440)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_16175 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16175.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16460 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_16175.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16093, var_inputVariableList_16145, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16460, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)) ;
    var_parameterCppNameList_16049.addAssign_operation (var_parameterCppName_16460  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 451)) ;
    enumerator_16175.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 457)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)).readProperty_mAllTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 458)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15770.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 459)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_17050 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)).add_operation (var_pointerUniqueName_17050, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)).add_operation (var_receiverCppName_15770, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 463)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_17050, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).add_operation (var_pointerUniqueName_17050, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 467)).add_operation (GALGAS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 469)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_17050, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)).add_operation (GALGAS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (var_pointerUniqueName_17050, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 475)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (var_receiverCppName_15770, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15770.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_18802 (var_parameterCppNameList_16049, kENUMERATION_UP) ;
  while (enumerator_18802.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_18802.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)) ;
    if (enumerator_18802.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)) ;
    }
    enumerator_18802.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_16049.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 489)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 492)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 494)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_16049.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 495)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 500)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 512)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_19924 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 514)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19968 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 515)) ;
  GALGAS_stringlist var_inputVariableList_20020 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 516)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_20062 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_20062.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_20355 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_20062.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19968, var_inputVariableList_20020, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20355, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 518)) ;
    var_parameterCppNameList_19924.addAssign_operation (var_parameterCppName_20355  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 526)) ;
    enumerator_20062.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 532)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 532)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 535)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 538)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 538)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 539)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_21345 (var_parameterCppNameList_19924, kENUMERATION_UP) ;
  while (enumerator_21345.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_21345.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 545)) ;
    if (enumerator_21345.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)) ;
    }
    enumerator_21345.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_19924.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 549)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 552)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 553)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_19924.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 555)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 558)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 558)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 559)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_7148 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_7148.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7148.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
    enumerator_7148.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_switchExpression_8135 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 235)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_8135, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_8135.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 242)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 242)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8135.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 245)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 244)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 245)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_8571 = extensionGetter_definition (var_switchExpression_8135.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 248)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_8665 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 249)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 251)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_8808 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 252)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_8910 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_8910.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9026 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 255)) ;
    GALGAS_bool var_firstConstant_9084 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_9114 (enumerator_8910.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_9114.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_8571.getter_hasKey (enumerator_9114.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 258)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_8665.getter_hasKey (enumerator_9114.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 259)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9114.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9114.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 260)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_8665.addAssign_operation (enumerator_9114.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 263)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9534 ;
          GALGAS_uint joker_9501 ; // Joker input parameter
          var_enumConstantMap_8571.method_searchKey (enumerator_9114.current_mValue (HERE), joker_9501, var_associatedTypeList_9534, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9534.getter_count (SOURCE_FILE ("instruction-switch.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_8910.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_9114.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_9114.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 267)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 266)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9534.getter_count (SOURCE_FILE ("instruction-switch.galgas", 268)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_8910.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 268)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_9114.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9114.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_9534.getter_count (SOURCE_FILE ("instruction-switch.galgas", 271)).objectCompare (enumerator_8910.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 271)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9534.getter_count (SOURCE_FILE ("instruction-switch.galgas", 274)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_9114.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9114.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (var_associatedTypeList_9534.getter_count (SOURCE_FILE ("instruction-switch.galgas", 273)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_10258 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_10298 (var_associatedTypeList_9534, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_10373 (enumerator_8910.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_10298.hasCurrentObject () && enumerator_10373.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_10373.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_10298.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_10373.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_10373.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10298.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_9084.operator_and (GALGAS_bool (kIsNotEqual, enumerator_10373.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_10832 = GALGAS_string ("extractedValue_").add_operation (enumerator_10373.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (enumerator_10373.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)) ;
                      var_extractedAssociatedValuesForGeneration_9026.addAssign_operation (enumerator_10298.current_mEntry (HERE), var_cppName_10832, var_associatedValueIndex_10258.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_10373.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10373.current_mExtractedValueName (HERE), enumerator_10298.current_mEntry (HERE), var_cppName_10832, var_cppName_10832, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10373.current_mExtractedValueName (HERE), enumerator_10298.current_mEntry (HERE), var_cppName_10832, var_cppName_10832, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_10258.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 292)) ;
                  enumerator_10298.gotoNextObject () ;
                  enumerator_10373.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_9114.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_9114.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).add_operation (extensionGetter_definition (var_switchExpression_8135.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
      }
      var_firstConstant_9084 = GALGAS_bool (false) ;
      enumerator_9114.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_12014 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 306)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 307)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 308)), enumerator_8910.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_12014, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_8910.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 313)) ;
    }
    var_switchBranchesForGeneration_8808.addAssign_operation (enumerator_8910.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_9026, enumerator_8910.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)), var_instructionList_12014  COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)) ;
    enumerator_8910.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 316)) ;
  }
  GALGAS_stringset var_forgottenConstants_12351 = var_enumConstantMap_8571.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 318)).substract_operation (var_constantsNamedInSwitchInstruction_8665, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_12351.getter_count (SOURCE_FILE ("instruction-switch.galgas", 319)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_12490 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_12506 (var_forgottenConstants_12351, kENUMERATION_UP) ;
      while (enumerator_12506.hasCurrentObject ()) {
        var_s_12490.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_12506.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
        enumerator_12506.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_12490, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 325)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_8135.readProperty_mResultType (), var_switchExpression_8135, var_switchBranchesForGeneration_8808  COMMA_SOURCE_FILE ("instruction-switch.galgas", 328))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 328)) ;
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
  GALGAS_string var_switchVar_14662 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_14662, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 371)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_14662, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 378)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 378)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 379)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 379)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 380)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_14990 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_14990.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_15035 (enumerator_14990.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_15035.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)).add_operation (enumerator_15035.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 383)) ;
      enumerator_15035.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 385)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 386)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_14990.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 387)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_15390 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)).add_operation (enumerator_14990.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)) ;
        GALGAS_string var_varPtr_15550 = GALGAS_string ("extractPtr_").add_operation (enumerator_14990.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_15390, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (var_varPtr_15550, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (var_type_15390, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (var_switchVar_14662, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 391)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_15742 (enumerator_14990.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_15742.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_15742.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (enumerator_15742.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (var_varPtr_15550, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (enumerator_15742.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)) ;
          enumerator_15742.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_14990.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 406)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)) ;
    }
    enumerator_14990.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 409)) ;
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
  cEnumerator_actualParameterListAST enumerator_2910 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2910.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2910.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 68)) ;
    enumerator_2910.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_type_3719 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 84)) ;
  GALGAS_formalParameterSignature var_routineSignature_3865 ;
  GALGAS_bool var_hasCompilerArgument_3887 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_3719, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 86)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_3865, var_hasCompilerArgument_3887, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 86)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4331 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_3.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 94)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 94)), var_routineSignature_3865, temp_4.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4331, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 88)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_4331, var_hasCompilerArgument_3887  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 102))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 102)) ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 128)) ;
  GALGAS_stringlist var_parameterCppNameList_5557 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 130)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5601 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
  GALGAS_stringlist var_inputVariableList_5653 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5695 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5695.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5988 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5695.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5601, var_inputVariableList_5653, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5988, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
    var_parameterCppNameList_5557.addAssign_operation (var_parameterCppName_5988  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 142)) ;
    enumerator_5695.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 145)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 145)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 145)) ;
  cEnumerator_stringlist enumerator_6271 (var_parameterCppNameList_5557, kENUMERATION_UP) ;
  while (enumerator_6271.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6271.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 148)) ;
    if (enumerator_6271.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 149)) ;
    }
    enumerator_6271.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5557.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 153)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 154)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 156)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5557.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 158)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 153)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_7109 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-var-declaration.galgas", 172)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7109, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 169)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7157 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 179)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 179)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 179)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 179)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_7109.readProperty_mResultType (), var_targetVariableCppName_7157, var_targetVariableCppName_7157, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 180)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_7109.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_7157, var_expression_7109  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 188))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 188)) ;
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
  GALGAS_unifiedTypeMapEntry joker_8159 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_8159, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 201)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_8896 = extensionGetter_searchKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 217)) ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8953 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 218)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 218)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 218)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 218)) ;
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_8896, var_targetVariableCppName_8953, var_targetVariableCppName_8953, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 219)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_8896, var_targetVariableCppName_8953  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 226))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 226)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 250)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 251)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 71)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 72)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 73)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_4066 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_4094 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_4121 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_4066, var_messageExpression_4094, var_fixitListForGeneration_4121, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_4066, var_messageExpression_4094, var_fixitListForGeneration_4121  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
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
  GALGAS_string var_receiverCppVarName_5490 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_5490, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 133)) ;
  GALGAS_string var_messageCppVarName_5697 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5697, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 135)) ;
  GALGAS_string var_fixItArrayCppName_5946 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_5946, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 143)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (var_receiverCppVarName_5490, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)).add_operation (var_messageCppVarName_5697, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 155)).add_operation (var_fixItArrayCppName_5946, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 155)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 156)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 156)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 356)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 357)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 358)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 359)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 367)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_14223 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 387)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_14223, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 384)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_14252 = var_receiverExpression_14223.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_14400 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_14441 (extensionGetter_definition (var_receiverType_14252, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 397)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_3 = var_found_14400.operator_not (SOURCE_FILE ("instruction-with.galgas", 397)).isValidAndTrue () ;
      if (enumerator_14441.hasCurrentObject () && bool_3) {
        while (enumerator_14441.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_14400 = GALGAS_bool (kIsEqual, enumerator_14441.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_14441.gotoNextObject () ;
          if (enumerator_14441.hasCurrentObject ()) {
            bool_3 = var_found_14400.operator_not (SOURCE_FILE ("instruction-with.galgas", 397)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_14400.operator_not (SOURCE_FILE ("instruction-with.galgas", 400)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 401)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 401)).add_operation (extensionGetter_definition (var_receiverType_14252, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 402)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 402)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 402)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 401)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_15148 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 409)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_15148, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 406)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15148.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15148.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 418)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15148.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15148.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 422)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_15789 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 426)).getter_string (SOURCE_FILE ("instruction-with.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 426)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_14252, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 428)).operator_not (SOURCE_FILE ("instruction-with.galgas", 428)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_14252, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 432)) ;
  }
  GALGAS_localConstantList var_localConstantList_16281 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 434)) ;
  cEnumerator_typedPropertyList enumerator_16364 (extensionGetter_definition (var_receiverType_14252, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16364.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_16281.addAssign_operation (enumerator_16364.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_16364.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)), temp_23.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 438)), GALGAS_bool (true), var_objectArrayCppName_15789.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (enumerator_16364.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440))  COMMA_SOURCE_FILE ("instruction-with.galgas", 436)) ;
    enumerator_16364.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_16281.addAssign_operation (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 444)), GALGAS_lstring::constructor_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)), temp_25.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 445)), GALGAS_bool (true), var_objectArrayCppName_15789.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447))  COMMA_SOURCE_FILE ("instruction-with.galgas", 443)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_17381 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_16281, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 454)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 455)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_17381, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_17832 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 467)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 468)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 469)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_17832, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 462)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_14223, var_objectArrayCppName_15789, var_keyExpression_15148, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_17381, var_else_5F_instructionList_17832  COMMA_SOURCE_FILE ("instruction-with.galgas", 477))  COMMA_SOURCE_FILE ("instruction-with.galgas", 477)) ;
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
  GALGAS_semanticExpressionForGeneration var_keyExpression_19178 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 501)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_19178, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 498)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19178.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 509)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19178.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 511)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 511)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 511)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19178.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19178.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 515)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 515)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 515)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 514)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_19819 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)).getter_string (SOURCE_FILE ("instruction-with.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_19975 ;
  GALGAS_string var_receiverVariableCppName_20000 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_20150 ;
        GALGAS_bool var_unused_0_20193 ;
        GALGAS_bool var_propertiesAreMutable_20243 ;
        const bool optionalResult20104 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20150, var_unused_0_20193, var_propertiesAreMutable_20243) ;
        if (!optionalResult20104) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_20000 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
              var_targetType_19975 = var_selfType_20150 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_20440 = extensionGetter_definition (var_selfType_20150, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 531)).readProperty_mPropertyMap () ;
            GALGAS_bool var_isConstant_20548 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_AccessControl joker_20540 ; // Joker input parameter
            var_propertyMap_20440.method_searchKey (temp_15.readProperty_mReceiverName (), joker_20540, var_isConstant_20548, var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 532)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_20548.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 534)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = var_propertiesAreMutable_20243.operator_not (SOURCE_FILE ("instruction-with.galgas", 535)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 536)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_20000 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 538)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 539)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 542)) ;
        var_targetType_19975.drop () ; // Release error dropped variable
        var_receiverVariableCppName_20000.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_21261 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_19975, var_receiverVariableCppName_20000, joker_21261, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 545)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_21283 (temp_26.readProperty_mFieldList (), kENUMERATION_UP) ;
  while (enumerator_21283.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21320 = extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 553)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_21410 ;
    GALGAS_bool var_isConstant_21429 ;
    var_propertyMap_21320.method_searchKey (enumerator_21283.current_mValue (HERE), var_accessControl_21410, var_isConstant_21429, var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)) ;
    extensionMethod_checkSetAccess (var_accessControl_21410, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_21283.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 555)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isConstant_21429.boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_21283.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 560)) ;
      }
    }
    enumerator_21283.gotoNextObject () ;
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 564)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 564)).operator_not (SOURCE_FILE ("instruction-with.galgas", 564)).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_readWriteAccessWithInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 565)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 565)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 565)), fixItArray31  COMMA_SOURCE_FILE ("instruction-with.galgas", 565)) ;
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_readWriteAccessWithInstructionAST temp_33 = this ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_bool var_found_22115 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_22156 (extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 570)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_34 = var_found_22115.operator_not (SOURCE_FILE ("instruction-with.galgas", 570)).isValidAndTrue () ;
      if (enumerator_22156.hasCurrentObject () && bool_34) {
        while (enumerator_22156.hasCurrentObject () && bool_34) {
          const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
          var_found_22115 = GALGAS_bool (kIsEqual, enumerator_22156.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_22156.gotoNextObject () ;
          if (enumerator_22156.hasCurrentObject ()) {
            bool_34 = var_found_22115.operator_not (SOURCE_FILE ("instruction-with.galgas", 570)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_found_22115.operator_not (SOURCE_FILE ("instruction-with.galgas", 573)).boolEnum () ;
        if (kBoolTrue == test_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_38 = this ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_38.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)).add_operation (extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)), fixItArray39  COMMA_SOURCE_FILE ("instruction-with.galgas", 574)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 578)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_22692 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 580)) ;
  cEnumerator_typedPropertyList enumerator_22767 (extensionGetter_definition (var_targetType_19975, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 581)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_22767.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_41 = this ;
    var_localInitializedVariableList_22692.addAssign_operation (enumerator_22767.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_40.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_22767.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)), temp_41.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 584)), var_objectArrayCppName_19819.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 585)).add_operation (enumerator_22767.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 585))  COMMA_SOURCE_FILE ("instruction-with.galgas", 582)) ;
    enumerator_22767.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_42 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 591)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = this ;
  temp_42.addAssign_operation (extensionGetter_searchKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 588)), GALGAS_lstring::constructor_new (temp_43.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 589)), temp_44.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 589)), GALGAS_bool (true), var_objectArrayCppName_19819.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 591))  COMMA_SOURCE_FILE ("instruction-with.galgas", 591)) ;
  GALGAS_localConstantList var_localConstantList_23076 = temp_42 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_23773 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_23076, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 599)), var_localInitializedVariableList_22692, temp_45.readProperty_m_5F_do_5F_Instructions (), temp_46.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_23773, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 593)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_24182 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 612)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 613)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 614)), temp_47.readProperty_m_5F_else_5F_Instructions (), temp_48.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_24182, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 607)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_49.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 620)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (temp_50.readProperty_mInstructionLocation (), var_receiverVariableCppName_20000, var_targetType_19975, temp_51.readProperty_mFieldList (), var_objectArrayCppName_19819, var_keyExpression_19178, temp_52.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_23773, var_else_5F_instructionList_24182  COMMA_SOURCE_FILE ("instruction-with.galgas", 622))  COMMA_SOURCE_FILE ("instruction-with.galgas", 622)) ;
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
  GALGAS_string var_receiverVarCppName_26821 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_26821, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 674)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_26850 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_27089 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_27089, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 683)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_26850, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 691)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 691)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 692)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 692)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26850, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 693)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 693)).add_operation (var_receiverVarCppName_26821, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 694)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 694)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 691)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_27089, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 696)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 696)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_27089, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 698)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 698)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26850, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 700)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 698)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 703)) COMMA_SOURCE_FILE ("instruction-with.galgas", 703)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 705)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26850, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 705)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 708)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 716)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 717)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 718)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 727)) ;
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
  GALGAS_string var_receiverCppName_29172 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_29227 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_29227.hasCurrentObject ()) {
    var_receiverCppName_29172.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_29227.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 741)) ;
    enumerator_29227.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_29539 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_29539, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 744)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 752)) COMMA_SOURCE_FILE ("instruction-with.galgas", 752)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 753)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 754)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 755)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 755)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 756)).add_operation (var_receiverCppName_29172, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 757)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 755)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 759)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 759)).add_operation (var_keyVarCppName_29539, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 759)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)).add_operation (var_keyVarCppName_29539, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 761)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 762)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (GALGAS_string ("if (nullptr != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 764)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 767)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 775)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 776)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 777)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 786)) ;
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
  GALGAS_uint var_nonTerminalSymbolIndex_4701 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4724 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4701, joker_4724, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 105)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4701  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 106))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 106)) ;
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
  GALGAS_nonterminalLabelMap var_labelMap_5876 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_5876, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 132)) ;
  GALGAS_formalParameterSignature var_signature_5918 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_5918 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 135)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_6039 ; // Joker input parameter
    GALGAS_location joker_6053 ; // Joker input parameter
    var_labelMap_5876.method_searchKey (temp_3.readProperty_mLabelName (), joker_6039, var_signature_5918, joker_6053, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 137)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6486 ;
  {
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_5.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 146)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 146)), var_signature_5918, temp_6.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6486, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 140)) ;
  }
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_6486, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 193)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 194))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 189))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 189)) ;
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
    GALGAS_nonterminalInstructionForGeneration var_si_8804 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_8804.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_8804.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 207)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8804.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 209)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 209)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 208)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_9145 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9145.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_9145.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 213)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 213)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)) ;
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
  GALGAS_stringlist var_parameterCppNameList_10145 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 237)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10189 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 238)) ;
  GALGAS_stringlist var_inputVariableList_10241 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 239)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_10283 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_10283.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10576 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_10283.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10189, var_inputVariableList_10241, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10576, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 241)) ;
    var_parameterCppNameList_10145.addAssign_operation (var_parameterCppName_10576  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 250)) ;
    enumerator_10283.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_10683 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (var_sdtResultVarName_10683, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 257)) ;
  cEnumerator_stringlist enumerator_11048 (var_parameterCppNameList_10145, kENUMERATION_UP) ;
  while (enumerator_11048.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11048.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 259)) ;
    enumerator_11048.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_10683.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 262)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 265)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 265)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_10683, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)) ;
  cEnumerator_stringlist enumerator_11585 (var_jokerParametersToReleaseList_10189, kENUMERATION_UP) ;
  while (enumerator_11585.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11585.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 274)) ;
    enumerator_11585.gotoNextObject () ;
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
  GALGAS_uint var_addedNonTerminalIndex_3962 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 93)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4048 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 95)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4048, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 96)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_4374 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_4048  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 103)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4494 (temp_1.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_4494.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4534 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 106)) ;
    {
    routine_transformInstructionList (enumerator_4494.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4534, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 107)) ;
    }
    var_repeatBranchList_4374.addAssign_operation (var_syntaxInstructionList_4534  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 114)) ;
    enumerator_4494.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_4374, var_addedNonTerminalIndex_3962  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117)) ;
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
  GALGAS_uint var_choiceIndex_5937 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 144)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 146)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_6487 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_6487, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 148)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6586 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 166)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6664 (temp_2.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_6664.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_7116 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6664.current_mSyntaxInstructionList (HERE), enumerator_6664.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7116, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 168)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6586.addAssign_operation (var_instructionList_7116, enumerator_6664.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 185)) ;
    enumerator_6664.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 188)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5937, var_repeated_5F_instructionList_6487, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_6586  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190)) ;
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
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_8673 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 220)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_8784 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 221)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8900 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8900.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8784.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8900.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 224)), enumerator_8900.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 223)) ;
    enumerator_8900.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_8673, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_8784  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228)) ;
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
    GALGAS_repeatInstructionForGeneration var_si_9853 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9853.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_9853.readProperty_m_5F_repeated_5F_instructionList (), var_si_9853.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 247)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 248)).objectCompare (var_si_9853.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 248)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 248)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_9853.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 251)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 250)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 251)).add_operation (var_si_9853.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 253)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 252)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 249)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10644 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10723 (var_si_9853.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_10644.hasCurrentObject () && enumerator_10723.hasCurrentObject () && bool_7) {
        while (enumerator_10644.hasCurrentObject () && enumerator_10723.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_10644.current_mInstructionList (HERE), enumerator_10723.current_mInstructionList (HERE), enumerator_10723.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)) ;
          enumerator_10644.gotoNextObject () ;
          enumerator_10723.gotoNextObject () ;
          if (enumerator_10644.hasCurrentObject () && enumerator_10723.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_10954 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10954.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_10954.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 261)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 268)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
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
  GALGAS_string var_repeatFlagCppName_11951 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_11951, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 287)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 287)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_11951, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 288)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 288)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 289)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 297)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 298)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)) ;
      const GALGAS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)).add_operation (GALGAS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)) ;
      const GALGAS_repeatInstructionForGeneration temp_5 = this ;
      GALGAS_semanticInstructionListForGeneration var_instructionList_12715 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, var_instructionList_12715, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_11951, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)) ;
    const GALGAS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 315)) ;
    const GALGAS_repeatInstructionForGeneration temp_8 = this ;
    cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13388 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
    GALGAS_uint index_13366 ((uint32_t) 0) ;
    while (enumerator_13388.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_13366.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_13388.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 318)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
      enumerator_13388.gotoNextObject () ;
      index_13366.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_11951, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 330)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)) ;
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
  GALGAS_uint var_addedNonTerminalIndex_3633 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 87)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_3719 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 89)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3801 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_3801.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_3841 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 91)) ;
    {
    routine_transformInstructionList (enumerator_3801.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3841, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 92)) ;
    }
    var_selectBranchList_3719.addAssign_operation (var_syntaxInstructionList_3841  COMMA_SOURCE_FILE ("instruction-select.galgas", 99)) ;
    enumerator_3801.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_3719, var_addedNonTerminalIndex_3633  COMMA_SOURCE_FILE ("instruction-select.galgas", 102))  COMMA_SOURCE_FILE ("instruction-select.galgas", 102)) ;
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
  GALGAS_uint var_choiceIndex_5245 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 128)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 130)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5393 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 132)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5515 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_5515.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_5967 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5515.current_mSyntaxInstructionList (HERE), enumerator_5515.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5967, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 134)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5393.addAssign_operation (var_instructionList_5967, enumerator_5515.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 151)) ;
    enumerator_5515.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 154)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5245, var_listOfSemanticInstructionListForGeneration_5393  COMMA_SOURCE_FILE ("instruction-select.galgas", 155))  COMMA_SOURCE_FILE ("instruction-select.galgas", 155)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7319 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 180)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7435 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7435.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7319.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7435.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 183)), enumerator_7435.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 182)) ;
    enumerator_7435.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_7319  COMMA_SOURCE_FILE ("instruction-select.galgas", 186))  COMMA_SOURCE_FILE ("instruction-select.galgas", 186)) ;
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
    GALGAS_selectInstructionForGeneration var_si_8318 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_8318.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 204)).objectCompare (var_si_8318.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 204)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 204)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8318.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 207)).getter_string (SOURCE_FILE ("instruction-select.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 206)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 207)).add_operation (var_si_8318.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 209)).getter_string (SOURCE_FILE ("instruction-select.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 208)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 205)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8918 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9005 (var_si_8318.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_8918.hasCurrentObject () && enumerator_9005.hasCurrentObject () && bool_6) {
        while (enumerator_8918.hasCurrentObject () && enumerator_9005.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_8918.current_mInstructionList (HERE), enumerator_9005.current_mInstructionList (HERE), enumerator_9005.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 214)) ;
          enumerator_8918.gotoNextObject () ;
          enumerator_9005.gotoNextObject () ;
          if (enumerator_8918.hasCurrentObject () && enumerator_9005.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_9236 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9236.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9236.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 217)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_selectInstructionForGeneration temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 221)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 224)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_selectInstructionForGeneration temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 225)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 240)) COMMA_SOURCE_FILE ("instruction-select.galgas", 240)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 254)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 254)) ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 255)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 255)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 255)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 255)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11134 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_11112 ((uint32_t) 0) ;
  while (enumerator_11134.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_11112.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).getter_string (SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11134.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 266)) ;
    enumerator_11134.gotoNextObject () ;
    index_11112.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 256)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 268)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 270)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                 const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                 GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_terminalSymbolIndex_6498 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_6520 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (nullptr != objectArray_6520) {
      macroValidSharedObject (objectArray_6520, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_6498 = objectArray_6520->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_6498 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 146)) ;
    {
    const GALGAS_terminalCheckInstruction temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_6498, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 147)) ;
    }
  }
  const GALGAS_terminalCheckInstruction temp_2 = this ;
  const GALGAS_terminalCheckInstruction temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_6498  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
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
  GALGAS_lexicalSentValueList var_sentAttributeList_7933 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_7933, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 174)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 176)).objectCompare (var_sentAttributeList_7933.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstruction temp_3 = this ;
      const GALGAS_terminalCheckInstruction temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_7933.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 179)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstruction temp_7 = this ;
      const GALGAS_terminalCheckInstruction temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 182)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 178)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 178)).add_operation (var_sentAttributeList_7933.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 178)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 178)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 178)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 179)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 179)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 181)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 180)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 177)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_8455 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 185)) ;
  const GALGAS_terminalCheckInstruction temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_8542 (temp_12.readProperty_mActualInputParameterList (), kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_8640 (var_sentAttributeList_7933, kENUMERATION_UP) ;
  while (enumerator_8542.hasCurrentObject () && enumerator_8640.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_8542.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_8640.current_mLexicalType (HERE), enumerator_8640.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_8455, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsNotEqual, enumerator_8640.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8542.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_8640.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_8542.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_8640.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 196)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 196)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 196)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 196)) ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_8640.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 197)) ;
      }
    }
    enumerator_8542.gotoNextObject () ;
    enumerator_8640.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9216 (temp_18.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_9216.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9216.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 202)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 202)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9216.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9216.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 203)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 203)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 203)) ;
      }
    }
    enumerator_9216.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
  const GALGAS_terminalCheckInstruction temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)) ;
  const GALGAS_terminalCheckInstruction temp_23 = this ;
  const GALGAS_terminalCheckInstruction temp_24 = this ;
  const GALGAS_terminalCheckInstruction temp_25 = this ;
  const GALGAS_terminalCheckInstruction temp_26 = this ;
  const GALGAS_terminalCheckInstruction temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_8455, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 220))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 220)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 256)), temp_3.readProperty_mIndexingKeyList (), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 258)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 259))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)) ;
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
    GALGAS_terminalCheckInstructionForGeneration var_si_12260 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_12260.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_12260.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 271)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_12260.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 273)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 273)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 272)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_12600 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_12600.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_12600.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 277)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 277)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 276)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_13650 (temp_0.readProperty_mTerminalCheckAssignementList (), kENUMERATION_UP) ;
  while (enumerator_13650.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_13650.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_13650.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13650.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (enumerator_13650.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)) ;
    enumerator_13650.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_14087 (temp_2.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_14087.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 311)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (C_Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14087.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 313)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_14087.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)) ;
    enumerator_14087.gotoNextObject () ;
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
  routine_transformInstructionList (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 94)) ;
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_5259 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 125)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_5259, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 122)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_5259.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5259.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 133)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 133)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 133)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 134)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 134)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 134)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 132)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_5888 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 140)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_5888, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 137)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_5888.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5259.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 148)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 148)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 148)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 147)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 153)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_6744 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6744, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 155)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 173)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_5259, var_while_5F_expression_5888, var_instructionList_6744  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 175))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 175)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 200)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 214)) ;
  }
  GALGAS_string var_variantVarCppName_8880 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_8880, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 216)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_8880, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 218)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 218)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 219)) ;
  }
  GALGAS_string var_variantVar_9041 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 220)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9041, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)).add_operation (var_variantVarCppName_8880, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)) ;
  GALGAS_string var_loopVar_9253 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 224)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 225)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9253, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_9253, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 228)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9253.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)) ;
  GALGAS_string var_whileVarCppName_9671 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_9671, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 230)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_9671, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9253.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_9041.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 234)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 255)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 253)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
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
  GALGAS_syntaxInstructionList var_syntaxInstructionList_3655 ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  GALGAS_location joker_3677 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_3655, joker_3677, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 88)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_3655, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 90)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_4814 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 119)) ;
  GALGAS_uint var_referenceSelectMethodCount_4918 = ioArgument_ioSelectMethodCount ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4997 (temp_0.readProperty_mParseRewindBranchList (), kENUMERATION_UP) ;
  while (enumerator_4997.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_4918 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_5113 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 123)) ;
    cEnumerator_syntaxInstructionList enumerator_5181 (enumerator_4997.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5181.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_5181.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_5113, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 125)) ;
      enumerator_5181.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_4814.addAssign_operation (var_instructionList_5113, enumerator_4997.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 141)) ;
    enumerator_4997.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_5818 = var_listOfSemanticInstructionListForGeneration_4814 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_5920 ;
  {
  GALGAS_location joker_5936 ; // Joker input parameter
  var_tempListOfBranches_5818.setter_popFirst (var_instructionList_5920, joker_5936, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 145)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_5984 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_5920, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 146)) ;
  GALGAS_bool var_ok_6078 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6112 (var_tempListOfBranches_5818, kENUMERATION_UP) ;
  bool bool_1 = var_ok_6078.isValidAndTrue () ;
  if (enumerator_6112.hasCurrentObject () && bool_1) {
    while (enumerator_6112.hasCurrentObject () && bool_1) {
      var_ok_6078 = function_compareSyntaxSignature (var_referenceSignature_5984, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_6112.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)), enumerator_6112.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 149)) ;
      enumerator_6112.gotoNextObject () ;
      if (enumerator_6112.hasCurrentObject ()) {
        bool_1 = var_ok_6078.isValidAndTrue () ;
      }
    }
  }
  const GALGAS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_4814  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 156))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 156)) ;
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
  GALGAS_semanticInstructionListForGeneration var_instructionList_7480 ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  GALGAS_location joker_7496 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_7480, joker_7496, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 178)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_7480, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 193)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 193)) ;
  }
  GALGAS_string var_parsingContextVar_8205 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 194)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_8205, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)) ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8459 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8459.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_8459.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 199)) ;
    }
    if (enumerator_8459.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (var_parsingContextVar_8205, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)) ;
    }
    enumerator_8459.gotoNextObject () ;
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
  routine_transformInstructionList (temp_0.readProperty_mElseInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 164)) ;
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_8189 ;
  const GALGAS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 195)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_when_5F_expression_8189, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 192)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 202)) ;
  }
  GALGAS_uint var_localSelectMethodCount_8304 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_8736 ;
  {
  const GALGAS_parseWhenInstruction temp_1 = this ;
  const GALGAS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_8304, var_when_5F_instructionListForGeneration_8736, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 205)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_9177 ;
  {
  const GALGAS_parseWhenInstruction temp_3 = this ;
  const GALGAS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_9177, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 223)) ;
  }
  {
  const GALGAS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 241)) ;
  }
  const GALGAS_parseWhenInstruction temp_6 = this ;
  GALGAS_bool var_ok_9336 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_8736, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 244)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_9177, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 245)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 243)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_ok_9336.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_8189, var_when_5F_instructionListForGeneration_8736, var_else_5F_instructionListForGeneration_9177  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 250))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 250)) ;
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
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 275)) ;
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
  GALGAS_string var_sourceVar_11598 ;
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_11598, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 289)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_11598, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 290)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 290)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 291)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 299)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_2.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 300)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                              const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                              GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                              GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
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
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_syntaxSendInstruction temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 83)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_4082 ;
  const GALGAS_syntaxSendInstruction temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4082, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 86)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expression_4082.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_syntaxSendInstruction temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
    }
  }
  const GALGAS_syntaxSendInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), var_expression_4082  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 100))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 100)) ;
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
  GALGAS_string var_sourceVar_5522 ;
  const GALGAS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_5522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 125)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 127)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 127)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_5522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 128)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 128)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 128)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)).add_operation (GALGAS_string (" += "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)).add_operation (var_sourceVar_5522, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 128)) ;
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
  result_result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 33)) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_1836 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1836.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_1836.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 35)) ;
    enumerator_1836.gotoNextObject () ;
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
  cEnumerator_semanticInstructionListForGeneration enumerator_2914 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2958 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_2914.hasCurrentObject () && enumerator_2958.hasCurrentObject () && bool_0) {
    while (enumerator_2914.hasCurrentObject () && enumerator_2958.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2914.current_mInstruction (HERE).ptr (), enumerator_2958.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
      enumerator_2914.gotoNextObject () ;
      enumerator_2958.gotoNextObject () ;
      if (enumerator_2914.hasCurrentObject () && enumerator_2958.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outOk.operator_and (GALGAS_bool (kIsStrictInf, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 64)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 64)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 64)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_semanticInstructionForGeneration var_instruction_3223 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 65)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_syntaxInstructionForGeneration var_si_3318 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3223.ptr ())) ;
        if (nullptr == var_si_3318.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3318.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 67)) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = result_outOk.operator_and (GALGAS_bool (kIsStrictSup, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
        GALGAS_semanticInstructionForGeneration var_instruction_3857 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_syntaxInstructionForGeneration var_si_3952 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3857.ptr ())) ;
          if (nullptr == var_si_3952.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3952.readProperty_mInstructionLocation (), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 79)) ;
          }
        }
        if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 82)) ;
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
//Routine 'groupSyntaxComponentsGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33_ (const GALGAS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                              const GALGAS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                              GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_componentNameSet_1294 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("syntaxCompilation.galgas", 23)) ;
  cEnumerator_galgas_33_SyntaxComponentListAST enumerator_1335 (constinArgument_inAllSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_1335.hasCurrentObject ()) {
    var_componentNameSet_1294.addAssign_operation (enumerator_1335.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 25)) ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1431 = enumerator_1335.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GALGAS_syntaxRuleListAST var_ruleList_1506 = enumerator_1335.current (HERE).readProperty_mRuleList () ;
    cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1576 (constinArgument_inSyntaxExtensions.getter_listForKey (enumerator_1335.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string () COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 28)), kENUMERATION_UP) ;
    while (enumerator_1576.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1431.plusAssign_operation(enumerator_1576.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 29)) ;
      var_ruleList_1506.plusAssign_operation(enumerator_1576.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 30)) ;
      enumerator_1576.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssign_operation (GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool (false), enumerator_1335.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1335.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1431, var_ruleList_1506, enumerator_1335.current (HERE).readProperty_mHasTranslateFeature ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32))  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32)) ;
    enumerator_1335.gotoNextObject () ;
  }
  cEnumerator_syntaxExtensions enumerator_2080 (constinArgument_inSyntaxExtensions, kENUMERATION_UP) ;
  while (enumerator_2080.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_componentNameSet_1294.getter_hasKey (enumerator_2080.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 42)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 42)).boolEnum () ;
      if (kBoolTrue == test_0) {
        cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2196 (enumerator_2080.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_2196.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2196.current_mSyntaxComponentName (HERE).readProperty_location (), GALGAS_string ("there is no '").add_operation (enumerator_2196.current_mSyntaxComponentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)).add_operation (GALGAS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)) ;
          enumerator_2196.gotoNextObject () ;
        }
      }
    }
    enumerator_2080.gotoNextObject () ;
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
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("grammarCompilation.galgas", 21)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_1307 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_1307.hasCurrentObject ()) {
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_1362 = GALGAS_signatureForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 23)) ;
    cEnumerator_formalParameterListAST enumerator_1452 (enumerator_1307.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_1452.hasCurrentObject ()) {
      var_formalParametersList_1362.addAssign_operation (enumerator_1452.current_mFormalArgumentPassingMode (HERE), enumerator_1452.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 25)) ;
      enumerator_1452.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_1307.current_mLabelName (HERE), var_formalParametersList_1362, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 27)) ;
    }
    enumerator_1307.gotoNextObject () ;
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
//Routine 'checkLabelMap'
//
//--------------------------------------------------------------------------------------------------

void routine_checkLabelMap (const GALGAS_location constinArgument_inNonTerminalLocation,
                            const GALGAS_nonTerminalLabelListAST constinArgument_inLabels,
                            const GALGAS_location constinArgument_inOriginalNonTerminalLocation,
                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                            Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_labelStringSet_2082 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("grammarCompilation.galgas", 42)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2140 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2140.hasCurrentObject ()) {
    var_labelStringSet_2082.addAssign_operation (enumerator_2140.current_mLabelName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 44)) ;
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2277 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2140.current_mLabelName (HERE), var_formalParametersList_2277, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 45)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_2140.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 46)).objectCompare (var_formalParametersList_2277.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 46)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_2140.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 49)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_formalParametersList_2277.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 53)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2140.current_mLabelName (HERE).readProperty_location (), enumerator_2140.current_mFormalArgumentList (HERE).getter_count (SOURCE_FILE ("grammarCompilation.galgas", 47)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 47)).add_operation (GALGAS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 47)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 48)).add_operation (GALGAS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 49)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2140.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 51)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 50)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 51)).add_operation (var_formalParametersList_2277.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 52)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 47)) ;
      }
    }
    if (kBoolFalse == test_0) {
      cEnumerator_formalParameterListAST enumerator_2907 (enumerator_2140.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      cEnumerator_signatureForGrammarAnalysis enumerator_2980 (var_formalParametersList_2277, kENUMERATION_UP) ;
      while (enumerator_2907.hasCurrentObject () && enumerator_2980.hasCurrentObject ()) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, enumerator_2980.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_2907.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_2980.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared with '").add_operation (extensionGetter_string (enumerator_2980.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)).add_operation (GALGAS_string ("' passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2140.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 61)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (GALGAS_string (" is declared with '"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 61)).add_operation (extensionGetter_string (enumerator_2907.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)).add_operation (GALGAS_string ("' passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 57)) ;
          }
        }
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, enumerator_2980.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().objectCompare (enumerator_2907.current_mFormalArgumentTypeName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_2980.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_location (), GALGAS_string (" this formal parameter is declared of '@").add_operation (enumerator_2980.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)).add_operation (GALGAS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2140.current_mLabelName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (GALGAS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (enumerator_2907.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 65)) ;
          }
        }
        enumerator_2907.gotoNextObject () ;
        enumerator_2980.gotoNextObject () ;
      }
    }
    enumerator_2140.gotoNextObject () ;
  }
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4085 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4085.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_labelStringSet_2082.getter_hasKey (enumerator_4085.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("grammarCompilation.galgas", 77)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 77)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GALGAS_string ("this non terminal does not declare the '").add_operation (enumerator_4085.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 79)).add_operation (GALGAS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 79)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 79)).add_operation (GALGAS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)) ;
      }
    }
    enumerator_4085.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarations'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarations (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                            const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_nonterminalDeclarationListAST enumerator_4750 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_4750.hasCurrentObject ()) {
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_4798 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_4750.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_4798) {
        macroValidSharedObject (objectArray_4798, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_4750.current_mNonterminalName (HERE).readProperty_location (), enumerator_4750.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_4750.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 96)), objectArray_4798->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 93)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_4750.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 102)), function_transformLabelMap (enumerator_4750.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 100)) ;
      }
    }
    enumerator_4750.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNonTerminalDeclarationsFromRuleList'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNonTerminalDeclarationsFromRuleList (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                        const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxRuleListAST enumerator_5595 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_5595.hasCurrentObject ()) {
    GALGAS_nonTerminalLabelListAST var_nonTerminalLabelListAST_5632 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 115)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_5748 (enumerator_5595.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_5748.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_5632.addAssign_operation (enumerator_5748.current_mLabelName (HERE), enumerator_5748.current_mFormalArguments (HERE), enumerator_5748.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 117)) ;
      enumerator_5748.gotoNextObject () ;
    }
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_5892 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5595.current_mNonterminalName (HERE).readProperty_string ()) ;
    if (nullptr != objectArray_5892) {
        macroValidSharedObject (objectArray_5892, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_5595.current_mNonterminalName (HERE).readProperty_location (), var_nonTerminalLabelListAST_5632, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5595.current_mNonterminalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 126)), objectArray_5892->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 123)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5595.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 132)), function_transformLabelMap (var_nonTerminalLabelListAST_5632, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 130)) ;
      }
    }
    enumerator_5595.gotoNextObject () ;
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
//Routine 'transformInstructionList'
//
//--------------------------------------------------------------------------------------------------

void routine_transformInstructionList (const GALGAS_syntaxInstructionList constinArgument_inInstructionList,
                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxInstructionList enumerator_8097 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_8097.hasCurrentObject ()) {
    callExtensionMethod_transformInstruction ((cPtr_syntaxInstructionAST *) enumerator_8097.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 167)) ;
    enumerator_8097.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildRuleList'
//
//--------------------------------------------------------------------------------------------------

void routine_buildRuleList (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                            const GALGAS_lstring constinArgument_inSyntaxComponentName,
                            const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                            GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                            GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                            GALGAS_uint & ioArgument_ioAddedNonTerminalCount,
                            Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis var_productionRulesList_8875 = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 185)) ;
  cEnumerator_syntaxRuleListAST enumerator_8962 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_8962.hasCurrentObject ()) {
    GALGAS_uint var_nonTerminalIndex_9064 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_9081 ; // Joker input parameter
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_8962.current_mNonterminalName (HERE), var_nonTerminalIndex_9064, joker_9081, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 187)) ;
    GALGAS_syntaxInstructionList var_parsedSyntaxInstructionList_9166 ;
    GALGAS_lstring joker_9216 ; // Joker input parameter
    GALGAS_formalParameterListAST joker_9219 ; // Joker input parameter
    GALGAS_location joker_9222 ; // Joker input parameter
    GALGAS_location joker_9254 ; // Joker input parameter
    enumerator_8962.current_mLabelList (HERE).method_first (joker_9216, joker_9219, joker_9222, var_parsedSyntaxInstructionList_9166, joker_9254, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 190)) ;
    GALGAS_syntaxInstructionListForGrammarAnalysis var_instructionList_9300 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 192)) ;
    {
    routine_transformInstructionList (var_parsedSyntaxInstructionList_9166, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9300, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 193)) ;
    }
    var_productionRulesList_8875.addAssign_operation (enumerator_8962.current_mNonterminalName (HERE), var_nonTerminalIndex_9064, var_instructionList_9300, var_productionRulesList_8875.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 205))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 201)) ;
    enumerator_8962.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssign_operation (var_productionRulesList_8875, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 207)) ;
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
  result += "//--------------------------------------------------------------------------------------------------\n//  GRAMMAR " ;
  result += in_GRAMMAR_5F_NAME.stringValue () ;
  result += "\n//--------------------------------------------------------------------------------------------------\n\nclass cGrammar_" ;
  result += in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue () ;
  result += " : " ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_331_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    cEnumerator_lstringlist enumerator_331 (in_SYNTAX_5F_COMPONENTS, kENUMERATION_UP) ;
    while (enumerator_331.hasCurrentObject ()) {
      result += "public cParser_" ;
      result += enumerator_331.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue () ;
      if (enumerator_331.hasNextObject ()) {
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_331_.increment () ;
      enumerator_331.gotoNextObject () ;
    }
  }
  result += " {\n" ;
  GALGAS_uint index_503_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_503 (in_NON_5F_TERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_503.hasCurrentObject ()) {
      result += "//------------------------------------- '" ;
      result += enumerator_503.current_lkey (HERE).readProperty_string ().stringValue () ;
      result += "' non terminal\n//--- 'parse' label\n  public: virtual void nt_" ;
      result += enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue () ;
      result += "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_0) {
        result += "String & " ;
        result += function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue () ;
        result += ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
      }
      result += "C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " * inCompiler) ;\n\n//--- indexing\n  public: virtual void nt_" ;
      result += enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 23)).stringValue () ;
      result += "_indexing (C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " * inCompiler) ;\n\n" ;
      GALGAS_uint index_1118_ (0) ;
      if (enumerator_503.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1118 (enumerator_503.current_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
        while (enumerator_1118.hasCurrentObject ()) {
          result += "//----------- '" ;
          result += enumerator_1118.current_lkey (HERE).readProperty_string ().stringValue () ;
          result += "' label\n  public: virtual void nt_" ;
          result += enumerator_503.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue () ;
          result += "_" ;
          result += enumerator_1118.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue () ;
          result += " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1438_IDX (0) ;
          if (enumerator_1118.current_mFormalParametersList (HERE).isValid ()) {
            cEnumerator_signatureForGrammarAnalysis enumerator_1438 (enumerator_1118.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
            while (enumerator_1438.hasCurrentObject ()) {
              const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1438.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)))).boolEnum () ;
              if (kBoolTrue == test_1) {
                result += "const GALGAS_" ;
                result += enumerator_1438.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue () ;
                result += " inArgument" ;
                result += index_1438_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 30)).stringValue () ;
              }else if (kBoolFalse == test_1) {
                const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1438.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  result += "GALGAS_" ;
                  result += enumerator_1438.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
                  result += " & ioArgument" ;
                  result += index_1438_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
                }else if (kBoolFalse == test_2) {
                  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1438.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                  if (kBoolTrue == test_3) {
                    result += "GALGAS_" ;
                    result += enumerator_1438.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                    result += " & outArgument" ;
                    result += index_1438_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                  }else if (kBoolFalse == test_3) {
                    result += "GALGAS_" ;
                    result += enumerator_1438.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                    result += " inArgument" ;
                    result += index_1438_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                  }
                }
              }
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1438_IDX.increment () ;
              enumerator_1438.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_4) {
            result += "String & " ;
            result += function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 41)).stringValue () ;
            result += ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_4) {
          }
          result += "C_Lexique_" ;
          result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result += " * inCompiler) ;\n\n" ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            result += "//--- Start symbol\n  public: static void _performSourceFileParsing_" ;
            result += enumerator_1118.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)).stringValue () ;
            result += " (" ;
            columnMarker = result.currentColumn () ;
            result += "Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_6 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_6) {
              result += "String & " ;
              result += function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 50)).stringValue () ;
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_6) {
            }
            result += "GALGAS_lstring inFileName" ;
            GALGAS_uint index_2951_IDX (0) ;
            if (enumerator_1118.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_2951 (enumerator_1118.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_2951.hasCurrentObject ()) {
                result += ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2951.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 55)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result += "const GALGAS_" ;
                  result += enumerator_2951.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue () ;
                  result += " inArgument" ;
                  result += index_2951_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 56)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2951.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result += "GALGAS_" ;
                    result += enumerator_2951.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                    result += " & ioArgument" ;
                    result += index_2951_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_2951.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      result += "GALGAS_" ;
                      result += enumerator_2951.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                      result += " & outArgument" ;
                      result += index_2951_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                    }else if (kBoolFalse == test_9) {
                      result += "GALGAS_" ;
                      result += enumerator_2951.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                      result += " inArgument" ;
                      result += index_2951_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                    }
                  }
                }
                index_2951_IDX.increment () ;
                enumerator_2951.gotoNextObject () ;
              }
            }
            result += "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += "COMMA_LOCATION_ARGS) ;\n\n  public: static void _performSourceStringParsing_" ;
            result += enumerator_1118.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 66)).stringValue () ;
            result += " (" ;
            columnMarker = result.currentColumn () ;
            result += "Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_10) {
              result += "String & " ;
              result += function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 69)).stringValue () ;
              result += ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_10) {
            }
            result += "GALGAS_string inSourceString,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += "GALGAS_string inNameString" ;
            GALGAS_uint index_4308_IDX (0) ;
            if (enumerator_1118.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_4308 (enumerator_1118.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_4308.hasCurrentObject ()) {
                result += ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_4308.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 75)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  result += "const GALGAS_" ;
                  result += enumerator_4308.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue () ;
                  result += " inArgument" ;
                  result += index_4308_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 76)).stringValue () ;
                }else if (kBoolFalse == test_11) {
                  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_4308.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    result += "GALGAS_" ;
                    result += enumerator_4308.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                    result += " & ioArgument" ;
                    result += index_4308_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                  }else if (kBoolFalse == test_12) {
                    const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4308.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      result += "GALGAS_" ;
                      result += enumerator_4308.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                      result += " & outArgument" ;
                      result += index_4308_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                    }else if (kBoolFalse == test_13) {
                      result += "GALGAS_" ;
                      result += enumerator_4308.current_mGalgasTypeNameForGrammarAnalysis (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                      result += " inArgument" ;
                      result += index_4308_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                    }
                  }
                }
                index_4308_IDX.increment () ;
                enumerator_4308.gotoNextObject () ;
              }
            }
            result += "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result += "COMMA_LOCATION_ARGS) ;\n\n" ;
          }else if (kBoolFalse == test_5) {
          }
          index_1118_.increment () ;
          enumerator_1118.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_503.current_lkey (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_14) {
        result += "//--- Indexing\n  public: static void performIndexing (" ;
        columnMarker = result.currentColumn () ;
        result += "Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "const String & inSourceFilePath) ;\n\n//--- Only lexical analysis\n  public: static void performOnlyLexicalAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result += "Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "const String & inSourceFilePath) ;\n\n//--- Only syntax analysis\n  public: static void performOnlySyntaxAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result += "Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result += "const String & inSourceFilePath) ;\n\n" ;
      }else if (kBoolFalse == test_14) {
      }
      index_503_.increment () ;
      enumerator_503.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5855_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_nonTerminalToAddList enumerator_5855 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5855.hasCurrentObject ()) {
      result += "  public: virtual int32_t select_" ;
      result += enumerator_5855.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue () ;
      result += "_" ;
      result += enumerator_5855.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 103)).stringValue () ;
      result += " (C_Lexique_" ;
      result += in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result += " *) ;\n" ;
      if (enumerator_5855.hasNextObject ()) {
        result += "\n" ;
      }
      index_5855_.increment () ;
      enumerator_5855.gotoNextObject () ;
    }
  }
  result += "} ;\n\n//--------------------------------------------------------------------------------------------------\n" ;
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
  result += "%!TEX encoding = UTF-8 Unicode\n\n\\documentclass[landscape]{book}\n\\usepackage[a3paper]{geometry}\n\n\\usepackage{verbatim}\n\n\\usepackage{hyperref}\n\n\\usepackage{tikz}\n\n\\usetikzlibrary{\n  arrows,\n  shapes.misc,% wg. rounded rectangle\n  shapes.arrows,%\n  matrix,%\n  scopes,%\n  shadows%\n}\n\n\\tikzset{\n  nonterminal/.style={\n    % The shape:\n    rectangle,\n    % The size:\n    minimum size=6mm,\n    % The border:\n    very thick,\n    draw=red!50!black!50,         % 50% red and 50% black,\n                                  % and that mixed with 50% white\n    % The filling:\n    top color=white,              % a shading that is white at the top...\n    bottom color=red!50!black!20, % and something else at the bottom\n    % Font\n    font=\\itshape\\small\n  },\n  terminal/.style={\n    % The shape:\n    rounded rectangle,\n    minimum size=6mm,\n    % The rest\n    very thick,draw=black!50,\n    top color=white,bottom color=black!20,\n    font=\\ttfamily\\small\n  },\n  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n  point/.style={coordinate,>=stealth',thick,draw=black!50},\n  tip/.style={->,shorten >=0.007pt},\n  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n  every join/.style={rounded corners}\n}\n\n\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n\\newcommand\\ruleMatrixColumnSeparation{3mm}\n\\newcommand\\ruleMatrixRowSeparation{3mm}\n\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n\n\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\nonTerminalSummarySeparator{, }\n\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n\n\\begin{document}\n\n\\title{\\Huge{Grammar \\texttt{" ;
  result += in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue () ;
  result += "}}}\n\\date \\today \n\n\\maketitle\n\n\\input{" ;
  result += in_DOCUMENT_5F_NAME.stringValue () ;
  result += ".tex}\n\n\\end{document}\n" ;
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
  cEnumerator_range enumerator_1808 (GALGAS_range (GALGAS_uint (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 32)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 32))), kENUMERATION_UP) ;
  while (enumerator_1808.hasCurrentObject ()) {
    GALGAS_char var_c_1821 = constinArgument_inString.getter_characterAtIndex (enumerator_1808.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 33)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (95)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_result.plusAssign_operation(GALGAS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 35)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (123)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result.plusAssign_operation(GALGAS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 37)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (125)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_result.plusAssign_operation(GALGAS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 39)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (38)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 41)) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (35)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                result_result.plusAssign_operation(GALGAS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 43)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (36)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  result_result.plusAssign_operation(GALGAS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 45)) ;
                }
              }
              if (kBoolFalse == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    result_result.plusAssign_operation(GALGAS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 47)) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (37)))).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      result_result.plusAssign_operation(GALGAS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 49)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_8 = kBoolTrue ;
                    if (kBoolTrue == test_8) {
                      test_8 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (126)))).boolEnum () ;
                      if (kBoolTrue == test_8) {
                        result_result.plusAssign_operation(GALGAS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 51)) ;
                      }
                    }
                    if (kBoolFalse == test_8) {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = GALGAS_bool (kIsEqual, var_c_1821.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          result_result.plusAssign_operation(GALGAS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 53)) ;
                        }
                      }
                      if (kBoolFalse == test_9) {
                        result_result.plusAssign_operation(var_c_1821.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 55)) ;
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
    enumerator_1808.gotoNextObject () ;
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
//Routine 'emitProductionRulesInTexFile'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile (const GALGAS_string constinArgument_inProductDirectory,
                                           const GALGAS_string constinArgument_inGrammarComponentName,
                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                           const GALGAS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                           const GALGAS_lstring constinArgument_inStartSymbol,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_texDocumentFilePath_2916 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)).add_operation (GALGAS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)) ;
  var_texDocumentFilePath_2916.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 71)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 71)) ;
  GALGAS_string var_document_3093 = GALGAS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 74)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 72))) ;
  GALGAS_bool joker_3302 ; // Joker input parameter
  var_document_3093.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_2916, joker_3302, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 76)) ;
  GALGAS_string var_texFilePath_3312 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (GALGAS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)) ;
  GALGAS_string var_s_3398 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_startSymbolIndex_3473 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3490 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3473, joker_3490, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 79)) ;
  var_s_3398.plusAssign_operation(GALGAS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (var_startSymbolIndex_3473.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)) ;
  var_s_3398.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3643 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_3643.hasCurrentObject ()) {
    var_s_3398.plusAssign_operation(GALGAS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3643.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (enumerator_3643.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)) ;
    if (enumerator_3643.hasNextObject ()) {
      var_s_3398.plusAssign_operation(GALGAS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)) ;
    }
    enumerator_3643.gotoNextObject () ;
  }
  var_s_3398.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3905 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_3905.hasCurrentObject ()) {
    var_s_3398.plusAssign_operation(GALGAS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_3905.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (enumerator_3905.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)) ;
    cEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4087 (constinArgument_inSyntaxComponentListForGrammarAnalysis, kENUMERATION_UP) ;
    while (enumerator_4087.hasCurrentObject ()) {
      cEnumerator_productionRuleListForGrammarAnalysis enumerator_4174 (enumerator_4087.current (HERE).readProperty_mProductionRulesList (), kENUMERATION_UP) ;
      while (enumerator_4174.hasCurrentObject ()) {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsEqual, enumerator_4174.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_3905.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4174.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 92)).boolEnum () ;
              if (kBoolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4174.current (HERE), enumerator_4087.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3398, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 93)) ;
              }
            }
            if (kBoolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4174.current (HERE), enumerator_4087.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3398, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)) ;
            }
          }
        }
        enumerator_4174.gotoNextObject () ;
      }
      enumerator_4087.gotoNextObject () ;
    }
    enumerator_3905.gotoNextObject () ;
  }
  GALGAS_bool joker_4655 ; // Joker input parameter
  var_s_3398.method_writeToFileWhenDifferentContents (var_texFilePath_3312, joker_4655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 101)) ;
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
  GALGAS_string var_nodeName_11801 ;
  {
  const GALGAS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 319)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (var_nodeName_11801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)) ;
  ioArgument_ioCurrentNode = var_nodeName_11801 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 328)) ;
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
  GALGAS_string var_nodeDefinition_12438 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 344)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 344)) ;
  GALGAS_string var_nodeName_12702 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_12438, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12702, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 345)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (var_nodeName_12702, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)) ;
  ioArgument_ioCurrentNode = var_nodeName_12702 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
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
      GALGAS_string var_markerStartNodeName_13513 ;
      {
      const GALGAS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 372)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 372)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 372)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_13513, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 371)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (var_markerStartNodeName_13513, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_13513 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 380)) ;
    }
  }
  GALGAS_string var_startNodeName_13856 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_13856, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 383)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 384)) ;
  const GALGAS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GALGAS_branchListForGrammarAnalysis var_branches_13916 = temp_2.readProperty_mSelectBranchList () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_14019 ;
  {
  var_branches_13916.setter_popFirst (var_brancheZero_14019, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 387)) ;
  }
  GALGAS_uint var_branchZeroColumn_14038 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_14072 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_14019, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_14038, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_14072, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 390)) ;
  GALGAS_uint var_endColumn_14333 = var_branchZeroColumn_14038 ;
  GALGAS_stringlist var_endingNodes_14410 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 402)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_14443 (var_branches_13916, kENUMERATION_UP) ;
  while (enumerator_14443.hasCurrentObject ()) {
    var_maxUsedRowIndex_14072.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 404)) ;
    GALGAS_uint var_branchColumn_14488 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_14520 = var_startNodeName_13856 ;
    GALGAS_string var_arrowStyle_14556 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_14443.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_maxUsedRowIndex_14072, var_branchColumn_14488, var_currentNode_14520, var_arrowStyle_14556, ioArgument_ioArrows, var_maxUsedRowIndex_14072, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 408)) ;
    var_endingNodes_14410.addAssign_operation (var_currentNode_14520  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictInf, var_endColumn_14333.objectCompare (var_branchColumn_14488)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_endColumn_14333 = var_branchColumn_14488 ;
      }
    }
    enumerator_14443.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_14333 ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_14072)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_14072 ;
    }
  }
  GALGAS_string var_endNodeName_15191 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_15191, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 428)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (var_endNodeName_15191, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)) ;
  ioArgument_ioCurrentNode = var_endNodeName_15191 ;
  cEnumerator_stringlist enumerator_15397 (var_endingNodes_14410, kENUMERATION_UP) ;
  while (enumerator_15397.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_15397.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (var_endNodeName_15191, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)) ;
    enumerator_15397.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_markerEndNodeName_15701 ;
      {
      const GALGAS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 440)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 440)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 440)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_15701, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 439)) ;
      }
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 445)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (var_markerEndNodeName_15701, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_15701 ;
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
      GALGAS_string var_markerStartNodeName_16531 ;
      {
      const GALGAS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 466)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_16531, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 465)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (var_markerStartNodeName_16531, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_16531 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 474)) ;
    }
  }
  GALGAS_string var_returnNodeName_16875 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_16875, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 478)) ;
  const GALGAS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GALGAS_branchListForGrammarAnalysis var_branches_16936 = temp_2.readProperty_mRepeatBranchList () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_17039 ;
  {
  var_branches_16936.setter_popFirst (var_brancheZero_17039, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 481)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_17058 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_17039, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_17058, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 483)) ;
  GALGAS_uint var_endColumn_17311 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_17451 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_17451, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 495)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 496)) ;
  GALGAS_bool var_oneEmptyBranch_17553 = GALGAS_bool (kIsEqual, var_branches_16936.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 498)).objectCompare (GALGAS_uint (uint32_t (1U)))) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_oneEmptyBranch_17553.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_17642 ;
      var_branches_16936.method_first (var_firstBranch_17642, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 500)) ;
      var_oneEmptyBranch_17553 = GALGAS_bool (kIsEqual, var_firstBranch_17642.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 501)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
  }
  GALGAS_stringlist var_endingNodes_17745 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 504)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_oneEmptyBranch_17553.boolEnum () ;
    if (kBoolTrue == test_4) {
      var_endingNodes_17745.addAssign_operation (var_startNodeName_17451  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 506)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_uint var_nextBranchUsedRowIndex_17836 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_17885 (var_branches_16936, kENUMERATION_UP) ;
    while (enumerator_17885.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_17836.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 510)) ;
      GALGAS_uint var_branchColumn_17941 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_17975 = var_startNodeName_17451 ;
      GALGAS_string var_arrowStyle_18013 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_17885.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_nextBranchUsedRowIndex_17836, var_branchColumn_17941, var_currentNode_17975, var_arrowStyle_18013, ioArgument_ioArrows, var_nextBranchUsedRowIndex_17836, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 514)) ;
      var_endingNodes_17745.addAssign_operation (var_currentNode_17975  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 524)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictInf, var_endColumn_17311.objectCompare (var_branchColumn_17941)).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_endColumn_17311 = var_branchColumn_17941 ;
        }
      }
      enumerator_17885.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_17311 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_17836 ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_17058)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_17058 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 536)) ;
  GALGAS_string var_returnUpperNodeName_18847 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_18847, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)) ;
  }
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 539)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_18847, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (var_returnNodeName_16875, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)) ;
  cEnumerator_stringlist enumerator_19005 (var_endingNodes_17745, kENUMERATION_UP) ;
  while (enumerator_19005.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_19005.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (var_returnUpperNodeName_18847, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)) ;
    enumerator_19005.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string var_markerEndNodeName_19317 ;
      {
      const GALGAS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 548)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 548)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 548)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_19317, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 547)) ;
      }
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 553)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (var_markerEndNodeName_19317, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_19317 ;
    }
  }
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
  result += "#include \"project_header.h\"\n#include \"command_line_interface/F_mainForLIBPM.h\"\n#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n#include \"command_line_interface/C_builtin_CLI_Options.h\"\n#include \"galgas2/C_galgas_CLI_Options.h\"\n#include \"galgas2/F_verbose_output.h\"\n#include \"galgas2/cLexiqueIntrospection.h\"\n#include \"utilities/F_DisplayException.h\"\n" ;
  GALGAS_uint index_402_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_402 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_402.hasCurrentObject ()) {
      result += "#include \"" ;
      result += enumerator_402.current_mValue (HERE).stringValue () ;
      result += ".h\"\n" ;
      index_402_.increment () ;
      enumerator_402.gotoNextObject () ;
    }
  }
  result += "\n//--------------------------------------------------------------------------------------------------\n//\n//                      print_tool_help_message                                                  \n//\n//--------------------------------------------------------------------------------------------------\n\nstatic void print_tool_help_message (void) {\n  gCout += \"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileExtensions [] = {\n" ;
  GALGAS_uint index_1199_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1199 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1199.hasCurrentObject ()) {
      result += "  " ;
      result += enumerator_1199.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 27)).stringValue () ;
      result += ",\n" ;
      index_1199_.increment () ;
      enumerator_1199.gotoNextObject () ;
    }
  }
  result += "  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileHelpMessages [] = {\n" ;
  GALGAS_uint index_1632_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1632 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1632.hasCurrentObject ()) {
      result += "  " ;
      result += enumerator_1632.current_mSourceFileHelp (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 37)).stringValue () ;
      result += ",\n" ;
      index_1632_.increment () ;
      enumerator_1632.gotoNextObject () ;
    }
  }
  result += "  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nconst char * projectVersionString (void) {\n  return " ;
  result += in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 45)).stringValue () ;
  result += " ;\n}\n\n" ;
  result += in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue () ;
  result += "//--------------------------------------------------------------------------------------------------\n//\n//                      M A I N    F O R    L I B P M                                            \n//\n//--------------------------------------------------------------------------------------------------\n\nint mainForLIBPM (int inArgc, const char * inArgv []) {\n//--- Analyze Command Line Options\n  TC_UniqueArray <String> sourceFilesArray ;\n  F_Analyze_CLI_Options (inArgc, inArgv,\n                         sourceFilesArray,\n                         kSourceFileExtensions,\n                         kSourceFileHelpMessages,\n                         print_tool_help_message) ;\n//---\n  int returnCode = 0 ; // No error\n//--- Set Execution mode\n  String executionModeOptionErrorMessage ;\n  setExecutionMode (executionModeOptionErrorMessage) ;\n  if (executionModeOptionErrorMessage.length () > 0) {\n    gCout += executionModeOptionErrorMessage ;\n    returnCode = 1 ;\n  }else{\n  //--- Common lexique object\n    Compiler * commonCompiler = nullptr ;\n    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;\n    try{\n      routine_before (commonCompiler COMMA_HERE) ;\n      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n      const bool verboseOptionOn = verboseOutput () ;\n      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;\n        const GALGAS_location location = commonCompiler->here () ;\n        const GALGAS_lstring sourceFilePath (sfp, location) ;\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_PROGRAM_5F_RULE_5F_LIST.getter_count (SOURCE_FILE ("program-file.cpp.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result += "        int r = 0 ;\n        " ;
    GALGAS_uint index_3931_IDX (0) ;
    if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_programRuleList enumerator_3931 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3931.hasCurrentObject ()) {
        result += "if (fileExtension == " ;
        result += enumerator_3931.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 89)).stringValue () ;
        result += ") {\n" ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3931.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          result += "          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_" ;
          result += GALGAS_string ("programRule_").add_operation (index_3931_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 93)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 93)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 93)).stringValue () ;
          result += " (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeIndexing :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeLatex :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          }\n" ;
        }else if (kBoolFalse == test_1) {
          result += "          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_" ;
          result += GALGAS_string ("programRule_").add_operation (index_3931_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 111)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 111)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 111)).stringValue () ;
          result += " (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            cGrammar_" ;
          result += enumerator_3931.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 114)).stringValue () ;
          result += "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            cGrammar_" ;
          result += enumerator_3931.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 117)).stringValue () ;
          result += "::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeIndexing :\n            cGrammar_" ;
          result += enumerator_3931.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 120)).stringValue () ;
          result += "::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeLatex :\n            cGrammar_" ;
          result += enumerator_3931.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 123)).stringValue () ;
          result += "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          }\n" ;
        }
        if (enumerator_3931.hasNextObject ()) {
          result += "        }else " ;
        }
        index_3931_IDX.increment () ;
        enumerator_3931.gotoNextObject () ;
      }
    }
    result += "        }else{\n          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;\n          r = 1 ;\n        }\n        if (r != 0) {\n          returnCode = r ;\n        }\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result += "      }\n    //--- Error or warnings \?\n      if (totalErrorCount () > 0) {\n        returnCode = 1 ; // Error code\n      }else if (totalWarningCount () > 0) {\n        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n          returnCode = 1 ; // Error code\n          if (verboseOptionOn) {\n            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n          }\n        }\n      }\n    //--- Epilogue\n      routine_after (commonCompiler COMMA_HERE) ;\n    //--- Emit JSON issue file \?\n      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n      }\n    //--- Display error and warnings count\n      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n        String message ;\n        if (totalWarningCount () == 0) {\n          message += \"No warning\" ;\n        }else if (totalWarningCount () == 1) {\n          message += \"1 warning\" ;\n        }else{\n          message.appendSigned (totalWarningCount ()) ;\n          message += \" warnings\" ;\n        }\n        message += \", \" ;\n        if (totalErrorCount () == 0) {\n          message += \"no error\" ;\n        }else if (totalErrorCount () == 1) {\n          message += \"1 error\" ;\n        }else{\n          message.appendSigned (totalErrorCount ()) ;\n          message += \" errors\" ;\n        }\n        message += \".\\n\" ;\n        ggs_printMessage (message COMMA_HERE) ;\n      }\n    }catch (const ::std::exception & e) {\n      F_default_display_exception (e) ;\n      returnCode = 1 ; // Error code\n    }catch (...) {\n      printf (\"**** Unknow exception ****\\n\") ;\n      throw ;\n    }\n    macroDetachSharedObject (commonCompiler) ;\n  }\n  return returnCode ;\n}\n\n" ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                            const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_2697 = function_beforeNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 52)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2697, var_usefulnessName_2697, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 53)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_2697  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 54)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_2907 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 56)) ;
  cEnumerator_prologueEpilogueList enumerator_3011 (constinArgument_inPrologueList, kENUMERATION_UP) ;
  while (enumerator_3011.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_3508 ;
    {
    GALGAS_formalParameterListForGeneration joker_3556 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_2697, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 63)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 64)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 65)), enumerator_3011.current_mInstructionList (HERE), enumerator_3011.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_3508, joker_3556, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 58)) ;
    }
    var_semanticInstructionListForGeneration_2907.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_3508  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71)) ;
    enumerator_3011.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-before"), GALGAS_string ("before"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 80)), GALGAS_bool (true), var_semanticInstructionListForGeneration_2907  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 76))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 75)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                            const GALGAS_programRuleList constinArgument_inProgramRules,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_ruleIndex_4745 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_programRuleList enumerator_4864 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_4864.hasCurrentObject ()) {
    GALGAS_lstring var_usefulnessName_4916 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4864.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 102)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4916, var_usefulnessName_4916, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 103)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_4916  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 104)) ;
    GALGAS_formalParameterListAST temp_0 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 110)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas", 106)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas", 107)), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 108)), enumerator_4864.current_mSourceFileVariableName (HERE), enumerator_4864.current_mSourceFileVariableNameIsUnused (HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 110)) ;
    GALGAS_formalParameterListAST var_argumentList_5142 = temp_0 ;
    GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_5728 ;
    GALGAS_formalParameterListForGeneration var_routineSignature_5776 ;
    {
    routine_analyzeRoutineBody (var_usefulnessName_4916, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_5142, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 118)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 119)), enumerator_4864.current_mInstructionList (HERE), enumerator_4864.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_5728, var_routineSignature_5776, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 112)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-programrule"), GALGAS_string ("programRule_").add_operation (var_ruleIndex_4745.getter_string (SOURCE_FILE ("programComponentCompilation.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 129)), var_routineSignature_5776, GALGAS_bool (true), var_semanticInstructionListForGeneration_5728  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 126))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 125)) ;
    var_ruleIndex_4745.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 134)) ;
    enumerator_4864.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                           const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                           GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_6861 = function_afterNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6861, var_usefulnessName_6861, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 153)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_6861  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 154)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_7107 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 156)) ;
  cEnumerator_prologueEpilogueList enumerator_7173 (constinArgument_inEpilogueList, kENUMERATION_UP) ;
  while (enumerator_7173.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_7720 ;
    {
    GALGAS_formalParameterListForGeneration joker_7768 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_6861, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 163)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 165)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 166)), enumerator_7173.current_mInstructionList (HERE), enumerator_7173.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_7720, joker_7768, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 158)) ;
    }
    var_semanticInstructionListForGeneration_7107.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_7720  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172)) ;
    enumerator_7173.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-after"), GALGAS_string ("after"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 179)), GALGAS_bool (true), var_semanticInstructionListForGeneration_7107  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
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
  GALGAS_analysisContext var_analysisContext_9120 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 205)), GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("programComponentCompilation.galgas", 207)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 203)) ;
  GALGAS_programListForGeneration var_decoratedDeclarationListForGeneration_9416 = GALGAS_programListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 212)) ;
  {
  routine_compileBeforeClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9120, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_9416, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 213)) ;
  }
  {
  routine_compileAfterClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9120, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_9416, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 222)) ;
  }
  {
  routine_compileProgramRulesGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_9120, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_9416, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 231)) ;
  }
  GALGAS_stringset var_inclusionSet_10162 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("programComponentCompilation.galgas", 240)) ;
  GALGAS_string var_beforeAfterRulesString_10186 = GALGAS_string::makeEmptyString () ;
  cEnumerator_programListForGeneration enumerator_10221 (var_decoratedDeclarationListForGeneration_9416, kENUMERATION_UP) ;
  while (enumerator_10221.hasCurrentObject ()) {
    var_beforeAfterRulesString_10186.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_10221.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 243)) ;
    GALGAS_string var_code_10442 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_10221.current_mDeclaration (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_10162, var_code_10442, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 244)) ;
    var_beforeAfterRulesString_10186.plusAssign_operation(var_code_10442, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 245)) ;
    enumerator_10221.gotoNextObject () ;
  }
  cEnumerator_programRuleList enumerator_10524 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_10524.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_10524.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_inclusionSet_10162.addAssign_operation (GALGAS_string ("grammar-").add_operation (enumerator_10524.current_mReferenceGrammar (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 249))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 249)) ;
      }
    }
    enumerator_10524.gotoNextObject () ;
  }
  GALGAS_string var_cppContents_10690 = GALGAS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GALGAS_string ("program"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 254)), var_beforeAfterRulesString_10186, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 252))) ;
  outArgument_outProgramComponentForGeneration = GALGAS_programComponentForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("program"), var_inclusionSet_10162, var_cppContents_10690  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 260)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'parseAndAnalyzeProject'
//
//--------------------------------------------------------------------------------------------------

void routine_parseAndAnalyzeProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                     const GALGAS_bool constinArgument_inGalgas_34_,
                                     const GALGAS_string constinArgument_inSourceToAnalyze,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println (GALGAS_string ("*** Parsing project files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 157)) ;
      }
    }
  }
  GALGAS_galgas_33_ProjectComponentAST var_projectComponentAST_7333 ;
  var_projectComponentAST_7333.drop () ;
  cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFile, var_projectComponentAST_7333  COMMA_SOURCE_FILE ("galgasProgram.galgas", 159)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_compileProject (constinArgument_inProjectSourceFile, constinArgument_inSourceToAnalyze, constinArgument_inGalgas_34_, var_projectComponentAST_7333, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 161)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 163)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_cppCompilationTarget_7582 = GALGAS_string (gOption_galgas_5F_cli_5F_options_cppCompile.readProperty_value ()) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, var_cppCompilationTarget_7582.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 166)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  routine_println (GALGAS_string ("*** Perform C++ compilation"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 167)) ;
                  }
                }
              }
              GALGAS_string var_buildFile_7809 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 169)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 169)).add_operation (var_cppCompilationTarget_7582, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 169)).add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 169)) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_buildFile_7809.getter_fileExists (SOURCE_FILE ("galgasProgram.galgas", 170)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  GALGAS_sint var_resultCode_7973 = GALGAS_string ("python ").add_operation (var_buildFile_7809, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 171)).getter_system (SOURCE_FILE ("galgasProgram.galgas", 171)) ;
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GALGAS_bool (kIsNotEqual, var_resultCode_7973.objectCompare (GALGAS_sint (int32_t (0L)))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      TC_Array <C_FixItDescription> fixItArray7 ;
                      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 173)).readProperty_location (), GALGAS_string ("Running '").add_operation (var_buildFile_7809, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 173)).add_operation (GALGAS_string ("' returns "), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 173)).add_operation (var_resultCode_7973.getter_string (SOURCE_FILE ("galgasProgram.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 173)), fixItArray7  COMMA_SOURCE_FILE ("galgasProgram.galgas", 173)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_5) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasProgram.galgas", 176)).readProperty_location (), GALGAS_string ("Cannot perform C++ compilation of '").add_operation (var_cppCompilationTarget_7582, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (GALGAS_string ("' : the '"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)).add_operation (var_buildFile_7809, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 177)).add_operation (GALGAS_string ("' file does not exist"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 177)), fixItArray8  COMMA_SOURCE_FILE ("galgasProgram.galgas", 176)) ;
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
//Routine 'compileProject'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                             const GALGAS_string constinArgument_inSourceToAnalyze,
                             const GALGAS_bool constinArgument_inGalgas_34_,
                             const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                             Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST var_declarationAST_8772 = GALGAS_galgasDeclarationAST::constructor_new (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 190)) ;
  cGrammar_galgas_34_Grammar::_performSourceStringParsing_ (inCompiler, GALGAS_filewrapper (gWrapperDirectory_0_typeGenerationTemplate).getter_textFileContentsAtPath (GALGAS_string ("galgas-predefined-types.ggs"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 194)), GALGAS_string ("GALGAS predefined types"), var_declarationAST_8772  COMMA_SOURCE_FILE ("galgasProgram.galgas", 193)) ;
  cEnumerator_lstringlist enumerator_9085 (constinArgument_inProjectComponentAST.readProperty_mProjectSourceList (), kENUMERATION_UP) ;
  while (enumerator_9085.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9085.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 198)).objectCompare (GALGAS_string ("galgas"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteSourcePath_9197 = enumerator_9085.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 199)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 199)) ;
        cGrammar_galgas_33_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteSourcePath_9197, enumerator_9085.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 200)), var_declarationAST_8772  COMMA_SOURCE_FILE ("galgasProgram.galgas", 200)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_9085.current_mValue (HERE).readProperty_string ().getter_pathExtension (SOURCE_FILE ("galgasProgram.galgas", 201)).objectCompare (GALGAS_string ("ggs"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteSourcePath_9465 = enumerator_9085.current_mValue (HERE).readProperty_string ().getter_absolutePathFromPath (constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 202)) COMMA_SOURCE_FILE ("galgasProgram.galgas", 202)) ;
          cGrammar_galgas_34_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteSourcePath_9465, enumerator_9085.current_mValue (HERE).readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 203)), var_declarationAST_8772  COMMA_SOURCE_FILE ("galgasProgram.galgas", 203)) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9085.current_mValue (HERE).readProperty_location (), GALGAS_string ("only \".galgas\" or \".ggs\" extensions are allowed here"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas", 205)) ;
      }
    }
    enumerator_9085.gotoNextObject () ;
  }
  GALGAS_stringlist var_handCodedLinkToolFileList_10700 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 228)) ;
  GALGAS_stringlist var_handCodedLinkAppFileList_10749 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 229)) ;
  GALGAS_stringlist var_handCodedSourceAppFileList_10797 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 230)) ;
  GALGAS_stringlist var_handCodedSourceToolFileList_10847 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 231)) ;
  GALGAS_stringlist var_frameworkToolFileList_10898 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 232)) ;
  GALGAS_stringset var_handCodedSourceDirectorySet_10942 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 233)) ;
  cEnumerator_galgas_33_QualifiedFeatureList enumerator_10994 (constinArgument_inProjectComponentAST.readProperty_mQualifiedFeatureList (), kENUMERATION_UP) ;
  while (enumerator_10994.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("tool-source").objectCompare (enumerator_10994.current_mFeatureName (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_handCodedSourceToolFileList_10847.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 236)) ;
        GALGAS_string var_directory_11167 = enumerator_10994.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 237)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_directory_11167.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_handCodedSourceDirectorySet_10942.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 239)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsNotEqual, var_directory_11167.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 240)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_handCodedSourceDirectorySet_10942.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_11167, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 241))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 241)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_handCodedSourceDirectorySet_10942.addAssign_operation (var_directory_11167  COMMA_SOURCE_FILE ("galgasProgram.galgas", 243)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-include"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_handCodedSourceDirectorySet_10942.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 246)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-framework"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_frameworkToolFileList_10898.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 248))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 248)) ;
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("app-source"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_handCodedSourceAppFileList_10797.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 250)) ;
              GALGAS_string var_directory_11828 = enumerator_10994.current_mFeatureValue (HERE).readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 251)) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsEqual, var_directory_11828.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_handCodedSourceDirectorySet_10942.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 253)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsNotEqual, var_directory_11828.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 254)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_handCodedSourceDirectorySet_10942.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_11828, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 255))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 255)) ;
                  }
                }
                if (kBoolFalse == test_10) {
                  var_handCodedSourceDirectorySet_10942.addAssign_operation (var_directory_11828  COMMA_SOURCE_FILE ("galgasProgram.galgas", 257)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("tool-link"))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_handCodedLinkToolFileList_10700.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 260)) ;
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("app-link"))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  var_handCodedLinkAppFileList_10749.addAssign_operation (enumerator_10994.current_mFeatureValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 262)) ;
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  test_13 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("libpmAtPath"))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                  }
                }
                if (kBoolFalse == test_13) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("applicationBundleBase"))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                    }
                  }
                  if (kBoolFalse == test_14) {
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("macCodeSign"))).boolEnum () ;
                      if (kBoolTrue == test_15) {
                      }
                    }
                    if (kBoolFalse == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (kIsEqual, enumerator_10994.current_mFeatureName (HERE).readProperty_string ().objectCompare (GALGAS_string ("MacOSDeployment"))).boolEnum () ;
                        if (kBoolTrue == test_16) {
                        }
                      }
                      if (kBoolFalse == test_16) {
                        TC_Array <C_FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (enumerator_10994.current_mFeatureName (HERE).readProperty_location (), GALGAS_string ("unknown feature"), fixItArray17  COMMA_SOURCE_FILE ("galgasProgram.galgas", 268)) ;
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
    enumerator_10994.gotoNextObject () ;
  }
  {
  routine_groupSyntaxComponentsGalgas_33_ (var_declarationAST_8772.readProperty_mSyntaxComponentList (), var_declarationAST_8772.readProperty_mSyntaxExtensions (), var_declarationAST_8772.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 281)) ;
  }
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_13583 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("galgasProgram.galgas", 287)) ;
  GALGAS_string var_buildDirectoryName_13631 ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = constinArgument_inGalgas_34_.boolEnum () ;
    if (kBoolTrue == test_18) {
      var_buildDirectoryName_13631 = constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 290)).getter_stringByReplacingStringByString (GALGAS_string ("."), GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 290)).add_operation (GALGAS_string ("-build"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 290)) ;
    }
  }
  if (kBoolFalse == test_18) {
    var_buildDirectoryName_13631 = GALGAS_string ("build") ;
  }
  GALGAS_string var_absoluteBuildDirectory_13842 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 294)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 294)).add_operation (var_buildDirectoryName_13631, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 294)) ;
  GALGAS_string var_productDirectory_13956 = var_absoluteBuildDirectory_13842.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 295)) ;
  GALGAS_stringlist var_appProductFileList_14028 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 296)) ;
  GALGAS_semanticContext var_semanticContext_14075 ;
  GALGAS_unifiedTypeMap var_typeMap_14113 ;
  GALGAS_semanticDeclarationListForGeneration var_semanticDeclarationSortedListForGeneration_14165 ;
  GALGAS_lstringlist var_usefulnessRootEntities_14227 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 300)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 301)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_compileSemanticDeclarationsGalgas (var_usefulnessRootEntities_14227, var_usefulEntitiesGraph_13583, constinArgument_inGalgas_34_, var_productDirectory_13956, constinArgument_inProjectComponentAST.readProperty_mEndOfSourceFile (), var_declarationAST_8772.readProperty_mDeclarationList (), var_semanticContext_14075, var_typeMap_14113, var_semanticDeclarationSortedListForGeneration_14165, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 302)) ;
      }
    }
  }
  if (kBoolFalse == test_19) {
    var_semanticDeclarationSortedListForGeneration_14165 = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 314)) ;
    var_semanticContext_14075 = GALGAS_semanticContext::constructor_new (constinArgument_inGalgas_34_, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 315)) ;
    var_typeMap_14113 = GALGAS_unifiedTypeMap::constructor_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 316)) ;
  }
  GALGAS_optionComponentMapForGeneration var_optionComponentMapForGeneration_14860 ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 320)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_compileAllGuiComponentFromASTGalgas_33_ (var_declarationAST_8772.readProperty_mGUIComponentList (), var_semanticContext_14075, var_optionComponentMapForGeneration_14860, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 321)) ;
      }
    }
  }
  if (kBoolFalse == test_20) {
    var_optionComponentMapForGeneration_14860 = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 327)) ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 330)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string var_projectVersionString_15234 = constinArgument_inProjectComponentAST.readProperty_mMajorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 331)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 331)).add_operation (constinArgument_inProjectComponentAST.readProperty_mMinorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 332)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 332)).add_operation (constinArgument_inProjectComponentAST.readProperty_mRevisionVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 333)) ;
      GALGAS_programComponentForGeneration var_programComponentForGeneration_15763 ;
      {
      routine_compileProgramComponentGalgas_33_ (var_usefulnessRootEntities_14227, var_usefulEntitiesGraph_13583, var_declarationAST_8772.readProperty_mPrologueDeclarationList (), var_declarationAST_8772.readProperty_mSourceRuleList (), var_declarationAST_8772.readProperty_mEpilogueDeclarationList (), var_semanticContext_14075, var_typeMap_14113, var_projectVersionString_15234, var_programComponentForGeneration_15763, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 334)) ;
      }
      var_semanticDeclarationSortedListForGeneration_14165.addAssign_operation (GALGAS_string ("zprogram"), var_programComponentForGeneration_15763  COMMA_SOURCE_FILE ("galgasProgram.galgas", 345)) ;
    }
  }
  {
  routine_checkUsefulEntities (var_usefulEntitiesGraph_13583, var_usefulnessRootEntities_14227, var_productDirectory_13956, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 348)) ;
  }
  GALGAS_string var_typeDumpFilePath_16143 = constinArgument_inProjectSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 350)).add_operation (var_buildDirectoryName_13631, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 350)).add_operation (GALGAS_string ("/helpers/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)).add_operation (constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 351)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_22) {
      GALGAS_stringset var_firstLetterSet_16401 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 353)) ;
      cEnumerator_unifiedTypeMap enumerator_16435 (var_typeMap_14113, kENUMERATION_UP) ;
      while (enumerator_16435.hasCurrentObject ()) {
        var_firstLetterSet_16401.addAssign_operation (enumerator_16435.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 355)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 355))  COMMA_SOURCE_FILE ("galgasProgram.galgas", 355)) ;
        enumerator_16435.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_16543 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_16580 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_16624 (var_typeMap_14113, kENUMERATION_UP) ;
      while (enumerator_16624.hasCurrentObject ()) {
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16580.objectCompare (enumerator_16624.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 360)))).boolEnum () ;
          if (kBoolTrue == test_23) {
            var_currentFirstLetter_16580 = enumerator_16624.current_lkey (HERE).readProperty_string ().getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 361)) ;
            var_tableOfTypeString_16543.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16580.getter_uint (SOURCE_FILE ("galgasProgram.galgas", 362)).getter_string (SOURCE_FILE ("galgasProgram.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 362)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 362)).add_operation (var_currentFirstLetter_16580.getter_string (SOURCE_FILE ("galgasProgram.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 362)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 362)) ;
          }
        }
        var_tableOfTypeString_16543.plusAssign_operation(function_linkForType (enumerator_16624.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 364)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 364)) ;
        enumerator_16624.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_17001 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFile.readProperty_string ().getter_lastPathComponent (SOURCE_FILE ("galgasProgram.galgas", 367)), var_typeMap_14113, var_firstLetterSet_16401, var_tableOfTypeString_16543 COMMA_SOURCE_FILE ("galgasProgram.galgas", 366))) ;
      GALGAS_bool joker_17253 ; // Joker input parameter
      var_typeDumpString_17001.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16143, joker_17253, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 372)) ;
    }
  }
  if (kBoolFalse == test_22) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16143, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 374)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 377)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 377)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_performGalgas_33_ProjectGlobalCheckings (var_typeMap_14113, var_declarationAST_8772.readProperty_mDeclarationList (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 378)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (kIsEqual, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 384)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgasProgram.galgas", 384)).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_projectGeneration (var_typeMap_14113, var_absoluteBuildDirectory_13842, var_buildDirectoryName_13631, var_optionComponentMapForGeneration_14860, var_appProductFileList_14028, var_semanticDeclarationSortedListForGeneration_14165, var_declarationAST_8772.readProperty_mSourceRuleList (), constinArgument_inProjectComponentAST, constinArgument_inProjectSourceFile.readProperty_string (), var_handCodedSourceDirectorySet_10942, var_handCodedSourceToolFileList_10847, var_frameworkToolFileList_10898, var_handCodedSourceAppFileList_10797, var_handCodedLinkAppFileList_10749, var_handCodedLinkToolFileList_10700, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 385)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectGeneration'
//
//--------------------------------------------------------------------------------------------------

void routine_projectGeneration (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
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
  GALGAS_stringlist var_appProductFileList_19400 = constinArgument_inAppProductFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgasProgram.galgas", 430)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println (GALGAS_string ("*** Generating files"), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 431)) ;
      }
    }
  }
  GALGAS_stringset var_allProductFileSet_19592 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 433)) ;
  GALGAS_string var_userHeadersDir_19701 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/user-headers"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 435)) ;
  var_userHeadersDir_19701.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 436)) ;
  GALGAS_bool var_quietOutputByDefault_19858 = GALGAS_stringset::constructor_setWithLStringList (constinArgument_inProjectComponentAST.readProperty_mGenerationFeatureList ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 438)).getter_hasKey (GALGAS_string ("quietOutputByDefault") COMMA_SOURCE_FILE ("galgasProgram.galgas", 438)) ;
  GALGAS_string var_productDirectory_20058 = constinArgument_inAbsoluteBuildDirectory.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 440)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 444)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_generateAllGuiComponentsGalgas_33_ (constinArgument_inOptionComponentMapForGeneration, var_productDirectory_20058, var_quietOutputByDefault_19858, var_appProductFileList_19400, var_allProductFileSet_19592, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 445)) ;
      }
    }
  }
  GALGAS_stringlist var_toolCppFileList_20583 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 455)) ;
  GALGAS_stringlist var_toolHeaderFileList_20622 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgasProgram.galgas", 456)) ;
  {
  routine_generatePredefinedTypeFiles (var_productDirectory_20058, constinArgument_inSemanticDeclarationSortedListForGeneration, var_toolHeaderFileList_20622, var_toolCppFileList_20583, var_allProductFileSet_19592, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 457)) ;
  }
  {
  routine_generateSemanticDeclarationsGalgas_33_ (constinArgument_inTypeMap, var_productDirectory_20058, constinArgument_inSemanticDeclarationSortedListForGeneration, var_appProductFileList_19400, var_toolCppFileList_20583, var_toolHeaderFileList_20622, var_allProductFileSet_19592, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 464)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 475)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringset var_handledExtensionSet_21190 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 476)) ;
      cEnumerator_programRuleList enumerator_21255 (constinArgument_inSourceRuleList, kENUMERATION_UP) ;
      while (enumerator_21255.hasCurrentObject ()) {
        var_handledExtensionSet_21190.addAssign_operation (enumerator_21255.current_mSourceFileExtension (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("galgasProgram.galgas", 478)) ;
        enumerator_21255.gotoNextObject () ;
      }
      GALGAS_stringset var_ignoredFeatureSet_21401 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 481)) ;
      var_ignoredFeatureSet_21401.addAssign_operation (GALGAS_string ("tool-framework")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 482)) ;
      var_ignoredFeatureSet_21401.addAssign_operation (GALGAS_string ("tool-source")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 483)) ;
      var_ignoredFeatureSet_21401.addAssign_operation (GALGAS_string ("tool-link")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 484)) ;
      var_ignoredFeatureSet_21401.addAssign_operation (GALGAS_string ("app-source")  COMMA_SOURCE_FILE ("galgasProgram.galgas", 485)) ;
      GALGAS_projectQualifiedFeatureMap var_projectQualifiedFeatureMap_21620 = GALGAS_projectQualifiedFeatureMap::constructor_emptyMap (SOURCE_FILE ("galgasProgram.galgas", 486)) ;
      cEnumerator_galgas_33_QualifiedFeatureList enumerator_21674 (constinArgument_inProjectComponentAST.readProperty_mQualifiedFeatureList (), kENUMERATION_UP) ;
      while (enumerator_21674.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_ignoredFeatureSet_21401.getter_hasKey (enumerator_21674.current_mFeatureName (HERE).readProperty_string () COMMA_SOURCE_FILE ("galgasProgram.galgas", 488)).operator_not (SOURCE_FILE ("galgasProgram.galgas", 488)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_projectQualifiedFeatureMap_21620.setter_insertKey (enumerator_21674.current_mFeatureName (HERE), enumerator_21674.current_mFeatureValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 489)) ;
            }
          }
        }
        enumerator_21674.gotoNextObject () ;
      }
      {
      routine_updateGalgasTargets (constinArgument_inAbsoluteBuildDirectory, constinArgument_inBuildDirectoryName, constinArgument_inProjectSourceFile, constinArgument_inProjectComponentAST.readProperty_mTargetName ().readProperty_string (), constinArgument_inProjectComponentAST.readProperty_mEndOfSourceFile (), constinArgument_inProjectComponentAST.readProperty_mMajorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 501)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 501)).add_operation (constinArgument_inProjectComponentAST.readProperty_mMinorVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 501)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 501)).add_operation (constinArgument_inProjectComponentAST.readProperty_mRevisionVersion ().readProperty_bigint ().getter_string (SOURCE_FILE ("galgasProgram.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 501)), var_projectQualifiedFeatureMap_21620, constinArgument_inProjectComponentAST.readProperty_mGenerationFeatureList (), var_quietOutputByDefault_19858, var_toolCppFileList_20583, var_toolHeaderFileList_20622, var_appProductFileList_19400, constinArgument_inHandCodedSourceToolFileList, constinArgument_inFrameworkToolFileList, constinArgument_inHandCodedSourceDirectorySet, var_handledExtensionSet_21190, var_allProductFileSet_19592, constinArgument_inHandCodedSourceAppFileList, constinArgument_inHandCodedLinkAppFileList, constinArgument_inHandCodedLinkToolFileList, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas", 495)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint (uint32_t (0U)).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgasProgram.galgas", 519)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_stringset var_allActualFileSet_22905 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgasProgram.galgas", 520)) ;
      cEnumerator_stringlist enumerator_22936 (var_productDirectory_20058.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("galgasProgram.galgas", 521)), kENUMERATION_UP) ;
      while (enumerator_22936.hasCurrentObject ()) {
        var_allActualFileSet_22905.addAssign_operation (enumerator_22936.current_mValue (HERE)  COMMA_SOURCE_FILE ("galgasProgram.galgas", 522)) ;
        enumerator_22936.gotoNextObject () ;
      }
      GALGAS_stringset var_uselessFileSet_23039 = var_allActualFileSet_22905.substract_operation (var_allProductFileSet_19592, inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 524)) ;
      cEnumerator_stringset enumerator_23102 (var_uselessFileSet_23039, kENUMERATION_UP) ;
      while (enumerator_23102.hasCurrentObject ()) {
        {
        GALGAS_string::class_method_deleteFile (var_productDirectory_20058.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 526)).add_operation (enumerator_23102.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas", 526)) ;
        }
        enumerator_23102.gotoNextObject () ;
      }
    }
  }
}


