#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodForGeneration.h"
#include "class-abstractCategoryModifierForGeneration.h"
#include "class-abstractCategoryReaderForGeneration.h"
#include "class-abstractGrammarInstructionSyntaxDirectedTranslationResult.h"
#include "class-abstractInputParameter.h"
#include "class-actualParameterForGeneration.h"
#include "class-categoryMethodForGeneration.h"
#include "class-categoryModifierForGeneration.h"
#include "class-categoryReaderForGeneration.h"
#include "class-classTypeForGeneration.h"
#include "class-enumTypeForGeneration.h"
#include "class-filewrapperDeclarationForGeneration.h"
#include "class-functionImplementationForGeneration.h"
#include "class-grammarInstructionSyntaxDirectedTranslationDropResult.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultInVar.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultNone.h"
#include "class-graphDeclarationForGeneration.h"
#include "class-inputParameterAnonymousVariable.h"
#include "class-inputParameterDeclaredConstant.h"
#include "class-inputParameterDeclaredVariable.h"
#include "class-inputParameterVariable.h"
#include "class-listTypeForGeneration.h"
#include "class-localVariableDeclarationForGeneration.h"
#include "class-mapProxyTypeForGeneration.h"
#include "class-mapTypeForGeneration.h"
#include "class-nonterminalCallInstruction.h"
#include "class-nonterminalInstructionForGeneration.h"
#include "class-onceFunctionDeclarationForGeneration.h"
#include "class-overrideCategoryReaderForGeneration.h"
#include "class-overridingCategoryMethodForGeneration.h"
#include "class-overridingCategoryModifierForGeneration.h"
#include "class-parseLoopInstruction.h"
#include "class-parseLoopInstructionForGeneration.h"
#include "class-parseRewindInstruction.h"
#include "class-parseRewindInstructionForGeneration.h"
#include "class-parseWhenInstruction.h"
#include "class-parseWhenInstructionForGeneration.h"
#include "class-primitiveTypeForGeneration.h"
#include "class-repeatInstruction.h"
#include "class-repeatInstructionForGeneration.h"
#include "class-routineImplementationForGeneration.h"
#include "class-selectInstruction.h"
#include "class-selectInstructionForGeneration.h"
#include "class-semanticExpressionAST.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-semanticInstructionAST.h"
#include "class-semanticInstructionForGeneration.h"
#include "class-sortedListTypeForGeneration.h"
#include "class-structTypeForGeneration.h"
#include "class-syntaxDeclarationForGeneration.h"
#include "class-syntaxInstructionAST.h"
#include "class-syntaxInstructionForGeneration.h"
#include "class-syntaxSendInstruction.h"
#include "class-syntaxSendInstructionForGeneration.h"
#include "class-terminalCheckInstruction.h"
#include "class-terminalCheckInstructionForGeneration.h"
#include "class-terminalInstructionForGrammarAnalysis.h"
#include "class-uniqueMapTypeForGeneration.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-lexicalTypeEnum.h"
#include "enum-predefinedTypeKindEnum.h"
#include "filewrapper-predefinedTypeGenerationTemplate.h"
#include "filewrapper-semanticComponentGenerationTemplate.h"
#include "filewrapper-syntaxFileGenerationTemplate.h"
#include "filewrapper-typeGenerationTemplate.h"
#include "func-compareSyntaxSignature.h"
#include "func-compilerCppName.h"
#include "func-syntaxDirectedTranslationResultVarName.h"
#include "func-syntaxSignatureOfInstructionList.h"
#include "getter-location-commaSourceFile.h"
#include "getter-semanticDeclarationForGeneration-appendPrimitiveTypeDeclaration.h"
#include "getter-semanticDeclarationForGeneration-hasCppHeaderFile.h"
#include "getter-semanticDeclarationForGeneration-headerKind.h"
#include "getter-semanticDeclarationForGeneration-implementationCppFileName.h"
#include "getter-semanticDeclarationForGeneration-isPredefined.h"
#include "getter-semanticInstructionForGeneration-compareSyntaxInstruction.h"
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
#include "list-actualParameterListAST.h"
#include "list-actualParameterListForGeneration.h"
#include "list-enumConstantList.h"
#include "list-enumerationDescriptorList.h"
#include "list-filewrapperTemplateListForGeneration.h"
#include "list-formalInputParameterListForGeneration.h"
#include "list-formalParameterListForGeneration.h"
#include "list-formalParameterSignature.h"
#include "list-functionSignature.h"
#include "list-graphInsertModifierList.h"
#include "list-insertMethodListAST.h"
#include "list-lexicalSentValueList.h"
#include "list-listOfSemanticInstructionListForGeneration.h"
#include "list-listOfSyntaxInstructionList.h"
#include "list-mapOverrideList.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-ruleDeclarationList.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-sortDescriptorListForGeneration.h"
#include "list-syntaxInstructionList.h"
#include "list-syntaxInstructionListForGrammarAnalysis.h"
#include "list-templateInstructionListForGeneration.h"
#include "list-terminalCheckAssignementList.h"
#include "list-typedAttributeList.h"
#include "list-unifiedTypeMapProxyAndLocalVariableList.h"
#include "map-classMethodMap.h"
#include "map-constructorMap.h"
#include "map-instanceMethodMap.h"
#include "map-mapAutomatonActionMap.h"
#include "map-mapAutomatonStateMap.h"
#include "map-modifierMap.h"
#include "map-nonTerminalSymbolMapForGrammarAnalysis.h"
#include "map-nonterminalLabelMap.h"
#include "map-nonterminalMap.h"
#include "map-readerMap.h"
#include "map-terminalMap.h"
#include "map-terminalSymbolsMapForGrammarAnalysis.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperFileMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-analyzeSDT.h"
#include "method-abstractGrammarInstructionSyntaxDirectedTranslationResult-generateCode.h"
#include "method-abstractInputParameter-analyzeInputParameter.h"
#include "method-actualParameterForGeneration-generateActualParameter.h"
#include "method-semanticDeclarationForGeneration-appendDeclaration1.h"
#include "method-semanticDeclarationForGeneration-appendDeclaration2.h"
#include "method-semanticDeclarationForGeneration-appendSpecificImplementation.h"
#include "method-semanticExpressionAST-analyzeSemanticExpression.h"
#include "method-semanticExpressionForGeneration-generateExpression.h"
#include "method-semanticInstructionAST-analyzeSemanticInstruction.h"
#include "method-semanticInstructionForGeneration-appendSyntaxSignature.h"
#include "method-semanticInstructionForGeneration-generateInstruction.h"
#include "method-syntaxInstructionAST-analyzeSyntaxInstruction.h"
#include "method-syntaxInstructionAST-transformInstruction.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName1.h"
#include "option-galgas_cli_options.h"
#include "proc-analyzeRoutineArguments.h"
#include "proc-analyzeSyntaxInstructionList.h"
#include "proc-generateCategoryMethod.h"
#include "proc-generateCategoryModifier.h"
#include "proc-generateCategoryReader.h"
#include "proc-generateFunction.h"
#include "proc-generateInstructionList.h"
#include "proc-generateProcedure.h"
#include "proc-generateWrapperContents.h"
#include "proc-recursivlyEnumerateRegularFile.h"
#include "proc-templateCodeGenerationForListInstruction.h"
#include "sortedlist-keySortedList.h"
#include "sortedlist-mapStateSortedList.h"
#include "struct-analysisContext.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
#include "uniquemap-unifiedTypeMap.h"
#include "uniquemap-variableMap.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                    categoryMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_48214 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_48214.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_48214.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
    enumerator_48214.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1292)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1294)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1299)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1300)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1291)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1316)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1317)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1315))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@uniqueMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("semanticGeneration.galgas", 1328)) ;
  cEnumerator_mapAutomatonStateMap enumerator_49810 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_49810.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_49810.current_lkey (HERE).mAttribute_string, enumerator_49810.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
    enumerator_49810.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                                    categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1354)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1355)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1353))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1361)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1363)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1365)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                             categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@sortedListTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_51489 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_51489.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_51489.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)) ;
    enumerator_51489.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1386)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                    categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_52193 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1400)).isValidAndTrue () ;
  if (enumerator_52193.hasCurrentObject () && bool_0) {
    while (enumerator_52193.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_52193.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1401)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_52193.gotoNextObject () ;
      if (enumerator_52193.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1400)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1405)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1420)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_53259 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1431)).isValidAndTrue () ;
  if (enumerator_53259.hasCurrentObject () && bool_0) {
    while (enumerator_53259.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_53259.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1432)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_53259.gotoNextObject () ;
      if (enumerator_53259.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1431)).isValidAndTrue () ;
      }
    }
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                    categoryMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1455)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1456)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1463)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1464)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1465)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1466)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1470)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1458)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                             categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@mapProxyTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                    categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_55610 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_55610.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_55610.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1498)) ;
    enumerator_55610.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1502)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1503)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1505)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1501))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1510)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1511)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1512)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1514)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1516)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1517)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1518)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1520)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                             categoryMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@structTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1529)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1531)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1532)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1534)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1530))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                    categoryMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1546)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1547)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1551)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1552)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1553)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1554)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1555)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1556)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1557)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1558)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1559)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1560)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1561)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1563)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1550)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1550)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                             categoryMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@listTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_58158 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_58158.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_58158.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1573)) ;
    enumerator_58158.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1575)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1576)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1578)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1579)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1577))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                    categoryMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@graphDeclarationForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1592)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1591))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1596)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1598)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1599)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1602)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1604)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1606)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1608)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                             categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@graphDeclarationForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1617)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1618)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1619)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1622)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1620))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                    categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1635)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1635)).boolEnum () ;
  if (kBoolTrue == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1636)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1642)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1642)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1640)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1641)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1645)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1639))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1648)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1649)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1650)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1653)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1654)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1655)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1656)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1657)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1658)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1659)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1647)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1647)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_bool constinArgument_inGenerateForGalgas_33_,
                                                                         const GALGAS_string constinArgument_inOutputDirectory,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_61595 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_61595.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_61595.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1671)) ;
    enumerator_61595.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1678)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678)) ;
    }
    GALGAS_string var_part_31_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1677)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1686)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)) ;
    }
    GALGAS_string var_part_32_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683))) ;
    GALGAS_string var_headerFileName = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691)) ;
    {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = constinArgument_inGenerateForGalgas_33_.boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string ("/../user-headers") ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693)), var_headerFileName, GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), var_part_31_, GALGAS_string ("\n"
      "\n"), var_part_32_, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1692)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1706)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1706)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1704)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1705)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1703))) ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1714)).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_10) {
      temp_9 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1714)) ;
    }
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1713)), temp_9, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1727)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1731)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1731)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1729)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.reader_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1734)).substract_operation (object->mAttribute_mTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1734)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1736)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1728))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                    categoryMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@routineImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_string & outArgument_outImplementation,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mhasHeader.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1748))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1748)) ;
  }
  GALGAS_string var_code ;
  {
  routine_generateProcedure (GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1751)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mRoutineInstructionList, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1750)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, object->mAttribute_mRoutineName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1762))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                    categoryMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1773))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1773)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1775)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1775)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1774)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1789)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1785))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                    categoryMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1798))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1798)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1800)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1800)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1802)), object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (true), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1799)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1813)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1814)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1810))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                    categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryMethodForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1828)), object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1827))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryMethodForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1837)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                  categoryReader_abstractCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryMethodForGeneration_headerKind (defineCategoryReader_abstractCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryMethodForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1845)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1845)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1845)).add_operation (object->mAttribute_mAbstractCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1845))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1845)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846)) ;
  cEnumerator_formalParameterListForGeneration enumerator_67723 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_67723.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_67723.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1848)) ;
    enumerator_67723.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1850))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryMethodForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1860)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                  categoryReader_categoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryMethodForGeneration_headerKind (defineCategoryReader_categoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryMethodForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1869))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1876)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1875))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                             categoryMethod_categoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryMethodForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryMethodFormalParameterList = object->mAttribute_mCategoryMethodFormalParameterList ;
    {
    var_categoryMethodFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 1891)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticGeneration.galgas", 1892)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1894))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1894)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1890)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mCategoryMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1900)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1900)), ioArgument_ioInclusionSet, var_categoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1899)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1912)), object->mAttribute_mCategoryMethodName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1917)) ;
    cEnumerator_formalParameterListForGeneration enumerator_70279 (object->mAttribute_mCategoryMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_70279.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_70279.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1919)) ;
      enumerator_70279.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1923)).isValid ()) {
      uint32_t variant_70439 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1923)).uintValue () ;
      bool loop_70439 = true ;
      while (loop_70439) {
        loop_70439 = var_searching.isValid () ;
        if (loop_70439) {
          loop_70439 = var_searching.boolValue () ;
        }
        if (loop_70439 && (0 == variant_70439)) {
          loop_70439 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1923)) ;
        }
        if (loop_70439) {
          variant_70439 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1924)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1924)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)).reader_hasKey (object->mAttribute_mCategoryMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1926)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)) ;
    GALGAS_string var_methodImplementation ;
    {
    routine_generateCategoryMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1935)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1945)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1944))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                                    categoryMethod_categoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@overridingCategoryMethodForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1956)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                  categoryReader_overridingCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryMethodForGeneration_headerKind (defineCategoryReader_overridingCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@overridingCategoryMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodForGeneration * object = (const cPtr_overridingCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1964)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1974)), object->mAttribute_mCategoryMethodName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@abstractCategoryModifierForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1987)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                  categoryReader_abstractCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryModifierForGeneration_headerKind (defineCategoryReader_abstractCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@abstractCategoryModifierForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1996)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1995))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@abstractCategoryModifierForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007)).add_operation (object->mAttribute_mAbstractCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2008)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2010)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2009))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@categoryModifierForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2019)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                  categoryReader_categoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryModifierForGeneration_headerKind (defineCategoryReader_categoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@categoryModifierForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2029)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2028))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2035)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2034))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                             categoryMethod_categoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@categoryModifierForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryModifierFormalParameterList = object->mAttribute_mCategoryModifierFormalParameterList ;
    {
    var_categoryModifierFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2050)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticGeneration.galgas", 2051)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2053))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2053)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2049)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mCategoryModifierName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2059)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2059)), ioArgument_ioInclusionSet, var_categoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2058)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)), object->mAttribute_mCategoryModifierName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2070))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2078)).isValid ()) {
      uint32_t variant_75794 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2078)).uintValue () ;
      bool loop_75794 = true ;
      while (loop_75794) {
        loop_75794 = var_searching.isValid () ;
        if (loop_75794) {
          loop_75794 = var_searching.boolValue () ;
        }
        if (loop_75794 && (0 == variant_75794)) {
          loop_75794 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2078)) ;
        }
        if (loop_75794) {
          variant_75794 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2079)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2079)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2079)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2080)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2080)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2080)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2081)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2089)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2089)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2089)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2089))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2089)) ;
    categoryMethod_addHeaderFileName (var_baseType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2090)) ;
    GALGAS_string var_modifierImplementation ;
    {
    routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2092)), GALGAS_string::makeEmptyString (), object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2091)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2101)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, var_modifierImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2100))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                                    categoryMethod_categoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@overridingCategoryModifierForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2112)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                  categoryReader_overridingCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryModifierForGeneration_headerKind (defineCategoryReader_overridingCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@overridingCategoryModifierForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierForGeneration * object = (const cPtr_overridingCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2121)), object->mAttribute_mBaseTypeName, object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2120)) ;
  }
  GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2131)).isValid ()) {
    uint32_t variant_77514 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2131)).uintValue () ;
    bool loop_77514 = true ;
    while (loop_77514) {
      loop_77514 = var_searching.isValid () ;
      if (loop_77514) {
        loop_77514 = var_searching.boolValue () ;
      }
      if (loop_77514 && (0 == variant_77514)) {
        loop_77514 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2131)) ;
      }
      if (loop_77514) {
        variant_77514 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2132)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2132)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2132)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2133)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2133)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2133)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2134)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2143)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2145)), object->mAttribute_mCategoryModifierName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2144))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2158)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                  categoryReader_abstractCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryReaderForGeneration_headerKind (defineCategoryReader_abstractCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryReaderForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2167)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2166))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2179)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2179)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2179)).add_operation (object->mAttribute_mAbstractCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2179))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2179)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2180)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2181)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_79348 (object->mAttribute_mAbstractCategoryReaderFormalParameterList, kEnumeration_up) ;
  while (enumerator_79348.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_79348.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2183)) ;
    enumerator_79348.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2186)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2185))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryReaderForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2196)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                  categoryReader_categoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryReaderForGeneration_headerKind (defineCategoryReader_categoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryReaderForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2206)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2209)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2205))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2213)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2212))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                             categoryMethod_categoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryReaderForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalInputParameterListForGeneration var_categoryReaderFormalParameterList = object->mAttribute_mCategoryReaderFormalParameterList ;
    {
    var_categoryReaderFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2229)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2232))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2232)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2228)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2236)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2236)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2236)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2236))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2236)) ;
    GALGAS_string var_code ;
    {
    routine_generateFunction (GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mCategoryReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2238)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2238)), ioArgument_ioInclusionSet, var_categoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2249)), object->mAttribute_mCategoryReaderName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2248))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2254)) ;
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2255)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_81890 (object->mAttribute_mCategoryReaderFormalParameterList, kEnumeration_up) ;
    while (enumerator_81890.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_81890.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2257)) ;
      enumerator_81890.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2261)).isValid ()) {
      uint32_t variant_82050 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2261)).uintValue () ;
      bool loop_82050 = true ;
      while (loop_82050) {
        loop_82050 = var_searching.isValid () ;
        if (loop_82050) {
          loop_82050 = var_searching.boolValue () ;
        }
        if (loop_82050 && (0 == variant_82050)) {
          loop_82050 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2261)) ;
        }
        if (loop_82050) {
          variant_82050 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2262)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2262)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2262)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2263)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2263)).reader_hasKey (object->mAttribute_mCategoryReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2263)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2264)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2272)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2272)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2272)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2272))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2272)) ;
    GALGAS_string var_categoryReaderCode ;
    {
    routine_generateCategoryReader (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2281)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2273)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2286)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2285))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                                    categoryMethod_categoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@overrideCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overrideCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2298)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overrideCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                  categoryReader_overrideCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overrideCategoryReaderForGeneration_headerKind (defineCategoryReader_overrideCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@overrideCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideCategoryReaderForGeneration * object = (const cPtr_overrideCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideCategoryReaderForGeneration) ;
  GALGAS_string var_categoryReaderCode ;
  {
  routine_generateCategoryReader (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mOverridingCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2314)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2306)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2319)), object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2318))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@filewrapperDeclarationForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2333)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_filewrapperDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                  categoryReader_filewrapperDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_filewrapperDeclarationForGeneration_headerKind (defineCategoryReader_filewrapperDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@filewrapperDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2371)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2372)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2373)) ;
  GALGAS_stringlist var_directoryIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2374)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2383))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_86412 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_86412.hasCurrentObject ()) {
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_86412.current_mFilewrapperTemplateName (HERE), enumerator_86412.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)) ;
    enumerator_86412.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                             categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@filewrapperDeclarationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2491))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2491)) ;
  GALGAS_string var_filewrapperImplementation = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2493)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2501))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_91742 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_91742.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2510)) ;
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2511))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2511)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_92045 (enumerator_91742.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_92045.hasCurrentObject ()) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_92045.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2513)) ;
      enumerator_92045.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_91742.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList, ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, var_useColumnMarker, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2516)) ;
    }
    outArgument_outImplementation.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_91742.current_mFilewrapperTemplateName (HERE), enumerator_91742.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet, var_useColumnMarker, var_generatedCodeForInstructionList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2525)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2525)) ;
    enumerator_91742.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                    categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_predefinedTypeKindEnum::kNotBuilt:
      break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 287))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 289))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 291))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 293))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 295))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 297))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 299))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 301))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 303))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 305))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 307))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 309))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 311))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 313))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 315))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 317))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 319))) ;
      } break ;
    }
  }
  result_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 322)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 323)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 324)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 325)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 326)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 327)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 328)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 329)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 330)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 331)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 332)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("predefinedTypes.galgas", 333)) COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)))  COMMA_SOURCE_FILE ("predefinedTypes.galgas", 321)) ;
//---
  return result_outHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterCategoryReader_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                      categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 53)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 54))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                             categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        const GALGAS_string /* constinArgument_inPosfix */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 66)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 68)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 69))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                             categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@repeatInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 77)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4050 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4050.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4050.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4050.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4050.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                             categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selectInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 99)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4884 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4884.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4884.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)), enumerator_4884.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 101)) ;
    enumerator_4884.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                             categoryMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_location joker_5621_0 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_5621_0, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 118)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                             categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                             categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                             categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@terminalCheckInstructionForGeneration compareSyntaxInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                  const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_8908_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)).objectCompare (cast_8908_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 191)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_8908_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 193)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 193)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9207_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_9207_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 197)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 197)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 201)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 204)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 205)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@nonterminalInstructionForGeneration compareSyntaxInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_9881_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_9881_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 217)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_9881_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 219)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 219)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10179_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10179_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 223)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 223)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 227)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 231)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@repeatInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_10854_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_10854_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 243)), cast_10854_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 243)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)).objectCompare (cast_10854_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 244)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10854_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 245)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 247)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (cast_10854_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11536 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11599 (cast_10854_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 252)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_11536.hasCurrentObject () && enumerator_11599.hasCurrentObject () && bool_1) {
        while (enumerator_11536.hasCurrentObject () && enumerator_11599.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_11536.current_mInstructionList (HERE), enumerator_11599.current_mInstructionList (HERE), enumerator_11599.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 253)) ;
          enumerator_11536.gotoNextObject () ;
          enumerator_11599.gotoNextObject () ;
          if (enumerator_11536.hasCurrentObject () && enumerator_11599.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11783_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11783_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 256)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 256)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 260)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 263)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 264)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_repeatInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@selectInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_selectInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_12425_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)).objectCompare (cast_12425_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 277)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 277)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12425_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 278)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 280)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (cast_12425_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12993 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13056 (cast_12425_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 285)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12993.hasCurrentObject () && enumerator_13056.hasCurrentObject () && bool_1) {
        while (enumerator_12993.hasCurrentObject () && enumerator_13056.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12993.current_mInstructionList (HERE), enumerator_13056.current_mInstructionList (HERE), enumerator_13056.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 286)) ;
          enumerator_12993.gotoNextObject () ;
          enumerator_13056.gotoNextObject () ;
          if (enumerator_12993.hasCurrentObject () && enumerator_13056.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13240_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13240_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 289)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 289)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 293)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 296)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 297)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                categoryReader_selectInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selectInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@syntaxDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string::makeEmptyString () ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                 categoryReader_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_implementationCppFileName (defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@syntaxDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                        categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_hasCppHeaderFile (defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@syntaxDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 96)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                  categoryReader_syntaxDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_headerKind (defineCategoryReader_syntaxDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@syntaxDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                    categoryReader_syntaxDeclarationForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_isPredefined (defineCategoryReader_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@syntaxDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  GALGAS_uintlist var_selectMethodList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 145)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 147)).isValid ()) {
    uint32_t variant_5905 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 147)).uintValue () ;
    bool loop_5905 = true ;
    while (loop_5905) {
      loop_5905 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_5905) {
        loop_5905 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_5905 && (0 == variant_5905)) {
        loop_5905 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 147)) ;
      }
      if (loop_5905) {
        variant_5905 -- ;
        var_selectMethodList.addAssign_operation (var_idx  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 149)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 150)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mComponentName, object->mAttribute_mLexiqueName, object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 152))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                             categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

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
  callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 268)) ;
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
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 289)) ;
  GALGAS_formalParameterSignature var_signature ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 291)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 292)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_12039_0 ; // Joker input parameter
    GALGAS_location joker_12053_0 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_12039_0, var_signature, joker_12053_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 294)) ;
  }
  GALGAS_unifiedTypeMapProxyAndLocalVariableList var_localVariableDeclarationList = GALGAS_unifiedTypeMapProxyAndLocalVariableList::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 297)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 301)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 301)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, var_localVariableDeclarationList, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 298)) ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 309)) ;
  cEnumerator_unifiedTypeMapProxyAndLocalVariableList enumerator_12738 (var_localVariableDeclarationList, kEnumeration_up) ;
  while (enumerator_12738.hasCurrentObject ()) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (enumerator_12738.current_mType (HERE), enumerator_12738.current_mLocalVariableName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 316))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 316)) ;
    enumerator_12738.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 322)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 323)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 320))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 320)) ;
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
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 337)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 338)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 339)) ;
  cEnumerator_actualParameterListForGeneration enumerator_13688 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_13688.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_13688.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 341)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 350)) ;
    enumerator_13688.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 353)).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 353)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 355)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 355))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 357)) ;
  cEnumerator_stringlist enumerator_14415 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_14415.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_14415.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 359))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 359)) ;
    enumerator_14415.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 362))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 362)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 364)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 364)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 365)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 365))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 365)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 366)) ;
  cEnumerator_stringlist enumerator_14950 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_14950.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_14950.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 374))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 374)) ;
    enumerator_14950.gotoNextObject () ;
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
  GALGAS_string joker_16425_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_16425_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 409)) ;
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
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 422)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 423)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 423))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 421)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 425)) ;
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
    GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 452)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 455)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 456)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 456))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 454)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 460)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 461)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 463)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 462)) ;
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
    GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 489)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 492)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 493)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 493))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 491)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 497)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 498)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 501)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 500)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 527)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 528)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 538)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 539)) ;
  }
  GALGAS_unifiedTypeMapProxy var_type ;
  {
  GALGAS_string joker_22741_0 ; // Joker input parameter
  GALGAS_string joker_22744_0 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_22741_0, joker_22744_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 541)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 545)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 546)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 546))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 544)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 556)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 557)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 559)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 560)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 561)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 565)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 566)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 566))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 564)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 576)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 577)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 579)) ;
  GALGAS_unifiedTypeMapProxy var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 580)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 581)) ;
  }
  GALGAS_unifiedTypeMapProxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 585)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 586)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 586))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 584)) ;
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
    ioArgument_ioGeneratedCode.dotAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 606)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 606)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 606)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 606))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 606)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 607)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 607)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 627)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 628)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 628)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 628))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 628)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 638)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 639)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 639)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 639)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 639))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 639)) ;
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
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 649)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 650)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 650)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 650)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 650))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 650)) ;
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
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 666)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 668)).objectCompare (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 668)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 671)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 674)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)).add_operation (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 670)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 671)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 671)).add_operation (object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 673)).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 672)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 673)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 673))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 669)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 677)) ;
  cEnumerator_actualInputParameterListAST enumerator_29211 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_29237 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_29211.hasCurrentObject () && enumerator_29237.hasCurrentObject ()) {
    callCategoryMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_29211.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_29237.current_mLexicalType (HERE), enumerator_29237.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 679)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_29237.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_29211.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_29237.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_29211.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_29237.current_mLexicalFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 687)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 687)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 687))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 687)) ;
      GALGAS_location location_10 (enumerator_29237.current_mLexicalFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 688)) ;
    }
    enumerator_29211.gotoNextObject () ;
    enumerator_29237.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_29775 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_29775.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.reader_hasKey (enumerator_29775.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 693)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 693)).operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 693)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_29884 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_29884.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_29884.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 696))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 696)) ;
        enumerator_29884.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_29775.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_29775.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 698)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 698)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 698))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 698)) ;
    }
    enumerator_29775.gotoNextObject () ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 702)) ;
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 707)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 713))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 713)) ;
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
  cEnumerator_terminalCheckAssignementList enumerator_31175 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_31175.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_31175.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_31175.current_mTypeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 734)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 734))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 734)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_31175.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)).add_operation (enumerator_31175.current_mSourceLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 738))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 737)) ;
    enumerator_31175.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_31560 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_31560.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)).add_operation (enumerator_31560.current_mValue (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 743)) ;
    enumerator_31560.gotoNextObject () ;
  }
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 746)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 752)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 759)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 759)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 760)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 760)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 760)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 761)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 761)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 761)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 762)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 762))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 760)) ;
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
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 816)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 818)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 821)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 836)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_34965 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_34965.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_34965.current_mSyntaxInstructionList (HERE), enumerator_34965.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 839)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_34965.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 853)) ;
    enumerator_34965.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 856)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 858))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 858)) ;
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
  GALGAS_string var_repeatFlagCppName = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 876)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 876)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 876)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 877)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 877))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 877)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 878)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 878))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 878)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 879)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 887)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 888)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_36911 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_36860 ((uint32_t) 0) ;
  while (enumerator_36911.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_36860.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 890)).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 890)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 890))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 890)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_36911.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 891)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 899)) ;
    enumerator_36911.gotoNextObject () ;
    index_36860.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 889)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 901)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 902)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 902))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 902)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 903)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 904)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 905)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 906)) ;
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
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 923)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 925)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 927)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_38284 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_38284.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_38284.current_mSyntaxInstructionList (HERE), enumerator_38284.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 930)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_38284.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 944)) ;
    enumerator_38284.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 947)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 948))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 948)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 964)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 964)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 965)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_39731 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_39680 ((uint32_t) 0) ;
  while (enumerator_39731.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_39680.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 967)).reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 967)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 967))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 967)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_39731.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 968)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 976)) ;
    enumerator_39731.gotoNextObject () ;
    index_39680.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 966)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 978)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 979)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 980)) ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 997)) ;
  GALGAS_uint var_referenceSelectMethodCount = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_40914 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_40914.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1001)) ;
    cEnumerator_syntaxInstructionList enumerator_41083 (enumerator_40914.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_41083.hasCurrentObject ()) {
      callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_41083.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1003)) ;
      enumerator_41083.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_40914.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1016)) ;
    enumerator_40914.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_41758_0 ; // Joker input parameter
  var_tempListOfBranches.modifier_popFirst (var_instructionList, joker_41758_0, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1021)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1022)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_41936 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_41936.hasCurrentObject () && bool_0) {
    while (enumerator_41936.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_41936.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1027)), enumerator_41936.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1025)) ;
      enumerator_41936.gotoNextObject () ;
      if (enumerator_41936.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1032))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1032)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1046)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1046)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1047)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1047)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1047)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1048)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_43083 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_43083.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_43083.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1051)) ;
    }
    if (enumerator_43083.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1060)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1060)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1060)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1060))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1060)) ;
    }
    enumerator_43083.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1062)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1081)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1080)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.reader_mType (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1086)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mType (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1088)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1088)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1088)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1088)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1089)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1089)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1089))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1087)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1094)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1093)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.reader_mType (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1099)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mType (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1101)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1101)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1101)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1102)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1102))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1100)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1106)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1109)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1124)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1126))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1126)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1141)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1141)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1145)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1147)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1147))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1147)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1148)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1149)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1149)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1149)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1150)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1150)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1150)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1150))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1150)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1152)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1152)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1152)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1153)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1153))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1153)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1154)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1154))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1154)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1155)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1156))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1156)) ;
  GALGAS_string var_whileVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1158)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1159)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1159))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1159)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1160)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1161))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1161)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1162)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1163)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1163)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1163)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1164)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1172)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1172))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1172)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1173)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1174)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1175)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1176)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1177)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1178)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//--- 'parse'\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1180)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1183)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1181)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1189)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1189))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1189)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1190)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1209)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1208)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1215)) ;
  }
  GALGAS_uint var_localSelectMethodCount = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount, var_when_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1219)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1235)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1250)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1253)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1254)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1252)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1259))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1259)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1277)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1278)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1278))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1278)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1279)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1287)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1288)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1296)) ;
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
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1312)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1313)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1317)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1316)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.reader_mType (SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1323)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1324)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1327))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1327)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1340)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1342)) COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1342)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1343)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1343)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1343)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1344))  COMMA_SOURCE_FILE ("semanticAnalysisOfSyntaxComponent.galgas", 1343)) ;
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
//                      Overriding category method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                            categoryMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineCategoryMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@syntaxSendInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                       GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                            categoryMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineCategoryMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                          GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_9245 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 200))) ;
  if (NULL != objectArray_9245) {
      macroValidSharedObject (objectArray_9245, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_9245->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 203)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 204)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                            categoryMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineCategoryMethod_terminalCheckInstruction_transformInstruction, NULL) ;

