#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodAST.h"
#include "class-abstractCategoryMethodForGeneration.h"
#include "class-abstractCategoryModifierAST.h"
#include "class-abstractCategoryModifierForGeneration.h"
#include "class-abstractCategoryReaderAST.h"
#include "class-abstractCategoryReaderForGeneration.h"
#include "class-abstractEnumeratedCollectionAST.h"
#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "class-abstractInputParameter.h"
#include "class-abstractLexicalRuleAST.h"
#include "class-actualParameterForGeneration.h"
#include "class-arrayDeclarationAST.h"
#include "class-arrayTypeForGeneration.h"
#include "class-categoryMethodAST.h"
#include "class-categoryMethodForGeneration.h"
#include "class-categoryModifierAST.h"
#include "class-categoryModifierForGeneration.h"
#include "class-categoryReaderAST.h"
#include "class-categoryReaderForGeneration.h"
#include "class-classDeclarationAST.h"
#include "class-classTypeForGeneration.h"
#include "class-concatInstructionForGeneration.h"
#include "class-decrementInstructionAST.h"
#include "class-decrementInstructionForGeneration.h"
#include "class-dropInstructionAST.h"
#include "class-dropInstructionForGeneration.h"
#include "class-enumDeclarationAST.h"
#include "class-enumTypeForGeneration.h"
#include "class-enumeratedCollectionCstListInExpAST.h"
#include "class-enumeratedCollectionImplicitVarInExpAST.h"
#include "class-enumeratedCollectionVarInExpAST.h"
#include "class-externFunctionDeclarationAST.h"
#include "class-externRoutineDeclarationAST.h"
#include "class-externTypeDeclarationAST.h"
#include "class-externTypeDeclarationForGeneration.h"
#include "class-filewrapperDeclarationAST.h"
#include "class-filewrapperDeclarationForGeneration.h"
#include "class-forInstructionAST.h"
#include "class-foreachInstructionAST.h"
#include "class-foreachInstructionForGeneration.h"
#include "class-functionDeclarationAST.h"
#include "class-functionImplementationForGeneration.h"
#include "class-functionPrototypeDeclarationForGeneration.h"
#include "class-galgas3GrammarComponentAST.h"
#include "class-galgas3SyntaxComponentAST.h"
#include "class-grammarForGeneration.h"
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
#include "class-ifInstructionAST.h"
#include "class-ifInstructionForGeneration.h"
#include "class-incrementInstructionAST.h"
#include "class-incrementInstructionForGeneration.h"
#include "class-inputParameterAnonymousVariable.h"
#include "class-inputParameterDeclaredConstant.h"
#include "class-inputParameterDeclaredVariable.h"
#include "class-inputParameterVariable.h"
#include "class-lexiqueComponentAST.h"
#include "class-lexiqueDeclarationForGeneration.h"
#include "class-listDeclarationAST.h"
#include "class-listTypeForGeneration.h"
#include "class-listmapDeclarationAST.h"
#include "class-listmapTypeForGeneration.h"
#include "class-localVariableDeclarationForGeneration.h"
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
#include "class-nonterminalCallInstruction.h"
#include "class-nonterminalInstructionForGeneration.h"
#include "class-onceFunctionDeclarationAST.h"
#include "class-onceFunctionDeclarationForGeneration.h"
#include "class-optionComponentDeclarationAST.h"
#include "class-optionComponentForGeneration.h"
#include "class-overrideCategoryReaderForGeneration.h"
#include "class-overridingAbstractCategoryMethodAST.h"
#include "class-overridingAbstractCategoryModifierAST.h"
#include "class-overridingAbstractCategoryReaderAST.h"
#include "class-overridingCategoryMethodAST.h"
#include "class-overridingCategoryMethodForGeneration.h"
#include "class-overridingCategoryModifierAST.h"
#include "class-overridingCategoryModifierForGeneration.h"
#include "class-overridingCategoryReaderAST.h"
#include "class-parseLoopInstruction.h"
#include "class-parseLoopInstructionForGeneration.h"
#include "class-parseRewindInstruction.h"
#include "class-parseRewindInstructionForGeneration.h"
#include "class-parseWhenInstruction.h"
#include "class-parseWhenInstructionForGeneration.h"
#include "class-plusEqualElementsInstructionAST.h"
#include "class-plusEqualExpressionInstructionAST.h"
#include "class-plusEqualnstructionForGeneration.h"
#include "class-predefinedTypeAST.h"
#include "class-primitiveTypeForGeneration.h"
#include "class-readAccessWithInstructionAST.h"
#include "class-readOnlyWithInstructionForGeneration.h"
#include "class-readWriteAccessWithInstructionAST.h"
#include "class-readWriteWithInstructionForGeneration.h"
#include "class-repeatInstruction.h"
#include "class-repeatInstructionForGeneration.h"
#include "class-routineDeclarationAST.h"
#include "class-routineImplementationForGeneration.h"
#include "class-routinePrototypeDeclarationForGeneration.h"
#include "class-selectInstruction.h"
#include "class-selectInstructionForGeneration.h"
#include "class-selfConcatInstructionAST.h"
#include "class-selfDecrementInstructionAST.h"
#include "class-selfIncrementInstructionAST.h"
#include "class-selfPlusEqualElementsInstructionAST.h"
#include "class-selfPlusEqualExpressionInstructionAST.h"
#include "class-semanticExpressionAST.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-semanticInstructionAST.h"
#include "class-sortedListDeclarationAST.h"
#include "class-sortedListTypeForGeneration.h"
#include "class-structDeclarationAST.h"
#include "class-structTypeForGeneration.h"
#include "class-structuredCastInstructionAST.h"
#include "class-structuredCastInstructionForGeneration.h"
#include "class-switchInstructionAST.h"
#include "class-switchInstructionForGeneration.h"
#include "class-syntaxDeclarationForGeneration.h"
#include "class-syntaxInstructionAST.h"
#include "class-syntaxSendInstruction.h"
#include "class-syntaxSendInstructionForGeneration.h"
#include "class-terminalCheckInstruction.h"
#include "class-terminalCheckInstructionForGeneration.h"
#include "class-trueExpressionForGeneration.h"
#include "class-uniqueMapDeclarationAST.h"
#include "class-uniqueMapTypeForGeneration.h"
#include "enum-dynamicTypeComparisonKind.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-lexicalArgumentModeAST.h"
#include "enum-lexicalTypeEnum.h"
#include "enum-mapAutomatonMessageKind.h"
#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "enum-predefinedTypeKindEnum.h"
#include "enum-typeKindEnum.h"
#include "filewrapper-grammarGenerationTemplate.h"
#include "filewrapper-lexiqueGenerationTemplates.h"
#include "func-buildLexicalTypeMap.h"
#include "func-compareSyntaxSignature.h"
#include "func-compilerCppName.h"
#include "func-elementTypeNameSuffix.h"
#include "func-forbiddenKeysForMap.h"
#include "func-forbiddenKeysForStruct.h"
#include "func-incDecOperator.h"
#include "func-plusEqualOperatorWithExpression.h"
#include "func-supportWithAccessor.h"
#include "func-syntaxDirectedTranslationResultVarName.h"
#include "func-syntaxSignatureOfInstructionList.h"
#include "getter-location-commaSourceFile.h"
#include "getter-semanticExpressionForGeneration-isTrueExpression.h"
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
#include "list-actualInputParameterListAST.h"
#include "list-actualOutputExpressionList.h"
#include "list-actualParameterListAST.h"
#include "list-actualParameterListForGeneration.h"
#include "list-attributeInCollectionListAST.h"
#include "list-castInstructionBranchListAST.h"
#include "list-castInstructionBranchListForGeneration.h"
#include "list-enumConstantList.h"
#include "list-enumConstantListForGeneration.h"
#include "list-enumerationDescriptorList.h"
#include "list-externFunctionListAST.h"
#include "list-externRoutineListAST.h"
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
#include "list-lexicalAttributeListAST.h"
#include "list-lexicalExternFunctionFormalArgumentListAST.h"
#include "list-lexicalExternRoutineFormalArgumentListAST.h"
#include "list-lexicalFunctionFormalArgumentList.h"
#include "list-lexicalListDeclarationListAST.h"
#include "list-lexicalListEntryListAST.h"
#include "list-lexicalMessageDeclarationListAST.h"
#include "list-lexicalRoutineFormalArgumentList.h"
#include "list-lexicalRuleListAST.h"
#include "list-lexicalSentValueList.h"
#include "list-lexicalStyleListAST.h"
#include "list-listOfSemanticInstructionListForGeneration.h"
#include "list-listOfSyntaxInstructionList.h"
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
#include "list-metamodelTemplateDelimitorListAST.h"
#include "list-nonTerminalLabelListAST.h"
#include "list-nonTerminalToAddList.h"
#include "list-nonterminalDeclarationListAST.h"
#include "list-semanticExpressionListAST.h"
#include "list-semanticExpressionListForGeneration.h"
#include "list-semanticInstructionListAST.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-sentLexicalAttributeListAST.h"
#include "list-signatureForGrammarAnalysis.h"
#include "list-sortDescriptorListForGeneration.h"
#include "list-sortedListSortDescriptorListAST.h"
#include "list-switchBranchesAST.h"
#include "list-switchBranchesForGeneration.h"
#include "list-syntaxComponentListForGrammarAnalysis.h"
#include "list-syntaxInstructionList.h"
#include "list-syntaxRuleListAST.h"
#include "list-templateDelimitorList.h"
#include "list-templateInstructionListAST.h"
#include "list-templateInstructionListForGeneration.h"
#include "list-templateReplacementListAST.h"
#include "list-terminalCheckAssignementList.h"
#include "list-terminalDeclarationListAST.h"
#include "list-terminalList.h"
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
#include "map-grammarLabelMap.h"
#include "map-grammarMap.h"
#include "map-insertMethodMap.h"
#include "map-instanceMethodMap.h"
#include "map-lexicalAttributeMap.h"
#include "map-lexicalExplicitTokenListMap.h"
#include "map-lexicalExplicitTokenListMapMap.h"
#include "map-lexicalFunctionMap.h"
#include "map-lexicalMessageMap.h"
#include "map-lexicalRoutineMap.h"
#include "map-lexicalTypeMap.h"
#include "map-lexiqueComponentMapForSemanticAnalysis.h"
#include "map-mapAutomatonActionMap.h"
#include "map-mapAutomatonStateMap.h"
#include "map-modifierMap.h"
#include "map-nonTerminalSymbolMapForGrammarAnalysis.h"
#include "map-nonterminalLabelMap.h"
#include "map-nonterminalMap.h"
#include "map-nonterminalSymbolLabelMapForGrammarAnalysis.h"
#include "map-optionComponentMapForSemanticAnalysis.h"
#include "map-readerMap.h"
#include "map-searchMethodMap.h"
#include "map-styleMap.h"
#include "map-syntaxComponentMap.h"
#include "map-templateVariableMap.h"
#include "map-terminalMap.h"
#include "map-terminalSymbolsMapForGrammarAnalysis.h"
#include "map-unusedNonTerminalSymbolMapForGrammarAnalysis.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperFileMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-abstractEnumeratedCollectionAST-analyzeEnumeration.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-analyzeGrammarInstructionSDT.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-analyzeSDT.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-generateCode.h"
#include "method-abstractInputParameter-analyzeInputParameter.h"
#include "method-abstractLexicalRuleAST-checkLexicalRule.h"
#include "method-actualParameterForGeneration-generateActualParameter.h"
#include "method-semanticDeclarationAST-semanticAnalysis.h"
#include "method-semanticDeclarationForGeneration-appendDeclaration1.h"
#include "method-semanticDeclarationForGeneration-appendSpecificFiles.h"
#include "method-semanticDeclarationForGeneration-appendSpecificImplementation.h"
#include "method-semanticExpressionAST-analyzeSemanticExpression.h"
#include "method-semanticExpressionForGeneration-generateExpression.h"
#include "method-semanticInstructionAST-analyzeSemanticInstruction.h"
#include "method-semanticInstructionForGeneration-generateInstruction.h"
#include "method-syntaxInstructionAST-analyzeSyntaxInstruction.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName.h"
#include "option-galgas_cli_options.h"
#include "proc-analyzeFunctionBody.h"
#include "proc-analyzeRoutineArguments.h"
#include "proc-analyzeRoutineBody.h"
#include "proc-analyzeSemanticInstructionList.h"
#include "proc-analyzeSyntaxInstructionList.h"
#include "proc-buildLexicalAttributeMap.h"
#include "proc-buildLexicalFunctionMap.h"
#include "proc-buildLexicalRoutineMap.h"
#include "proc-buildLocalVariableMapAndSignature.h"
#include "proc-buildRuleList.h"
#include "proc-checkAssignmentTypes.h"
#include "proc-checkExpressionIsBoolean.h"
#include "proc-checkLabelMap.h"
#include "proc-checkMethodSignatures.h"
#include "proc-checkReaderSignatures.h"
#include "proc-check_K_L_escapeCharacters.h"
#include "proc-check_K_escapeCharacters.h"
#include "proc-generateInstructionList.h"
#include "proc-grammarAnalysisAndGeneration.h"
#include "proc-handleNonTerminalDeclarations.h"
#include "proc-handleNonTerminalDeclarationsFromRuleList.h"
#include "proc-semanticAnalysisOfSyntaxComponent.h"
#include "proc-templateInstructionListAnalysis.h"
#include "sortedlist-branchBehaviourSortedListForMapOverride.h"
#include "sortedlist-mapStateSortedList.h"
#include "sortedlist-mapStateTransitionSortedList.h"
#include "sortedlist-nonTerminalSymbolSortedListForGrammarAnalysis.h"
#include "sortedlist-semanticDeclarationSortedListForGeneration.h"
#include "sortedlist-tokenSortedlist.h"
#include "struct-analysisContext.h"
#include "struct-lexiqueAnalysisContext.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
#include "struct-templateAnalysisContext.h"
#include "uniquemap-unifiedTypeMap.h"
#include "uniquemap-variableMap.h"


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
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 116)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 117)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 115)) ;
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
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 140)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
  cEnumerator_attributeInCollectionListAST enumerator_7669 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7669.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_7669.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7845 (enumerator_7669.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_7845.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_7845.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 148)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_7845.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 149)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_7845.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_7845.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 154)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_7845.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 158)) ;
        }
      }
      enumerator_7845.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_7669.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 161)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_7669.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 166)) ;
    }
    enumerator_7669.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 170)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 172)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 173)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 173)), var_typedAttributeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 171)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 169)) ;
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
                                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 186)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 187)) ;
  cEnumerator_attributeInCollectionListAST enumerator_9330 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9330.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9330.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 189)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_9330.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 192)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_9330.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 197)) ;
    }
    enumerator_9330.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 200)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 201)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_9808 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_9808.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_type ;
    var_attributeMap.method_searchKey (enumerator_9808.current_mSortedAttributeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 203)) ;
    var_sortDescriptorList.addAssign_operation (var_type, enumerator_9808.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 204)), enumerator_9808.current_mAscending (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting.reader_hasKey (enumerator_9808.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 205)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 205)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_9808.current_mSortedAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_9808.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 206)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 206))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 206)) ;
    }
    var_attributesUsedForSorting.addAssign_operation (enumerator_9808.current_mSortedAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 208))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 208)) ;
    enumerator_9808.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 212)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 214)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 215)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 215)), var_typedAttributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 213)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 211)) ;
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
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 237)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 238)) ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 240)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 241)) ;
  cEnumerator_attributeInCollectionListAST enumerator_11556 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_11556.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_11556.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 243)) ;
    cEnumerator_lstringlist enumerator_11682 (enumerator_11556.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_11682.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_11682.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
      enumerator_11682.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (false) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_11556.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)).reader_hasKey (enumerator_11556.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_12079 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 256)), kEnumeration_up) ;
      while (enumerator_12079.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_12079.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)) ;
        enumerator_12079.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 259)) ;
      GALGAS_location location_4 (enumerator_11556.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 260)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_11556.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 262)) ;
    }
    enumerator_11556.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 265)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 267)), var_typedAttributeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 266)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 264)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_graphTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 280)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListElementTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 281)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 284)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 284)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 285)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 285))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 285)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 288)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 289)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 290)) ;
  cEnumerator_graphInsertModifierList enumerator_13653 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_13653.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.reader_hasKey (enumerator_13653.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 292)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_13653.current_mInsertModifierName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_13653.current_mInsertModifierName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293)).add_operation (GALGAS_string ("' modifier name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 293)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_13653.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 295)) ;
    }
    enumerator_13653.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 299)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 300)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 298)) ;
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
                                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_externTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 318)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 319)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 317)) ;
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
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 335)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 336)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 337)) ;
  cEnumerator_enumConstantList enumerator_15438 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_15438.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_15438.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 339)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 340)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 341)) ;
    cEnumerator__32_lstringlist enumerator_15624 (enumerator_15438.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_15624.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_associatedTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15624.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 343)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 344)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.reader_hasKey (enumerator_15624.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_15624.current_mValue_31_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 346)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_15624.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 348)) ;
      enumerator_15624.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_15438.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 350)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 350)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_15438.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 351)) ;
    enumerator_15438.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 355)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 357)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 356)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 354)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 371)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 373)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 374)), object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticAnalysis.galgas", 375))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 372)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 370)) ;
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
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedAttributeList var_listTypeAttributeList ;
  GALGAS_bool joker_17615_3 ; // Joker input parameter
  GALGAS_bool joker_17615_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_17615_1 ; // Joker input parameter
  GALGAS_bool joker_17659_0 ; // Joker input parameter
  GALGAS_attributeMap joker_17717_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_17717_19 ; // Joker input parameter
  GALGAS_constructorMap joker_17717_18 ; // Joker input parameter
  GALGAS_readerMap joker_17717_17 ; // Joker input parameter
  GALGAS_modifierMap joker_17717_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_17717_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_17717_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_17717_13 ; // Joker input parameter
  GALGAS_stringlist joker_17717_12 ; // Joker input parameter
  GALGAS_uint joker_17717_11 ; // Joker input parameter
  GALGAS_functionSignature joker_17717_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_17717_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_17717_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_17717_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_17717_6 ; // Joker input parameter
  GALGAS_bool joker_17717_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_17717_4 ; // Joker input parameter
  GALGAS_string joker_17717_3 ; // Joker input parameter
  GALGAS_string joker_17717_2 ; // Joker input parameter
  GALGAS_headerKind joker_17717_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_17615_3, joker_17615_2, joker_17615_1, var_typeKindEnum, joker_17659_0, var_listTypeAttributeList, joker_17717_20, joker_17717_19, joker_17717_18, joker_17717_17, joker_17717_16, joker_17717_15, joker_17717_14, joker_17717_13, joker_17717_12, joker_17717_11, joker_17717_10, joker_17717_9, joker_17717_8, joker_17717_7, joker_17717_6, joker_17717_5, joker_17717_4, joker_17717_3, joker_17717_2, joker_17717_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 389)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticAnalysis.galgas", 398)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 399)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 403)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 406)), var_listTypeAttributeList, GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 404)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 402)) ;
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
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 483)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 484)) ;
  cEnumerator_attributeInCollectionListAST enumerator_21040 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_21040.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_21040.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 486)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_21040.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 489)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)).reader_hasKey (enumerator_21040.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_21435 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)), kEnumeration_up) ;
      while (enumerator_21435.hasCurrentObject ()) {
        var_m.dotAssign_operation (GALGAS_string (" ").add_operation (enumerator_21435.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497)) ;
        enumerator_21435.gotoNextObject () ;
      }
      var_m.dotAssign_operation (GALGAS_string ("; theses names are reserved")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 499)) ;
      GALGAS_location location_1 (enumerator_21040.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, var_m  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)) ;
    }
    {
    var_attributeMap.modifier_insertKey (enumerator_21040.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 502)) ;
    }
    enumerator_21040.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 505)) ;
  cEnumerator_insertMethodListAST enumerator_21713 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_21713.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_21713.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 507)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_21713.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 508)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_21713.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 509)) ;
    }
    enumerator_21713.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 512)) ;
  cEnumerator_mapSearchMethodListAST enumerator_21989 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_21989.hasCurrentObject ()) {
    {
    var_searchMethodMap.modifier_insertKey (enumerator_21989.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_21989.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 515)) ;
    }
    enumerator_21989.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_22156 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_22156.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_22156.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 519)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_22156.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 520)) ;
    }
    enumerator_22156.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_22376 (object->mAttribute_mInsertOrReplaceDeclarationListAST, kEnumeration_up) ;
  GALGAS_uint index_22334 ((uint32_t) 0) ;
  while (enumerator_22376.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_22334.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticWarning (enumerator_22376.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' modifier is already declared")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)) ;
    }
    enumerator_22376.gotoNextObject () ;
    index_22334.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 523)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier = GALGAS_bool (kIsStrictSup, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 528)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_3 = var_hasInsertOrReplaceModifier.operator_and (var_insertMethodMap.reader_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 529)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 529)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location var_insertOrReplaceDeclarationLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 531)) ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation, GALGAS_string ("the insertOrReplace' modifier cannot be declared : an insert modifier or a remove modifier has been declared with this name")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 532)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 545)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 547)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 548)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, var_hasInsertOrReplaceModifier  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 546)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
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
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapDeclarationAST * object = (const cPtr_uniqueMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapDeclarationAST) ;
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 566)) ;
  cEnumerator_insertMethodListAST enumerator_24346 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_24346.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 568)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_24346.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 569)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_24346.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_24346.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 570)) ;
      }else if (kBoolFalse == test_1) {
        var_initialStateSet.addAssign_operation (enumerator_24346.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 572))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_24346.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 574)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_24346.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_24346.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      }
    }
    enumerator_24346.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 579)) ;
  cEnumerator_mapSearchMethodListAST enumerator_24929 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_24929.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 581)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_24929.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 582)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_24929.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_24929.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_mapAutomatonActionMap.reader_hasKey (enumerator_24929.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 584)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 584)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 584)).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          var_mapAutomatonActionMap.modifier_insertKey (enumerator_24929.current_mActionName (HERE), var_mapAutomatonActionMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 586)) ;
          }
        }
      }
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_24929.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 590)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_24929.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_24929.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
      }
    }
    enumerator_24929.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 595)) ;
  cEnumerator_mapStateList enumerator_25722 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_25722.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.modifier_insertKey (enumerator_25722.current_mStateName (HERE), var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 597)) ;
    }
    enumerator_25722.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_25839 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_25839.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_25873 (enumerator_25839.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_25873.hasCurrentObject ()) {
      GALGAS_uint joker_25934_0 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_25873.current_mTargetStateName (HERE), joker_25934_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
      enumerator_25873.gotoNextObject () ;
    }
    enumerator_25839.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 605)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 606)) ;
  cEnumerator_mapStateList enumerator_26147 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_26147.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 608)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 609)) ;
    cEnumerator_mapStateTransitionList enumerator_26321 (enumerator_26147.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_26321.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_26321.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 612)) ;
      const enumGalgasBool test_11 = var_actionsForCurrentState.reader_hasKey (enumerator_26321.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 613)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 613)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_26321.current_mActionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_26321.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 614)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_26321.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 616))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 616)) ;
      GALGAS_uint var_targetStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_26321.current_mTargetStateName (HERE), var_targetStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 618)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_26321.current_mActionName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 621)), var_targetStateIndex, enumerator_26321.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 623)), enumerator_26321.current_mTransitionMessageKind (HERE), enumerator_26321.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 625))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 619)) ;
      enumerator_26321.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    var_mapAutomatonStateMap.method_searchKey (enumerator_26147.current_mStateName (HERE), var_stateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 628)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_26147.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 631)), enumerator_26147.current_mStateMessageKind (HERE), enumerator_26147.current_mStateMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 633)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 629)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 635)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_missingActions.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 636)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_27375 (var_missingActions, kEnumeration_up) ;
      while (enumerator_27375.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_27375.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)) ;
        if (enumerator_27375.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 640)) ;
        }
        enumerator_27375.gotoNextObject () ;
      }
      GALGAS_location location_14 (enumerator_26147.current_mStateName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 642))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 642)) ;
    }
    enumerator_26147.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 648)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 648)).isValid ()) {
    uint32_t variant_27676 = object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 648)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 648)).uintValue () ;
    bool loop_27676 = true ;
    while (loop_27676) {
      loop_27676 = var_progress.isValid () ;
      if (loop_27676) {
        loop_27676 = var_progress.boolValue () ;
      }
      if (loop_27676 && (0 == variant_27676)) {
        loop_27676 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 648)) ;
      }
      if (loop_27676) {
        variant_27676 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_27773 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_27773.hasCurrentObject ()) {
          const enumGalgasBool test_15 = var_accessibleStates.reader_hasKey (enumerator_27773.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 651)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 651)).boolEnum () ;
          if (kBoolTrue == test_15) {
            cEnumerator_mapStateTransitionList enumerator_27872 (enumerator_27773.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_27872.hasCurrentObject ()) {
              const enumGalgasBool test_16 = var_accessibleStates.reader_hasKey (enumerator_27872.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 653)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 653)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 653)).boolEnum () ;
              if (kBoolTrue == test_16) {
                var_accessibleStates.addAssign_operation (enumerator_27872.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 654))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_27872.gotoNextObject () ;
            }
          }
          enumerator_27773.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 661)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 661)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_uselessStates.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 662)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_28253 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_28253.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_28253.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)) ;
      if (enumerator_28253.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 666)) ;
      }
      enumerator_28253.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 668)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 673)) ;
  cEnumerator_mapAutomatonStateMap enumerator_28621 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_28621.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 675)) ;
    var_reachableStates.addAssign_operation (enumerator_28621.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 676))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 676)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 678)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 678)).isValid ()) {
      uint32_t variant_28744 = var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 678)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 678)).uintValue () ;
      bool loop_28744 = true ;
      while (loop_28744) {
        loop_28744 = var_progress.isValid () ;
        if (loop_28744) {
          loop_28744 = var_progress.boolValue () ;
        }
        if (loop_28744 && (0 == variant_28744)) {
          loop_28744 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 678)) ;
        }
        if (loop_28744) {
          variant_28744 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_28851 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_28851.hasCurrentObject ()) {
            const enumGalgasBool test_18 = var_reachableStates.reader_hasKey (enumerator_28851.current_mStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 681)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 681)).boolEnum () ;
            if (kBoolTrue == test_18) {
              cEnumerator_mapStateTransitionList enumerator_28953 (enumerator_28851.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_28953.hasCurrentObject ()) {
                const enumGalgasBool test_19 = var_reachableStates.reader_hasKey (enumerator_28953.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 683)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 683)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 683)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  var_reachableStates.addAssign_operation (enumerator_28953.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 684))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 684)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_28621.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 685)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 685)).add_operation (enumerator_28953.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 685))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 685)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_28953.gotoNextObject () ;
              }
            }
            enumerator_28851.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_29298 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_29298.hasCurrentObject ()) {
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_28621.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 693)).objectCompare (enumerator_29298.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_20) {
        var_neededAssociations.addAssign_operation (enumerator_28621.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 694)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)).add_operation (enumerator_29298.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
      }
      enumerator_29298.gotoNextObject () ;
    }
    enumerator_28621.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 699)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_29512 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_29512.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 701)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 703)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_29772 (enumerator_29512.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_29772.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29772.current_mLeftState (HERE), var_startStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)) ;
      GALGAS_uint var_currentStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29772.current_mRightState (HERE), var_currentStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 708)) ;
      GALGAS_string var_association = enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 709)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)).add_operation (enumerator_29772.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)) ;
      const enumGalgasBool test_21 = var_neededAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 710)).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_29772.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_22, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)) ;
      }
      const enumGalgasBool test_23 = var_handledAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_location location_24 (enumerator_29772.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_24, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 715)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 715))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
      GALGAS_uint var_finalStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_29772.current_mResultingState (HERE), var_finalStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 720)).objectCompare (enumerator_29772.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 720)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_neededCombinaisons.addAssign_operation (enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 721)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)).add_operation (enumerator_29772.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 721)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_29772.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 722)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)).add_operation (enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)) ;
        const enumGalgasBool test_26 = var_accessibilityGraph.reader_hasKey (enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 723)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)).add_operation (enumerator_29772.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 723)).boolEnum () ;
        if (kBoolTrue == test_26) {
          GALGAS_location location_27 (enumerator_29772.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_29772.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)).add_operation (enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 724)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_29772.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_29772.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 731)), var_currentStateNameIndex, enumerator_29772.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 733)), var_finalStateNameIndex, enumerator_29772.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 735)), enumerator_29772.current_mMessageKind (HERE), enumerator_29772.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 737))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
      enumerator_29772.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 739)) ;
    const enumGalgasBool test_28 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 740)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_31550 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_31550.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_31550.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)) ;
        enumerator_31550.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)), var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 745)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 747)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 748)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_31914 (enumerator_29512.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_31914.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31914.current_mLeftState (HERE), var_leftStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
      GALGAS_uint var_rightStateIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31914.current_mRightState (HERE), var_rightStateIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)) ;
      GALGAS_string var_combinaison = enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 754)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 754)).add_operation (enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 754)) ;
      const enumGalgasBool test_29 = var_neededCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 755)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 755)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_31914.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)).add_operation (enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)) ;
      }
      const enumGalgasBool test_31 = var_definedCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 759)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_31914.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)).add_operation (enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 760)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      var_mapAutomatonStateMap.method_searchKey (enumerator_31914.current_mResultingState (HERE), var_resultingStateNameIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)) ;
      const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 766)).objectCompare (enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 766)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 767)).objectCompare (enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 767)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 766)).operator_and (var_accessibilityGraph.reader_hasKey (enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 768)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)).add_operation (enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 768)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 768)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 767)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_31914.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_34, GALGAS_string ("the '").add_operation (enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)).add_operation (enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 770))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 769)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_31914.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 772)) ;
      }
      const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_31914.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("semanticAnalysis.galgas", 773)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_definedCombinaisons.addAssign_operation (enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 774)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)).add_operation (enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 774)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 777)), var_leftStateIndex, enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 779)), var_resultingStateNameIndex, enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 781)), enumerator_31914.current_mMessageKind (HERE), enumerator_31914.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 783))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 775)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_31914.current_mLeftState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 787)), var_rightStateIndex, enumerator_31914.current_mRightState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 789)), var_resultingStateNameIndex, enumerator_31914.current_mResultingState (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 791)), enumerator_31914.current_mMessageKind (HERE), enumerator_31914.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 793))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)) ;
      enumerator_31914.gotoNextObject () ;
    }
    const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, var_forgottenAssociations.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 795)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)) ;
      const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 797)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_34158 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_34158.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_34158.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 800))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 800)) ;
          enumerator_34158.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)), var_forgottenCombinaisons.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 802)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 802)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_29512.current_mOverrideBlockName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 806)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
    enumerator_29512.gotoNextObject () ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 812)) ;
  cEnumerator_attributeInCollectionListAST enumerator_34648 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_34648.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_34648.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 814)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_34648.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_34648.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 822)) ;
    }
    enumerator_34648.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 825)) ;
  cEnumerator_insertMethodListAST enumerator_35054 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_35054.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_35054.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)) ;
    }
    cEnumerator_stringlist enumerator_35248 (enumerator_35054.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 829)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 829)), kEnumeration_up) ;
    while (enumerator_35248.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_35248.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 830)) ;
      {
      GALGAS_string joker_35361_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_35361_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 831)) ;
      }
      cEnumerator_stringlist enumerator_35394 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_35394.hasCurrentObject ()) {
        const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_35394.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 833)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_char var_c = enumerator_35394.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 834)) ;
          const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 835)).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_location location_40 (enumerator_35054.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_40, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 836)) ;
          }
        }
        enumerator_35394.gotoNextObject () ;
      }
      enumerator_35248.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_35839 (enumerator_35054.current_mShadowErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 842)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 842)), kEnumeration_up) ;
    while (enumerator_35839.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_35839.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 843)) ;
      {
      GALGAS_string joker_35952_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_35952_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 844)) ;
      }
      cEnumerator_stringlist enumerator_35985 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_35985.hasCurrentObject ()) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, enumerator_35985.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 846)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_char var_c = enumerator_35985.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847)) ;
          const enumGalgasBool test_42 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 848)).boolEnum () ;
          if (kBoolTrue == test_42) {
            GALGAS_location location_43 (enumerator_35054.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_43, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)) ;
          }
        }
        enumerator_35985.gotoNextObject () ;
      }
      enumerator_35839.gotoNextObject () ;
    }
    enumerator_35054.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 856)) ;
  cEnumerator_mapSearchMethodListAST enumerator_36392 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_36392.hasCurrentObject ()) {
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 858)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_36392.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 859)) ;
      }
    }else if (kBoolFalse == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_36392.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 861)) ;
      }
    }
    cEnumerator_stringlist enumerator_36700 (enumerator_36392.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 864)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 864)), kEnumeration_up) ;
    while (enumerator_36700.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36700.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 865)) ;
      {
      GALGAS_string joker_36813_0 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_36813_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 866)) ;
      }
      cEnumerator_stringlist enumerator_36846 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_36846.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_36846.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 868)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c = enumerator_36846.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_location location_47 (enumerator_36392.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_47, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 871)) ;
          }
        }
        enumerator_36846.gotoNextObject () ;
      }
      enumerator_36700.gotoNextObject () ;
    }
    enumerator_36392.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("unique map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)), GALGAS_uniqueMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 890)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 889)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 887)) ;
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
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedAttributeList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_38398_7 ; // Joker input parameter
  GALGAS_bool joker_38398_6 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_38398_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_38398_4 ; // Joker input parameter
  GALGAS_bool joker_38398_3 ; // Joker input parameter
  GALGAS_typedAttributeList joker_38398_2 ; // Joker input parameter
  GALGAS_attributeMap joker_38398_1 ; // Joker input parameter
  GALGAS_constructorMap joker_38457_11 ; // Joker input parameter
  GALGAS_readerMap joker_38457_10 ; // Joker input parameter
  GALGAS_modifierMap joker_38457_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_38457_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_38457_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_38457_6 ; // Joker input parameter
  GALGAS_stringlist joker_38457_5 ; // Joker input parameter
  GALGAS_uint joker_38457_4 ; // Joker input parameter
  GALGAS_functionSignature joker_38457_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_38457_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_38457_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_38516_6 ; // Joker input parameter
  GALGAS_bool joker_38516_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_38516_4 ; // Joker input parameter
  GALGAS_string joker_38516_3 ; // Joker input parameter
  GALGAS_string joker_38516_2 ; // Joker input parameter
  GALGAS_headerKind joker_38516_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_38398_7, joker_38398_6, joker_38398_5, joker_38398_4, joker_38398_3, joker_38398_2, joker_38398_1, var_listTypeAttributeList, joker_38457_11, joker_38457_10, joker_38457_9, joker_38457_8, joker_38457_7, joker_38457_6, joker_38457_5, joker_38457_4, joker_38457_3, joker_38457_2, joker_38457_1, var_searchMethodList, joker_38516_6, joker_38516_5, joker_38516_4, joker_38516_3, joker_38516_2, joker_38516_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 911)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 921)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 923)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 924)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 922)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 920)) ;
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
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1044)) ;
  cEnumerator_formalInputParameterListAST enumerator_44209 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_44209.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_44209.current_mFormalSelector (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_44209.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1048)), enumerator_44209.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1049)), enumerator_44209.current_mFormalArgumentName (HERE), enumerator_44209.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1046)) ;
    enumerator_44209.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1054)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1054)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1058)), var_formalArgumentList, GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1060))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1055)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
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
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1071)) ;
  cEnumerator_formalParameterListAST enumerator_45271 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_45271.hasCurrentObject ()) {
    var_formalArgumentList.addAssign_operation (enumerator_45271.current_mFormalSelector (HERE), enumerator_45271.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_45271.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)), enumerator_45271.current_mFormalArgumentName (HERE), enumerator_45271.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1078))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1073)) ;
    enumerator_45271.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1081)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1081)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1084)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1085)), var_formalArgumentList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1082)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)) ;
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
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1098)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1103)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1105))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1100)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1109)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1110)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1111)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList, var_formalArgumentList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1106)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1120)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1123)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1123)), object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1124)), var_formalArgumentList, GALGAS_bool (false), var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1121)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1119)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139)) ;
  GALGAS_unifiedTypeMapProxy var_superClassProxy ;
  GALGAS_typedAttributeList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1145)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1146)) ;
    var_allAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1147)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1149)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_48080 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_48080.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_48080.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1151)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_48080.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_48080.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)) ;
        }
        enumerator_48080.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)) ;
    var_allAttributeList = var_superClassProxy.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1164)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_48707 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_48707.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_48707.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)) ;
        enumerator_48707.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1171)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1172)) ;
  cEnumerator_attributeInCollectionListAST enumerator_48977 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_48977.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_48977.current_mAttributeTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_49158 (enumerator_48977.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_49158.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_49158.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1178)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_49158.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_49158.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1183)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1184)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_49158.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1185)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_49158.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1189)) ;
        }
      }
      enumerator_49158.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_48977.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1192)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_48977.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1197)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_48977.current_mAttributeName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1202)) ;
    }
    enumerator_48977.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1205)) ;
  GALGAS_unifiedTypeMapProxy var_t = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1206)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1207)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1207)).isValid ()) {
    uint32_t variant_50008 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1207)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1207)).uintValue () ;
    bool loop_50008 = true ;
    while (loop_50008) {
      loop_50008 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1208)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1208)).isValid () ;
      if (loop_50008) {
        loop_50008 = var_t.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1208)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1208)).boolValue () ;
      }
      if (loop_50008 && (0 == variant_50008)) {
        loop_50008 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1207)) ;
      }
      if (loop_50008) {
        variant_50008 -- ;
        var_sortString = var_t.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1209)) ;
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1210)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1214)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1216)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.reader_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1222))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1215)), var_sortString  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1213)) ;
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
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
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
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1315)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1317))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1312)) ;
  {
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mFormalArgumentList, GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1321)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1318)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1334)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1334)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1337)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1337)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1338)), var_formalInputParameterList, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1335)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1333)) ;
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
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
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
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1360)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1362))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1357)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_56125_0 ; // Joker input parameter
  routine_analyzeFunctionBody (var_analysisContext, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1365)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1366)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_56125_0, var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1363)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1379)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1379)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1382)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1382)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1383)), var_returnType, var_resultVariableCppName, var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1380)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1378)) ;
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
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_wrapperFileMap var_wrapperFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_lstring joker_57325_0 ; // Joker input parameter
  GALGAS_lstringlist joker_57332_0 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_57429_2 ; // Joker input parameter
  GALGAS_bool joker_57429_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_57325_0, joker_57332_0, var_wrapperFileMap, var_wrapperDirectoryMap, joker_57429_2, joker_57429_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1402)) ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 1412)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1415)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1415)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 1417)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1417)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1421)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_58053 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_58053.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_58053.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1423)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 1423)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_58053.current_mFilewrapperTemplatePath (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
      }
      GALGAS_string var_absoluteTemplatePath = var_absoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)).add_operation (enumerator_58053.current_mFilewrapperTemplatePath (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1426)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1426)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList ;
      var_resultingInstructionList.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath, enumerator_58053.current_mFilewrapperTemplatePath (HERE).reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1429))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1429)), var_resultingInstructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1429)) ;
      GALGAS_templateVariableMap var_templateVariableMap = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1431)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1432)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_58850 (enumerator_58053.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_58850.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_58850.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1434)) ;
        GALGAS_string var_cppVarName = GALGAS_string ("in_").add_operation (enumerator_58850.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1435)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1435)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)) ;
        {
        var_templateVariableMap.modifier_insertKey (enumerator_58850.current_mFormalArgumentName (HERE), var_type, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1436)) ;
        }
        var_filewrapperTemplateFormalInputParameters.addAssign_operation (enumerator_58850.current_mFormalTemplateSelector (HERE), var_type, var_cppVarName, enumerator_58850.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1437)) ;
        enumerator_58850.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1440)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1441)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext, var_resultingInstructionList, var_templateInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1445)) ;
      }
      var_filewrapperTemplateListForGeneration.addAssign_operation (enumerator_58053.current_mFilewrapperTemplateName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1448)), var_filewrapperTemplateFormalInputParameters, var_templateInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1447)) ;
      enumerator_58053.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1454)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)), object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1458)), object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1459)), var_wrapperFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1453)) ;
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
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
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
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1478)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1490)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)), var_isPredefined, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1488)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1486)) ;
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
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1507)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1509)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1509)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1510)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1510))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1510)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1511)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1512)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1512)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1512))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1512)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1515)) ;
  cEnumerator_formalParameterListAST enumerator_62732 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_62732.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_62732.current_mFormalSelector (HERE), enumerator_62732.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_62732.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1520)), enumerator_62732.current_mFormalArgumentName (HERE), enumerator_62732.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1522))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1517)) ;
    enumerator_62732.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1526)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1526)), GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)), var_selfType, object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1531)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                        categoryMethod_abstractCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_semanticAnalysis (defineCategoryMethod_abstractCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@categoryMethodAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1544)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1549)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1559)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1566))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)) ;
  {
  GALGAS_typedAttributeList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1571)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1571)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1571)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1571)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1571)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1572)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1573)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1570)), temp_1, GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1575)), var_selfObjectAccessor, object->mAttribute_mCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1584)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1584)), GALGAS_categoryMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1587)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1587)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1587)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1587)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1587)), var_selfType, object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1589)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1585)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                        categoryMethod_categoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_semanticAnalysis (defineCategoryMethod_categoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@overridingCategoryMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1605)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1607)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1607)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1608)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1608)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1608))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1608)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1612)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1613)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1614)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1615)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)).isValid ()) {
    uint32_t variant_66541 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1615)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)).uintValue () ;
    bool loop_66541 = true ;
    while (loop_66541) {
      loop_66541 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1616)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1616)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1616)).isValid () ;
      if (loop_66541) {
        loop_66541 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1616)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1616)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1616)).boolValue () ;
      }
      if (loop_66541 && (0 == variant_66541)) {
        loop_66541 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1615)) ;
      }
      if (loop_66541) {
        variant_66541 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1617)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_66847_0 ; // Joker input parameter
          GALGAS_bool joker_66900_0 ; // Joker input parameter
          GALGAS_string joker_66914_0 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_66847_0, var_inheritedSignature, var_inheritedDeclarationLocation, joker_66900_0, var_qualifier, joker_66914_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1620)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1624)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this method is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1627)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1630)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1637))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1632)) ;
  {
  GALGAS_typedAttributeList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1642)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 1642)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1643)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1644)) ;
  }
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1641)), temp_6, GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1646)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1638)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1657)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1655)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1664)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)), GALGAS_overridingCategoryMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1667)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1667)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1667)).add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1667)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1667)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1670)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1672)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1665)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                        categoryMethod_overridingCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_semanticAnalysis (defineCategoryMethod_overridingCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingAbstractCategoryMethodAST semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                 GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1687)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1687)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1689)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category method: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1690)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1690)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1690))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1690)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1694)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1695)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1696)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1697)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1697)).isValid ()) {
    uint32_t variant_69988 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1697)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1697)).uintValue () ;
    bool loop_69988 = true ;
    while (loop_69988) {
      loop_69988 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1698)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1698)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1698)).isValid () ;
      if (loop_69988) {
        loop_69988 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1698)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1698)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1698)).boolValue () ;
      }
      if (loop_69988 && (0 == variant_69988)) {
        loop_69988 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1697)) ;
      }
      if (loop_69988) {
        variant_69988 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1699)).reader_hasKey (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1699)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1699)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_70294_0 ; // Joker input parameter
          GALGAS_bool joker_70347_0 ; // Joker input parameter
          GALGAS_string joker_70361_0 ; // Joker input parameter
          var_superType.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1701)).method_searchKey (object->mAttribute_mOverridingCategoryMethodName, joker_70294_0, var_inheritedSignature, var_inheritedDeclarationLocation, joker_70347_0, var_qualifier, joker_70361_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1701)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1702)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1703)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1706)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryMethodName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1709)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1712)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryMethodFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1714)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryMethodName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1724)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1722)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@abstractCategoryModifierAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1739)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1741)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1741)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category modifier: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1742)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1742)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1742))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1742)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1743)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category modifier: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1744)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1744)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1744))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1744)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1747)) ;
  cEnumerator_formalParameterListAST enumerator_72277 (object->mAttribute_mAbstractCategoryModifierFormalParameterList, kEnumeration_up) ;
  while (enumerator_72277.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_72277.current_mFormalSelector (HERE), enumerator_72277.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_72277.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1752)), enumerator_72277.current_mFormalArgumentName (HERE), enumerator_72277.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1754))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1749)) ;
    enumerator_72277.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1758)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1758)), GALGAS_abstractCategoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1761)), var_selfType, object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1763)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1759)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1757)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                        categoryMethod_abstractCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_semanticAnalysis (defineCategoryMethod_abstractCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@categoryModifierAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1776)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1781)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1781)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1791)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1793)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1802)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1803)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1804)), var_selfObjectAccessor, object->mAttribute_mCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1799)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1813)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1813)), GALGAS_categoryModifierForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1816)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1816)), var_selfType, object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1818)), var_implementedAsFunction, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1821)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1814)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1812)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                        categoryMethod_categoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_semanticAnalysis (defineCategoryMethod_categoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@overridingCategoryModifierAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1834)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1836)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1836)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category modifier: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1837)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1837)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1837))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1837)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1841)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1842)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1844)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1844)).isValid ()) {
    uint32_t variant_75914 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1844)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1844)).uintValue () ;
    bool loop_75914 = true ;
    while (loop_75914) {
      loop_75914 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1845)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1845)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)).isValid () ;
      if (loop_75914) {
        loop_75914 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1845)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1845)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1845)).boolValue () ;
      }
      if (loop_75914 && (0 == variant_75914)) {
        loop_75914 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1844)) ;
      }
      if (loop_75914) {
        variant_75914 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1846)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1846)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1846)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_76212_0 ; // Joker input parameter
          GALGAS_bool joker_76235_0 ; // Joker input parameter
          GALGAS_string joker_76249_0 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1848)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_76212_0, var_inheritedSignature, joker_76235_0, var_qualifier, joker_76249_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1848)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1849)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1850)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1853)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this modifier is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1856)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1859)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), var_selfType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1861)) ;
  {
  routine_analyzeRoutineBody (var_analysisContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1870)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1871)), var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1872)), GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryModifierInstructionList, object->mAttribute_mEndOfModifierLocation, var_semanticInstructionListForGeneration, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1867)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1883)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1881)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1890)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1890)), GALGAS_overridingCategoryModifierForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1893)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1893)).add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1893)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1896)), var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1898)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1891)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1889)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                        categoryMethod_overridingCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_semanticAnalysis (defineCategoryMethod_overridingCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@overridingAbstractCategoryModifierAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1911)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1913)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1913)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category modifier: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1914)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1914))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1914)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1915)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category modifier: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1916)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1916)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1916))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1916)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1920)) ;
  GALGAS_formalParameterSignature var_inheritedSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1921)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1922)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1923)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1923)).isValid ()) {
    uint32_t variant_79153 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 1923)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1923)).uintValue () ;
    bool loop_79153 = true ;
    while (loop_79153) {
      loop_79153 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1924)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1924)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1924)).isValid () ;
      if (loop_79153) {
        loop_79153 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 1924)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1924)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1924)).boolValue () ;
      }
      if (loop_79153 && (0 == variant_79153)) {
        loop_79153 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 1923)) ;
      }
      if (loop_79153) {
        variant_79153 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1925)).reader_hasKey (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1925)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1925)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_79451_0 ; // Joker input parameter
          GALGAS_bool joker_79474_0 ; // Joker input parameter
          GALGAS_string joker_79488_0 ; // Joker input parameter
          var_superType.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1927)).method_searchKey (object->mAttribute_mOverridingCategoryModifierName, joker_79451_0, var_inheritedSignature, joker_79474_0, var_qualifier, joker_79488_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1927)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 1928)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1929)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1932)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mOverridingCategoryModifierName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this modifier is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1935)) ;
  }
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1938)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingCategoryModifierFormalParameterList, var_variableMap, var_formalParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1940)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration, object->mAttribute_mOverridingCategoryModifierName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 1950)), var_inheritedSignature, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1948)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryModifierAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@abstractCategoryReaderAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1965)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1967)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 1967)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category reader: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1968)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1968)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1968))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1968)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1969)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category reader: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1970)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1973)) ;
  cEnumerator_formalInputParameterListAST enumerator_81408 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_81408.hasCurrentObject ()) {
    var_formalParameterListForGeneration.addAssign_operation (enumerator_81408.current_mFormalSelector (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_81408.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1977)), enumerator_81408.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1978)), enumerator_81408.current_mFormalArgumentName (HERE), enumerator_81408.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1975)) ;
    enumerator_81408.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1984)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1984)), GALGAS_abstractCategoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1987)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1987)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1987)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1987)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1987)), var_selfType, object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1989)), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1990)), var_formalParameterListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1985)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1983)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                        categoryMethod_abstractCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_semanticAnalysis (defineCategoryMethod_abstractCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@categoryReaderAST semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2005)) ;
  GALGAS_string var_selfObjectName ;
  GALGAS_string var_selfObjectAccessor ;
  GALGAS_bool var_implementedAsFunction ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2010)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 2010)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName = GALGAS_string ("object") ;
    var_selfObjectAccessor = GALGAS_string ("object->") ;
    var_implementedAsFunction = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName = GALGAS_string ("inObject") ;
    var_selfObjectAccessor = GALGAS_string ("inObject.") ;
    var_implementedAsFunction = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, var_selfObjectName, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 2025))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2020)) ;
  GALGAS_unifiedTypeMapProxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedAttributeList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 2033)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 2033)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticAnalysis.galgas", 2033)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2034)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2035)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mCategoryReaderFormalInputParameterList, temp_1, var_selfObjectAccessor, object->mAttribute_mCategoryReaderInstructionList, object->mAttribute_mCategoryReaderReturnedVariableName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2030)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2049)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2049)), GALGAS_categoryReaderForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2052)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2052)), var_selfType, object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2054)), var_implementedAsFunction, var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2059)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2050)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2048)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                        categoryMethod_categoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_semanticAnalysis (defineCategoryMethod_categoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@overridingCategoryReaderAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2072)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2074)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 2074)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category reader: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075)) ;
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2079)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2080)) ;
  GALGAS_unifiedTypeMapProxy var_inheritedReturnType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 2081)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2082)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2083)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2083)).isValid ()) {
    uint32_t variant_85563 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2083)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2083)).uintValue () ;
    bool loop_85563 = true ;
    while (loop_85563) {
      loop_85563 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 2084)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2084)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2084)).isValid () ;
      if (loop_85563) {
        loop_85563 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 2084)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2084)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2084)).boolValue () ;
      }
      if (loop_85563 && (0 == variant_85563)) {
        loop_85563 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 2083)) ;
      }
      if (loop_85563) {
        variant_85563 -- ;
        const enumGalgasBool test_2 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2085)).reader_hasKey (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2085)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2085)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_85836_0 ; // Joker input parameter
          GALGAS_bool joker_85913_0 ; // Joker input parameter
          GALGAS_string joker_85993_0 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2086)).method_searchKey (object->mAttribute_mOverridingCategoryReaderName, joker_85836_0, var_inheritedSignature, var_inheritedDeclarationLocation, joker_85913_0, var_inheritedReturnType, var_qualifier, joker_85993_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2086)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 2096)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2097)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2100)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mOverridingCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2103)) ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType, GALGAS_string ("object"), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 2111))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2106)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration ;
  GALGAS_unifiedTypeMapProxy var_returnType ;
  GALGAS_string var_returnVariableCppName ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration ;
  {
  GALGAS_typedAttributeList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2115)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 2115)))).operator_or (GALGAS_bool (kIsEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2115)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticAnalysis.galgas", 2115)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2115)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2116)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2117)) ;
  }
  routine_analyzeFunctionBody (var_analysisContext, object->mAttribute_mOverridingCategoryReaderFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingCategoryReaderInstructionList, object->mAttribute_mOverridingCategoryReaderReturnedVariableName, object->mAttribute_mOverridingCategoryReaderReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration, var_returnType, var_returnVariableCppName, var_semanticInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2112)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mOverridingCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 2134)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2131)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2142)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2142)), GALGAS_overrideCategoryReaderForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2145)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2145)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2145)).add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2145)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2145)), var_selfType, var_baseTypeName, object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2148)), var_returnType, var_returnVariableCppName, var_formalParameterListForGeneration, var_selfType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2152)), var_semanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2143)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2141)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                        categoryMethod_overridingCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_semanticAnalysis (defineCategoryMethod_overridingCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingAbstractCategoryReaderAST semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                 GALGAS_semanticDeclarationSortedListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  GALGAS_unifiedTypeMapProxy var_selfType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2165)) ;
  GALGAS_unifiedTypeMapProxy var_returnType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2167)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2169)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticAnalysis.galgas", 2169)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot declare a category reader: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2170)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2170)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2170))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2170)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2171)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot declare an abstract category reader: '@").add_operation (var_selfType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2172)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2172)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2172))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2172)) ;
    }
  }
  GALGAS_string var_baseTypeName = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMapProxy var_superType = var_selfType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2176)) ;
  GALGAS_functionSignature var_inheritedSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2177)) ;
  GALGAS_unifiedTypeMapProxy var_inheritedReturnType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 2178)) ;
  GALGAS_location var_inheritedDeclarationLocation = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2179)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2180)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2180)).isValid ()) {
    uint32_t variant_89387 = constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2180)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2180)).uintValue () ;
    bool loop_89387 = true ;
    while (loop_89387) {
      loop_89387 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 2181)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2181)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181)).isValid () ;
      if (loop_89387) {
        loop_89387 = var_superType.reader_isNull (SOURCE_FILE ("semanticAnalysis.galgas", 2181)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2181)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181)).boolValue () ;
      }
      if (loop_89387 && (0 == variant_89387)) {
        loop_89387 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 2180)) ;
      }
      if (loop_89387) {
        variant_89387 -- ;
        const enumGalgasBool test_4 = var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)).reader_hasKey (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2182)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier ;
          GALGAS_methodKind joker_89689_0 ; // Joker input parameter
          GALGAS_bool joker_89766_0 ; // Joker input parameter
          GALGAS_string joker_89825_0 ; // Joker input parameter
          var_superType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)).method_searchKey (object->mAttribute_mAbstractCategoryReaderName, joker_89689_0, var_inheritedSignature, var_inheritedDeclarationLocation, joker_89766_0, var_inheritedReturnType, var_qualifier, joker_89825_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticAnalysis.galgas", 2194)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName = var_superType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195)) ;
          }
        }
        var_superType = var_superType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2198)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_location location_7 (object->mAttribute_mAbstractCategoryReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_7, GALGAS_string ("this getter is not declared by a super class")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2201)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2205)) ;
    cEnumerator_formalInputParameterListAST enumerator_90320 (object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_90320.hasCurrentObject ()) {
      var_formalParameterListForGeneration.addAssign_operation (enumerator_90320.current_mFormalSelector (HERE), GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_90320.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2209)), enumerator_90320.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2210)), enumerator_90320.current_mFormalArgumentName (HERE), enumerator_90320.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2207)) ;
      enumerator_90320.gotoNextObject () ;
    }
    {
    routine_checkReaderSignatures (var_formalParameterListForGeneration, var_returnType, object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticAnalysis.galgas", 2217)), var_inheritedSignature, var_inheritedReturnType, var_inheritedDeclarationLocation, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2214)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                        categoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_semanticAnalysis (defineCategoryMethod_overridingAbstractCategoryReaderAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@galgas3SyntaxComponentAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_string var_componentName = object->mAttribute_mSyntaxComponentName.mAttribute_string ;
  GALGAS_terminalMap var_terminalMap ;
  GALGAS_indexingListAST var_indexingListAST ;
  GALGAS_lstring var_indexingDirectory ;
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap, var_indexingListAST, var_indexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2234)) ;
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2241)) ;
  cEnumerator_indexingListAST enumerator_91620 (var_indexingListAST, kEnumeration_up) ;
  while (enumerator_91620.hasCurrentObject ()) {
    var_indexNameSet.addAssign_operation (enumerator_91620.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2243)) ;
    enumerator_91620.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing = var_indexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2245)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2245)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2247)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration ;
    {
    routine_semanticAnalysisOfSyntaxComponent (object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, var_componentName, var_lexiqueName, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap, var_indexNameSet, var_hasIndexing, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2249)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2262)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                        categoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineCategoryMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_string constinArgument_inProductDirectory,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2279)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2279)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2279))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2279)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2282)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2283)) ;
  GALGAS_lstring var_lexiqueComponentName = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2284)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2285)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2286)) ;
  GALGAS_uint var_addedNonTerminalCount = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_93421 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_93421.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef = var_addedNonTerminalCount ;
    GALGAS_string var_syntaxComponentName = enumerator_93421.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList ;
    GALGAS_syntaxRuleListAST var_ruleList ;
    GALGAS_bool var_hasTranslateFeature ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_93421.current_mValue (HERE), var_lexiqueName, var_nonterminalDeclarationList, var_ruleList, var_hasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2291)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2299)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2299)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (enumerator_93421.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2300)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2300)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2300))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2300)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2301)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2301)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("as '").add_operation (enumerator_93421.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2302)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2302)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2302))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2302)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName = var_lexiqueName ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName.mAttribute_string.objectCompare (var_lexiqueComponentName.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_93421.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2308)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2308)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2309)).add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2309)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2309)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2310))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2308)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis, var_nonterminalDeclarationList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2313)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis, var_ruleList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2318)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis, enumerator_93421.current_mValue (HERE), var_ruleList, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_addedNonTerminalCount, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2323)) ;
    }
    GALGAS_uint var_i = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount.isValid ()) {
      uint32_t variant_95218 = var_addedNonTerminalCount.uintValue () ;
      bool loop_95218 = true ;
      while (loop_95218) {
        loop_95218 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2332)))).isValid () ;
        if (loop_95218) {
          loop_95218 = GALGAS_bool (kIsStrictInf, var_i.objectCompare (var_addedNonTerminalCount.substract_operation (var_addedNonTerminalCountRef, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2332)))).boolValue () ;
        }
        if (loop_95218 && (0 == variant_95218)) {
          loop_95218 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 2332)) ;
        }
        if (loop_95218) {
          variant_95218 -- ;
          var_nonTerminalToAddList.addAssign_operation (var_syntaxComponentName, var_i  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2333)) ;
          var_i.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2334)) ;
        }
      }
    }
    enumerator_93421.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2338)) ;
  GALGAS_lstring var_inIndexingDirectory ;
  GALGAS_terminalMap joker_95633_0 ; // Joker input parameter
  GALGAS_indexingListAST joker_95669_0 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName, joker_95633_0, joker_95669_0, var_inIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2339)) ;
  GALGAS_bool var_hasIndexing = var_inIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2345)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2345)) ;
  const enumGalgasBool test_8 = var_hasIndexing.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2346)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2346)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_location location_9 (object->mAttribute_mGrammarComponentName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2347)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2347)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2347))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2347)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2348)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2348)).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_location location_11 (object->mAttribute_mHasIndexing.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_11, GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2349)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2349)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2349))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2349)) ;
    }
  }
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap ;
  GALGAS_uint var_startSymbolIndex ;
  var_nonTerminalMapForGrammarAnalysis.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex, var_startSymbolAltMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2355)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis.reader_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2360)), var_startSymbolAltMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2357)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2364)) ;
  cEnumerator_lstringlist enumerator_96875 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_96875.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_96981_0 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_96875.current_mValue (HERE), var_nonterminalIndex, joker_96981_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2367)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar.modifier_insertKey (enumerator_96875.current_mValue (HERE), var_nonterminalIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2368)) ;
    }
    enumerator_96875.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2371)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_97330 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_97330.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis.addAssign_operation (enumerator_97330.current_lkey (HERE), enumerator_97330.current_mNonTerminalIndex (HERE), enumerator_97330.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2373)) ;
    enumerator_97330.gotoNextObject () ;
  }
  GALGAS_stringset var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2378)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_97824 (var_nonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_97824.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_97873 (enumerator_97824.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_97873.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_97914 (enumerator_97873.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_97914.hasCurrentObject ()) {
        if (enumerator_97914.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).isValid ()) {
          switch (enumerator_97914.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn: case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn: {
            GALGAS_unifiedTypeMapProxy var_t = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_97914.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2384)) ;
            categoryMethod_addHeaderFileName (var_t, var_implementationFileHeader, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2385)) ;
            } break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut: case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut: {
            } break ;
          }
        }
        enumerator_97914.gotoNextObject () ;
      }
      enumerator_97873.gotoNextObject () ;
    }
    enumerator_97824.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_implementationFileHeader = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2392)) ;
  }
  var_implementationFileHeader.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2394)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2394))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2394)) ;
  var_implementationFileHeader.addAssign_operation (GALGAS_string ("lexique-").add_operation (var_lexiqueComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2395)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2395))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2395)) ;
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2397)).add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2397)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2397)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2397)) ;
  GALGAS_string var_grammarCppFile ;
  GALGAS_string var_grammarHTMLHelperContents ;
  {
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2410)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (var_implementationFileHeader, object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex, var_lexiqueComponentName.mAttribute_string, var_actuallyUsedTerminalSymbolMap, var_syntaxComponentListForGrammarAnalysis, var_unusedNonTerminalSymbolsForGrammar, var_HTMLFilePath, var_nonTerminalSymbolSortedListForGrammarAnalysis, var_hasIndexing, temp_13, var_grammarCppFile, var_grammarHTMLHelperContents, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2398)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2419)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2419)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName.mAttribute_string, var_nonTerminalMapForGrammarAnalysis, var_nonTerminalToAddList, var_hasIndexing, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile, var_grammarHTMLHelperContents  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2417)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2415)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                        categoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineCategoryMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@grammarForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  cEnumerator_lstringlist enumerator_100783 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_100783.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_100783.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2459)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2459)) ;
    enumerator_100783.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2462)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2461))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                             categoryMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineCategoryMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@grammarForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2478))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2478)) ;
  outArgument_outImplementation = object->mAttribute_mCppFileContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                    categoryMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineCategoryMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@grammarForGeneration appendSpecificFiles'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                                     GALGAS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2487)).add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2487)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2487)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool joker_101867_0 ; // Joker input parameter
    object->mAttribute_mHTLMHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_101867_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2489)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2491)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                           categoryMethod_grammarForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificFiles (defineCategoryMethod_grammarForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@lexiqueComponentAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2503)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2506)) ;
  }
  cEnumerator_externRoutineListAST enumerator_102675 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_102675.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2509)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_102815 (enumerator_102675.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_102815.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_102815.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_102815.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_102815.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2513))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2513)) ;
      enumerator_102815.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.modifier_insertKey (enumerator_102675.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_102675.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2515)) ;
    }
    enumerator_102675.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) ;
  }
  cEnumerator_externFunctionListAST enumerator_103435 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_103435.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2522)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_103578 (enumerator_103435.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_103578.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_103578.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2525)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_103578.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2526))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2526)) ;
      enumerator_103578.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_103435.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2529)) ;
    {
    var_lexicalFunctionMap.modifier_insertKey (enumerator_103435.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2530)) ;
    }
    enumerator_103435.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2545)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2534)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2535)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2536)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2537)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2538)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2539)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2540)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2541)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2542)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2543)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2544)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2545)) ;
  GALGAS_stringset var_externUnicodeTestFunctions = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap, var_lexicalFunctionMap, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2552)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2553)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2554)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2555)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2556)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2557)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2558)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2559)), var_externUnicodeTestFunctions  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2548)) ;
  GALGAS_uint var_styleIndex = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_105057 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_105057.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.modifier_insertKey (enumerator_105057.current_mName (HERE), enumerator_105057.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2565)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2566)) ;
    enumerator_105057.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2569)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_105458 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_105458.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_105458.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2577)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2577)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_105597_0 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2578)).method_searchKey (enumerator_105458.current_mStyle (HERE), joker_105597_0, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2580)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_105721 (enumerator_105458.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_105721.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_105721.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2583)) ;
      var_argumentTypeList.addAssign_operation (enumerator_105721.current_mFormalSelector (HERE), enumerator_105721.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2584)) ;
      enumerator_105721.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_105458.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2586)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_106141 (enumerator_105458.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_106141.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_106141.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2590)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_4 (enumerator_106141.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2594)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_106141.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2596)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_106141.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2597)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_106141.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_8, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2599)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_106141.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_105458.current_mName (HERE), var_argumentTypeList, enumerator_105458.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2607)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2604)) ;
    enumerator_105458.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_106927 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_106927.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_106927.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2614)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2614)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_107066_0 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2615)).method_searchKey (enumerator_106927.current_mStyle (HERE), joker_107066_0, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2615)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2617)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_107190 (enumerator_106927.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_107190.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_107190.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2620)) ;
      var_argumentTypeList.addAssign_operation (enumerator_107190.current_mFormalSelector (HERE), enumerator_107190.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2621)) ;
      enumerator_107190.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2623)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2624)) ;
    cEnumerator_lexicalListEntryListAST enumerator_107588 (enumerator_106927.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_107588.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_106927.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2626)).reader_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_107588.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2626)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2626)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_107828 (enumerator_107588.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_107828.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_107828.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2630)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_location location_12 (enumerator_107828.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2634)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_107828.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2636)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (enumerator_107828.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2637)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_107828.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2639)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_107828.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_107588.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2644)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_107588.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2651)) ;
      }
      {
      var_lexicalTokenListMap.modifier_insertKey (enumerator_107588.current_mEntrySpelling (HERE), enumerator_107588.current_mTerminalSpelling (HERE), enumerator_107588.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2652)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_107588.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2653)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2653)), enumerator_107588.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2653)), enumerator_107588.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2653))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2653)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_107588.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2654))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2654)) ;
      enumerator_107588.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_insertKey (enumerator_106927.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2656)) ;
    }
    enumerator_106927.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_109218 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_109218.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_insertKey (enumerator_109218.current_mMessageName (HERE), enumerator_109218.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2660)) ;
    }
    enumerator_109218.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_109406 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_109406.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_109406.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2664)) ;
    enumerator_109406.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_109599 (var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2667)), kEnumeration_up) ;
  while (enumerator_109599.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_109599.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2668)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_109599.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_18, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2669)) ;
    }
    enumerator_109599.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_109780 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_109780.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_109780.current_mStartString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2674))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2674)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_109780.current_mEndString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2675))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2675)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_110002 (enumerator_109780.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_110002.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_110002.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2678)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_110002.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_20, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2679)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_location location_22 (enumerator_110002.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_22, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2681)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_110002.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_109780.current_mStartString (HERE), enumerator_109780.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2686)) ;
    enumerator_109780.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2689)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_110534 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_110534.hasCurrentObject ()) {
      GALGAS_location location_24 (enumerator_110534.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_24, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2691)) ;
      enumerator_110534.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2694)) ;
  cEnumerator_indexingListAST enumerator_110720 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_110720.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet.reader_hasKey (enumerator_110720.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2696)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2696)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_110720.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_26, GALGAS_string ("the '").add_operation (enumerator_110720.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2697)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_110720.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2699))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2699)) ;
    enumerator_110720.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_111012 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_111012.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_111012.current_mMatchString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2703))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_111012.current_mReplacementString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2704))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2704)) ;
    enumerator_111012.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2708)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2712)), var_lexiqueAnalysisContext, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2711))) ;
    var_headerContents.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2717)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2716)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2716)) ;
    GALGAS_string var_cppContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2724)), var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2725)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2726)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2727)), var_lexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 2728)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2729)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName, object->mAttribute_mTemplateReplacementList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723))) ;
    GALGAS_string var_cocoaHeader = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2738))) ;
    var_cocoaHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)) ;
    GALGAS_string var_cocoaImplementation = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2748)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2748)), var_lexiqueClassName, var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2750)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2751)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2752)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2753)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2747))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2767)), var_lexiqueClassName, var_headerContents, var_cppContents, var_cocoaHeader, var_cocoaImplementation  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2765)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2763)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                        categoryMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineCategoryMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
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
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3041)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_nonterminalLabelMap var_labelMap ;
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)) ;
  GALGAS_formalParameterSignature var_signature ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3064)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3065)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_126920_0 ; // Joker input parameter
    GALGAS_location joker_126934_0 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_126920_0, var_signature, joker_126934_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3067)) ;
  }
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3070)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3074)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3074)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3074)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3071)) ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3082)) ;
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_127619 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_127619.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_127619.current_mType (HERE), enumerator_127619.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3089))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3089)) ;
    enumerator_127619.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3095)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3096)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3093))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3093)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@nonterminalInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3110)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3111)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3112)) ;
  cEnumerator_actualParameterListForGeneration enumerator_128569 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_128569.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_128569.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3114)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3123)) ;
    enumerator_128569.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3126)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3126)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3126)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3128)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3128))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3128)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3130)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3130)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3130)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3130)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3130)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3130))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3130)) ;
  cEnumerator_stringlist enumerator_129296 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_129296.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_129296.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3132))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3132)) ;
    enumerator_129296.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3135))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3135)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3137)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3137)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3139)) ;
  cEnumerator_stringlist enumerator_129831 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_129831.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_129831.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3147))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3147)) ;
    enumerator_129831.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                           categoryMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                  const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                  GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                             categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@inputParameterVariable analyzeInputParameter'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                         const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                         GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMapProxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_131306_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_131306_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3182)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType ;
  if (constinArgument_inRequiredLexicalType.isValid ()) {
    switch (constinArgument_inRequiredLexicalType.enumValue ()) {
    case GALGAS_lexicalTypeEnum::kNotBuilt:
      break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3195)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3195)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3195)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3195)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3195)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3195)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3196)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3196)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3196))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3194)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3198)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                             categoryMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineCategoryMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredVariable analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                 const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                 GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMapProxy var_expectedType ;
  if (constinArgument_inRequiredLexicalType.isValid ()) {
    switch (constinArgument_inRequiredLexicalType.enumValue ()) {
    case GALGAS_lexicalTypeEnum::kNotBuilt:
      break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3225)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3228)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3228)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3228)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3228)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3228)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3229)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3229)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3229))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3227)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3233)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3233)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3234)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3236)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3235)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                             categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredConstant analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                 const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                 GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMapProxy var_expectedType ;
  if (constinArgument_inRequiredLexicalType.isValid ()) {
    switch (constinArgument_inRequiredLexicalType.enumValue ()) {
    case GALGAS_lexicalTypeEnum::kNotBuilt:
      break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
      } break ;
    case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double: {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
      } break ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3262)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3265)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3265)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3265)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3265)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3265)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3266)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3266)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3266))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3264)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3270)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3270)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3271)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3274)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3273)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                             categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3300)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3301)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3311)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  }
  GALGAS_unifiedTypeMapProxy var_type ;
  {
  GALGAS_string joker_137622_0 ; // Joker input parameter
  GALGAS_string joker_137625_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_137622_0, joker_137625_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3318)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3317)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                      const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3329)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3330)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3332)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3338)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3339)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3339)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3339))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3337)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3349)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3350)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3352)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3352)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3353)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3354)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3358)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3358)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3358)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3358)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3358)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3358)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3359)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3359)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3359))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3357)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                               const GALGAS_string constinArgument_inAccessMethodName,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3380)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3380)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3400)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3400)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3401)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3401)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3401))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3401)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                        const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3411)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3411)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                          const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3422)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3422)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3423)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_lexicalSentValueList var_sentAttributeList ;
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3439)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3441)).objectCompare (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3441)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3444)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3447)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3443)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3443)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3443)).add_operation (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3443)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3443)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3443)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3443)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3444)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3444)).add_operation (object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 3446)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3446)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3445)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3446)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3446))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3442)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3450)) ;
  cEnumerator_actualInputParameterListAST enumerator_144092 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_144118 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_144092.hasCurrentObject () && enumerator_144118.hasCurrentObject ()) {
    callCategoryMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_144092.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_144118.current_mLexicalType (HERE), enumerator_144118.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3452)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_144118.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_144092.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_144118.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_144092.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_144118.current_mLexicalFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3460)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3460)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3460)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3460))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3460)) ;
      GALGAS_location location_10 (enumerator_144118.current_mLexicalFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3461)) ;
    }
    enumerator_144092.gotoNextObject () ;
    enumerator_144118.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_144656 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_144656.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.reader_hasKey (enumerator_144656.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3466)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3466)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3466)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_144765 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_144765.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_144765.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3469))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3469)) ;
        enumerator_144765.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_144656.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_144656.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3471)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3471)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3471)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3471))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3471)) ;
    }
    enumerator_144656.gotoNextObject () ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3475)) ;
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3480)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3486))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3486)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                                categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_analyzeSyntaxInstruction (defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@terminalCheckInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  cEnumerator_terminalCheckAssignementList enumerator_146056 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_146056.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_146056.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_146056.current_mTypeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3507)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3507)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3507))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3507)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_146056.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)).add_operation (enumerator_146056.current_mSourceLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3511)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3511))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3510)) ;
    enumerator_146056.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_146441 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_146441.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)).add_operation (enumerator_146441.current_mValue (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3516)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3516)) ;
    enumerator_146441.gotoNextObject () ;
  }
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3519)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3525)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3532)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3532)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3533)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3533)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3533)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3534)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3534)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3534)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3534)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3535)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3535)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3535))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3533)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                           categoryMethod_terminalCheckInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_generateInstruction (defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@repeatInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3589)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3591)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3594)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3609)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_149846 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_149846.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_149846.current_mSyntaxInstructionList (HERE), enumerator_149846.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3612)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_149846.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3626)) ;
    enumerator_149846.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3629)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3631))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3631)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                                categoryMethod_repeatInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_analyzeSyntaxInstruction (defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@repeatInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_string var_repeatFlagCppName = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3649)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3649)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3649)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3650)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3650))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3650)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3651)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3651))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3651)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3652)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3660)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3661)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3661)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3661)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_151792 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_151741 ((uint32_t) 0) ;
  while (enumerator_151792.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_151741.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3663)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3663)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3663)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3663))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3663)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_151792.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3664)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3672)) ;
    enumerator_151792.gotoNextObject () ;
    index_151741.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3662)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3674)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3675)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3675))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3675)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3676)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3677)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3678)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3679)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                           categoryMethod_repeatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_generateInstruction (defineCategoryMethod_repeatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@selectInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3696)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3698)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3700)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_153165 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_153165.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_153165.current_mSyntaxInstructionList (HERE), enumerator_153165.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3703)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_153165.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3717)) ;
    enumerator_153165.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3720)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3721))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3721)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                                categoryMethod_selectInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_analyzeSyntaxInstruction (defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selectInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3737)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3737)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3738)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3738)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3738)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_154612 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_154561 ((uint32_t) 0) ;
  while (enumerator_154612.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_154561.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3740)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3740)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3740)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3740))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3740)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_154612.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3741)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3749)) ;
    enumerator_154612.gotoNextObject () ;
    index_154561.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3739)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3751)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3752)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3753)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                           categoryMethod_selectInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_generateInstruction (defineCategoryMethod_selectInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3770)) ;
  GALGAS_uint var_referenceSelectMethodCount = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_155795 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_155795.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3774)) ;
    cEnumerator_syntaxInstructionList enumerator_155964 (enumerator_155795.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_155964.hasCurrentObject ()) {
      callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_155964.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3776)) ;
      enumerator_155964.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_155795.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3789)) ;
    enumerator_155795.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_156639_0 ; // Joker input parameter
  var_tempListOfBranches.modifier_popFirst (var_instructionList, joker_156639_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3794)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3795)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_156817 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_156817.hasCurrentObject () && bool_0) {
    while (enumerator_156817.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_156817.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3800)), enumerator_156817.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3798)) ;
      enumerator_156817.gotoNextObject () ;
      if (enumerator_156817.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3805))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3805)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                                categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseRewindInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3819)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3819)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3820)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3820)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3820)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3821)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_157964 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_157964.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_157964.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3824)) ;
    }
    if (enumerator_157964.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3833)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3833)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3833)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3833))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3833)) ;
    }
    enumerator_157964.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3835)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                           categoryMethod_parseRewindInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_generateInstruction (defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3854)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3853)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3859)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3861)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3861)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3861)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3861)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3862)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3862)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3862))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3860)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3867)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3866)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3872)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3874)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3874)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3874)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3874)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3875)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3875)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3875))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3873)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3879)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3882)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3897)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3899))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3899)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                                categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseLoopInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3914)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3914)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3918)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3920)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3920))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3920)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3921)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3922)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3922)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3922)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3923)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3923)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3923)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3923))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3923)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3925)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3925)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3925)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3926)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3926))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3926)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3927)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3927))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3927)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3928)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3929))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3929)) ;
  GALGAS_string var_whileVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3931)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3932)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3932))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3932)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3933)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3934))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3934)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3935))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3935)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3936)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3936)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3936))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3936)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3937)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3945)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3945))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3945)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3946)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3947)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3948)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3949)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3950)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3951)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//--- 'parse'\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3953)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3956)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3954)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3962)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3962))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3962)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3963)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                           categoryMethod_parseLoopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_generateInstruction (defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  GALGAS_semanticExpressionForGeneration var_when_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3982)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3981)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3988)) ;
  }
  GALGAS_uint var_localSelectMethodCount = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount, var_when_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3992)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4008)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4023)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4026)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4027)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4025)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4032))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4032)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                                categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseWhenInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4050)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4051)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4051))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4051)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4052)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4060)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4061)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4069)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                           categoryMethod_parseWhenInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_generateInstruction (defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@syntaxSendInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 4085)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4086)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 4090)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4089)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 4096)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4097)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4100))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                                categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_analyzeSyntaxInstruction (defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@syntaxSendInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstructionForGeneration * object = (const cPtr_syntaxSendInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4113)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4115)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4115)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4116)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4116)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4116)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4117))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 4116)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration.mSlotID,
                                           categoryMethod_syntaxSendInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstructionForGeneration_generateInstruction (defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@trueExpressionForGeneration isTrueExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_trueExpressionForGeneration_isTrueExpression (void) {
  enterCategoryReader_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                        categoryReader_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_trueExpressionForGeneration_isTrueExpression (defineCategoryReader_trueExpressionForGeneration_isTrueExpression, NULL) ;

