#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-26.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 175)) ;
  cEnumerator_actualParameterListAST enumerator_7320 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_7320.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7320.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 177)) ;
    enumerator_7320.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                          extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_8139 ;
  GALGAS_bool var_hasTranslateFeature_8185 ;
  GALGAS_bool joker_8147 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mGrammarMap.method_searchKey (object->mAttribute_mGrammarComponentName, var_grammarLabelMap_8139, joker_8147, var_hasTranslateFeature_8185, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 192)) ;
  GALGAS_formalParameterSignature var_labelSignature_8312 ;
  var_grammarLabelMap_8139.method_searchKey (object->mAttribute_mLabelName, var_labelSignature_8312, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 199)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_8671 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mLabelName, GALGAS_string ("label of the ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 207)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 207)), var_labelSignature_8312, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_8671, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 204)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_8900 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 216)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_8900, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceExpression_8900.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 222)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_8900.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 225)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 224)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 225)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 223)) ;
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName_9386 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mGrammarComponentName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
  GALGAS_stringlist var_assignementList_9496 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 229)) ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_8185, var_syntaxDirectedTranslationResultVarName_9386, var_assignementList_9496, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 230)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 240)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 241)), var_sourceExpression_8900, var_actualParameterListForGeneration_8671, var_hasTranslateFeature_8185, var_assignementList_9496, var_syntaxDirectedTranslationResultVarName_9386  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 238))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                   extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_10742 ;
  GALGAS_bool var_hasTranslateFeature_10788 ;
  GALGAS_bool joker_10750 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mGrammarMap.method_searchKey (object->mAttribute_mGrammarComponentName, var_grammarLabelMap_10742, joker_10750, var_hasTranslateFeature_10788, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 259)) ;
  GALGAS_formalParameterSignature var_labelSignature_10915 ;
  var_grammarLabelMap_10742.method_searchKey (object->mAttribute_mLabelName, var_labelSignature_10915, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 266)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_11274 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mLabelName, GALGAS_string ("label of the ").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 274)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 274)), var_labelSignature_10915, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_11274, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 271)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_11503 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 283)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_11503, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 282)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceExpression_11503.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 289)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_11503.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 292)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 291)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 292)), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 290)) ;
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_12052 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mNameExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 296)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_12052, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_nameExpression_12052.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 302)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfNameExpression, GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_11503.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 305)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 304)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), fixItArray3  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 303)) ;
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName_12481 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mGrammarComponentName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 308)) ;
  GALGAS_stringlist var_assignementList_12591 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 309)) ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_10788, var_syntaxDirectedTranslationResultVarName_12481, var_assignementList_12591, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 310)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 320)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-grammar.galgas", 321)), var_sourceExpression_11503, var_nameExpression_12052, var_actualParameterListForGeneration_11274, var_hasTranslateFeature_10788, var_assignementList_12591, var_syntaxDirectedTranslationResultVarName_12481  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                   extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354)) ;
  GALGAS_string var_sourceVar_14632 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceFileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_14632, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 356)) ;
  GALGAS_stringlist var_parameterCppNameList_14685 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 364)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_14738 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 365)) ;
  GALGAS_stringlist var_inputVariableList_14780 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 366)) ;
  cEnumerator_actualParameterListForGeneration enumerator_14831 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_14831.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_15110 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_14831.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_14738, var_inputVariableList_14780, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15110, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 368)) ;
    var_parameterCppNameList_14685.addAssign_operation (var_parameterCppName_15110  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 377)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_14831.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_15110.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)) ;
    }
    enumerator_14831.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 383)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 383)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 389)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 385)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 385)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 386)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 388)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 388)).add_operation (var_sourceVar_14632, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 385)) ;
  cEnumerator_stringlist enumerator_15887 (var_parameterCppNameList_14685, kEnumeration_up) ;
  while (enumerator_15887.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15887.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
    enumerator_15887.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 395)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 395)) ;
  }
  cEnumerator_stringlist enumerator_16110 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_16110.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16110.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 397)) ;
    enumerator_16110.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)) ;
  GALGAS_string var_sourceVar_17613 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_17613, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 427)) ;
  GALGAS_string var_nameVar_17826 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mNameStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_17826, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)) ;
  GALGAS_stringlist var_parameterCppNameList_17879 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 443)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_17932 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 444)) ;
  GALGAS_stringlist var_inputVariableList_17974 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 445)) ;
  cEnumerator_actualParameterListForGeneration enumerator_18025 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_18025.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_18311 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_18025.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_17932, var_inputVariableList_17974, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_18311, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 447)) ;
    var_parameterCppNameList_17879.addAssign_operation (var_parameterCppName_18311  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 456)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_18025.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_18311.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 458)) ;
    }
    enumerator_18025.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 462)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 462)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 464)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 464)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 465)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 465)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 466)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 466)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 466)).add_operation (var_sourceVar_17613, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 468)).add_operation (var_nameVar_17826, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 464)) ;
  cEnumerator_stringlist enumerator_19107 (var_parameterCppNameList_17879, kEnumeration_up) ;
  while (enumerator_19107.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19107.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
    enumerator_19107.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 474)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 474)) ;
  }
  cEnumerator_stringlist enumerator_19330 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_19330.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19330.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 476)) ;
    enumerator_19330.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                          extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_5332 ;
  GALGAS_string var_targetVariableCppName_5364 ;
  {
  GALGAS_string joker_5460 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_5332, var_targetVariableCppName_5364, joker_5460, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 162)) ;
  }
  cEnumerator_lstringlist enumerator_5495 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_5495.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_5519 = var_targetType_5332.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)) ;
    var_attributeMap_5519.method_searchKey (enumerator_5495.current_mValue (HERE), var_targetType_5332, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
    enumerator_5495.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_5332.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 171)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 171)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_5332.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName_5364, var_targetType_5332, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 176))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                   extensionMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6598 ;
  GALGAS_string var_targetVariableCppName_6630 ;
  {
  GALGAS_string joker_6726 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_6598, var_targetVariableCppName_6630, joker_6726, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)) ;
  }
  cEnumerator_lstringlist enumerator_6761 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_6761.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_6785 = var_targetType_6598.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
    var_attributeMap_6785.method_searchKey (enumerator_6761.current_mValue (HERE), var_targetType_6598, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199)) ;
    enumerator_6761.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_6598.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 205)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 205)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 205)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_6598.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 206)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName_6630, var_targetType_6598, object->mAttribute_mStructAttributeList, object->mAttribute_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_7895 ;
  GALGAS_string var_selfObjectCppName_7923 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 231)) ;
    var_selfObjectCppName_7923.drop () ; // Release error dropped variable
    var_selfTypeProxy_7895.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_7923 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_7895 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_7895.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_7895.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 238)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName_7923, var_selfTypeProxy_7895, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 246)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_9232 ;
  GALGAS_string var_selfObjectCppName_9260 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 262)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 263)) ;
    var_selfObjectCppName_9260.drop () ; // Release error dropped variable
    var_selfTypeProxy_9232.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_9260 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_9232 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_9232.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 269)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 269)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 269)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_9232.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 271)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 271)), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName_9260, var_selfTypeProxy_9232, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 278)), object->mAttribute_mKind  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@incDecInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 315)) ;
  }
  GALGAS_string var_receiverCppName_11409 = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_11461 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_11461.hasCurrentObject ()) {
    var_receiverCppName_11409.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_11461.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)) ;
    enumerator_11461.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11409.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 324)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 325)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 325)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11409.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 343)) ;
  }
  GALGAS_string var_receiverCppName_12608 = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_12660 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_12660.hasCurrentObject ()) {
    var_receiverCppName_12608.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_12660.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 346)) ;
    enumerator_12660.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12608.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_12608.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 71)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                          extensionMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inCallerEntity,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_3636 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_3636, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 88)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 94)) ;
  }
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_3867 ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression_3636, var_if_5F_expression_3867, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 96)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_4199 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 107)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 108)), object->mAttribute_m_5F_then_5F_instructionList, object->mAttribute_mEndOf_5F_then_5F_branch, ioArgument_ioVariableMap, var_then_5F_instructionList_4199, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_4534 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 119)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 120)), object->mAttribute_m_5F_else_5F_instructionList, object->mAttribute_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList_4534, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 115)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mAttribute_mEndOf_5F_then_5F_branch, var_if_5F_expression_3867, var_then_5F_instructionList_4199, var_else_5F_instructionList_4534  COMMA_SOURCE_FILE ("instruction-if.galgas", 128))  COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                   extensionMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@ifInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_cppVarName_5811 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIFexpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_5811, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
  GALGAS_string var_testVar_6004 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6004, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)).add_operation (var_cppVarName_5811, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_6004, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 167)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 167)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_m_5F_else_5F_instructionList.getter_length (SOURCE_FILE ("instruction-if.galgas", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_6004, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 177)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 177)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                            extensionMethod_ifInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineExtensionMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                          extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3870 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mOptionalTypeName, joker_3870 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
    }
  }
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationAST * object = (const cPtr_undefinedLocalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4528 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  GALGAS_string var_targetVariableCppName_4656 = GALGAS_string ("var_").add_operation (object->mAttribute_mConstantName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (object->mAttribute_mConstantName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mAttribute_mConstantName, var_targetType_4528, var_targetVariableCppName_4656, var_targetVariableCppName_4656, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4528, var_targetVariableCppName_4656  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                   extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5704 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 143)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5704, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  GALGAS_string var_targetVariableCppName_5763 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 149)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 149)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 149)).getter_string (SOURCE_FILE ("instruction-let.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 149)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVariableName, var_expression_5704.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 150)), var_targetVariableCppName_5763, var_targetVariableCppName_5763, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 150)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5704.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 153)), GALGAS_bool (true), var_targetVariableCppName_5763, var_expression_5704  COMMA_SOURCE_FILE ("instruction-let.galgas", 152))  COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                            const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6675 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 168)) ;
  GALGAS_semanticExpressionForGeneration var_expression_6961 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType_6675, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_6961, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_string var_targetVariableCppName_7020 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)).getter_string (SOURCE_FILE ("instruction-let.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVariableName, var_targetType_6675, var_targetVariableCppName_7020, var_targetVariableCppName_7020, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType_6675, var_targetVariableCppName_7020, var_targetVariableCppName_7020, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6675, var_expression_6961.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 184)), object->mAttribute_mInstructionLocation, var_expression_6961, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 184)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6675, object->mAttribute_mIsConstant, var_targetVariableCppName_7020, var_expression_6961  COMMA_SOURCE_FILE ("instruction-let.galgas", 186))  COMMA_SOURCE_FILE ("instruction-let.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 222)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration.mSlotID,
                                            extensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 234)) ;
  GALGAS_string var_sourceVar_9796 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_9796, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 235)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)).add_operation (var_sourceVar_9796, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_2083 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_2083.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2083.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 60)) ;
    enumerator_2083.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                          extensionMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@logInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_2727 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_2727.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_2811 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2727.current_mLogExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-log.galgas", 78)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2811, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 77)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2727.current_mLogMessage (HERE), var_expression_2811  COMMA_SOURCE_FILE ("instruction-log.galgas", 84))  COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    enumerator_2727.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                   extensionMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@logInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_logVar_4053 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4053, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 107)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4053.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 108)).add_operation (object->mAttribute_mLogMessage.mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 108)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLogMessage.getter_location (SOURCE_FILE ("instruction-log.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 108)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                            extensionMethod_logInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineExtensionMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@loopInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 78)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 79)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mFirstInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 80)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mSecondInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                          extensionMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@loopInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inCallerEntity,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_3749 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 97)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3749, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression_3749.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 103)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)).add_operation (var_variantExpression_3749.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("instruction-loop.galgas", 104)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4319 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 110)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4319, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 109)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_4319.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 116)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)).add_operation (var_loopExpression_4319.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 118)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 118)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 117)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_4978 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 128)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 129)), object->mAttribute_mFirstInstructions, object->mAttribute_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList_4978, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 124)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5349 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 141)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 142)), object->mAttribute_mSecondInstructions, object->mAttribute_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList_5349, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 137)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 149)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variantExpression_3749, var_first_5F_instructionList_4978, var_loopExpression_4319, var_second_5F_instructionList_5349  COMMA_SOURCE_FILE ("instruction-loop.galgas", 151))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                   extensionMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@loopInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_variantCppVarName_7121 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7121, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 181)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7121, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 188)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 188)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 189)) ;
  }
  GALGAS_string var_variantVar_7259 = GALGAS_string ("variant_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 190)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 190)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7259, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 191)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 191)).add_operation (var_variantCppVarName_7121, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 191)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 191)) ;
  GALGAS_string var_loopVar_7438 = GALGAS_string ("loop_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)).add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  }
  GALGAS_string var_loopExpressionVar_7879 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_7879, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7438.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 206)).add_operation (var_loopExpressionVar_7879, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 206)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 206)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 206)).add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 207)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 207)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 207)).add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 208)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 208)).add_operation (var_loopExpressionVar_7879, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 208)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 208)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 206)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_variantVar_7259, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)).add_operation (extensionGetter_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 213)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)).add_operation (var_loopVar_7438, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7259, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 225)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 226)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 227)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 228)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                            extensionMethod_loopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineExtensionMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@matchInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_matchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  cEnumerator_semanticExpressionListAST enumerator_4953 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_4953.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4953.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 136)) ;
    enumerator_4953.gotoNextObject () ;
  }
  cEnumerator_matchInstructionBranchListAST enumerator_5065 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_5065.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5065.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 139)) ;
    enumerator_5065.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                          extensionMethod_matchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@matchInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_matchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inCallerEntity,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList_5728 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 153)) ;
  cEnumerator_semanticExpressionListAST enumerator_5804 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_5804.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6020 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5804.current_mExpression (HERE).ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-match.galgas", 157)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6020, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 156)) ;
    var_expressionList_5728.addAssign_operation (var_matchedExpression_6020  COMMA_SOURCE_FILE ("instruction-match.galgas", 162)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_type_6135 = var_matchedExpression_6020.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 164)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type_6135.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 165)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-match.galgas", 165)))).operator_and (GALGAS_bool (kIsNotEqual, var_type_6135.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 165)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 165)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 165)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_5804.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6135.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 167)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 167)), fixItArray1  COMMA_SOURCE_FILE ("instruction-match.galgas", 166)) ;
    }
    enumerator_5804.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 171)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6565 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 172)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_6650 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_6650.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6697 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 175)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6751 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_expressionList_5728.getter_length (SOURCE_FILE ("instruction-match.galgas", 177)).objectCompare (enumerator_6650.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 177)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_semanticExpressionListForGeneration enumerator_6875 (var_expressionList_5728, kEnumeration_up) ;
      cEnumerator_matchEntryListAST enumerator_6898 (enumerator_6650.current_mMatchEntryList (HERE), kEnumeration_up) ;
      while (enumerator_6875.hasCurrentObject () && enumerator_6898.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_6918 = enumerator_6875.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 179)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_type_6918.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 180)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-match.galgas", 180)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = enumerator_6898.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_unifiedTypeMap_2D_proxy var_namedType_7063 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 182)) ;
            GALGAS_unifiedTypeMap_2D_proxy var_t_7217 = var_type_6918 ;
            GALGAS_bool var_found_7248 = GALGAS_bool (kIsEqual, var_t_7217.objectCompare (var_namedType_7063)) ;
            if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-match.galgas", 185)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 185)).isValid ()) {
              uint32_t variant_7282 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-match.galgas", 185)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 185)).uintValue () ;
              bool loop_7282 = true ;
              while (loop_7282) {
                loop_7282 = var_found_7248.operator_not (SOURCE_FILE ("instruction-match.galgas", 186)).operator_and (var_t_7217.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 186)).operator_not (SOURCE_FILE ("instruction-match.galgas", 186)) COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid () ;
                if (loop_7282) {
                  loop_7282 = var_found_7248.operator_not (SOURCE_FILE ("instruction-match.galgas", 186)).operator_and (var_t_7217.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 186)).operator_not (SOURCE_FILE ("instruction-match.galgas", 186)) COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).boolValue () ;
                }
                if (loop_7282 && (0 == variant_7282)) {
                  loop_7282 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 185)) ;
                }
                if (loop_7282) {
                  variant_7282 -- ;
                  var_t_7217 = var_t_7217.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)) ;
                  var_found_7248 = GALGAS_bool (kIsEqual, var_t_7217.objectCompare (var_namedType_7063)) ;
                }
              }
            }
            const enumGalgasBool test_5 = var_found_7248.operator_not (SOURCE_FILE ("instruction-match.galgas", 190)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 191)), GALGAS_string ("the '@").add_operation (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 192)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 192)).add_operation (var_type_6918.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 192)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 192)), fixItArray6  COMMA_SOURCE_FILE ("instruction-match.galgas", 191)) ;
            }else if (kBoolFalse == test_5) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, enumerator_6898.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)).getter_length (SOURCE_FILE ("instruction-match.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_localConstantList_6697.addAssign_operation (var_t_7217, enumerator_6898.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 194)) ;
              }
            }
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 197)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6875.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 198)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 198)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 198)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 197)) ;
          }
          var_matchListForGeneration_6751.addAssign_operation (GALGAS_bool (true), enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 200)), enumerator_6898.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 200))  COMMA_SOURCE_FILE ("instruction-match.galgas", 200)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_type_6918.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 201)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 201)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            const enumGalgasBool test_10 = enumerator_6898.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 203)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6875.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 204)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 204)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 204)), fixItArray11  COMMA_SOURCE_FILE ("instruction-match.galgas", 203)) ;
            }else if (kBoolFalse == test_10) {
              const enumGalgasBool test_12 = var_type_6918.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).getter_hasKey (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 205)) COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).operator_not (SOURCE_FILE ("instruction-match.galgas", 205)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 206)), GALGAS_string ("the '").add_operation (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)).add_operation (enumerator_6875.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 207)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 207)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 206)) ;
              }
            }
            var_matchListForGeneration_6751.addAssign_operation (GALGAS_bool (false), enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 211)), enumerator_6875.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 212)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 212))  COMMA_SOURCE_FILE ("instruction-match.galgas", 209)) ;
          }else if (kBoolFalse == test_9) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_6898.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 214)), GALGAS_string ("internal error"), fixItArray14  COMMA_SOURCE_FILE ("instruction-match.galgas", 214)) ;
          }
        }
        enumerator_6875.gotoNextObject () ;
        enumerator_6898.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_6650.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5728.getter_length (SOURCE_FILE ("instruction-match.galgas", 219)).getter_string (SOURCE_FILE ("instruction-match.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 219)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 219)).add_operation (enumerator_6650.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 219)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 218)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9347 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6697, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 229)), enumerator_6650.current_mMatchBranchInstructionList (HERE), enumerator_6650.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9347, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 224)) ;
    }
    var_matchInstructionBranchList_6565.addAssign_operation (var_matchListForGeneration_6751, var_instructionList_9347  COMMA_SOURCE_FILE ("instruction-match.galgas", 236)) ;
    enumerator_6650.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9816 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 244)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList_9816, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 240)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 252)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5728, var_matchInstructionBranchList_6565, var_elseInstructionList_9816  COMMA_SOURCE_FILE ("instruction-match.galgas", 254))  COMMA_SOURCE_FILE ("instruction-match.galgas", 254)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                   extensionMethod_matchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@matchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_stringlist var_receiverList_11993 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 295)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12044 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_12044.hasCurrentObject ()) {
    GALGAS_string var_variable_12196 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12044.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12196, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 297)) ;
    var_receiverList_11993.addAssign_operation (var_variable_12196  COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    enumerator_12044.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 300)) ;
  cEnumerator_stringlist enumerator_12286 (var_receiverList_11993, kEnumeration_up) ;
  while (enumerator_12286.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12286.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 302)) ;
    if (enumerator_12286.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    }
    enumerator_12286.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 305)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12488 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_12488.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 308)) ;
    cEnumerator_matchListForGeneration enumerator_12559 (enumerator_12488.current_mMatchListForGeneration (HERE), kEnumeration_up) ;
    cEnumerator_stringlist enumerator_12579 (var_receiverList_11993, kEnumeration_up) ;
    while (enumerator_12559.hasCurrentObject () && enumerator_12579.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_12559.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12559.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 311)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 311)).add_operation (enumerator_12579.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 311)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12579.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 314)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 314)).add_operation (enumerator_12559.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 314)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12559.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 314)) ;
      }
      if (enumerator_12559.hasNextObject () && enumerator_12579.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 318)) ;
      }
      enumerator_12559.gotoNextObject () ;
      enumerator_12579.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 320)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12488.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    }
    if (enumerator_12488.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 329)) ;
    }
    enumerator_12488.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 331)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 332)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 340)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 341)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                            extensionMethod_matchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineExtensionMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                          extensionMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                              GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2232 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-message.galgas", 54)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2232, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 53)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression_2232.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 60)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression_2232.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 62)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 62)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 62)), fixItArray1  COMMA_SOURCE_FILE ("instruction-message.galgas", 61)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2232, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-message.galgas", 65))  COMMA_SOURCE_FILE ("instruction-message.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                   extensionMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@messageInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_messageCppVarName_3821 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3821, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 89)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (var_messageCppVarName_3821, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 99)) COMMA_SOURCE_FILE ("instruction-message.galgas", 99)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                            extensionMethod_messageInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineExtensionMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  cEnumerator_actualParameterListAST enumerator_1913 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1913.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1913.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1913.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                          extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2762 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 64)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2762, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2842 ;
  GALGAS_bool var_hasCompilerArgument_2870 ;
  GALGAS_methodKind var_kind_2889 ;
  GALGAS_string var_errorMessage_2912 ;
  GALGAS_location joker_3018 ; // Joker input parameter
  GALGAS_methodQualifier joker_3042 ; // Joker input parameter
  var_receiverExpression_2762.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 74)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 74)).method_searchKey (object->mAttribute_mMethodName, var_kind_2889, var_routineSignature_2842, joker_3018, var_hasCompilerArgument_2870, joker_3042, var_errorMessage_2912, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage_2912.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mMethodName.getter_location (SOURCE_FILE ("instruction-method-call.galgas", 76)), var_errorMessage_2912, fixItArray1  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3463 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 82)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 82)), var_routineSignature_2842, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3463, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_3529 = var_receiverExpression_2762.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 90)) ;
  GALGAS_bool var_searching_3580 = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 93)).isValid ()) {
      uint32_t variant_3629 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 93)).uintValue () ;
      bool loop_3629 = true ;
      while (loop_3629) {
        loop_3629 = var_searching_3580.isValid () ;
        if (loop_3629) {
          loop_3629 = var_searching_3580.boolValue () ;
        }
        if (loop_3629 && (0 == variant_3629)) {
          loop_3629 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 93)) ;
        }
        if (loop_3629) {
          variant_3629 -- ;
          const enumGalgasBool test_3 = var_baseType_3529.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 94)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 94)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching_3580 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType_3529.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)).getter_hasKey (object->mAttribute_mMethodName.mAttribute_string COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType_3529 = var_baseType_3529.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
            }else if (kBoolFalse == test_4) {
              var_searching_3580 = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression_2762.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 108)), var_receiverExpression_2762, object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 110)), var_kind_2889, var_actualParameterListForGeneration_3463, var_hasCompilerArgument_2870, var_baseType_3529  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                   extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@methodCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_receiverCppName_5480 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5480, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 142)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5480 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 143)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5573 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5624 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  GALGAS_stringlist var_inputVariableList_5664 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  cEnumerator_actualParameterListForGeneration enumerator_5713 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_5713.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5745 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5713.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5624, var_inputVariableList_5664, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5745, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
    var_parameterCppNameList_5573.addAssign_operation (var_parameterCppName_5745  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
    enumerator_5713.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-method-call.galgas", 157)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)).add_operation (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 159)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (var_receiverCppName_5480, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 158)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).add_operation (var_receiverCppName_5480, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5480.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)).add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 164)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_6752 (var_parameterCppNameList_5573, kEnumeration_up) ;
  while (enumerator_6752.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6752.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)) ;
    if (enumerator_6752.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    enumerator_6752.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5573.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 173)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 174)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1673 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1673.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1673.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 39)) ;
    enumerator_1673.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                          extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_formalParameterSignature var_routineSignature_2460 ;
  GALGAS_bool var_isInternal_2487 ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.method_searchKey (object->mAttribute_mRoutineName, var_routineSignature_2460, var_isInternal_2487, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 54)) ;
  const enumGalgasBool test_0 = var_isInternal_2487.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_2565 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.getter_locationForKey (object->mAttribute_mRoutineName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 61)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 62)).objectCompare (var_procDeclarationLocation_2565.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 62)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 63)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2565.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 63)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 63)), fixItArray2  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 63)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3168 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mRoutineName, GALGAS_string ("'").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 70)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 70)), var_routineSignature_2460, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3168, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (object->mAttribute_mRoutineName, var_actualParameterListForGeneration_3168  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 78))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                   extensionMethod_procCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@procCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
  GALGAS_stringlist var_parameterCppNameList_4266 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 104)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4314 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
  GALGAS_stringlist var_inputVariableList_4351 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4389 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4389.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4644 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4389.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4314, var_inputVariableList_4351, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4644, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
    var_parameterCppNameList_4266.addAssign_operation (var_parameterCppName_4644  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 117)) ;
    enumerator_4389.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_4851 (var_parameterCppNameList_4266, kEnumeration_up) ;
  while (enumerator_4851.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_4851.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
    enumerator_4851.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 124)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_procCallInstructionForGeneration.mSlotID,
                                            extensionMethod_procCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionForGeneration_generateInstruction (defineExtensionMethod_procCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2426 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2426, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 62)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 63)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 64)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-self-assignment.galgas", 64)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression_2426.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 68)), object->mAttribute_mInstructionLocation, var_expression_2426, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 68)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-assignment.galgas", 74)), var_expression_2426  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                            const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_6247 ;
  GALGAS_string var_selfObjectCppName_6275 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
    var_selfObjectCppName_6275.drop () ; // Release error dropped variable
    var_selfTypeProxy_6247.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_6275 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_6247 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6655 = var_selfTypeProxy_6247.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6655.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_6247.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6655.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy_6247.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6655.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7361 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      cEnumerator_actualOutputExpressionList enumerator_7429 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_7463 (var_addAssignOperatorArguments_6655, kEnumeration_up) ;
      while (enumerator_7429.hasCurrentObject () && enumerator_7463.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7644 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7429.current_mExpression (HERE).ptr (), enumerator_7463.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7644, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_7463.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_7429.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_7463.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_7463.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_7429.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 180)), GALGAS_string ("the selector should be '!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)), fixItArray9  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 180)) ;
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7463.current_mFormalArgumentType (HERE), var_expression_7644.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 183)), enumerator_7429.current_mEndOfExpressionLocation (HERE), var_expression_7644, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
        }
        var_effectiveParameterList_7361.addAssign_operation (var_expression_7644  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 184)) ;
        enumerator_7429.gotoNextObject () ;
        enumerator_7463.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6275, var_selfTypeProxy_6247, GALGAS_string::makeEmptyString (), object->mAttribute_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 192)), var_effectiveParameterList_7361  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 187))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 187)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                              const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                              GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_8841 ;
  GALGAS_string var_selfObjectCppName_8869 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 208)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 209)) ;
    var_selfObjectCppName_8869.drop () ; // Release error dropped variable
    var_selfTypeProxy_8841.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_8869 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_8841 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_8841.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 215)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 215)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 215)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_8841.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 216)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_9651 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy_8841, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9651, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 220)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_8841, var_expression_9651.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 227)), object->mAttribute_mInstructionLocation, var_expression_9651, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 227)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_8841, var_selfObjectCppName_8869, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 234)), var_expression_9651, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 229))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 229)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                               const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_10567 ;
  GALGAS_string var_selfObjectCppName_10595 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 251)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 252)) ;
    var_selfObjectCppName_10595.drop () ; // Release error dropped variable
    var_selfTypeProxy_10567.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_10595 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_10567 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_10567.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 258)).operator_and (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 258)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_10567.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 259)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_11378 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy_10567, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11378, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_10567, var_expression_11378.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 270)), object->mAttribute_mInstructionLocation, var_expression_11378, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_10567, var_selfObjectCppName_10595, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 277)), var_expression_11378, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_12293 ;
  GALGAS_string var_selfObjectCppName_12321 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 294)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)) ;
    var_selfObjectCppName_12321.drop () ; // Release error dropped variable
    var_selfTypeProxy_12293.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_12321 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_12293 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_12293.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)).operator_and (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_12293.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 303)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 303)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 302)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_13102 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy_12293, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13102, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 306)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_12293, var_expression_13102.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 313)), object->mAttribute_mInstructionLocation, var_expression_13102, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 313)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_12293, var_selfObjectCppName_12321, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 320)), var_expression_13102, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_14015 ;
  GALGAS_string var_selfObjectCppName_14043 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 337)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 338)) ;
    var_selfObjectCppName_14043.drop () ; // Release error dropped variable
    var_selfTypeProxy_14015.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_14043 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_14015 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfTypeProxy_14015.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 344)).operator_and (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 344)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_14015.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 345)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_14824 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy_14015, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_14824, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 349)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_14015, var_expression_14824.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 356)), object->mAttribute_mInstructionLocation, var_expression_14824, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy_14015, var_selfObjectCppName_14043, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 363)), var_expression_14824, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 358))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 358)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3357 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3357.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3357.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 98)) ;
    enumerator_3357.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                          extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3772 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3772.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3772.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 109)) ;
    enumerator_3772.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                          extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_4534 ;
  GALGAS_string var_receiverVariableCppName_4576 ;
  GALGAS_string var_receiverVariableBaseName_4619 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType_4534, var_receiverVariableCppName_4576, var_receiverVariableBaseName_4619, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 125)) ;
  }
  cEnumerator_lstringlist enumerator_4661 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_4661.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_4685 = var_receiverType_4534.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 132)) ;
    var_attributeMap_4685.method_searchKey (enumerator_4661.current_mValue (HERE), var_receiverType_4534, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
    enumerator_4661.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType_4840 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeNameForCasting.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType_4840 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
    {
    routine_checkAssignmentTypes (var_receiverType_4534, var_castType_4840, object->mAttribute_mTypeNameForCasting.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType_4840 = var_receiverType_4534 ;
  }
  GALGAS_methodKind var_kind_5192 ;
  GALGAS_formalParameterSignature var_routineSignature_5218 ;
  GALGAS_bool var_hasCompilerArgument_5247 ;
  GALGAS_string var_setterErrorMessage_5282 ;
  GALGAS_methodQualifier joker_5253 ; // Joker input parameter
  var_castType_4840.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)).method_searchKey (object->mAttribute_mSetterName, var_kind_5192, var_routineSignature_5218, var_hasCompilerArgument_5247, joker_5253, var_setterErrorMessage_5282, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_5282.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 156)), var_setterErrorMessage_5282, fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5694 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mSetterName, GALGAS_string ("'").add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 162)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 162)), var_routineSignature_5218, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5694, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_5760 = var_castType_4840 ;
  GALGAS_bool var_searching_5787 = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 173)).isValid ()) {
      uint32_t variant_5835 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 173)).uintValue () ;
      bool loop_5835 = true ;
      while (loop_5835) {
        loop_5835 = var_searching_5787.isValid () ;
        if (loop_5835) {
          loop_5835 = var_searching_5787.boolValue () ;
        }
        if (loop_5835 && (0 == variant_5835)) {
          loop_5835 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 173)) ;
        }
        if (loop_5835) {
          variant_5835 -- ;
          const enumGalgasBool test_4 = var_baseType_5760.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 174)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 174)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_searching_5787 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_baseType_5760.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 177)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 177)).getter_hasKey (object->mAttribute_mSetterName.mAttribute_string COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 177)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_baseType_5760 = var_baseType_5760.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 178)) ;
            }else if (kBoolFalse == test_5) {
              var_searching_5787 = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mAttribute_mReceiverName.mAttribute_location, var_receiverVariableCppName_4576, var_receiverVariableBaseName_4619, object->mAttribute_mReceiverStructAttributes, var_castType_4840, var_receiverType_4534, object->mAttribute_mSetterName, var_kind_5192, var_actualParameterListForGeneration_5694, var_hasCompilerArgument_5247, var_baseType_5760  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 186))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_7019 ;
  GALGAS_string var_selfObjectCppName_7047 ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 212)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 213)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
    var_selfObjectCppName_7047.drop () ; // Release error dropped variable
    var_selfTypeProxy_7019.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName_7047 = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy_7019 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature_7402 ;
  GALGAS_bool var_hasCompilerArgument_7430 ;
  GALGAS_methodKind var_kind_7449 ;
  GALGAS_methodQualifier joker_7549 ; // Joker input parameter
  GALGAS_string joker_7552 ; // Joker input parameter
  var_selfTypeProxy_7019.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)).method_searchKey (object->mAttribute_mSetterName, var_kind_7449, var_routineSignature_7402, var_hasCompilerArgument_7430, joker_7549, joker_7552, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7878 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mSetterName, GALGAS_string ("'").add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)), var_routineSignature_7402, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7878, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_7047, var_selfTypeProxy_7019, object->mAttribute_mSetterName, var_kind_7449, var_actualParameterListForGeneration_7878, var_hasCompilerArgument_7430  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                   extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@setterCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304)) ;
  GALGAS_string var_receiverCppName_10426 = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_10483 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_10483.hasCurrentObject ()) {
    var_receiverCppName_10426.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_10483.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 307)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)) ;
    enumerator_10483.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 309)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_10688 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10736 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 312)) ;
  GALGAS_stringlist var_inputVariableList_10773 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 313)) ;
  cEnumerator_actualParameterListForGeneration enumerator_10811 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_10811.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_11066 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_10811.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10736, var_inputVariableList_10773, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11066, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 315)) ;
    var_parameterCppNameList_10688.addAssign_operation (var_parameterCppName_11066  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
    enumerator_10811.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 330)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_10426.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
        }
        GALGAS_string var_pointerUniqueName_11542 = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (var_pointerUniqueName_11542, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (var_receiverCppName_10426, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).objectCompare (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_11542, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (var_pointerUniqueName_11542, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_11542, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 346)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (var_pointerUniqueName_11542, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (var_receiverCppName_10426, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 354)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_10426.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 355)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_13120 (var_parameterCppNameList_10688, kEnumeration_up) ;
  while (enumerator_13120.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13120.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)) ;
    if (enumerator_13120.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)) ;
    }
    enumerator_13120.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10688.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 362)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10688.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_14160 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 386)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_14211 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
  GALGAS_stringlist var_inputVariableList_14251 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
  cEnumerator_actualParameterListForGeneration enumerator_14300 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_14300.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_14563 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_14300.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_14211, var_inputVariableList_14251, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_14563, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
    var_parameterCppNameList_14160.addAssign_operation (var_parameterCppName_14563  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 398)) ;
    enumerator_14300.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (object->mAttribute_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 404)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 410)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (object->mAttribute_mSetterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15428 (var_parameterCppNameList_14160, kEnumeration_up) ;
  while (enumerator_15428.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_15428.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)) ;
    if (enumerator_15428.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 418)) ;
    }
    enumerator_15428.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_14160.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 421)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_14160.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 427)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  cEnumerator_switchBranchesAST enumerator_3956 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_3956.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_3956.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    enumerator_3956.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                          extensionMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inCallerEntity,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_4668 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 134)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_4668, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_4668.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 140)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 140)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 140)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_4668.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 143)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 143)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 141)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap_5212 = var_switchExpression_4668.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 146)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5304 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 149)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5422 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 150)) ;
  cEnumerator_switchBranchesAST enumerator_5477 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_5477.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5563 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 152)) ;
    GALGAS_bool var_firstConstant_5592 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5633 (enumerator_5477.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_5633.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_enumConstantMap_5212.getter_hasKey (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 155)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_constantsNamedInSwitchInstruction_5304.getter_hasKey (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 156)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5633.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 157)), GALGAS_string ("the '").add_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)), fixItArray4  COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
        }
        var_constantsNamedInSwitchInstruction_5304.addAssign_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 160))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6047 ;
        GALGAS_uint joker_5997 ; // Joker input parameter
        var_enumConstantMap_5212.method_searchKey (enumerator_5633.current_mValue (HERE), joker_5997, var_associatedTypeList_6047, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6047.getter_length (SOURCE_FILE ("instruction-switch.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5477.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5633.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 163)), GALGAS_string ("the associated values of '").add_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)), fixItArray6  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_associatedTypeList_6047.getter_length (SOURCE_FILE ("instruction-switch.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5477.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_5633.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 166)), GALGAS_string ("the '").add_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
          }else if (kBoolFalse == test_7) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6047.getter_length (SOURCE_FILE ("instruction-switch.galgas", 168)).objectCompare (enumerator_5477.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 168)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6047.getter_length (SOURCE_FILE ("instruction-switch.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_5633.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 169)), GALGAS_string ("the '").add_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)).add_operation (var_associatedTypeList_6047.getter_length (SOURCE_FILE ("instruction-switch.galgas", 170)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 170)), fixItArray12  COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
            }else if (kBoolFalse == test_9) {
              GALGAS_uint var_associatedValueIndex_6781 = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_6824 (var_associatedTypeList_6047, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_6859 (enumerator_5477.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_6824.hasCurrentObject () && enumerator_6859.hasCurrentObject ()) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_6859.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_6824.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).objectCompare (enumerator_6859.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_6859.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the required type is '@").add_operation (enumerator_6824.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
                  }
                }
                const enumGalgasBool test_16 = var_firstConstant_5592.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6859.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  GALGAS_string var_cppName_7230 = GALGAS_string ("extractedValue_").add_operation (enumerator_6859.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
                  var_extractedAssociatedValuesForGeneration_5563.addAssign_operation (enumerator_6824.current_mType (HERE), var_cppName_7230, var_associatedValueIndex_6781  COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
                  const enumGalgasBool test_17 = enumerator_6859.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_6859.current_mExtractedValueName (HERE), enumerator_6824.current_mType (HERE), var_cppName_7230, var_cppName_7230, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)) ;
                    }
                  }else if (kBoolFalse == test_17) {
                    {
                    ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_6859.current_mExtractedValueName (HERE), enumerator_6824.current_mType (HERE), var_cppName_7230, var_cppName_7230, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
                    }
                  }
                }
                var_associatedValueIndex_6781.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
                enumerator_6824.gotoNextObject () ;
                enumerator_6859.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_5633.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 193)), GALGAS_string ("'").add_operation (enumerator_5633.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (var_switchExpression_4668.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 194)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
      }
      var_firstConstant_5592 = GALGAS_bool (false) ;
      enumerator_5633.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8244 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 202)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 203)), enumerator_5477.current_mInstructions (HERE), enumerator_5477.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8244, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
    }
    var_switchBranchesForGeneration_5422.addAssign_operation (enumerator_5477.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_5563, enumerator_5477.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), var_instructionList_8244  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
    enumerator_5477.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
  }
  GALGAS_stringset var_forgottenConstants_8526 = var_enumConstantMap_5212.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 213)).substract_operation (var_constantsNamedInSwitchInstruction_5304, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
  const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_8526.getter_count (SOURCE_FILE ("instruction-switch.galgas", 214)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    GALGAS_string var_s_8644 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_8682 (var_forgottenConstants_8526, kEnumeration_up) ;
    while (enumerator_8682.hasCurrentObject ()) {
      var_s_8644.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_8682.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
      enumerator_8682.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_8644, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_4668.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 224)), var_switchExpression_4668, var_switchBranchesForGeneration_5422  COMMA_SOURCE_FILE ("instruction-switch.galgas", 223))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                   extensionMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@switchInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_switchVar_10685 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_10685, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_10685, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 273)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
  cEnumerator_switchBranchesForGeneration enumerator_10929 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_10929.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10966 (enumerator_10929.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_10966.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 277)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).add_operation (enumerator_10966.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 277)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)) ;
      enumerator_10966.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_10929.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 281)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type_11295 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).add_operation (enumerator_10929.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
      GALGAS_string var_varPtr_11452 = GALGAS_string ("extractPtr_").add_operation (enumerator_10929.current_mLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11295, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (var_varPtr_11452, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (var_type_11295, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (var_switchVar_10685, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_11656 (enumerator_10929.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_11656.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11656.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (enumerator_11656.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (var_varPtr_11452, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (enumerator_11656.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
        enumerator_11656.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10929.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 291)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    }
    enumerator_10929.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                            extensionMethod_switchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineExtensionMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1826 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1826.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1826.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1826.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                          extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_2515 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2684 ;
  GALGAS_bool var_hasCompilerArgument_2712 ;
  var_type_2515.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature_2684, var_hasCompilerArgument_2712, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3129 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)), var_routineSignature_2684, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3129, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration_3129, var_hasCompilerArgument_2712  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 75))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                   extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 101)) ;
  GALGAS_stringlist var_parameterCppNameList_4282 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4333 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 104)) ;
  GALGAS_stringlist var_inputVariableList_4373 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4422 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4422.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4685 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4422.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4333, var_inputVariableList_4373, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4685, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
    var_parameterCppNameList_4282.addAssign_operation (var_parameterCppName_4685  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 115)) ;
    enumerator_4422.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 118)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 118)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 118)).add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 119)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 119)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 118)) ;
  cEnumerator_stringlist enumerator_4971 (var_parameterCppNameList_4282, kEnumeration_up) ;
  while (enumerator_4971.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_4971.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)) ;
    if (enumerator_4971.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 122)) ;
    }
    enumerator_4971.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 125)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 125)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4282.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4282.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 131)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mMethodName.getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2317 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_2317 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3028 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  GALGAS_string var_targetVariableCppName_3148 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mAttribute_mVariableName, var_targetType_3028, var_targetVariableCppName_3148, var_targetVariableCppName_3148, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mAttribute_mVariableName, var_targetType_3028, var_targetVariableCppName_3148, var_targetVariableCppName_3148, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3028, var_targetVariableCppName_3148  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mVariableType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                            extensionMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2511 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2511, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 55)) ;
  GALGAS_string var_targetVariableCppName_2570 = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)).add_operation (object->mAttribute_mVariableName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 62)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression_2511.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), var_targetVariableCppName_2570, var_targetVariableCppName_2570, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 63)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2511.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 71)), GALGAS_bool (false), var_targetVariableCppName_2570, var_expression_2511  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 70))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mAttribute_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                          extensionMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                              GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_2789 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2816 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2848 ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mFixitListAST, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2789, var_messageExpression_2816, var_fixitListForGeneration_2848, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression_2789, var_messageExpression_2816, var_fixitListForGeneration_2848  COMMA_SOURCE_FILE ("instruction-warning.galgas", 73))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                   extensionMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_receiverCppVarName_4029 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4029, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 103)) ;
  GALGAS_string var_messageCppVarName_4383 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4383, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_fixItArrayCppName_4631 ;
  extensionMethod_generateFixIt (object->mAttribute_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4631, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 113)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 122)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 122)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 123)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 123)).add_operation (var_receiverCppVarName_4029, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)).add_operation (var_messageCppVarName_4383, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_fixItArrayCppName_4631, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                            extensionMethod_warningInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineExtensionMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 163)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 165)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 174)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 175)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inCallerEntity,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_7292 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_7292, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 190)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_7315 = var_receiverExpression_7292.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 196)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found_7449 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_7507 (var_receiverType_7315.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 200)), kEnumeration_up) ;
    bool bool_1 = var_found_7449.operator_not (SOURCE_FILE ("instruction-with.galgas", 200)).isValidAndTrue () ;
    if (enumerator_7507.hasCurrentObject () && bool_1) {
      while (enumerator_7507.hasCurrentObject () && bool_1) {
        var_found_7449 = GALGAS_bool (kIsEqual, enumerator_7507.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_7507.gotoNextObject () ;
        if (enumerator_7507.hasCurrentObject ()) {
          bool_1 = var_found_7449.operator_not (SOURCE_FILE ("instruction-with.galgas", 200)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found_7449.operator_not (SOURCE_FILE ("instruction-with.galgas", 203)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 204)), GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 204)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 204)).add_operation (var_receiverType_7315.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 204)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 204)), fixItArray3  COMMA_SOURCE_FILE ("instruction-with.galgas", 204)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_8030 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 209)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_8030, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 208)) ;
  GALGAS_string var_objectArrayCppName_8086 = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)).getter_string (SOURCE_FILE ("instruction-with.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType_7315.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 217)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 217)) COMMA_SOURCE_FILE ("instruction-with.galgas", 217)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType_7315.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 218)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 218)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 218)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
  }
  GALGAS_localConstantList var_localConstantList_8533 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 223)) ;
  cEnumerator_typedPropertyList enumerator_8610 (var_receiverType_7315.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 224)), kEnumeration_up) ;
  while (enumerator_8610.hasCurrentObject ()) {
    var_localConstantList_8533.addAssign_operation (enumerator_8610.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_8610.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 227)), GALGAS_bool (true), var_objectArrayCppName_8086.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 229)).add_operation (enumerator_8610.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 229))  COMMA_SOURCE_FILE ("instruction-with.galgas", 225)) ;
    enumerator_8610.gotoNextObject () ;
  }
  var_localConstantList_8533.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 233)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 234)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 234)), GALGAS_bool (true), var_objectArrayCppName_8086.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 236))  COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_9506 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_8533, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 242)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_9506, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_9859 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 253)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 254)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_9859, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 249)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 260)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression_7292, var_objectArrayCppName_8086, var_keyExpression_8030, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList_9506, var_else_5F_instructionList_9859  COMMA_SOURCE_FILE ("instruction-with.galgas", 262))  COMMA_SOURCE_FILE ("instruction-with.galgas", 262)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inCallerEntity,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression_10857 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 282)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_10857, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 281)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression_10857.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 289)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 289)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_10857.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 290)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 290)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 290)), fixItArray2  COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_10857.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 292)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 292)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_10857.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 293)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 293)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 293)), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 293)) ;
    }
  }
  GALGAS_string var_objectArrayCppName_11392 = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)).getter_string (SOURCE_FILE ("instruction-with.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 296)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_11597 ;
  GALGAS_string var_receiverVariableCppName_11638 ;
  {
  GALGAS_string joker_11644 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_11597, var_receiverVariableCppName_11638, joker_11644, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
  }
  cEnumerator_lstringlist enumerator_11672 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_11672.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_11696 = var_targetType_11597.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 305)) ;
    var_attributeMap_11696.method_searchKey (enumerator_11672.current_mValue (HERE), var_targetType_11597, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 306)) ;
    enumerator_11672.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_targetType_11597.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 316)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 316)) COMMA_SOURCE_FILE ("instruction-with.galgas", 316)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType_11597.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 317)), fixItArray6  COMMA_SOURCE_FILE ("instruction-with.galgas", 317)) ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_bool var_found_12322 = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_12378 (var_targetType_11597.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)), kEnumeration_up) ;
    bool bool_8 = var_found_12322.operator_not (SOURCE_FILE ("instruction-with.galgas", 322)).isValidAndTrue () ;
    if (enumerator_12378.hasCurrentObject () && bool_8) {
      while (enumerator_12378.hasCurrentObject () && bool_8) {
        var_found_12322 = GALGAS_bool (kIsEqual, enumerator_12378.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_12378.gotoNextObject () ;
        if (enumerator_12378.hasCurrentObject ()) {
          bool_8 = var_found_12322.operator_not (SOURCE_FILE ("instruction-with.galgas", 322)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_9 = var_found_12322.operator_not (SOURCE_FILE ("instruction-with.galgas", 325)).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 326)), GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 326)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 326)).add_operation (var_targetType_11597.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 326)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 326)), fixItArray10  COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 330)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_12849 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 332)) ;
  cEnumerator_typedPropertyList enumerator_12906 (var_targetType_11597.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 333)), kEnumeration_up) ;
  while (enumerator_12906.hasCurrentObject ()) {
    var_localInitializedVariableList_12849.addAssign_operation (enumerator_12906.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_12906.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 336)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 336)), var_objectArrayCppName_11392.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 337)).add_operation (enumerator_12906.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 337))  COMMA_SOURCE_FILE ("instruction-with.galgas", 334)) ;
    enumerator_12906.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_11 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 343)) ;
  temp_11.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 340)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 341)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 341)), GALGAS_bool (true), var_objectArrayCppName_11392.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 343))  COMMA_SOURCE_FILE ("instruction-with.galgas", 343)) ;
  GALGAS_localConstantList var_localConstantList_13171 = temp_11 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_13755 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_13171, var_localInitializedVariableList_12849, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_13755, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 345)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_13837 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 362)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 363)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_13837, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 358)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName_11638, var_targetType_11597, object->mAttribute_mFieldList, var_objectArrayCppName_11392, var_keyExpression_10857, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList_13755, var_else_5F_instructionList_13837  COMMA_SOURCE_FILE ("instruction-with.galgas", 371))  COMMA_SOURCE_FILE ("instruction-with.galgas", 371)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readOnlyWithInstructionForGeneration * object = (const cPtr_readOnlyWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readOnlyWithInstructionForGeneration) ;
  GALGAS_string var_receiverVarCppName_16532 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_16532, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_16552 = object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 423)) ;
  GALGAS_string var_keyVarCppName_16763 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_16763, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_16552.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (var_receiverType_16552.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (var_receiverVarCppName_16532, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 427)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_16763, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 431)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_16763, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 434)).add_operation (var_receiverType_16552.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 435)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 433)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 437)) COMMA_SOURCE_FILE ("instruction-with.galgas", 437)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (var_receiverType_16552.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 441)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 450)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 451)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 460)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteWithInstructionForGeneration * object = (const cPtr_readWriteWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteWithInstructionForGeneration) ;
  GALGAS_string var_receiverCppName_18739 = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_18799 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_18799.hasCurrentObject ()) {
    var_receiverCppName_18739.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_18799.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 473)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 473)) ;
    enumerator_18799.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_19066 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19066, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 476)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)) COMMA_SOURCE_FILE ("instruction-with.galgas", 478)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 479)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 480)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 480)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 481)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 481)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 481)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 481)).add_operation (var_receiverCppName_18739, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 480)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 484)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 484)).add_operation (var_keyVarCppName_19066, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 484)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)).add_operation (var_keyVarCppName_19066, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 486)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 489)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 490)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 489)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 492)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 500)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 501)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 502)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 511)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                             GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex_2885 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_2965 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex_2885, joker_2965, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex_2885  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                             extensionMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineExtensionMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                 const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                                 const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                                 const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                 const GALGAS_string /* constinArgument_inComponentName */,
                                                                                 const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_nonterminalLabelMap var_labelMap_3980 ;
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap_3980, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 90)) ;
  GALGAS_formalParameterSignature var_signature_4077 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 92)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature_4077 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_4215 ; // Joker input parameter
    GALGAS_location joker_4229 ; // Joker input parameter
    var_labelMap_3980.method_searchKey (object->mAttribute_mLabelName, joker_4215, var_signature_4077, joker_4229, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4564 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 101)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 101)), var_signature_4077, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4564, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 98)) ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 109)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 117)), object->mAttribute_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 118)), var_actualParameterListForGeneration_4564, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 115))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                 extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 147)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 148))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 143))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                              extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                          const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_6832_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_6832_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 161)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 162)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_6832_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 163)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 164)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 164)), fixItArray1  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 163)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7130_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_7130_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 167)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)), fixItArray2  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 167)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 171)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 174)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 175)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                          extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  GALGAS_stringlist var_parameterCppNameList_8072 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 192)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8123 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 193)) ;
  GALGAS_stringlist var_inputVariableList_8163 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 194)) ;
  cEnumerator_actualParameterListForGeneration enumerator_8212 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_8212.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8475 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8212.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8123, var_inputVariableList_8163, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8475, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
    var_parameterCppNameList_8072.addAssign_operation (var_parameterCppName_8475  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 205)) ;
    enumerator_8212.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName_8582 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 208)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 208)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8582, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (object->mAttribute_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
  cEnumerator_stringlist enumerator_8938 (var_parameterCppNameList_8072, kEnumeration_up) ;
  while (enumerator_8938.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8938.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
    enumerator_8938.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8582.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 217)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8582, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) ;
  cEnumerator_stringlist enumerator_9472 (var_jokerParametersToReleaseList_8123, kEnumeration_up) ;
  while (enumerator_9472.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9472.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 229)) ;
    enumerator_9472.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                            extensionMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@repeatInstruction transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex_2674 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 65)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_2760 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 67)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_2760, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 68)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_3073 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_2760  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3175 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_3175.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_3208 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 78)) ;
    {
    routine_transformInstructionList (enumerator_3175.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3208, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    }
    var_repeatBranchList_3073.addAssign_operation (var_syntaxInstructionList_3208  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 86)) ;
    enumerator_3175.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList_3073, var_addedNonTerminalIndex_2674  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                             extensionMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineExtensionMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inCallerEntity,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                        const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                        const GALGAS_string constinArgument_inComponentName,
                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_choiceIndex_4517 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_4720 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_4720, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 120)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5212 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 137)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5247 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_5247.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_5636 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5247.current_mSyntaxInstructionList (HERE), enumerator_5247.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5636, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 139)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5212.addAssign_operation (var_instructionList_5636, enumerator_5247.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 155)) ;
    enumerator_5247.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4517, var_repeated_5F_instructionList_4720, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration_5212  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                                 extensionMethod_repeatInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_analyzeSyntaxInstruction (defineExtensionMethod_repeatInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7124 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7248 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 191)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7352 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_7352.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7248.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7352.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 194)), enumerator_7352.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 193)) ;
    enumerator_7352.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList_7124, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration_7248  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                              extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_8281_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_8281_si.getter_m_5F_repeated_5F_instructionList (SOURCE_FILE ("instruction-repeat.galgas", 218)), cast_8281_si.getter_mEndOfRepeatedInstructions (SOURCE_FILE ("instruction-repeat.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 218)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)).objectCompare (cast_8281_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 219)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_8281_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 220)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 222)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 222)).add_operation (cast_8281_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 223)), fixItArray1  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 220)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8962 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9024 (cast_8281_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 227)), kEnumeration_up) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_8962.hasCurrentObject () && enumerator_9024.hasCurrentObject () && bool_2) {
        while (enumerator_8962.hasCurrentObject () && enumerator_9024.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_8962.current_mInstructionList (HERE), enumerator_9024.current_mInstructionList (HERE), enumerator_9024.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228)) ;
          enumerator_8962.gotoNextObject () ;
          enumerator_9024.gotoNextObject () ;
          if (enumerator_8962.hasCurrentObject () && enumerator_9024.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9208_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_9208_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 231)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 231)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 238)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                          extensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@repeatInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_string var_repeatFlagCppName_10101 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 255)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 256)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_10101, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_10101, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10781 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_10731 ((uint32_t) 0) ;
  while (enumerator_10781.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10731.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10781.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 271)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 279)) ;
    enumerator_10781.gotoNextObject () ;
    index_10731.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_10101, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 283)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 284)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                            extensionMethod_repeatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_generateInstruction (defineExtensionMethod_repeatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@selectInstruction transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex_2473 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 61)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_2552 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 63)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_2616 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_2616.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_2649 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 65)) ;
    {
    routine_transformInstructionList (enumerator_2616.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_2649, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    }
    var_selectBranchList_2552.addAssign_operation (var_syntaxInstructionList_2649  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
    enumerator_2616.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList_2552, var_addedNonTerminalIndex_2473  COMMA_SOURCE_FILE ("instruction-select.galgas", 76))  COMMA_SOURCE_FILE ("instruction-select.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                             extensionMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineExtensionMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@selectInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inCallerEntity,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                        const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                        const GALGAS_string constinArgument_inComponentName,
                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_choiceIndex_3959 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 101)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_4136 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4214 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_4214.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_4275 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_4214.current_mSyntaxInstructionList (HERE), enumerator_4214.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_4275, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_listOfSemanticInstructionListForGeneration_4136.addAssign_operation (var_instructionList_4275, enumerator_4214.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 124)) ;
    enumerator_4214.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 127)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_3959, var_listOfSemanticInstructionListForGeneration_4136  COMMA_SOURCE_FILE ("instruction-select.galgas", 128))  COMMA_SOURCE_FILE ("instruction-select.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                                 extensionMethod_selectInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_analyzeSyntaxInstruction (defineExtensionMethod_selectInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5990 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 153)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6094 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_6094.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_5990.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_6094.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 156)), enumerator_6094.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 155)) ;
    enumerator_6094.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration_5990  COMMA_SOURCE_FILE ("instruction-select.galgas", 159))  COMMA_SOURCE_FILE ("instruction-select.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                              extensionMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_6956_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 178)).objectCompare (cast_6956_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 178)).getter_length (SOURCE_FILE ("instruction-select.galgas", 178)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 178)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_6956_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 179)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 181)).getter_string (SOURCE_FILE ("instruction-select.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 180)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 181)).add_operation (cast_6956_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 183)).getter_length (SOURCE_FILE ("instruction-select.galgas", 183)).getter_string (SOURCE_FILE ("instruction-select.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 182)), fixItArray1  COMMA_SOURCE_FILE ("instruction-select.galgas", 179)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7523 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7585 (cast_6956_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 186)), kEnumeration_up) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_7523.hasCurrentObject () && enumerator_7585.hasCurrentObject () && bool_2) {
        while (enumerator_7523.hasCurrentObject () && enumerator_7585.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_7523.current_mInstructionList (HERE), enumerator_7585.current_mInstructionList (HERE), enumerator_7585.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 187)) ;
          enumerator_7523.gotoNextObject () ;
          enumerator_7585.gotoNextObject () ;
          if (enumerator_7523.hasCurrentObject () && enumerator_7585.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7769_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_7769_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 190)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-select.galgas", 190)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 194)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-select.galgas", 197)).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                          extensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@selectInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 214)) COMMA_SOURCE_FILE ("instruction-select.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (object->mAttribute_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 215)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8978 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_8928 ((uint32_t) 0) ;
  while (enumerator_8978.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_8928.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).getter_string (SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 217)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_8978.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 218)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 226)) ;
    enumerator_8978.gotoNextObject () ;
    index_8928.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 228)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 229)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                            extensionMethod_selectInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_generateInstruction (defineExtensionMethod_selectInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                           GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                           GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex_3635 ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_3642 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 76))) ;
  if (NULL != objectArray_3642) {
      macroValidSharedObject (objectArray_3642, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_3635 = objectArray_3642->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_3635 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 79)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex_3635, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 80)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex_3635  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 82))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                             extensionMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineExtensionMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                               const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                               const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                               const GALGAS_string constinArgument_inLexiqueName,
                                                                               const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                               const GALGAS_string /* constinArgument_inComponentName */,
                                                                               const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_lexicalSentValueList var_sentAttributeList_4953 ;
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList_4953, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 106)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 108)).objectCompare (var_sentAttributeList_4953.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 108)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_4953.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 111)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mTerminalName.getter_location (SOURCE_FILE ("instruction-terminal.galgas", 109)), GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (var_sentAttributeList_4953.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 110)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 110)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 111)).add_operation (object->mAttribute_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 113)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 113)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 113)), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 109)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_5467 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 117)) ;
  cEnumerator_actualInputParameterListAST enumerator_5539 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_5564 (var_sentAttributeList_4953, kEnumeration_up) ;
  while (enumerator_5539.hasCurrentObject () && enumerator_5564.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_5539.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_5564.current_mLexicalType (HERE), enumerator_5564.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_5467, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5564.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_5539.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5564.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (enumerator_5539.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 127)), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_5564.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 127)) ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticWarning (enumerator_5564.current_mLexicalFormalSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 128)), GALGAS_string ("the formal selector is declared here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 128)) ;
    }
    enumerator_5539.gotoNextObject () ;
    enumerator_5564.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_6101 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_6101.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_6101.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 133)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s_6174 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6210 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_6210.hasCurrentObject ()) {
        var_s_6174.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_6210.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 136)) ;
        enumerator_6210.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (enumerator_6101.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 138)), GALGAS_string ("the '").add_operation (enumerator_6101.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 138)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 138)).add_operation (var_s_6174, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 138)), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 138)) ;
    }
    enumerator_6101.gotoNextObject () ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 142)) ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 147)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList_5467, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 153))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                                 extensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_analyzeSyntaxInstruction (defineExtensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         const GALGAS_string /* constinArgument_inPosfix */,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 189)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 191)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 192))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 185))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 185)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                              extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                            const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_9120_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 206)).objectCompare (cast_9120_si.getter_mTerminalName (SOURCE_FILE ("instruction-terminal.galgas", 206)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 206)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 207)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (cast_9120_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 208)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 209)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 209)), fixItArray1  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 208)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9419_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_9419_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 212)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)), fixItArray2  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 216)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 219)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 220)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                          extensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  cEnumerator_terminalCheckAssignementList enumerator_10397 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_10397.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_10397.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_10397.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 238)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10397.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)).add_operation (enumerator_10397.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 241)) ;
    enumerator_10397.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_10781 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_10781.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 247)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 247)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 248)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 248)).add_operation (enumerator_10781.current_mValue_30_ (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 248)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 248)).add_operation (enumerator_10781.current_mValue_31_ (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("instruction-terminal.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 247)) ;
    enumerator_10781.gotoNextObject () ;
  }
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 258)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 265)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 265)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 266)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 266)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 266)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 267)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 267)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 267)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 266)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                            extensionMethod_terminalCheckInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_generateInstruction (defineExtensionMethod_terminalCheckInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                             extensionMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineExtensionMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inCallerEntity,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                           const GALGAS_string constinArgument_inLexiqueName,
                                                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                           const GALGAS_string constinArgument_inComponentName,
                                                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_3751 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 95)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression_3751, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 94)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_3751.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 100)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3751.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 102)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 102)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 102)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 101)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_4285 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 108)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression_4285, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 107)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_4285.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 113)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3751.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 115)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 115)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 115)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 116)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 116)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 114)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_4897 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_4897, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 123)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 140)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression_3751, var_while_5F_expression_4285, var_instructionList_4897  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 142))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                                 extensionMethod_parseLoopInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseLoopInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 167)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                              extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 181)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 181)) ;
  }
  GALGAS_string var_variantVarCppName_7199 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 184)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 187)) ;
  }
  GALGAS_string var_variantVar_7504 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7504, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 189)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 189)).add_operation (var_variantVarCppName_7199, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 189)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 189)) ;
  GALGAS_string var_loopVar_7709 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 191)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 191)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7709, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_7709, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 194)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7709.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  GALGAS_string var_whileVarCppName_8001 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_8001, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_8001, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7709.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 200)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_7504.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 201)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 203)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 211)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 211)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 212)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 213)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 219)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 222)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 220)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 228)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 228)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                            extensionMethod_parseLoopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_generateInstruction (defineExtensionMethod_parseLoopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                         GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList_2497 ;
  GALGAS_location joker_2499 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList_2497, joker_2499, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 61)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_2497, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 63)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                             extensionMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineExtensionMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inCallerEntity,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                             const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                             const GALGAS_string constinArgument_inLexiqueName,
                                                                             const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                             const GALGAS_string constinArgument_inComponentName,
                                                                             const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_3599 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 91)) ;
  GALGAS_uint var_referenceSelectMethodCount_3686 = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3743 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_3743.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_3686 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_3823 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 95)) ;
    cEnumerator_syntaxInstructionList enumerator_3902 (enumerator_3743.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_3902.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_3902.current_mInstruction (HERE).ptr (), constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_3823, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 97)) ;
      enumerator_3902.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_3599.addAssign_operation (var_instructionList_3823, enumerator_3743.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 112)) ;
    enumerator_3743.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_4480 = var_listOfSemanticInstructionListForGeneration_3599 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_4581 ;
  {
  GALGAS_location joker_4633 ; // Joker input parameter
  var_tempListOfBranches_4480.setter_popFirst (var_instructionList_4581, joker_4633, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_4698 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_4581, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 118)) ;
  GALGAS_bool var_ok_4772 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4810 (var_tempListOfBranches_4480, kEnumeration_up) ;
  bool bool_0 = var_ok_4772.isValidAndTrue () ;
  if (enumerator_4810.hasCurrentObject () && bool_0) {
    while (enumerator_4810.hasCurrentObject () && bool_0) {
      var_ok_4772 = function_compareSyntaxSignature (var_referenceSignature_4698, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_4810.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 123)), enumerator_4810.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 121)) ;
      enumerator_4810.gotoNextObject () ;
      if (enumerator_4810.hasCurrentObject ()) {
        bool_0 = var_ok_4772.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration_3599  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                                 extensionMethod_parseRewindInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseRewindInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6125 ;
  GALGAS_location joker_6127 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList_6125, joker_6127, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 150)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_6125, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                              extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 165)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 165)) ;
  }
  GALGAS_string var_parsingContextVar_6852 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_6852, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7116 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_7116.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_7116.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 170)) ;
    }
    if (enumerator_7116.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (var_parsingContextVar_6852, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)) ;
    }
    enumerator_7116.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                            extensionMethod_parseRewindInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_generateInstruction (defineExtensionMethod_parseRewindInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 100)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                             extensionMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineExtensionMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inCallerEntity,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                           const GALGAS_string constinArgument_inLexiqueName,
                                                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                           const GALGAS_string constinArgument_inComponentName,
                                                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_5096 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 129)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression_5096, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 128)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 135)) ;
  }
  GALGAS_uint var_localSelectMethodCount_5356 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_5452 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_5356, var_when_5F_instructionListForGeneration_5452, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 139)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_5926 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inCallerEntity, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_5926, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 157)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 174)) ;
  }
  GALGAS_bool var_ok_6423 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_5452, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 177)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_5926, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 178)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 176)) ;
  const enumGalgasBool test_0 = var_ok_6423.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression_5096, var_when_5F_instructionListForGeneration_5452, var_else_5F_instructionListForGeneration_5926  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 183))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 183)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                                 extensionMethod_parseWhenInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseWhenInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 208)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                              extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  GALGAS_string var_sourceVar_8509 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_8509, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 223)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_8509, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 224)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 224)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 233)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 234)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                            extensionMethod_parseWhenInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_generateInstruction (defineExtensionMethod_parseWhenInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@syntaxSendInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxSendInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                             extensionMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineExtensionMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@syntaxSendInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            const GALGAS_lstring /* constinArgument_inCallerEntity */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                            const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                            const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                            const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                            const GALGAS_string /* constinArgument_inComponentName */,
                                                                            const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstruction * object = (const cPtr_syntaxSendInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstruction) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 59)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 60)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_3021 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 64)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3021, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 63)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expression_3021.getter_mResultType (SOURCE_FILE ("instruction-syntax-send.galgas", 70)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 71)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression_3021  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 74))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                                 extensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_analyzeSyntaxInstruction (defineExtensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxSendInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstructionForGeneration * object = (const cPtr_syntaxSendInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstructionForGeneration) ;
  GALGAS_string var_sourceVar_4432 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_4432, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 99)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 101)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 101)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_4432, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 102)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 102)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 102)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)).add_operation (var_sourceVar_4432, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxSendInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration.mSlotID,
                                            extensionMethod_syntaxSendInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstructionForGeneration_generateInstruction (defineExtensionMethod_syntaxSendInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                         GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticInstructionAST_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                             extensionMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineExtensionMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                                GALGAS_rowList & ioArgument_ioRowList,
                                                                                                const GALGAS_uint constinArgument_inRow,
                                                                                                GALGAS_uint & ioArgument_ioColumn,
                                                                                                GALGAS_string & ioArgument_ioCurrentNode,
                                                                                                GALGAS_string & ioArgument_ioArrowShape,
                                                                                                GALGAS_string & ioArgument_ioArrows,
                                                                                                GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                                const GALGAS_bool /* constinArgument_inDebug */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalInstructionForGrammarAnalysis * object = (const cPtr_terminalInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_terminalInstructionForGrammarAnalysis) ;
  GALGAS_string var_nodeName_10123 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (object->mAttribute_mTerminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 243)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_10123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 242)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (var_nodeName_10123, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 248)) ;
  ioArgument_ioCurrentNode = var_nodeName_10123 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 251)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                                   GALGAS_rowList & ioArgument_ioRowList,
                                                                                                   const GALGAS_uint constinArgument_inRow,
                                                                                                   GALGAS_uint & ioArgument_ioColumn,
                                                                                                   GALGAS_string & ioArgument_ioCurrentNode,
                                                                                                   GALGAS_string & ioArgument_ioArrowShape,
                                                                                                   GALGAS_string & ioArgument_ioArrows,
                                                                                                   GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                                   const GALGAS_bool /* constinArgument_inDebug */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonTerminalInstructionForGrammarAnalysis * object = (const cPtr_nonTerminalInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
  GALGAS_string var_nodeDefinition_10764 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (object->mAttribute_mNonterminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 266)).add_operation (object->mAttribute_mNonterminalSymbolIndex.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 267)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 267)) ;
  GALGAS_string var_nodeName_11009 ;
  {
  extensionSetter_append (ioArgument_ioRowList, var_nodeDefinition_10764, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11009, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 268)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (var_nodeName_11009, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 274)) ;
  ioArgument_ioCurrentNode = var_nodeName_11009 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                              GALGAS_rowList & ioArgument_ioRowList,
                                                                                              const GALGAS_uint constinArgument_inRow,
                                                                                              GALGAS_uint & ioArgument_ioColumn,
                                                                                              GALGAS_string & ioArgument_ioCurrentNode,
                                                                                              GALGAS_string & ioArgument_ioArrowShape,
                                                                                              GALGAS_string & ioArgument_ioArrows,
                                                                                              GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                              const GALGAS_bool constinArgument_inDebug,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGrammarAnalysis * object = (const cPtr_selectInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGrammarAnalysis) ;
  const enumGalgasBool test_0 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_markerStartNodeName_11822 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (object->mAttribute_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 295)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 295)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 295)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_11822, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 294)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (var_markerStartNodeName_11822, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 300)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_11822 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 303)) ;
  }
  GALGAS_string var_startNodeName_12154 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_12154, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 306)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 307)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_12207 = object->mAttribute_mSelectBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_12308 ;
  {
  var_branches_12207.setter_popFirst (var_brancheZero_12308, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 310)) ;
  }
  GALGAS_uint var_branchZeroColumn_12332 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_12365 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_12308, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_12332, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_12365, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 313)) ;
  GALGAS_uint var_endColumn_12620 = var_branchZeroColumn_12332 ;
  GALGAS_stringlist var_endingNodes_12695 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 325)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_12725 (var_branches_12207, kEnumeration_up) ;
  while (enumerator_12725.hasCurrentObject ()) {
    var_maxUsedRowIndex_12365.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)) ;
    GALGAS_uint var_branchColumn_12772 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_12803 = var_startNodeName_12154 ;
    GALGAS_string var_arrowStyle_12838 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_12725.current (HERE).mAttribute_mSyntaxInstructionList, ioArgument_ioRowList, var_maxUsedRowIndex_12365, var_branchColumn_12772, var_currentNode_12803, var_arrowStyle_12838, ioArgument_ioArrows, var_maxUsedRowIndex_12365, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 331)) ;
    var_endingNodes_12695.addAssign_operation (var_currentNode_12803  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 341)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictInf, var_endColumn_12620.objectCompare (var_branchColumn_12772)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_endColumn_12620 = var_branchColumn_12772 ;
    }
    enumerator_12725.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_12620 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_12365)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_12365 ;
  }
  GALGAS_string var_endNodeName_13471 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 352)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
  ioArgument_ioCurrentNode = var_endNodeName_13471 ;
  cEnumerator_stringlist enumerator_13684 (var_endingNodes_12695, kEnumeration_up) ;
  while (enumerator_13684.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_13684.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (var_endNodeName_13471, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 358)) ;
    enumerator_13684.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_markerEndNodeName_13978 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (object->mAttribute_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 363)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_13978, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 362)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 368)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (var_markerEndNodeName_13978, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 369)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_13978 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                              GALGAS_rowList & ioArgument_ioRowList,
                                                                                              const GALGAS_uint constinArgument_inRow,
                                                                                              GALGAS_uint & ioArgument_ioColumn,
                                                                                              GALGAS_string & ioArgument_ioCurrentNode,
                                                                                              GALGAS_string & ioArgument_ioArrowShape,
                                                                                              GALGAS_string & ioArgument_ioArrows,
                                                                                              GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                              const GALGAS_bool constinArgument_inDebug,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGrammarAnalysis * object = (const cPtr_repeatInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGrammarAnalysis) ;
  const enumGalgasBool test_0 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_markerStartNodeName_14801 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (object->mAttribute_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 389)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 389)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 389)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_14801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 388)) ;
    }
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (var_markerStartNodeName_14801, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 394)) ;
    ioArgument_ioCurrentNode = var_markerStartNodeName_14801 ;
    ioArgument_ioArrowShape = GALGAS_string ("--") ;
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 397)) ;
  }
  GALGAS_string var_returnNodeName_15135 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_15135, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 400)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 401)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_15188 = object->mAttribute_mRepeatBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_15289 ;
  {
  var_branches_15188.setter_popFirst (var_brancheZero_15289, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 404)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_15312 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_15289, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_15312, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 406)) ;
  GALGAS_uint var_endColumn_15559 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_15700 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_15700, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 419)) ;
  GALGAS_bool var_oneEmptyBranch_15801 = GALGAS_bool (kIsEqual, var_branches_15188.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 421)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  const enumGalgasBool test_1 = var_oneEmptyBranch_15801.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_15888 ;
    var_branches_15188.method_first (var_firstBranch_15888, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)) ;
    var_oneEmptyBranch_15801 = GALGAS_bool (kIsEqual, var_firstBranch_15888.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 424)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_stringlist var_endingNodes_15988 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 427)) ;
  const enumGalgasBool test_2 = var_oneEmptyBranch_15801.boolEnum () ;
  if (kBoolTrue == test_2) {
    var_endingNodes_15988.addAssign_operation (var_startNodeName_15700  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_nextBranchUsedRowIndex_16090 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_16125 (var_branches_15188, kEnumeration_up) ;
    while (enumerator_16125.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_16090.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 433)) ;
      GALGAS_uint var_branchColumn_16183 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_16216 = var_startNodeName_15700 ;
      GALGAS_string var_arrowStyle_16253 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_16125.current (HERE).mAttribute_mSyntaxInstructionList, ioArgument_ioRowList, var_nextBranchUsedRowIndex_16090, var_branchColumn_16183, var_currentNode_16216, var_arrowStyle_16253, ioArgument_ioArrows, var_nextBranchUsedRowIndex_16090, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 437)) ;
      var_endingNodes_15988.addAssign_operation (var_currentNode_16216  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 447)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_endColumn_15559.objectCompare (var_branchColumn_16183)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_endColumn_15559 = var_branchColumn_16183 ;
      }
      enumerator_16125.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_15559 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_16090 ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_15312)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_15312 ;
  }
  ioArgument_ioMaxUsedRowIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 459)) ;
  GALGAS_string var_returnUpperNodeName_17091 ;
  {
  extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[point] {}"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 461)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 462)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (var_returnNodeName_15135, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 463)) ;
  cEnumerator_stringlist enumerator_17248 (var_endingNodes_15988, kEnumeration_up) ;
  while (enumerator_17248.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_17248.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (var_returnUpperNodeName_17091, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)) ;
    enumerator_17248.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inDebug.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_markerEndNodeName_17550 ;
    {
    extensionSetter_append (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (object->mAttribute_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 471)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_17550, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 470)) ;
    }
    ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 476)) ;
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (var_markerEndNodeName_17550, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)) ;
    ioArgument_ioCurrentNode = var_markerEndNodeName_17550 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

