#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodAST.h"
#include "class-abstractCategoryMethodForGeneration.h"
#include "class-abstractCollectionValueElement.h"
#include "class-abstractEnumeratedCollectionAST.h"
#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "class-addExpressionAST.h"
#include "class-addExpressionForGeneration.h"
#include "class-arrayDeclarationAST.h"
#include "class-arrayTypeForGeneration.h"
#include "class-assignmentInstructionAST.h"
#include "class-assignmentInstructionForGeneration.h"
#include "class-castInExpressionAST.h"
#include "class-castInExpressionForGeneration.h"
#include "class-classDeclarationAST.h"
#include "class-classTypeForGeneration.h"
#include "class-collectionValueAST.h"
#include "class-complementExpressionAST.h"
#include "class-concatInstructionAST.h"
#include "class-concatInstructionForGeneration.h"
#include "class-decrementInstructionAST.h"
#include "class-decrementInstructionForGeneration.h"
#include "class-defaultConstructorExpressionForGeneration.h"
#include "class-divisionExpressionAST.h"
#include "class-divisionExpressionForGeneration.h"
#include "class-dropInstructionAST.h"
#include "class-dropInstructionForGeneration.h"
#include "class-enumDeclarationAST.h"
#include "class-enumTypeForGeneration.h"
#include "class-enumeratedCollectionCstListInExpAST.h"
#include "class-enumeratedCollectionImplicitVarInExpAST.h"
#include "class-enumeratedCollectionVarInExpAST.h"
#include "class-errorInstructionAST.h"
#include "class-errorInstructionForGeneration.h"
#include "class-expressionCollectionForGeneration.h"
#include "class-expressionCollectionValue.h"
#include "class-expressionCollectionValueForGeneration.h"
#include "class-expressionListCollectionForGeneration.h"
#include "class-expressionListCollectionValue.h"
#include "class-externFunctionDeclarationAST.h"
#include "class-externRoutineDeclarationAST.h"
#include "class-externTypeDeclarationAST.h"
#include "class-externTypeDeclarationForGeneration.h"
#include "class-extractObjectInExpressionForGeneration.h"
#include "class-filewrapperDeclarationAST.h"
#include "class-filewrapperDeclarationForGeneration.h"
#include "class-filewrapperInExpressionAST.h"
#include "class-filewrapperInExpressionForGeneration.h"
#include "class-filewrapperObjectInstanciationInExpressionAST.h"
#include "class-filewrapperStaticPathInExpressionForGeneration.h"
#include "class-filewrapperTemplateInExpressionAST.h"
#include "class-filewrapperTemplateInExpressionForGeneration.h"
#include "class-forInstructionAST.h"
#include "class-foreachInstructionAST.h"
#include "class-foreachInstructionForGeneration.h"
#include "class-functionCallExpressionAST.h"
#include "class-functionCallExpressionForGeneration.h"
#include "class-functionDeclarationAST.h"
#include "class-functionImplementationForGeneration.h"
#include "class-functionPrototypeDeclarationForGeneration.h"
#include "class-grammarInstructionAST.h"
#include "class-grammarInstructionSyntaxDirectedTranslationDropResult.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInVar.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultNone.h"
#include "class-grammarInstructionWithSourceExpressionForGeneration.h"
#include "class-grammarInstructionWithSourceFileForGeneration.h"
#include "class-graphDeclarationAST.h"
#include "class-graphDeclarationForGeneration.h"
#include "class-greaterOrEqualExpressionAST.h"
#include "class-greaterOrEqualExpressionForGeneration.h"
#include "class-ifExpressionAST.h"
#include "class-ifExpressionForGeneration.h"
#include "class-ifInstructionAST.h"
#include "class-ifInstructionForGeneration.h"
#include "class-incrementInstructionAST.h"
#include "class-incrementInstructionForGeneration.h"
#include "class-inputActualExistingVariableParameterAST.h"
#include "class-inputActualNewConstantParameterAST.h"
#include "class-inputActualNewVariableParameterAST.h"
#include "class-inputActualParameterForGeneration.h"
#include "class-inputJokerActualParameterAST.h"
#include "class-inputJokerParameterForGeneration.h"
#include "class-leftShiftExpressionAST.h"
#include "class-leftShiftExpressionForGeneration.h"
#include "class-lexiqueIntrospectionExpressionAST.h"
#include "class-lexiqueIntrospectionForGeneration.h"
#include "class-listDeclarationAST.h"
#include "class-listTypeForGeneration.h"
#include "class-listmapDeclarationAST.h"
#include "class-listmapTypeForGeneration.h"
#include "class-literalTypeInExpressionAST.h"
#include "class-literalTypeInExpressionForGeneration.h"
#include "class-localConstantDeclarationWithAssignmentAST.h"
#include "class-localVariableDeclarationAST.h"
#include "class-localVariableDeclarationForGeneration.h"
#include "class-localVariableDeclarationWithAssignmentAST.h"
#include "class-localVariableOrConstantDeclarationWithAssignmentAST.h"
#include "class-localVariableOrConstantDeclarationWithConstructorCallAST.h"
#include "class-localVariableOrConstantDeclarationWithConstructorCallForGeneration.h"
#include "class-localVariableOrConstantDeclarationWithDefaultConstructorAST.h"
#include "class-localVariableOrConstantDeclarationWithDefaultConstructorForGeneration.h"
#include "class-localVariableOrConstantDeclarationWithSourceExpressionForGeneration.h"
#include "class-logInstructionAST.h"
#include "class-logInstructionForGeneration.h"
#include "class-loopInstructionAST.h"
#include "class-loopInstructionForGeneration.h"
#include "class-mapDeclarationAST.h"
#include "class-mapProxyDeclarationAST.h"
#include "class-mapProxyTypeForGeneration.h"
#include "class-mapTypeForGeneration.h"
#include "class-matchInstructionAST.h"
#include "class-matchInstructionForGeneration.h"
#include "class-messageInstructionAST.h"
#include "class-messageInstructionForGeneration.h"
#include "class-methodCallInstructionAST.h"
#include "class-methodCallInstructionForGeneration.h"
#include "class-modifierCallInstructionAST.h"
#include "class-modifierCallInstructionForGeneration.h"
#include "class-moduloExpressionAST.h"
#include "class-moduloExpressionForGeneration.h"
#include "class-multiplicationExpressionAST.h"
#include "class-multiplicationExpressionForGeneration.h"
#include "class-notExpressionAST.h"
#include "class-notExpressionForGeneration.h"
#include "class-onceFunctionDeclarationAST.h"
#include "class-onceFunctionDeclarationForGeneration.h"
#include "class-optionComponentDeclarationAST.h"
#include "class-optionComponentForGeneration.h"
#include "class-outputActualParameterAST.h"
#include "class-outputActualParameterForGeneration.h"
#include "class-outputInputActualParameterAST.h"
#include "class-outputInputActualParameterForGeneration.h"
#include "class-plusEqualElementsInstructionAST.h"
#include "class-plusEqualExpressionInstructionAST.h"
#include "class-plusEqualnstructionForGeneration.h"
#include "class-predefinedTypeAST.h"
#include "class-primitiveTypeForGeneration.h"
#include "class-readAccessWithInstructionAST.h"
#include "class-readOnlyWithInstructionForGeneration.h"
#include "class-readWriteAccessWithInstructionAST.h"
#include "class-readWriteWithInstructionForGeneration.h"
#include "class-rightShiftExpressionAST.h"
#include "class-rightShiftExpressionForGeneration.h"
#include "class-routineCallInstructionAST.h"
#include "class-routineCallInstructionForGeneration.h"
#include "class-routineDeclarationAST.h"
#include "class-routineImplementationForGeneration.h"
#include "class-routinePrototypeDeclarationForGeneration.h"
#include "class-selfAssignmentInstructionAST.h"
#include "class-selfConcatInstructionAST.h"
#include "class-selfDecrementInstructionAST.h"
#include "class-selfIncrementInstructionAST.h"
#include "class-selfModifierCallInstructionAST.h"
#include "class-selfModifierCallInstructionForGeneration.h"
#include "class-selfPlusEqualElementsInstructionAST.h"
#include "class-selfPlusEqualExpressionInstructionAST.h"
#include "class-semanticExpressionAST.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-sortedListDeclarationAST.h"
#include "class-sortedListTypeForGeneration.h"
#include "class-strictGreaterExpressionAST.h"
#include "class-strictGreaterExpressionForGeneration.h"
#include "class-strictLowerExpressionAST.h"
#include "class-strictLowerExpressionForGeneration.h"
#include "class-structDeclarationAST.h"
#include "class-structFieldAccessExpressionAST.h"
#include "class-structFieldAccessExpressionForGeneration.h"
#include "class-structTypeForGeneration.h"
#include "class-structuredCastInstructionAST.h"
#include "class-structuredCastInstructionForGeneration.h"
#include "class-subExpressionAST.h"
#include "class-subExpressionForGeneration.h"
#include "class-switchInstructionAST.h"
#include "class-switchInstructionForGeneration.h"
#include "class-testDynamicClassInExpressionAST.h"
#include "class-testDynamicClassInExpressionForGeneration.h"
#include "class-tildeExpressionForGeneration.h"
#include "class-typeMethodCallInstructionAST.h"
#include "class-typeMethodInstructionForGeneration.h"
#include "class-unaryMinusExpressionAST.h"
#include "class-unaryMinusExpressionForGeneration.h"
#include "class-uniqueMapDeclarationAST.h"
#include "class-uniqueMapTypeForGeneration.h"
#include "class-varInExpressionAST.h"
#include "class-varInExpressionForGeneration.h"
#include "class-warningInstructionAST.h"
#include "class-warningInstructionForGeneration.h"
#include "enum-dynamicTypeComparisonKind.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-mapAutomatonMessageKind.h"
#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "enum-predefinedTypeKindEnum.h"
#include "enum-typeKindEnum.h"
#include "func-binaryAddOperator.h"
#include "func-binaryDivOperator.h"
#include "func-binaryModOperator.h"
#include "func-binaryMulOperator.h"
#include "func-binaryShiftOperator.h"
#include "func-binarySubOperator.h"
#include "func-elementTypeNameSuffix.h"
#include "func-forbiddenKeysForMap.h"
#include "func-forbiddenKeysForStruct.h"
#include "func-incDecOperator.h"
#include "func-isComparable.h"
#include "func-plusEqualOperatorWithExpression.h"
#include "func-supportWithAccessor.h"
#include "func-unaryMinusOperator.h"
#include "func-unaryNotOperator.h"
#include "func-unaryTildeOperator.h"
#include "getter-formalArgumentPassingModeAST-correspondingEffectiveParameterString.h"
#include "getter-formalArgumentPassingModeAST-string.h"
#include "grammar-galgas3Grammar.h"
#include "grammar-galgas3ProjectGrammar.h"
#include "grammar-grammarLL1grammar.h"
#include "grammar-guiGrammar.h"
#include "grammar-lexiqueLL1grammar.h"
#include "grammar-optionLL1grammar.h"
#include "grammar-programSLRgrammar.h"
#include "grammar-projectLL1grammar.h"
#include "grammar-semanticsSLRgrammar.h"
#include "grammar-syntaxSLRgrammar.h"
#include "grammar-templateGrammar.h"
#include "list-actualOutputExpressionList.h"
#include "list-actualParameterListAST.h"
#include "list-actualParameterListForGeneration.h"
#include "list-attributeInCollectionListAST.h"
#include "list-castInstructionBranchListAST.h"
#include "list-castInstructionBranchListForGeneration.h"
#include "list-collectionValueElementList.h"
#include "list-collectionValueElementListForGeneration.h"
#include "list-enumConstantList.h"
#include "list-enumConstantListForGeneration.h"
#include "list-enumerationDescriptorList.h"
#include "list-extractedAssociatedValuesForGeneration.h"
#include "list-filewrapperTemplateListAST.h"
#include "list-filewrapperTemplateListForGeneration.h"
#include "list-forInstructionEnumeratedObjectListAST.h"
#include "list-foreachInstructionEnumeratedObjectElementListAST.h"
#include "list-foreachInstructionEnumeratedObjectListAST.h"
#include "list-foreachInstructionEnumeratedObjectListForGeneration.h"
#include "list-formalInputParameterListAST.h"
#include "list-formalInputParameterListForGeneration.h"
#include "list-formalParameterListAST.h"
#include "list-formalParameterListForGeneration.h"
#include "list-formalParameterSignature.h"
#include "list-formalTemplateInputParameterListAST.h"
#include "list-functionSignature.h"
#include "list-graphInsertModifierList.h"
#include "list-indexingListAST.h"
#include "list-insertMethodListAST.h"
#include "list-insertOrReplaceDeclarationListAST.h"
#include "list-localConstantList.h"
#include "list-localInitializedVariableList.h"
#include "list-logListAST.h"
#include "list-mapOverrideBlockDescriptorAST.h"
#include "list-mapOverrideBlockListAST.h"
#include "list-mapOverrideList.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-mapStateList.h"
#include "list-mapStateTransitionList.h"
#include "list-matchEntryListAST.h"
#include "list-matchInstructionBranchListAST.h"
#include "list-matchInstructionBranchListForGeneration.h"
#include "list-matchListForGeneration.h"
#include "list-semanticExpressionListAST.h"
#include "list-semanticExpressionListForGeneration.h"
#include "list-semanticInstructionListAST.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-sortDescriptorListForGeneration.h"
#include "list-sortedListSortDescriptorListAST.h"
#include "list-switchBranchesAST.h"
#include "list-switchBranchesForGeneration.h"
#include "list-templateInstructionListAST.h"
#include "list-templateInstructionListForGeneration.h"
#include "list-typedAttributeList.h"
#include "list-unifiedTypeMapProxyAndLocalVariableList.h"
#include "list-unifiedTypeMapProxyList.h"
#include "map-attributeIndexMap.h"
#include "map-attributeMap.h"
#include "map-classMethodMap.h"
#include "map-commandLineOptionMap.h"
#include "map-constantIndexMap.h"
#include "map-constructorMap.h"
#include "map-filewrapperMap.h"
#include "map-filewrapperTemplateMap.h"
#include "map-functionMap.h"
#include "map-grammarLabelMap.h"
#include "map-grammarMap.h"
#include "map-insertMethodMap.h"
#include "map-instanceMethodMap.h"
#include "map-lexiqueComponentMapForSemanticAnalysis.h"
#include "map-mapAutomatonActionMap.h"
#include "map-mapAutomatonStateMap.h"
#include "map-modifierMap.h"
#include "map-optionComponentMapForSemanticAnalysis.h"
#include "map-readerMap.h"
#include "map-routineMap.h"
#include "map-searchMethodMap.h"
#include "map-templateVariableMap.h"
#include "map-terminalMap.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperFileMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-abstractCollectionValueElement-analyze.h"
#include "method-abstractEnumeratedCollectionAST-analyzeEnumeration.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-analyzeGrammarInstructionSDT.h"
#include "method-actualParameterAST-checkAgainstFormalArgument.h"
#include "method-semanticDeclarationAST-semanticAnalysis.h"
#include "method-semanticExpressionAST-analyzeSemanticExpression.h"
#include "method-semanticInstructionAST-analyzeSemanticInstruction.h"
#include "option-galgas_cli_options.h"
#include "proc-analyzeConstructorInvocation.h"
#include "proc-analyzeErrorOrWarningInstruction.h"
#include "proc-analyzeFunctionBody.h"
#include "proc-analyzeRoutineArguments.h"
#include "proc-analyzeRoutineBody.h"
#include "proc-analyzeSemanticInstructionList.h"
#include "proc-checkAssignmentTypes.h"
#include "proc-checkDiadicOperator.h"
#include "proc-checkExpressionIsBoolean.h"
#include "proc-check_K_L_escapeCharacters.h"
#include "proc-check_K_escapeCharacters.h"
#include "proc-templateInstructionListAnalysis.h"
#include "sortedlist-branchBehaviourSortedListForMapOverride.h"
#include "sortedlist-mapStateSortedList.h"
#include "sortedlist-mapStateTransitionSortedList.h"
#include "sortedlist-semanticDeclarationSortedListForGeneration.h"
#include "struct-analysisContext.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
#include "struct-templateAnalysisContext.h"
#include "uniquemap-unifiedTypeMap.h"
#include "uniquemap-variableMap.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@greaterOrEqualExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1208)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1208)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1210)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1213)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1216)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1216)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1222)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@strictGreaterExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1239)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1239)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1244)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1246)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1246)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1247)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1250)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1250)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1252))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1256)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                 categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@strictLowerExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1273)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1273)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1278)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1280)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1280)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1280)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1281)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1284)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1284)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1285)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1290)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                 categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@rightShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1307)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1307)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1310)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1310)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1312)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1314)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1316)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1316)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1316))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1315)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1318)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1324)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                 categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@leftShiftExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1341)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1341)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1344)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1344)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1346)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1347)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1348)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1348)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1348)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1349)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1352)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1353)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1358)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                 categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@addExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1375)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1375)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1378)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1378)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1380)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1383)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1384)).operator_and (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1384)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1384)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1381)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1390)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                 categoryMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineCategoryMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@subExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1411)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1414)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)).operator_and (function_binarySubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1412)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1421)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                 categoryMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineCategoryMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1437)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1437)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1440)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1440)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1442)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1445)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1446)).operator_and (function_binaryMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1446)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1446)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1443)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1452)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                 categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1473)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1476)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1477)).operator_and (function_binaryDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1477)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1477)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1474)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1483)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                 categoryMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1499)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1499)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1502)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1502)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1507)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1508)).operator_and (function_binaryModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1508)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1508)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1505)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1514)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                 categoryMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@unaryMinusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1530)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1530)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1532)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1533)).operator_and (function_unaryMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1533)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1533)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1535)).add_operation (GALGAS_string ("' and does not support the unary minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1535))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1534)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1539)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                 categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@notExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1555)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1555)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1557)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1558)).operator_and (function_unaryNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1558)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1558)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1560)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1560)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1560))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1559)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1564)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                 categoryMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@structFieldAccessExpressionAST analyzeSemanticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                     const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1580)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1580)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1582)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1583)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1583)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '->' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1584)) ;
  }
  GALGAS_attributeMap var_attributeMap = var_type.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1586)) ;
  var_attributeMap.method_searchKey (object->mAttribute_mStructFieldName, var_type, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1587)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1589)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                 categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)) ;
  GALGAS_unifiedTypeMapProxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1607)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1608)).operator_and (function_unaryTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1608)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1608)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1610)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1610)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1610))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1609)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1614)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                 categoryMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ifExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMapProxy constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1633)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1636)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1638)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1638)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1639)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642)).objectCompare (var_else_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)).add_operation (var_else_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1644))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1643)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1649)), object->mAttribute_mOperatorLocation, var_if_5F_expression, var_then_5F_expression, var_else_5F_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1648)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                 categoryMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_functionSignature var_functionSignature ;
  GALGAS_unifiedTypeMapProxy var_resultType ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultType, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1665)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.reader_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1673)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1674)).objectCompare (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1674)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1675)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1679)).objectCompare (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1679)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)).add_operation (var_functionSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1681)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1680)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1686)) ;
    cEnumerator_functionSignature enumerator_83350 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_actualOutputExpressionList enumerator_83374 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_83350.hasCurrentObject () && enumerator_83374.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_83374.current_mExpression (HERE).ptr (), enumerator_83350.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1688)) ;
      {
      routine_checkAssignmentTypes (enumerator_83350.current_mFormalArgumentType (HERE), var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1694)), enumerator_83374.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1694)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_83350.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_83374.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_83350.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_83350.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1696)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_83374.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1696)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1696))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1696)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1698)) ;
      enumerator_83350.gotoNextObject () ;
      enumerator_83374.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1702)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1700)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                 categoryMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@varInExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMapProxy var_type ;
  GALGAS_string var_sourceVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mVarName, var_type, var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1715)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mVarName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1723)), var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1721)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                 categoryMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalTypeInExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_bool joker_85252_26 ; // Joker input parameter
  GALGAS_bool joker_85252_25 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_85252_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_85252_23 ; // Joker input parameter
  GALGAS_bool joker_85252_22 ; // Joker input parameter
  GALGAS_typedAttributeList joker_85252_21 ; // Joker input parameter
  GALGAS_attributeMap joker_85252_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_85252_19 ; // Joker input parameter
  GALGAS_constructorMap joker_85252_18 ; // Joker input parameter
  GALGAS_readerMap joker_85252_17 ; // Joker input parameter
  GALGAS_modifierMap joker_85252_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_85252_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_85252_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_85252_13 ; // Joker input parameter
  GALGAS_stringlist joker_85252_12 ; // Joker input parameter
  GALGAS_uint joker_85252_11 ; // Joker input parameter
  GALGAS_functionSignature joker_85252_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_85252_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_85252_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_85252_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_85252_6 ; // Joker input parameter
  GALGAS_bool joker_85252_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_85252_4 ; // Joker input parameter
  GALGAS_string joker_85252_3 ; // Joker input parameter
  GALGAS_string joker_85252_2 ; // Joker input parameter
  GALGAS_headerKind joker_85252_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mLiteralTypeName, joker_85252_26, joker_85252_25, joker_85252_24, joker_85252_23, joker_85252_22, joker_85252_21, joker_85252_20, joker_85252_19, joker_85252_18, joker_85252_17, joker_85252_16, joker_85252_15, joker_85252_14, joker_85252_13, joker_85252_12, joker_85252_11, joker_85252_10, joker_85252_9, joker_85252_8, joker_85252_7, joker_85252_6, joker_85252_5, joker_85252_4, joker_85252_3, joker_85252_2, joker_85252_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1736)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1739)), object->mAttribute_mLiteralTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1740)), object->mAttribute_mLiteralTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1741))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1738)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                 categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@testDynamicClassInExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1753)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1753)) ;
  GALGAS_unifiedTypeMapProxy var_castType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1755)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapProxy var_t = var_castType ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1760)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)).isValid ()) {
      uint32_t variant_86446 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)).uintValue () ;
      bool loop_86446 = true ;
      while (loop_86446) {
        loop_86446 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).isValid () ;
        if (loop_86446) {
          loop_86446 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)).boolValue () ;
        }
        if (loop_86446 && (0 == variant_86446)) {
          loop_86446 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1761)) ;
        }
        if (loop_86446) {
          variant_86446 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1763)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1764)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1766)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)).add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1768))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1767)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1771)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1772)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1772)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1771)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1772))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1771)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1777)), var_expression, object->mAttribute_mTypeComparisonKind, var_castType  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1775)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                 categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@castInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1792)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1791)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1798)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1802)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1802)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1802)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapProxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)).isValid ()) {
      uint32_t variant_88129 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)).uintValue () ;
      bool loop_88129 = true ;
      while (loop_88129) {
        loop_88129 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).isValid () ;
        if (loop_88129) {
          loop_88129 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).boolValue () ;
        }
        if (loop_88129 && (0 == variant_88129)) {
          loop_88129 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1806)) ;
        }
        if (loop_88129) {
          variant_88129 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1808)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1811)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)).add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1814)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1814)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1814))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1812)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1816)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1816)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1821)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1823)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1823)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1822)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1823))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1821)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1826)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1826)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mEndOfReceiverExpression, var_expression, object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1831))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1827)) ;
  }else if (kBoolFalse == test_4) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1835)), var_expression, object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1837))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1833)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                 categoryMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                    const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                    GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_filewrapperPath ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstringlist joker_89822_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_89822_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_89822_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_89822_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, var_filewrapperPath, joker_89822_4, joker_89822_3, joker_89822_2, joker_89822_1, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1849)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1857)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1864))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1864)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1864)), object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1865)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1866)), var_filewrapperPath.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1867))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1863)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_90983_4 ; // Joker input parameter
  GALGAS_lstringlist joker_90983_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_90983_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_90983_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_90983_4, joker_90983_3, joker_90983_2, joker_90983_1, var_filewrapperTemplateMap, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1878)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1886)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1887)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1887)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1888)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1888)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1888))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1888)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature ;
  GALGAS_lstring joker_91578_0 ; // Joker input parameter
  var_filewrapperTemplateMap.method_searchKey (object->mAttribute_mFilewrapperTemplateName, var_templateSignature, joker_91578_0, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1892)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1895)).objectCompare (var_templateSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1895)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperTemplateName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("calling the '").add_operation (object->mAttribute_mFilewrapperTemplateName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)).add_operation (var_templateSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1899)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1899)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1899))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1896)) ;
    var_effectiveParameterList.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1902)) ;
    cEnumerator_actualOutputExpressionList enumerator_92158 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_92184 (var_templateSignature, kEnumeration_up) ;
    while (enumerator_92158.hasCurrentObject () && enumerator_92184.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_92184.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_92158.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_92184.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_92158.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (enumerator_92184.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_92158.current_mExpression (HERE).ptr (), enumerator_92184.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1907)) ;
      {
      routine_checkAssignmentTypes (enumerator_92184.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)), enumerator_92158.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)) ;
      }
      var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)) ;
      enumerator_92158.gotoNextObject () ;
      enumerator_92184.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1915)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1916)), object->mAttribute_mFilewrapperTemplateName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1917)), var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1913)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@filewrapperInExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_stringlist var_directoryList ;
  GALGAS_string var_fileName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1931)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("path is empty")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1932)) ;
    var_directoryList.drop () ; // Release error dropped variable
    var_fileName.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1933)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the path should not begin with '/'")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1934)) ;
      var_directoryList.drop () ; // Release error dropped variable
      var_fileName.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList = object->mAttribute_mFilewrapperPath.mAttribute_string.reader_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1936)) ;
      {
      var_directoryList.modifier_popLast (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1937)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap ;
  GALGAS_bool var_isInternal ;
  GALGAS_lstring joker_93862_0 ; // Joker input parameter
  GALGAS_lstringlist joker_93869_0 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_93974_0 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_93862_0, joker_93869_0, var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_93974_0, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1940)) ;
  const enumGalgasBool test_4 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFilewrapperMap.reader_locationForKey (object->mAttribute_mFilewrapperName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1951)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFilewrapperName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1952)).objectCompare (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1952)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (object->mAttribute_mFilewrapperName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1953)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1953)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1953))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1953)) ;
    }
  }
  GALGAS_string var_builtPath = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).isValid ()) {
    uint32_t variant_94451 = var_filewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).uintValue () ;
    bool loop_94451 = true ;
    while (loop_94451) {
      loop_94451 = GALGAS_bool (kIsStrictSup, var_directoryList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1959)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_94451) {
        loop_94451 = GALGAS_bool (kIsStrictSup, var_directoryList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1959)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_94451 && (0 == variant_94451)) {
        loop_94451 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)) ;
      }
      if (loop_94451) {
        variant_94451 -- ;
        GALGAS_string var_directoryName ;
        {
        var_directoryList.modifier_popFirst (var_directoryName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1961)) ;
        }
        var_builtPath.dotAssign_operation (var_directoryName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1962))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1962)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap.reader_hasKey (var_directoryName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1963)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_94865_0 ; // Joker input parameter
          var_filewrapperDirectoryMap.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1965))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1965)), var_filewrapperFileMap, var_filewrapperDirectoryMap, joker_94865_0, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)) ;
        }else if (kBoolFalse == test_7) {
          GALGAS_location location_8 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1971)) ;
          var_filewrapperFileMap.drop () ; // Release error dropped variable
          var_directoryList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1972)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex ;
  GALGAS_bool var_isTextFile ;
  const enumGalgasBool test_9 = var_filewrapperFileMap.reader_hasKey (var_fileName COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1977)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_95273_0 ; // Joker input parameter
    GALGAS_uint joker_95288_0 ; // Joker input parameter
    var_filewrapperFileMap.method_searchKey (GALGAS_lstring::constructor_new (var_fileName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1978))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1978)), joker_95273_0, var_isTextFile, joker_95288_0, var_fileIndex, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1978)) ;
  }else if (kBoolFalse == test_9) {
    GALGAS_location location_10 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (var_fileName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)).add_operation (var_builtPath, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)).add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1981))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1980)) ;
    var_fileIndex.drop () ; // Release error dropped variable
    var_isTextFile.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapProxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1988))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1988)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1988)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mAttribute_mFilewrapperName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1990)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1991)), var_fileIndex, var_isTextFile  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1985)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                 categoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_terminalMap joker_96378_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_96378_2 ; // Joker input parameter
  GALGAS_lstring joker_96378_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_96378_3, joker_96378_2, joker_96378_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2004)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueReaderName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLexiqueReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("unknown reader")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").reader_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2014)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2014)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueReaderName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2013)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                 categoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              const GALGAS_unifiedTypeMapProxy constinArgument_inElementType,
                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                              GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2037)) ;
  {
  routine_checkAssignmentTypes (constinArgument_inElementType, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)), object->mAttribute_mExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2044)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionValue_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                               categoryMethod_expressionCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineCategoryMethod_expressionCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  const GALGAS_unifiedTypeMapProxy constinArgument_inElementType,
                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                  GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList = constinArgument_inElementType.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2056)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2058)).objectCompare (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2058)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)).add_operation (var_formalParameterTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2061))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2059)) ;
    var_semanticExpressionListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2063)) ;
    cEnumerator_actualOutputExpressionList enumerator_98940 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_98972 (var_formalParameterTypeList, kEnumeration_up) ;
    while (enumerator_98940.hasCurrentObject () && enumerator_98972.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_98940.current_mExpression (HERE).ptr (), enumerator_98972.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2065)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_98972.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_98940.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_98972.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_4 (enumerator_98940.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!").add_operation (enumerator_98972.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2067)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2067)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2067)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2067))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2067)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_98972.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2069)), enumerator_98940.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2069)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2070)) ;
      enumerator_98940.gotoNextObject () ;
      enumerator_98972.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2072))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2072)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionListCollectionValue_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                               categoryMethod_expressionListCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineCategoryMethod_expressionListCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@collectionValueAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMapProxy constinArgument_inType,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2120)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2123)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2124)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType.reader_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2125)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2125)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2126)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2129)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2133)) ;
        cEnumerator_collectionValueElementList enumerator_101794 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_101794.hasCurrentObject ()) {
          callCategoryMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_101794.current_mElement (HERE).ptr (), constinArgument_inAnalysisContext, var_targetType, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2135)) ;
          enumerator_101794.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2142)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                 categoryMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineCategoryMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithDefaultConstructorAST analyzeSemanticInstruction' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 94)) ;
  const enumGalgasBool test_0 = var_targetType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 98)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 99)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 100)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 101)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 104)) ;
  const enumGalgasBool test_4 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_4) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 106)) ;
    }
  }else if (kBoolFalse == test_4) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 108)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 111))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@localVariableOrConstantDeclarationWithConstructorCallAST analyzeSemanticInstruction'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 124)) ;
  GALGAS_unifiedTypeMapProxy var_returnedType ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  GALGAS_bool var_hasCompilerArgument ;
  {
  GALGAS_unifiedTypeMapProxy joker_5815_0 ; // Joker input parameter
  routine_analyzeConstructorInvocation (var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mConstructorExpressions, var_returnedType, joker_5815_0, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 126)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.objectCompare (var_returnedType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mConstructorName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this constructor returns an '@").add_operation (var_returnedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141)).add_operation (GALGAS_string ("' object, you should use a constructor that return an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 141))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 140)) ;
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 144)) ;
  const enumGalgasBool test_2 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 146)) ;
    }
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 148)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 156)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 151))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 151)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 176)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 186)), GALGAS_bool (false), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 185))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 185)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 207)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 209)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)) ;
    }
  }
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType, object->mAttribute_mIsConstant, var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 216))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 216)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVariableName, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 238)), var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 238)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)), GALGAS_bool (true), var_targetVariableCppName, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 240))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 240)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                  categoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineCategoryMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@localVariableDeclarationAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 254)) ;
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 255)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsUndefinedConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertUndefinedLocalConstant (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 257)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVariableName, var_targetType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 259)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                  categoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineCategoryMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@assignmentInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVariableName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 280)) ;
    }
    cEnumerator_lstringlist enumerator_12381 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
    while (enumerator_12381.hasCurrentObject ()) {
      GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)) ;
      var_attributeMap.method_searchKey (enumerator_12381.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 283)) ;
      enumerator_12381.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 294)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 296))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 296)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                  categoryMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfAssignmentInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 319)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 320)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 320)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 321)) ;
    }
  }
  {
  routine_checkAssignmentTypes (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 330)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                  categoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@errorInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression ;
  GALGAS_semanticExpressionForGeneration var_messageExpression ;
  GALGAS_bool var_useLocationReader ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 398)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 410)) ;
  cEnumerator_lstringlist enumerator_17962 (object->mAttribute_mBuiltVariableList, kEnumeration_up) ;
  while (enumerator_17962.hasCurrentObject ()) {
    GALGAS_string var_varCppName ;
    {
    GALGAS_unifiedTypeMapProxy joker_18040_0 ; // Joker input parameter
    GALGAS_string joker_18055_0 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForWriteAccess (enumerator_17962.current_mValue (HERE), joker_18040_0, var_varCppName, joker_18055_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)) ;
    }
    var_builtVariableCppNameList.addAssign_operation (var_varCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)) ;
    enumerator_17962.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression, var_builtVariableCppNameList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                  categoryMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@warningInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression ;
  GALGAS_semanticExpressionForGeneration var_messageExpression ;
  GALGAS_bool var_useLocationReader ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 435)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                  categoryMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                GALGAS_unifiedTypeMapProxyAndLocalVariableList & /* ioArgument_ioLocalVariableDeclarationList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 489)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 490)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 489)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 493)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 493))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_4 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 496)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 498)) ;
    {
    routine_checkAssignmentTypes (constinArgument_inFormalArgumentType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 505)), object->mAttribute_mEndOfExpressionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 505)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 507))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 507)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                  categoryMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@outputInputActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                     const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                     GALGAS_unifiedTypeMapProxyAndLocalVariableList & /* ioArgument_ioLocalVariableDeclarationList */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 524)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 527)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 527))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_4 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)) ;
    }
  }
  GALGAS_string var_variableCppName ;
  GALGAS_unifiedTypeMapProxy var_parameterType ;
  {
  GALGAS_string joker_23222_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType, var_variableCppName, joker_23222_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 533)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 534)) ;
  cEnumerator_lstringlist enumerator_23333 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_23333.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_parameterType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)) ;
    var_attributeMap.method_searchKey (enumerator_23333.current_mValue (HERE), var_parameterType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 537)) ;
    var_typeList.addAssign_operation (var_parameterType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 538)) ;
    enumerator_23333.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mOutputInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 543)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 543)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 544)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 544))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 542)) ;
  }
  const enumGalgasBool test_7 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mOutputInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 547)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 547)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mOutputInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 548)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType, var_variableCppName, object->mAttribute_mStructAttributeList, var_typeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                  categoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                               const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                               const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                               const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                               GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                               GALGAS_unifiedTypeMapProxyAndLocalVariableList & /* ioArgument_ioLocalVariableDeclarationList */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 571)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 573)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 573)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 574)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 574))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 572)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_4 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)) ;
    }
  }
  GALGAS_unifiedTypeMapProxy var_parameterType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_25547_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType, var_targetVariableCppName, joker_25547_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)) ;
  }
  const enumGalgasBool test_7 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 591)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 595)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 597)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                  categoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                          const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                          GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                          GALGAS_unifiedTypeMapProxyAndLocalVariableList & ioArgument_ioLocalVariableDeclarationList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 614)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_4 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_unifiedTypeMapProxy var_parameterType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 624)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 627)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 627)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 633)) ;
  }
  ioArgument_ioLocalVariableDeclarationList.addAssign_operation (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 640)) ;
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 642)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 643)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 646)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                  categoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                          const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                          GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                          GALGAS_unifiedTypeMapProxyAndLocalVariableList & ioArgument_ioLocalVariableDeclarationList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 665)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_4 (object->mAttribute_mActualSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 670)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_unifiedTypeMapProxy var_parameterType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 675)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 678)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 678)).add_operation (constinArgument_inFormalArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 679)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 679))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 677)) ;
    }
  }
  GALGAS_string var_targetVariableCppName = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 683)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName, var_targetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 684)) ;
  }
  ioArgument_ioLocalVariableDeclarationList.addAssign_operation (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 691)) ;
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.reader_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 693)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mInputActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("this variable is already named as input or output/input effective parameter")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 694)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 697)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 699)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                  categoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                    const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                    const GALGAS_unifiedTypeMapProxy constinArgument_inFormalArgumentType,
                                                                                    const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                    GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                    GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                    GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                    GALGAS_unifiedTypeMapProxyAndLocalVariableList & /* ioArgument_ioLocalVariableDeclarationList */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (categoryReader_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 717)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 717)).add_operation (categoryReader_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)).add_operation (object->mAttribute_mJokerIndex.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterCategoryMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                  categoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineCategoryMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@routineCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineCallInstructionAST * object = (const cPtr_routineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineCallInstructionAST) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.method_searchKey (object->mAttribute_mRoutineName, var_routineSignature, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.reader_locationForKey (object->mAttribute_mRoutineName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 777)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mRoutineName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)).objectCompare (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 779)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 779)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 779))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 779)) ;
    }
  }
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 783)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mRoutineName, GALGAS_string ("'").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 787)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 787)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 784)) ;
  }
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_35183 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_35183.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_35183.current_mType (HERE), enumerator_35183.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796)) ;
    enumerator_35183.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_routineCallInstructionForGeneration::constructor_new (object->mAttribute_mRoutineName, var_actualParameterListForGeneration  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 800))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 800)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_routineCallInstructionAST.mSlotID,
                                                  categoryMethod_routineCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_routineCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@typeMethodCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 812)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  var_type.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature, var_hasCompilerArgument, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 816)) ;
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 818)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 819)) ;
  }
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_36578 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_36578.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_36578.current_mType (HERE), enumerator_36578.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 831))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 831)) ;
    enumerator_36578.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 835))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 835)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                  categoryMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@methodCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 850)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 849)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_string var_errorMessage ;
  GALGAS_location joker_37661_0 ; // Joker input parameter
  GALGAS_methodQualifier joker_37685_0 ; // Joker input parameter
  var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)).method_searchKey (object->mAttribute_mMethodName, var_kind, var_routineSignature, joker_37661_0, var_hasCompilerArgument, joker_37685_0, var_errorMessage, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 860)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, var_errorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 862)) ;
  }
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 865)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 869)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 869)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 866)) ;
  }
  GALGAS_unifiedTypeMapProxy var_baseType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 877)) ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 879)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 880)).isValid ()) {
      uint32_t variant_38351 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 880)).uintValue () ;
      bool loop_38351 = true ;
      while (loop_38351) {
        loop_38351 = var_searching.isValid () ;
        if (loop_38351) {
          loop_38351 = var_searching.boolValue () ;
        }
        if (loop_38351 && (0 == variant_38351)) {
          loop_38351 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 880)) ;
        }
        if (loop_38351) {
          variant_38351 -- ;
          const enumGalgasBool test_3 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)).reader_hasKey (object->mAttribute_mMethodName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 885)) ;
            }else if (kBoolFalse == test_4) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_38743 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_38743.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_38743.current_mType (HERE), enumerator_38743.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 894))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 894)) ;
    enumerator_38743.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 900)), var_receiverExpression, object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 902)), var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                  categoryMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@modifierCallInstructionAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modifierCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modifierCallInstructionAST * object = (const cPtr_modifierCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_modifierCallInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_receiverType ;
  GALGAS_string var_receiverVariableCppName ;
  GALGAS_string var_receiverVariableBaseName ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType, var_receiverVariableCppName, var_receiverVariableBaseName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 940)) ;
  }
  cEnumerator_lstringlist enumerator_40460 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_40460.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_receiverType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 942)) ;
    var_attributeMap.method_searchKey (enumerator_40460.current_mValue (HERE), var_receiverType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 943)) ;
    enumerator_40460.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_string var_modifierErrorMessage ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_40826_0 ; // Joker input parameter
  var_receiverType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 950)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_40826_0, var_modifierErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 950)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_modifierErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, var_modifierErrorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 952)) ;
  }
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 955)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 959)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 959)).add_operation (GALGAS_string ("' modifier header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 959)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 956)) ;
  }
  GALGAS_unifiedTypeMapProxy var_baseType = var_receiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 969)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 970)).isValid ()) {
      uint32_t variant_41495 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 970)).uintValue () ;
      bool loop_41495 = true ;
      while (loop_41495) {
        loop_41495 = var_searching.isValid () ;
        if (loop_41495) {
          loop_41495 = var_searching.boolValue () ;
        }
        if (loop_41495 && (0 == variant_41495)) {
          loop_41495 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 970)) ;
        }
        if (loop_41495) {
          variant_41495 -- ;
          const enumGalgasBool test_3 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 971)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 971)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 974)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 974)).reader_hasKey (object->mAttribute_mModifierName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 974)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 975)) ;
            }else if (kBoolFalse == test_4) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_41883 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_41883.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_41883.current_mType (HERE), enumerator_41883.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 984))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 984)) ;
    enumerator_41883.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_modifierCallInstructionForGeneration::constructor_new (var_receiverVariableCppName, var_receiverVariableBaseName, object->mAttribute_mReceiverStructAttributes, var_receiverType, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 988))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 988)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modifierCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_modifierCallInstructionAST.mSlotID,
                                                  categoryMethod_modifierCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modifierCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_modifierCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfModifierCallInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfModifierCallInstructionAST * object = (const cPtr_selfModifierCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfModifierCallInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1009)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1010)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_43239_0 ; // Joker input parameter
  GALGAS_string joker_43242_0 ; // Joker input parameter
  var_selfTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1019)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_43239_0, joker_43242_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1019)) ;
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1021)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)).add_operation (GALGAS_string ("' modifier header"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1022)) ;
  }
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_43725 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_43725.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_43725.current_mType (HERE), enumerator_43725.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1034))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1034)) ;
    enumerator_43725.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfModifierCallInstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1038))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1038)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfModifierCallInstructionAST.mSlotID,
                                                  categoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfModifierCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@concatInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatInstructionAST * object = (const cPtr_concatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1079)) ;
  }
  cEnumerator_lstringlist enumerator_45396 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_45396.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1081)) ;
    var_attributeMap.method_searchKey (enumerator_45396.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1082)) ;
    enumerator_45396.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1086)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1093)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1093)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1093)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1095)).add_operation (GALGAS_string ("' type, but this type does not support the '.=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1095))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1094)) ;
  }
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1098)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1098)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1100))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_concatInstructionAST.mSlotID,
                                                  categoryMethod_concatInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_concatInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selfConcatInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfConcatInstructionAST * object = (const cPtr_selfConcatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfConcatInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1118)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1119)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1125)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1125)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1125)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1127)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1127)).add_operation (GALGAS_string ("' type, but this type does not support the '.=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1127))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1126)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1131)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1138)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1138)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, var_selfObjectCppName, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1145)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1140))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfConcatInstructionAST.mSlotID,
                                                  categoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfConcatInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfConcatInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1163)) ;
  }
  cEnumerator_lstringlist enumerator_48686 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_48686.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1165)) ;
    var_attributeMap.method_searchKey (enumerator_48686.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1166)) ;
    enumerator_48686.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments = var_targetType.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1169)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1170)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1172)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1172)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1172))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1171)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1174)).objectCompare (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1174)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1176)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1176)).add_operation (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1177)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1177)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1176)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1177)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1178)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1178)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1177)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1178))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1175)) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1180)) ;
      cEnumerator_actualOutputExpressionList enumerator_49656 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_49691 (var_addAssignOperatorArguments, kEnumeration_up) ;
      while (enumerator_49656.hasCurrentObject () && enumerator_49691.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp ;
        callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_49656.current_mExpression (HERE).ptr (), enumerator_49691.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1182)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_49691.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_49656.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_49691.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_location location_5 (enumerator_49656.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '!").add_operation (enumerator_49691.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1189)) ;
        }
        {
        routine_checkAssignmentTypes (enumerator_49691.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1191)), enumerator_49656.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1191)) ;
        }
        var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1192)) ;
        enumerator_49656.gotoNextObject () ;
        enumerator_49691.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName, var_targetType, var_nameForCheckingFormalParameterUsing, object->mAttribute_mInstructionLocation, object->mAttribute_mStructAttributeList, var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1195))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1195)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                  categoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1215)) ;
  }
  cEnumerator_lstringlist enumerator_51144 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_51144.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1217)) ;
    var_attributeMap.method_searchKey (enumerator_51144.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1218)) ;
    enumerator_51144.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1221)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1221)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1221)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1223)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1223))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1222)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_targetType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1226)) ;
  {
  routine_checkAssignmentTypes (var_targetType, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1233)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1233)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType, var_targetVariableCppName, var_nameForCheckingFormalParameterUsing, object->mAttribute_mStructAttributeList, var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1235))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1235)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                  categoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1253)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1254)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments = var_selfTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1260)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1261)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1263)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1263)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1263))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1262)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1265)).objectCompare (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1265)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1267)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1267)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1267)).add_operation (var_addAssignOperatorArguments.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1268)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1268)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1267)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1268)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1269)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1268)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1269))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1266)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1271)) ;
      cEnumerator_actualOutputExpressionList enumerator_53707 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_53742 (var_addAssignOperatorArguments, kEnumeration_up) ;
      while (enumerator_53707.hasCurrentObject () && enumerator_53742.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp ;
        callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_53707.current_mExpression (HERE).ptr (), enumerator_53742.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1273)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_53742.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_53707.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_53742.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = enumerator_53742.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1280)) ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_location location_6 (enumerator_53707.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("the selector should be '!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1280)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1280))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1280)) ;
        }
        {
        routine_checkAssignmentTypes (enumerator_53742.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1282)), enumerator_53707.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1282)) ;
        }
        var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1283)) ;
        enumerator_53707.gotoNextObject () ;
        enumerator_53742.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, GALGAS_string::makeEmptyString (), object->mAttribute_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1291)), var_effectiveParameterList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1286)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                  categoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1305)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1306)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1312)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1312)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1312)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1314)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1314))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1313)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1317)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1324)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1324)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_concatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1331)), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1326))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1326)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                  categoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@incrementInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incrementInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incrementInstructionAST * object = (const cPtr_incrementInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incrementInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_56610_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_56610_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1344)) ;
  }
  cEnumerator_lstringlist enumerator_56646 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_56646.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1346)) ;
    var_attributeMap.method_searchKey (enumerator_56646.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1347)) ;
    enumerator_56646.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1350)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1350)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1352)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1352)).add_operation (GALGAS_string ("' type, but this type does not support the '++' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1352))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1351)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incrementInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1355))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1355)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incrementInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incrementInstructionAST.mSlotID,
                                                  categoryMethod_incrementInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incrementInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_incrementInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfIncrementInstructionAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfIncrementInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncrementInstructionAST * object = (const cPtr_selfIncrementInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncrementInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1371)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1372)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1378)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1378)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1378)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1380)).add_operation (GALGAS_string ("' type, but this type does not support the '++' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1380))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1379)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incrementInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1387))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1383))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1383)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfIncrementInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncrementInstructionAST.mSlotID,
                                                  categoryMethod_selfIncrementInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfIncrementInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfIncrementInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@decrementInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_decrementInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decrementInstructionAST * object = (const cPtr_decrementInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_decrementInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_targetVariableCppName ;
  {
  GALGAS_string joker_58912_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_targetVariableCppName, joker_58912_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1399)) ;
  }
  cEnumerator_lstringlist enumerator_58948 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_58948.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1401)) ;
    var_attributeMap.method_searchKey (enumerator_58948.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1402)) ;
    enumerator_58948.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1405)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1405)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1405)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1407)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1407)).add_operation (GALGAS_string ("' type, but this type does not support the '--' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1407))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1406)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_decrementInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetVariableCppName, var_targetType, object->mAttribute_mStructAttributeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1410))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1410)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_decrementInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_decrementInstructionAST.mSlotID,
                                                  categoryMethod_decrementInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decrementInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_decrementInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@selfDecrementInstructionAST analyzeSemanticInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfDecrementInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDecrementInstructionAST * object = (const cPtr_selfDecrementInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDecrementInstructionAST) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1426)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in category modifiers")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1427)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1433)).operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1433)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1433)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1435)).add_operation (GALGAS_string ("' type, but this type does not support the '--' operator"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1435))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1434)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_decrementInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfObjectCppName, var_selfTypeProxy, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1442))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1438))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1438)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfDecrementInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDecrementInstructionAST.mSlotID,
                                                  categoryMethod_selfDecrementInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfDecrementInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_selfDecrementInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@messageInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1454)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1453)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1460)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1462)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1462)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1462))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1461)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1465))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1465)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                  categoryMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@logInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  cEnumerator_logListAST enumerator_61987 (object->mAttribute_mLogList, kEnumeration_up) ;
  while (enumerator_61987.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_61987.current_mLogExpression (HERE).ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1480)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1479)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_61987.current_mLogMessage (HERE), var_expression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1486))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1486)) ;
    enumerator_61987.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                  categoryMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@dropInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  GALGAS_stringlist var_cppNameDropList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1498)) ;
  GALGAS_unifiedTypeMapProxyList var_dropTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1499)) ;
  cEnumerator_lstringlist enumerator_62798 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_62798.hasCurrentObject ()) {
    GALGAS_string var_variableCppName ;
    GALGAS_unifiedTypeMapProxy var_t ;
    {
    GALGAS_string joker_62925_0 ; // Joker input parameter
    ioArgument_ioVariableMap.modifier_searchForDropAccess (enumerator_62798.current_mValue (HERE), var_t, var_variableCppName, joker_62925_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1502)) ;
    }
    var_cppNameDropList.addAssign_operation (var_variableCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1503)) ;
    var_dropTypeList.addAssign_operation (var_t  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1504)) ;
    enumerator_62798.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_dropInstructionForGeneration::constructor_new (var_cppNameDropList, GALGAS_string ("drop instruction"), var_dropTypeList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1507))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1507)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                  categoryMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@ifInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_m_5F_if_5F_expression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1597)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1596)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1602)) ;
  }
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_if_5F_instruction, var_analyzed_5F_if_5F_expression, var_if_5F_expression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1605)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1615)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1616)), object->mAttribute_m_5F_then_5F_instructionList, object->mAttribute_mEndOf_5F_then_5F_branch, ioArgument_ioVariableMap, var_then_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1613)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1626)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1627)), object->mAttribute_m_5F_else_5F_instructionList, object->mAttribute_mEndOf_5F_if_5F_instruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1624)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1633)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (object->mAttribute_mEndOf_5F_then_5F_branch, var_if_5F_expression, var_then_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1635))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1635)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                  categoryMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                       GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1664)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1663)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1670)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1670)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1670)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1671)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1671)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1672)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1673)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1673)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1673)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1673))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1673)) ;
  }
  cEnumerator_enumerationDescriptorList enumerator_69496 (var_enumerationDescriptorList, kEnumeration_up) ;
  while (enumerator_69496.hasCurrentObject ()) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_69496.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_69496.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1679)), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1679)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680)).add_operation (enumerator_69496.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1680))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1677)) ;
    enumerator_69496.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                   GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1693)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1692)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1699)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1699)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1700)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1700)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1701)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1702)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1702)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1702)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1702))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1702)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1705)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1705)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1705)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_enumerationDescriptorList var_currentTypedAttributeList = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1706)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1706)) ;
      cEnumerator_enumerationDescriptorList enumerator_70939 (var_currentTypedAttributeList, kEnumeration_up) ;
      while (enumerator_70939.hasCurrentObject ()) {
        {
        ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_70939.current_mEnumerationName (HERE), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1709)), enumerator_70939.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1711)).add_operation (enumerator_70939.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1711)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1711)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1711)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1712)).add_operation (enumerator_70939.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1712)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1712)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1712)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1708)) ;
        }
        enumerator_70939.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)).operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1715)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1719)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1717)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1717)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1717)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1717)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1718)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1718)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1717)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1718)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1718)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1719)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1721)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1720))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1716)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = object->mAttribute_mEndsWithEllipsis.operator_and (GALGAS_bool (kIsStrictSup, object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1722)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1722)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1722)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1724)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1724)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1724)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1724)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1725)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1725)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1724)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1725)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1725)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1726)).add_operation (object->mAttribute_mElementList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1728)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1727))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1723)) ;
        }else if (kBoolFalse == test_5) {
          cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_72262 (object->mAttribute_mElementList, kEnumeration_up) ;
          cEnumerator_enumerationDescriptorList enumerator_72296 (var_enumerationDescriptorList, kEnumeration_up) ;
          while (enumerator_72262.hasCurrentObject () && enumerator_72296.hasCurrentObject ()) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_72262.current_mConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1731)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_72262.current_mTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                GALGAS_unifiedTypeMapProxy var_foundType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_72262.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1733)) ;
                const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_72296.current_mEnumeratedType (HERE))).boolEnum () ;
                if (kBoolTrue == test_10) {
                  GALGAS_location location_11 (enumerator_72262.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                  inCompiler->emitSemanticError (location_11, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)).add_operation (enumerator_72296.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1735)) ;
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_72296.current_mEnumeratedType (HERE), enumerator_72262.current_mConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1738)).add_operation (enumerator_72296.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1738)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1738)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1738))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1738)) ;
            }
            enumerator_72262.gotoNextObject () ;
            enumerator_72296.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumeratedCollectionVarInExpAST analyzeEnumeration'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                               GALGAS_string & outArgument_outEnumeratorCppName,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1754)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1753)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1760)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1760)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1760)) ;
  GALGAS_unifiedTypeMapProxy var_enumeratedElementType = outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1761)).reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1761)) ;
  const enumGalgasBool test_0 = var_enumeratedElementType.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1762)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1763)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType, object->mAttribute_mEnumerationVariable, outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1765))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1765)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mEnumerationTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapProxy var_explicitType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumerationTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1769)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1770)).objectCompare (var_explicitType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1770)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mEnumerationTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '@").add_operation (var_enumeratedElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1771)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1771))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1771)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterCategoryMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                          categoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineCategoryMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@forInstructionAST analyzeSemanticInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1784)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1785)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1787)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1791)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1792)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1789)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1798)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1800)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1804)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1805)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1802)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1811)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1813)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1816)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1817)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1814)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1823)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1825)) ;
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1826)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_76327 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_76327.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_76327.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch, var_enumeratorCppName, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1828)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = enumerator_76327.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_string ("up") ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_string ("down") ;
    }
    var_enumerationList.addAssign_operation (temp_0, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1836)) ;
    enumerator_76327.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1842)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1843)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_76877 (var_localConstantListForDoBranch, kEnumeration_up) ;
  while (enumerator_76877.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_76877.current_mName (HERE), enumerator_76877.current_mType (HERE), enumerator_76877.current_mCppName (HERE), enumerator_76877.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1846)) ;
    }
    enumerator_76877.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1850)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1849)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1855)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1862)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1863)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1865)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1867)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1868)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1869)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1869)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1869)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1870)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, var_localConstantListForDoBranch, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1878)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1888)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1890)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1891)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1893))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1893)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                  categoryMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@foreachInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionAST * object = (const cPtr_foreachInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1911)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1912)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1914)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1918)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1919)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1916)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1925)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1927)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1931)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1932)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1929)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1938)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1940)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1944)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1945)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1942)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1951)) ;
  }
  GALGAS_foreachInstructionEnumeratedObjectListForGeneration var_enumerationList = GALGAS_foreachInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1953)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListAST enumerator_80590 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_80590.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_enumerationExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_80590.current_mEnumeratedExpression (HERE).ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1958)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_enumerationExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1957)) ;
    GALGAS_string var_enumerationOrder = enumerator_80590.current_mEnumerationOrder (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1964)) ;
    GALGAS_string var_enumeratorCppName = GALGAS_string ("enumerator_").add_operation (enumerator_80590.current_mEndOfEnumerationExpression (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1965)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1965)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1965)) ;
    GALGAS_enumerationDescriptorList var_enumerationDescriptorList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1966)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1966)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1967)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_80590.current_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1968)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_enumerationOrder = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1972)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1972)).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1972)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_bool var_found = GALGAS_bool (false) ;
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringlist enumerator_81643 (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1976)).reader_mEnumeratorVariants (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1976)), kEnumeration_up) ;
        bool bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1976)).isValidAndTrue () ;
        if (enumerator_81643.hasCurrentObject () && bool_2) {
          while (enumerator_81643.hasCurrentObject () && bool_2) {
            var_found = GALGAS_bool (kIsEqual, var_enumerationOrder.objectCompare (enumerator_81643.current_mValue (HERE))) ;
            var_s.dotAssign_operation (GALGAS_string ("\n"
              "  \\").add_operation (enumerator_81643.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1978))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1978)) ;
            enumerator_81643.gotoNextObject () ;
            if (enumerator_81643.hasCurrentObject ()) {
              bool_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1976)).isValidAndTrue () ;
            }
          }
        }
        const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1980)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_80590.current_mEnumerationOrder (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown enumeration specifier; available ones are :").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1981))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1981)) ;
        }
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_80590.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1985)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (enumerator_80590.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1985)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1985)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList = var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1986)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1986)) ;
        cEnumerator_enumerationDescriptorList enumerator_82123 (var_currentTypedAttributeList, kEnumeration_up) ;
        while (enumerator_82123.hasCurrentObject ()) {
          {
          ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_80590.current_mPrefix (HERE).mAttribute_string.add_operation (enumerator_82123.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1989)), enumerator_80590.current_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1989)), enumerator_82123.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1991)).add_operation (enumerator_82123.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1991)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1991)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1991)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1992)).add_operation (enumerator_82123.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1992)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1992)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1992)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1988)) ;
          }
          enumerator_82123.gotoNextObject () ;
        }
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = enumerator_80590.current_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)).operator_and (GALGAS_bool (kIsNotEqual, enumerator_80590.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1999)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (enumerator_80590.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1999)).add_operation (enumerator_80590.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2001)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2001)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2000))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1996)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = enumerator_80590.current_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_80590.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2002)).objectCompare (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2002)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2002)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string temp_10 ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2006)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_11) {
              temp_10 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_11) {
              temp_10 = GALGAS_string::makeEmptyString () ;
            }
            inCompiler->emitSemanticError (enumerator_80590.current_mEndOfElementList (HERE), GALGAS_string ("the '@").add_operation (var_enumerationExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2004)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2004)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2004)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2004)).add_operation (var_enumerationDescriptorList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2005)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2005)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2004)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2005)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2005)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2006)).add_operation (enumerator_80590.current_mElementList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2008)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2008)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2007))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2003)) ;
          }else if (kBoolFalse == test_9) {
            cEnumerator_foreachInstructionEnumeratedObjectElementListAST enumerator_83477 (enumerator_80590.current_mElementList (HERE), kEnumeration_up) ;
            cEnumerator_enumerationDescriptorList enumerator_83511 (var_enumerationDescriptorList, kEnumeration_up) ;
            while (enumerator_83477.hasCurrentObject () && enumerator_83511.hasCurrentObject ()) {
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_83477.current_mConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2011)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_83477.current_mTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_13) {
                  GALGAS_unifiedTypeMapProxy var_foundType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_83477.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2013)) ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_foundType.objectCompare (enumerator_83511.current_mEnumeratedType (HERE))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    GALGAS_location location_15 (enumerator_83477.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_15, GALGAS_string ("incorrect '@").add_operation (var_foundType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)).add_operation (enumerator_83511.current_mEnumeratedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2015)) ;
                  }
                }
                {
                ioArgument_ioVariableMap.modifier_insertUsedLocalConstant (enumerator_83477.current_mConstantName (HERE), enumerator_83511.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2021)).add_operation (enumerator_83511.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2021)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2021)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2021)), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2022)).add_operation (enumerator_83511.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2022)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2022)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2022)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2018)) ;
                }
              }
              enumerator_83477.gotoNextObject () ;
              enumerator_83511.gotoNextObject () ;
            }
          }
        }
      }
    }
    var_enumerationList.addAssign_operation (var_enumerationOrder, var_enumerationExpression, var_enumeratorCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2029)) ;
    enumerator_80590.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2034)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2033)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression, var_whileExpression, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2040)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2047)) ;
  }
  GALGAS_string var_indexCppName = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2049)) ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_indexCppName = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2051)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2051)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2051)) ;
    var_indexDeclaration.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2052)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_indexDeclaration, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2063)), object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2060)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2070)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2072)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2073)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_foreachInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList, var_indexCppName, var_whileExpression, var_before_5F_instructionList, var_between_5F_instructionList, var_do_5F_instructionList, var_after_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2075))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2075)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_foreachInstructionAST.mSlotID,
                                                  categoryMethod_foreachInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_foreachInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@loopInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2095)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2094)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2101)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)).add_operation (var_variantExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2103))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2102)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLoopExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2108)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2107)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2114)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfLoopExpression, GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)).add_operation (var_loopExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2116))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2115)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2119)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2124)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2125)), object->mAttribute_mFirstInstructions, object->mAttribute_mEndOfFirstInstructions, ioArgument_ioVariableMap, var_first_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2122)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2135)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2136)), object->mAttribute_mSecondInstructions, object->mAttribute_mEndOfSecondInstructions, ioArgument_ioVariableMap, var_second_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2133)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfLoopInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2143)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variantExpression, var_first_5F_instructionList, var_loopExpression, var_second_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2145))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2145)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                  categoryMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@structuredCastInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2162)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2161)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2168)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2170)) ;
  cEnumerator_castInstructionBranchListAST enumerator_89343 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_89343.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_89343.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2173)) ;
    GALGAS_unifiedTypeMapProxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2176)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2177)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2177)).isValid ()) {
      uint32_t variant_89626 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2177)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2177)).uintValue () ;
      bool loop_89626 = true ;
      while (loop_89626) {
        loop_89626 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).isValid () ;
        if (loop_89626) {
          loop_89626 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2178)).boolValue () ;
        }
        if (loop_89626 && (0 == variant_89626)) {
          loop_89626 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2177)) ;
        }
        if (loop_89626) {
          variant_89626 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2179)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2180)))) ;
        }
      }
    }
    const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2182)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_89343.current_mTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (enumerator_89343.current_mTypeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)).add_operation (var_castExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2184))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2183)) ;
    }
    GALGAS_string var_localConstantName ;
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2188)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_89343.current_mConstantVarName (HERE).mAttribute_string.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2189)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_localConstantName = GALGAS_string ("cast_").add_operation (enumerator_89343.current_mConstantVarName (HERE).reader_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)).add_operation (enumerator_89343.current_mConstantVarName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2190)) ;
      var_localConstantList.addAssign_operation (var_type, enumerator_89343.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2191)) ;
    }else if (kBoolFalse == test_2) {
      var_localConstantName = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2204)), enumerator_89343.current_mInstructionList (HERE), enumerator_89343.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2201)) ;
    }
    var_castBranchList.addAssign_operation (enumerator_89343.current_mTypeComparisonKind (HERE), var_type, var_localConstantName, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2210)) ;
    enumerator_89343.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2216)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2217)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfCastInstruction, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2214)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfCastInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2224)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression, var_castBranchList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                  categoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                               const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                               const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                               GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                               C_Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                               const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                               GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2259)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2260)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2272)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2273)) ;
  }
  GALGAS_unifiedTypeMapProxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_93484_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_93484_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2275)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2279)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2280)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2280)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2280))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2278)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                        const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                        GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2293)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2294)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2296)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2296)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2297)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2298)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2302)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2303)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2303)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2303))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2301)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2305)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2305)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2305)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2305))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2305)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                          const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                          GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2316)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2317)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2319)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2319)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2320)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2321)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2325)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2326)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2326)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2326))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2324)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2328)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2328)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2328)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2328))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2328)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterCategoryMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@grammarInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionAST * object = (const cPtr_grammarInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap ;
  GALGAS_bool var_hasTranslateFeature ;
  GALGAS_bool joker_96935_0 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mGrammarMap.method_searchKey (object->mAttribute_mGrammarComponentName, var_grammarLabelMap, joker_96935_0, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2338)) ;
  GALGAS_formalParameterSignature var_labelSignature ;
  var_grammarLabelMap.method_searchKey (object->mAttribute_mLabelName, var_labelSignature, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2345)) ;
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2350)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mLabelName, GALGAS_string ("label of the ").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2354)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2354)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2354)), var_labelSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2351)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2363)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2362)) ;
  const enumGalgasBool test_0 = object->mAttribute_mSourceExpressionIsFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2370)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2372)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2372)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2372)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2372))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2371)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2374)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfSourceExpression, GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2376)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2376)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2376)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2376))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2375)) ;
    }
  }
  GALGAS_string var_syntaxDirectedTranslationResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mGrammarComponentName.mAttribute_location.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2379)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2379)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2379)) ;
  GALGAS_stringlist var_assignementList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2380)) ;
  callCategoryMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature, var_syntaxDirectedTranslationResultVarName, var_assignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2381)) ;
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_98922 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_98922.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_98922.current_mType (HERE), enumerator_98922.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2390))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2390)) ;
    enumerator_98922.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mSourceExpressionIsFile.boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2397)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2398)), var_sourceExpression, var_actualParameterListForGeneration, var_hasTranslateFeature, var_assignementList, var_syntaxDirectedTranslationResultVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2395))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2395)) ;
  }else if (kBoolFalse == test_3) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2407)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2408)), var_sourceExpression, var_actualParameterListForGeneration, var_hasTranslateFeature, var_assignementList, var_syntaxDirectedTranslationResultVarName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2405)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInstructionAST.mSlotID,
                                                  categoryMethod_grammarInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_grammarInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@readAccessWithInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2428)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2427)) ;
  GALGAS_unifiedTypeMapProxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2433)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_100638 (var_receiverType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2437)), kEnumeration_up) ;
    bool bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2437)).isValidAndTrue () ;
    if (enumerator_100638.hasCurrentObject () && bool_1) {
      while (enumerator_100638.hasCurrentObject () && bool_1) {
        var_found = GALGAS_bool (kIsEqual, enumerator_100638.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_100638.gotoNextObject () ;
        if (enumerator_100638.hasCurrentObject ()) {
          bool_1 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2437)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2440)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2441)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2446)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2445)) ;
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2452)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2452)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2452)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2454)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2454)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2454)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2455)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2455)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2455))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2455)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2458)) ;
  }
  GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2460)) ;
  cEnumerator_typedAttributeList enumerator_101759 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2461)), kEnumeration_up) ;
  while (enumerator_101759.hasCurrentObject ()) {
    var_localConstantList.addAssign_operation (enumerator_101759.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_101759.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2464)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2464)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2464)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2466)).add_operation (enumerator_101759.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2466)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2466))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2462)) ;
    enumerator_101759.gotoNextObject () ;
  }
  var_localConstantList.addAssign_operation (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2470)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2470)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2471)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2471)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2473))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2469)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2477)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2474)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2486)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2487)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2484)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2493)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2495))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2495)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                  categoryMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2513)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2512)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2520)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2520)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2521)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2521)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2521)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2521))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2521)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2523)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2524)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2524)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2524)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2524))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2524)) ;
    }
  }
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2527)) ;
  GALGAS_unifiedTypeMapProxy var_targetType ;
  GALGAS_string var_receiverVariableCppName ;
  {
  GALGAS_string joker_104591_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_receiverVariableCppName, joker_104591_0, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2529)) ;
  }
  cEnumerator_lstringlist enumerator_104620 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_104620.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2536)) ;
    var_attributeMap.method_searchKey (enumerator_104620.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2537)) ;
    enumerator_104620.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2540)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2541)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2541)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2541))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2541)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_105124 (var_targetType.reader_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)), kEnumeration_up) ;
    bool bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).isValidAndTrue () ;
    if (enumerator_105124.hasCurrentObject () && bool_5) {
      while (enumerator_105124.hasCurrentObject () && bool_5) {
        var_found = GALGAS_bool (kIsEqual, enumerator_105124.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_105124.gotoNextObject () ;
        if (enumerator_105124.hasCurrentObject ()) {
          bool_5 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2546)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2549)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_7, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2550)) ;
    }
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2554)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2556)) ;
  cEnumerator_typedAttributeList enumerator_105653 (var_targetType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2557)), kEnumeration_up) ;
  while (enumerator_105653.hasCurrentObject ()) {
    var_localInitializedVariableList.addAssign_operation (enumerator_105653.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_105653.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2560)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2560)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2560)), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2561)).add_operation (enumerator_105653.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2561)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2561))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2558)) ;
    enumerator_105653.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_8 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2567)) ;
  temp_8.addAssign_operation (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2564)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2564)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2565)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2565)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2567))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2567)) ;
  GALGAS_localConstantList var_localConstantList = temp_8 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, var_localInitializedVariableList, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2569)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2582)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2583)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2580)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2589)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName, var_targetType, object->mAttribute_mFieldList, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2591))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2591)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                  categoryMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@switchInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2614)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2613)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2620)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2620)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2620)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2622)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2622)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2622)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2622))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2621)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2625)).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2625)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2626)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2628)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2629)) ;
  cEnumerator_switchBranchesAST enumerator_108479 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_108479.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2631)) ;
    GALGAS_bool var_firstConstant = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_108636 (enumerator_108479.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_108636.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.reader_hasKey (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2634)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2634)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_constantsNamedInSwitchInstruction.reader_hasKey (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2635)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2635)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_108636.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2637)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2637)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2637))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2636)) ;
        }
        var_constantsNamedInSwitchInstruction.addAssign_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2639))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2639)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList ;
        GALGAS_uint joker_109000_0 ; // Joker input parameter
        var_enumConstantMap.method_searchKey (enumerator_108636.current_mValue (HERE), joker_109000_0, var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2640)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2641)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_108479.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2641)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2641)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_108636.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the associated values of '").add_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2643)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2643)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2643))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2642)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2644)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_108479.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2644)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2644)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_location location_7 (enumerator_108636.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2646)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2646)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2646))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2645)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2647)).objectCompare (enumerator_108479.current_mAssociatedValuesExtraction (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2647)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_string temp_9 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2650)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                temp_9 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_10) {
                temp_9 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_location location_11 (enumerator_108636.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)).add_operation (var_associatedTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2649))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2648)) ;
            }else if (kBoolFalse == test_8) {
              cEnumerator_unifiedTypeMapProxyList enumerator_109788 (var_associatedTypeList, kEnumeration_up) ;
              cEnumerator__32_lstringlist enumerator_109823 (enumerator_108479.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_109788.hasCurrentObject () && enumerator_109823.hasCurrentObject ()) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_109823.current_mValue_30_ (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_109788.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2654)).objectCompare (enumerator_109823.current_mValue_30_ (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_location location_14 (enumerator_109823.current_mValue_30_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                    inCompiler->emitSemanticError (location_14, GALGAS_string ("the required type is '@").add_operation (enumerator_109788.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2655)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2655)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2655))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2655)) ;
                  }
                }
                const enumGalgasBool test_15 = var_firstConstant.operator_and (GALGAS_bool (kIsNotEqual, enumerator_109823.current_mValue_31_ (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2658)).boolEnum () ;
                if (kBoolTrue == test_15) {
                  GALGAS_string var_cppName = GALGAS_string ("extractedValue_").add_operation (enumerator_109823.current_mValue_31_ (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2659)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2659)) ;
                  var_extractedAssociatedValuesForGeneration.addAssign_operation (enumerator_109788.current_mType (HERE), var_cppName  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2660)) ;
                  {
                  ioArgument_ioVariableMap.modifier_insertLocalConstant (enumerator_109823.current_mValue_31_ (HERE), enumerator_109788.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2661)) ;
                  }
                }
                enumerator_109788.gotoNextObject () ;
                enumerator_109823.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_16 (enumerator_108636.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_16, GALGAS_string ("'").add_operation (enumerator_108636.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)).add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2667))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2666)) ;
      }
      var_firstConstant = GALGAS_bool (false) ;
      enumerator_108636.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2673)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2674)), enumerator_108479.current_mInstructions (HERE), enumerator_108479.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2671)) ;
    }
    var_switchBranchesForGeneration.addAssign_operation (enumerator_108479.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration, enumerator_108479.current_mEndOfBranch (HERE).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2680)), var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2680)) ;
    enumerator_108479.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2682)) ;
  }
  GALGAS_stringset var_forgottenConstants = var_enumConstantMap.reader_keySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2684)).substract_operation (var_constantsNamedInSwitchInstruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2684)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_forgottenConstants.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2685)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_111270 (var_forgottenConstants, kEnumeration_up) ;
    while (enumerator_111270.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "  - ").add_operation (enumerator_111270.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2688))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2688)) ;
      enumerator_111270.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2691))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2690)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2695)), var_switchExpression, var_switchBranchesForGeneration  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2694))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2694)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                  categoryMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@matchInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2708)) ;
  cEnumerator_semanticExpressionListAST enumerator_112128 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_112128.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression ;
    callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_112128.current_mExpression (HERE).ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2713)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2712)) ;
    var_expressionList.addAssign_operation (var_matchedExpression  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2718)) ;
    GALGAS_unifiedTypeMapProxy var_type = var_matchedExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2720)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2721)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2721)))).operator_and (GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2721)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2721)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2721)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (enumerator_112128.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2723)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2723)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2723))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2722)) ;
    }
    enumerator_112128.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2727)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2728)) ;
  cEnumerator_matchInstructionBranchListAST enumerator_113001 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_113001.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2731)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2732)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2733)).objectCompare (enumerator_113001.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2733)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_semanticExpressionListForGeneration enumerator_113244 (var_expressionList, kEnumeration_up) ;
      cEnumerator_matchEntryListAST enumerator_113268 (enumerator_113001.current_mMatchEntryList (HERE), kEnumeration_up) ;
      while (enumerator_113244.hasCurrentObject () && enumerator_113268.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapProxy var_type = enumerator_113244.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2735)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2736)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2736)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = enumerator_113268.current_mIsType (HERE).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_unifiedTypeMapProxy var_namedType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2738)) ;
            GALGAS_unifiedTypeMapProxy var_t = var_type ;
            GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
            if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2741)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2741)).isValid ()) {
              uint32_t variant_113651 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2741)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2741)).uintValue () ;
              bool loop_113651 = true ;
              while (loop_113651) {
                loop_113651 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).isValid () ;
                if (loop_113651) {
                  loop_113651 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2742)).boolValue () ;
                }
                if (loop_113651 && (0 == variant_113651)) {
                  loop_113651 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2741)) ;
                }
                if (loop_113651) {
                  variant_113651 -- ;
                  var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2743)) ;
                  var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_namedType)) ;
                }
              }
            }
            const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2746)).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_location location_5 (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_5, GALGAS_string ("the '@").add_operation (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2748))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2747)) ;
            }else if (kBoolFalse == test_4) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, enumerator_113268.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2749)).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2749)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_localConstantList.addAssign_operation (var_t, enumerator_113268.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2750)) ;
              }
            }
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_7 (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("a type that inherits from '@").add_operation (enumerator_113244.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2754))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2753)) ;
          }
          var_matchListForGeneration.addAssign_operation (GALGAS_bool (true), enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2756)), enumerator_113268.current_mLocalConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2756))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2756)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2757)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2757)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const enumGalgasBool test_9 = enumerator_113268.current_mIsType (HERE).boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_location location_10 (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_10, GALGAS_string ("a constant of the '@").add_operation (enumerator_113244.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2760))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2759)) ;
            }else if (kBoolFalse == test_9) {
              const enumGalgasBool test_11 = var_type.reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).reader_hasKey (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2761)).boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_location location_12 (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)).add_operation (enumerator_113244.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2763))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2762)) ;
              }
            }
            var_matchListForGeneration.addAssign_operation (GALGAS_bool (false), enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2767)), enumerator_113244.current_mExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2768)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2768))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2765)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_location location_13 (enumerator_113268.current_mTypeNameOrEnumerationConstantName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2770)) ;
          }
        }
        enumerator_113244.gotoNextObject () ;
        enumerator_113268.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (enumerator_113001.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2775)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2775)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2775)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2775)).add_operation (enumerator_113001.current_mMatchEntryList (HERE).reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2776)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2776)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2775))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2774)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2783)), enumerator_113001.current_mMatchBranchInstructionList (HERE), enumerator_113001.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2780)) ;
    }
    var_matchInstructionBranchList.addAssign_operation (var_matchListForGeneration, var_instructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2790)) ;
    enumerator_113001.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2796)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2797)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOf_5F_match_5F_instruction, ioArgument_ioVariableMap, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2794)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_match_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2804)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList, var_matchInstructionBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2806))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2806)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionAST_analyzeSemanticInstruction (void) {
  enterCategoryMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                  categoryMethod_matchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionAST_analyzeSemanticInstruction (defineCategoryMethod_matchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@predefinedTypeAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 114)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 116))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 116)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 115)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 113)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                        categoryMethod_predefinedTypeAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineCategoryMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 137)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 138)) ;
  cEnumerator_attributeInCollectionListAST enumerator_7553 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7553.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7553.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 140)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7729 (enumerator_7553.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_7729.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7729.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 145)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_7729.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7729.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_7729.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 151)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_7729.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 155)) ;
        }
      }
      enumerator_7729.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_7553.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 158)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_7553.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 163)) ;
    }
    enumerator_7553.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 167)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 169)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)), var_typedAttributeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 168)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                        categoryMethod_listDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineCategoryMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 182)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 183)) ;
  cEnumerator_attributeInCollectionListAST enumerator_9173 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9173.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9173.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 185)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_9173.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 188)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_9173.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 193)) ;
    }
    enumerator_9173.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 196)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 197)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_9651 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_9651.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_type ;
    var_attributeMap.method_searchKey (enumerator_9651.current_mSortedAttributeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 199)) ;
    var_sortDescriptorList.addAssign_operation (var_type, enumerator_9651.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 200)), enumerator_9651.current_mAscending (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 200)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting.reader_hasKey (enumerator_9651.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 201)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 201)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_9651.current_mSortedAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_9651.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 202)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 202))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 202)) ;
    }
    var_attributesUsedForSorting.addAssign_operation (enumerator_9651.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 204))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
    enumerator_9651.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 208)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 210)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 211)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 211)), var_typedAttributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 209)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 207)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                        categoryMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineCategoryMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 232)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 235)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 236)) ;
  cEnumerator_attributeInCollectionListAST enumerator_11358 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_11358.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_11358.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 238)) ;
    cEnumerator_lstringlist enumerator_11484 (enumerator_11358.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_11484.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_11484.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 240)) ;
      enumerator_11484.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (false) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_11358.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 244)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)).reader_hasKey (enumerator_11358.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_11881 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 251)), kEnumeration_up) ;
      while (enumerator_11881.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_11881.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252)) ;
        enumerator_11881.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)) ;
      GALGAS_location location_4 (enumerator_11358.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_11358.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)) ;
    }
    enumerator_11358.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 260)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 262)), var_typedAttributeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 261)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 259)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                        categoryMethod_structDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineCategoryMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@graphDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_graphTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 273)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListElementTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 275)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 278)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 278)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 282)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 284)) ;
  cEnumerator_graphInsertModifierList enumerator_13414 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_13414.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.reader_hasKey (enumerator_13414.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 286)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_13414.current_mInsertModifierName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_13414.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 287)).add_operation (GALGAS_string ("' modifier name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 287))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 287)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_13414.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 289)) ;
    }
    enumerator_13414.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 294)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                        categoryMethod_graphDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineCategoryMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_externTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 308)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 311)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 312)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 310)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                        categoryMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineCategoryMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 327)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 328)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 329)) ;
  cEnumerator_enumConstantList enumerator_15117 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_15117.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_15117.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 331)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 332)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 333)) ;
    cEnumerator__32_lstringlist enumerator_15303 (enumerator_15117.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_15303.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_associatedTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15303.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 335)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 336)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.reader_hasKey (enumerator_15303.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 337)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_15303.current_mValue_31_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 338)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_15303.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 340)) ;
      enumerator_15303.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_15117.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 342)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 342)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_15117.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 343)) ;
    enumerator_15117.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 349)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 348)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 346)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                        categoryMethod_enumDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineCategoryMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@arrayDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 364)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 365)), object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticAnalysis.galgas", 366))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 363)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 361)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                        categoryMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineCategoryMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@listmapDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedAttributeList var_listTypeAttributeList ;
  GALGAS_bool joker_17212_3 ; // Joker input parameter
  GALGAS_bool joker_17212_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_17212_1 ; // Joker input parameter
  GALGAS_bool joker_17256_0 ; // Joker input parameter
  GALGAS_attributeMap joker_17314_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_17314_19 ; // Joker input parameter
  GALGAS_constructorMap joker_17314_18 ; // Joker input parameter
  GALGAS_readerMap joker_17314_17 ; // Joker input parameter
  GALGAS_modifierMap joker_17314_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_17314_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_17314_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_17314_13 ; // Joker input parameter
  GALGAS_stringlist joker_17314_12 ; // Joker input parameter
  GALGAS_uint joker_17314_11 ; // Joker input parameter
  GALGAS_functionSignature joker_17314_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_17314_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_17314_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_17314_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_17314_6 ; // Joker input parameter
  GALGAS_bool joker_17314_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_17314_4 ; // Joker input parameter
  GALGAS_string joker_17314_3 ; // Joker input parameter
  GALGAS_string joker_17314_2 ; // Joker input parameter
  GALGAS_headerKind joker_17314_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_17212_3, joker_17212_2, joker_17212_1, var_typeKindEnum, joker_17256_0, var_listTypeAttributeList, joker_17314_20, joker_17314_19, joker_17314_18, joker_17314_17, joker_17314_16, joker_17314_15, joker_17314_14, joker_17314_13, joker_17314_12, joker_17314_11, joker_17314_10, joker_17314_9, joker_17314_8, joker_17314_7, joker_17314_6, joker_17314_5, joker_17314_4, joker_17314_3, joker_17314_2, joker_17314_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 379)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 388)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 389)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 393)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 395)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 396)), var_listTypeAttributeList, GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 394)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                        categoryMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineCategoryMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@mapDeclarationAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 472)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 473)) ;
  cEnumerator_attributeInCollectionListAST enumerator_20596 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_20596.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_20596.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 475)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_20596.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 478)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)).reader_hasKey (enumerator_20596.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_20991 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 485)), kEnumeration_up) ;
      while (enumerator_20991.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_20991.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 486))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 486)) ;
        enumerator_20991.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 488)) ;
      GALGAS_location location_1 (enumerator_20596.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 489)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_20596.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 491)) ;
    }
    enumerator_20596.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 494)) ;
  cEnumerator_insertMethodListAST enumerator_21269 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_21269.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_21269.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_21269.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_21269.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 498)) ;
    }
    enumerator_21269.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 501)) ;
  cEnumerator_mapSearchMethodListAST enumerator_21545 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_21545.hasCurrentObject ()) {
    {
    var_searchMethodMap.modifier_insertKey (enumerator_21545.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 503)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_21545.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 504)) ;
    }
    enumerator_21545.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_21712 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_21712.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_21712.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 508)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_21712.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 509)) ;
    }
    enumerator_21712.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_21932 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_21890 ((uint32_t) 0) ;
  while (enumerator_21932.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_21890.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticWarning (enumerator_21932.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' modifier is already declared")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)) ;
    }
    enumerator_21932.gotoNextObject () ;
    index_21890.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 512)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 517)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.reader_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 520)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' modifier cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 521)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 534)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 536)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 535)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 533)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                        categoryMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineCategoryMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@uniqueMapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapDeclarationAST * object = (const cPtr_uniqueMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapDeclarationAST) ;
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 554)) ;
  cEnumerator_insertMethodListAST enumerator_23861 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_23861.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 556)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_23861.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 557)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_23861.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_23861.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 558)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 558))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 558)) ;
      }else if (kBoolFalse == test_1) {
        var_initialStateSet.addAssign_operation (enumerator_23861.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 560))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_23861.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 562)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_23861.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_23861.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)) ;
      }
    }
    enumerator_23861.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 567)) ;
  cEnumerator_mapSearchMethodListAST enumerator_24444 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_24444.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 569)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_24444.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 570)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_24444.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_24444.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_mapAutomatonActionMap.reader_hasKey (enumerator_24444.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 572)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 572)).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          var_mapAutomatonActionMap.modifier_insertKey (enumerator_24444.current_mActionName (HERE), var_mapAutomatonActionMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 574)) ;
          }
        }
      }
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_24444.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 578)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_24444.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_24444.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)) ;
      }
    }
    enumerator_24444.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
  cEnumerator_mapStateList enumerator_25237 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_25237.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.modifier_insertKey (enumerator_25237.current_mStateName (HERE), var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
    }
    enumerator_25237.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_25354 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_25354.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_25388 (enumerator_25354.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_25388.hasCurrentObject ()) {
      GALGAS_uint joker_25449_0 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_25388.current_mTargetStateName (HERE), joker_25449_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 589)) ;
      enumerator_25388.gotoNextObject () ;
    }
    enumerator_25354.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 594)) ;
  cEnumerator_mapStateList enumerator_25662 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_25662.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 596)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 597)) ;
    cEnumerator_mapStateTransitionList enumerator_25836 (enumerator_25662.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_25836.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_25836.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 600)) ;
      const enumGalgasBool test_11 = var_actionsForCurrentState.reader_hasKey (enumerator_25836.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 601)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_25836.current_mActionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_25836.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 602)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 602))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 602)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_25836.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 604))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
      GALGAS_uint var_targetStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_25836.current_mTargetStateName (HERE), var_targetStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 606)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_25836.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 609)), var_targetStateIndex, enumerator_25836.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 611)), enumerator_25836.current_mTransitionMessageKind (HERE), enumerator_25836.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 613))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 607)) ;
      enumerator_25836.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    var_mapAutomatonStateMap.method_searchKey (enumerator_25662.current_mStateName (HERE), var_stateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 616)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_25662.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 619)), enumerator_25662.current_mStateMessageKind (HERE), enumerator_25662.current_mStateMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 621)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 617)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 623)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_missingActions.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 624)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_26890 (var_missingActions, kEnumeration_up) ;
      while (enumerator_26890.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_26890.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 627)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 627))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 627)) ;
        if (enumerator_26890.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 628)) ;
        }
        enumerator_26890.gotoNextObject () ;
      }
      GALGAS_location location_14 (enumerator_25662.current_mStateName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 630))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 630)) ;
    }
    enumerator_25662.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 636)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)).isValid ()) {
    uint32_t variant_27191 = object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 636)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)).uintValue () ;
    bool loop_27191 = true ;
    while (loop_27191) {
      loop_27191 = var_progress.isValid () ;
      if (loop_27191) {
        loop_27191 = var_progress.boolValue () ;
      }
      if (loop_27191 && (0 == variant_27191)) {
        loop_27191 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 636)) ;
      }
      if (loop_27191) {
        variant_27191 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_27288 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_27288.hasCurrentObject ()) {
          const enumGalgasBool test_15 = var_accessibleStates.reader_hasKey (enumerator_27288.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 639)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)).boolEnum () ;
          if (kBoolTrue == test_15) {
            cEnumerator_mapStateTransitionList enumerator_27387 (enumerator_27288.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_27387.hasCurrentObject ()) {
              const enumGalgasBool test_16 = var_accessibleStates.reader_hasKey (enumerator_27387.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 641)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 641)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 641)).boolEnum () ;
              if (kBoolTrue == test_16) {
                var_accessibleStates.addAssign_operation (enumerator_27387.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 642))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 642)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_27387.gotoNextObject () ;
            }
          }
          enumerator_27288.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 649)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 649)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_uselessStates.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 650)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_27768 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_27768.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_27768.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)) ;
      if (enumerator_27768.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
      }
      enumerator_27768.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 660)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
  cEnumerator_mapAutomatonStateMap enumerator_28136 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_28136.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 663)) ;
    var_reachableStates.addAssign_operation (enumerator_28136.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 664))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 664)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 666)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 666)).isValid ()) {
      uint32_t variant_28259 = var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 666)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 666)).uintValue () ;
      bool loop_28259 = true ;
      while (loop_28259) {
        loop_28259 = var_progress.isValid () ;
        if (loop_28259) {
          loop_28259 = var_progress.boolValue () ;
        }
        if (loop_28259 && (0 == variant_28259)) {
          loop_28259 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 666)) ;
        }
        if (loop_28259) {
          variant_28259 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_28366 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_28366.hasCurrentObject ()) {
            const enumGalgasBool test_18 = var_reachableStates.reader_hasKey (enumerator_28366.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 669)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 669)).boolEnum () ;
            if (kBoolTrue == test_18) {
              cEnumerator_mapStateTransitionList enumerator_28468 (enumerator_28366.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_28468.hasCurrentObject ()) {
                const enumGalgasBool test_19 = var_reachableStates.reader_hasKey (enumerator_28468.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 671)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 671)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 671)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  var_reachableStates.addAssign_operation (enumerator_28468.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 672))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_28136.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 673)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 673)).add_operation (enumerator_28468.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 673))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 673)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_28468.gotoNextObject () ;
              }
            }
            enumerator_28366.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_28813 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_28813.hasCurrentObject ()) {
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_28136.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 681)).objectCompare (enumerator_28813.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_20) {
        var_neededAssociations.addAssign_operation (enumerator_28136.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 682)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)).add_operation (enumerator_28813.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 682)) ;
      }
      enumerator_28813.gotoNextObject () ;
    }
    enumerator_28136.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_29027 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_29027.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 689)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 691)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_29287 (enumerator_29027.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_29287.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29287.current_mLeftState (HERE), var_startStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
      GALGAS_uint var_currentStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29287.current_mRightState (HERE), var_currentStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
      GALGAS_string var_association = enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 697)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 697)).add_operation (enumerator_29287.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 697)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 697)) ;
      const enumGalgasBool test_21 = var_neededAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 698)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 698)).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_29287.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_22, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 699)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 699))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 699)) ;
      }
      const enumGalgasBool test_23 = var_handledAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 701)).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_location location_24 (enumerator_29287.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_24, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)) ;
      GALGAS_uint var_finalStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29287.current_mResultingState (HERE), var_finalStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 707)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 708)).objectCompare (enumerator_29287.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 708)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_neededCombinaisons.addAssign_operation (enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 709)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)).add_operation (enumerator_29287.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_29287.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 710)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)).add_operation (enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
        const enumGalgasBool test_26 = var_accessibilityGraph.reader_hasKey (enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 711)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)).add_operation (enumerator_29287.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 711)).boolEnum () ;
        if (kBoolTrue == test_26) {
          GALGAS_location location_27 (enumerator_29287.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_29287.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)).add_operation (enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 713)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_29287.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_29287.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 719)), var_currentStateNameIndex, enumerator_29287.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 721)), var_finalStateNameIndex, enumerator_29287.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 723)), enumerator_29287.current_mMessageKind (HERE), enumerator_29287.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
      enumerator_29287.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 727)) ;
    const enumGalgasBool test_28 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 728)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_31065 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_31065.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_31065.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 731))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 731)) ;
        enumerator_31065.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)), var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 733)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 733)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 735)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 736)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_31429 (enumerator_29027.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_31429.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31429.current_mLeftState (HERE), var_leftStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 739)) ;
      GALGAS_uint var_rightStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31429.current_mRightState (HERE), var_rightStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)) ;
      GALGAS_string var_combinaison = enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 742)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)).add_operation (enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)) ;
      const enumGalgasBool test_29 = var_neededCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 743)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_31429.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 744)) ;
      }
      const enumGalgasBool test_31 = var_definedCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 747)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_31429.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)).add_operation (enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 748)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31429.current_mResultingState (HERE), var_resultingStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)) ;
      const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 754)).objectCompare (enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 754)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 755)).objectCompare (enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 755)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 754)).operator_and (var_accessibilityGraph.reader_hasKey (enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 756)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)).add_operation (enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 756)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_31429.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_34, GALGAS_string ("the '").add_operation (enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)).add_operation (enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_31429.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 760)) ;
      }
      const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_31429.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticAnalysis.galgas", 761)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_definedCombinaisons.addAssign_operation (enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 762)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762)).add_operation (enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 765)), var_leftStateIndex, enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 767)), var_resultingStateNameIndex, enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 769)), enumerator_31429.current_mMessageKind (HERE), enumerator_31429.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 771))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_31429.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 775)), var_rightStateIndex, enumerator_31429.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 777)), var_resultingStateNameIndex, enumerator_31429.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 779)), enumerator_31429.current_mMessageKind (HERE), enumerator_31429.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 781))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 773)) ;
      enumerator_31429.gotoNextObject () ;
    }
    const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 783)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 784)) ;
      const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 785)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_33673 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_33673.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_33673.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 788))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
          enumerator_33673.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)), var_forgottenCombinaisons.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 790)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 790)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_29027.current_mOverrideBlockName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 794)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 793)) ;
    enumerator_29027.gotoNextObject () ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 799)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 800)) ;
  cEnumerator_attributeInCollectionListAST enumerator_34163 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_34163.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_34163.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_34163.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_34163.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 810)) ;
    }
    enumerator_34163.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 813)) ;
  cEnumerator_insertMethodListAST enumerator_34569 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_34569.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_34569.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 815)) ;
    }
    cEnumerator_stringlist enumerator_34763 (enumerator_34569.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 817)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)), kEnumeration_up) ;
    while (enumerator_34763.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_34763.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 818)) ;
      {
      GALGAS_string joker_34876_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_34876_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 819)) ;
      }
      cEnumerator_stringlist enumerator_34909 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_34909.hasCurrentObject ()) {
        const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_34909.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 821)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_char var_c = enumerator_34909.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
          const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 823)).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_location location_40 (enumerator_34569.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_40, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 824)) ;
          }
        }
        enumerator_34909.gotoNextObject () ;
      }
      enumerator_34763.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_35354 (enumerator_34569.current_mShadowErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 830)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 830)), kEnumeration_up) ;
    while (enumerator_35354.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_35354.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 831)) ;
      {
      GALGAS_string joker_35467_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_35467_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 832)) ;
      }
      cEnumerator_stringlist enumerator_35500 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_35500.hasCurrentObject ()) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, enumerator_35500.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 834)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_char var_c = enumerator_35500.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 835)) ;
          const enumGalgasBool test_42 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 836)).boolEnum () ;
          if (kBoolTrue == test_42) {
            GALGAS_location location_43 (enumerator_34569.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_43, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 837)) ;
          }
        }
        enumerator_35500.gotoNextObject () ;
      }
      enumerator_35354.gotoNextObject () ;
    }
    enumerator_34569.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 844)) ;
  cEnumerator_mapSearchMethodListAST enumerator_35907 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_35907.hasCurrentObject ()) {
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 846)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_35907.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)) ;
      }
    }else if (kBoolFalse == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_35907.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)) ;
      }
    }
    cEnumerator_stringlist enumerator_36215 (enumerator_35907.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 852)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 852)), kEnumeration_up) ;
    while (enumerator_36215.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36215.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 853)) ;
      {
      GALGAS_string joker_36328_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_36328_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 854)) ;
      }
      cEnumerator_stringlist enumerator_36361 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_36361.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_36361.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 856)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c = enumerator_36361.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_location location_47 (enumerator_35907.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_47, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)) ;
          }
        }
        enumerator_36361.gotoNextObject () ;
      }
      enumerator_36215.gotoNextObject () ;
    }
    enumerator_35907.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("unique map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 876)), GALGAS_uniqueMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 878)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 877)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 875)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_uniqueMapDeclarationAST.mSlotID,
                                        categoryMethod_uniqueMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapDeclarationAST_semanticAnalysis (defineCategoryMethod_uniqueMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedAttributeList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_37872_7 ; // Joker input parameter
  GALGAS_bool joker_37872_6 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_37872_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_37872_4 ; // Joker input parameter
  GALGAS_bool joker_37872_3 ; // Joker input parameter
  GALGAS_typedAttributeList joker_37872_2 ; // Joker input parameter
  GALGAS_attributeMap joker_37872_1 ; // Joker input parameter
  GALGAS_constructorMap joker_37931_11 ; // Joker input parameter
  GALGAS_readerMap joker_37931_10 ; // Joker input parameter
  GALGAS_modifierMap joker_37931_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_37931_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_37931_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_37931_6 ; // Joker input parameter
  GALGAS_stringlist joker_37931_5 ; // Joker input parameter
  GALGAS_uint joker_37931_4 ; // Joker input parameter
  GALGAS_functionSignature joker_37931_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_37931_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_37931_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_37990_6 ; // Joker input parameter
  GALGAS_bool joker_37990_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_37990_4 ; // Joker input parameter
  GALGAS_string joker_37990_3 ; // Joker input parameter
  GALGAS_string joker_37990_2 ; // Joker input parameter
  GALGAS_headerKind joker_37990_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_37872_7, joker_37872_6, joker_37872_5, joker_37872_4, joker_37872_3, joker_37872_2, joker_37872_1, var_listTypeAttributeList, joker_37931_11, joker_37931_10, joker_37931_9, joker_37931_8, joker_37931_7, joker_37931_6, joker_37931_5, joker_37931_4, joker_37931_3, joker_37931_2, joker_37931_1, var_searchMethodList, joker_37990_6, joker_37990_5, joker_37990_4, joker_37990_3, joker_37990_2, joker_37990_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 908)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 910)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 911)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 909)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 907)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                        categoryMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1030)) ;
  cEnumerator_formalInputParameterListAST enumerator_43642 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_43642.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_43642.current_mFormalSelector (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_43642.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)), enumerator_43642.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1035)), enumerator_43642.current_mFormalArgumentName (HERE), enumerator_43642.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1032)) ;
    enumerator_43642.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1040)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1043)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1043)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1044)), var_formalArgumentList, GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1046))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1039)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                        categoryMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineCategoryMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@externRoutineDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1056)) ;
  cEnumerator_formalParameterListAST enumerator_44663 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_44663.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_44663.current_mFormalSelector (HERE), enumerator_44663.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_44663.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1061)), enumerator_44663.current_mFormalArgumentName (HERE), enumerator_44663.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1063))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1058)) ;
    enumerator_44663.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1066)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1070)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1067)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                        categoryMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineCategoryMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@routineDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1082)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1087)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1089))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1084)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1093)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1094)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1095)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList, var_formalArgumentList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1090)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1104)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1108)), var_formalArgumentList, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1105)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1103)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                        categoryMethod_routineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_semanticAnalysis (defineCategoryMethod_routineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@classDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1121)) ;
  GALGAS_unifiedTypeMapProxy var_superClassProxy ;
  GALGAS_typedAttributeList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1127)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1128)) ;
    var_allAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1129)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1131)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_47352 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_47352.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_47352.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1133)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_47352.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1135)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_47352.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
        }
        enumerator_47352.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
    var_allAttributeList = var_superClassProxy.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1146)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_47979 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_47979.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_47979.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)) ;
        enumerator_47979.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1153)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1154)) ;
  cEnumerator_attributeInCollectionListAST enumerator_48249 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_48249.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_48249.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_48430 (enumerator_48249.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_48430.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_48430.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1160)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_48430.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_48430.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1165)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1166)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_48430.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_48430.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)) ;
        }
      }
      enumerator_48430.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_48249.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_48249.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_48249.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1184)) ;
    }
    enumerator_48249.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1187)) ;
  GALGAS_unifiedTypeMapProxy var_t = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1188)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1189)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1189)).isValid ()) {
    uint32_t variant_49280 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1189)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1189)).uintValue () ;
    bool loop_49280 = true ;
    while (loop_49280) {
      loop_49280 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1190)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1190)).isValid () ;
      if (loop_49280) {
        loop_49280 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1190)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1190)).boolValue () ;
      }
      if (loop_49280 && (0 == variant_49280)) {
        loop_49280 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1189)) ;
      }
      if (loop_49280) {
        variant_49280 -- ;
        var_sortString = var_t.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1191)) ;
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1196)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1198)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.reader_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1204))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1197)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1195)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                        categoryMethod_classDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineCategoryMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList ;
  GALGAS_unifiedTypeMapProxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1296)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1298))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1302)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1299)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1315)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1318)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1318)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1319)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1316)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                        categoryMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineCategoryMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_unifiedTypeMapProxy var_returnType ;
  GALGAS_string var_resultVariableCppName ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1340)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1342))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_55315_0 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1345)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1346)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_55315_0, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1343)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1359)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1359)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1362)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1363)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1360)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1358)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                        categoryMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineCategoryMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@filewrapperDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_wrapperFileMap var_wrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_lstring joker_56474_0 ; // Joker input parameter
  GALGAS_lstringlist joker_56481_0 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_56578_2 ; // Joker input parameter
  GALGAS_bool joker_56578_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_56474_0, joker_56481_0, var_wrapperFileMap, var_wrapperDirectoryMap, joker_56578_2, joker_56578_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1381)) ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 1391)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1394)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1394)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1394)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1394)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 1396)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1396)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1397)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1397))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1397)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1400)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_57202 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_57202.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_57202.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1402)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 1402)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_57202.current_mFilewrapperTemplatePath (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1403)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1403))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1403)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (enumerator_57202.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_57202.current_mFilewrapperTemplatePath (HERE).reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1408))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1408)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1408)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1410)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1411)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_57999 (enumerator_57202.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_57999.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_57999.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1413)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_57999.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1414)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1414)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1414)) ;
        {
        var_templateVariableMap.modifier_insertKey (enumerator_57999.current_mFormalArgumentName (HERE), var_type, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)) ;
        }
        var_filewrapperTemplateFormalInputParameters.addAssign_operation (enumerator_57999.current_mFormalTemplateSelector (HERE), var_type, var_cppVarName, enumerator_57999.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1416)) ;
        enumerator_57999.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1419)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1420)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext, var_resultingInstructionList, var_templateInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
      }
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_57202.current_mFilewrapperTemplateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1427)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)) ;
      enumerator_57202.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1433)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1433)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1436)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1437)), object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1432)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                        categoryMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineCategoryMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@optionComponentDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_bool var_isPredefined ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1465)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1465)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1468)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1466)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1464)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                        categoryMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineCategoryMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@abstractCategoryMethodAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1486)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1486)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1492)) ;
  cEnumerator_formalParameterListAST enumerator_61797 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_61797.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_61797.current_mFormalSelector (HERE), enumerator_61797.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_61797.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1497)), enumerator_61797.current_mFormalArgumentName (HERE), enumerator_61797.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1499))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1494)) ;
    enumerator_61797.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1503)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1503)), GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1506)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1506)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1506)), var_selfType, object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1508)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1502)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                        categoryMethod_abstractCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_semanticAnalysis (defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis, NULL) ;

