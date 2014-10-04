#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodAST.h"
#include "class-abstractCategoryModifierAST.h"
#include "class-abstractCategoryReaderAST.h"
#include "class-arrayDeclarationAST.h"
#include "class-categoryMethodAST.h"
#include "class-categoryModifierAST.h"
#include "class-categoryReaderAST.h"
#include "class-classDeclarationAST.h"
#include "class-constructorExpressionAST.h"
#include "class-constructorExpressionForGeneration.h"
#include "class-defaultConstructorExpressionAST.h"
#include "class-defaultConstructorExpressionForGeneration.h"
#include "class-enumDeclarationAST.h"
#include "class-externFunctionDeclarationAST.h"
#include "class-externRoutineDeclarationAST.h"
#include "class-externTypeDeclarationAST.h"
#include "class-falseExpressionAST.h"
#include "class-falseExpressionForGeneration.h"
#include "class-filewrapperDeclarationAST.h"
#include "class-graphDeclarationAST.h"
#include "class-hereExpressionAST.h"
#include "class-hereExpressionForGeneration.h"
#include "class-lexiqueComponentAST.h"
#include "class-listDeclarationAST.h"
#include "class-listmapDeclarationAST.h"
#include "class-literalCharExpressionAST.h"
#include "class-literalCharExpressionForGeneration.h"
#include "class-literalDoubleExpressionAST.h"
#include "class-literalDoubleExpressionForGeneration.h"
#include "class-literalSInt64ExpressionAST.h"
#include "class-literalSInt64ExpressionForGeneration.h"
#include "class-literalSIntExpressionAST.h"
#include "class-literalSIntExpressionForGeneration.h"
#include "class-literalStringExpressionAST.h"
#include "class-literalStringExpressionForGeneration.h"
#include "class-literalUInt64ExpressionAST.h"
#include "class-literalUInt64ExpressionForGeneration.h"
#include "class-literalUIntExpressionAST.h"
#include "class-literalUIntExpressionForGeneration.h"
#include "class-mapDeclarationAST.h"
#include "class-mapProxyDeclarationAST.h"
#include "class-onceFunctionDeclarationAST.h"
#include "class-optionComponentDeclarationAST.h"
#include "class-overridingAbstractCategoryMethodAST.h"
#include "class-overridingAbstractCategoryModifierAST.h"
#include "class-overridingAbstractCategoryReaderAST.h"
#include "class-overridingCategoryMethodAST.h"
#include "class-overridingCategoryModifierAST.h"
#include "class-overridingCategoryReaderAST.h"
#include "class-predefinedTypeAST.h"
#include "class-selfCopyInExpressionAST.h"
#include "class-selfCopyInExpressionForGeneration.h"
#include "class-semanticDeclarationAST.h"
#include "class-semanticDeclarationWithHeaderForGeneration.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-semanticTypeForGeneration.h"
#include "class-sortedListDeclarationAST.h"
#include "class-structDeclarationAST.h"
#include "class-trueExpressionAST.h"
#include "class-trueExpressionForGeneration.h"
#include "class-uniqueMapDeclarationAST.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-lexicalTypeEnum.h"
#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "enum-optionDefaultValueEnumAST.h"
#include "enum-predefinedTypeKindEnum.h"
#include "enum-typeKindEnum.h"
#include "func-binaryAddOperator.h"
#include "func-binaryConcatOperator.h"
#include "func-buildLexicalTypeMap.h"
#include "func-doNotGenererateObjectCompare.h"
#include "func-elementTypeNameSuffix.h"
#include "func-generateDescriptionReaderUtilityMethod.h"
#include "func-isComparable.h"
#include "func-plusEqualOperatorWithExpression.h"
#include "func-plusEqualOperatorWithFieldListNeedsCompilerArg.h"
#include "func-supportWithAccessor.h"
#include "getter-predefinedTypeAST-getSupportedOperatorFlags.h"
#include "getter-predefinedTypeKindEnum-defaultConstructorName.h"
#include "getter-semanticDeclarationAST-keyRepresentation.h"
#include "getter-semanticDeclarationForGeneration-hasCppHeaderFile.h"
#include "getter-semanticDeclarationForGeneration-headerKind.h"
#include "getter-semanticDeclarationForGeneration-implementationCppFileName.h"
#include "getter-semanticDeclarationForGeneration-isPredefined.h"
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
#include "graph-semanticTypePrecedenceGraph.h"
#include "list-actualOutputExpressionList.h"
#include "list-attributeInCollectionListAST.h"
#include "list-commandLineOptionListAST.h"
#include "list-enumConstantList.h"
#include "list-enumerationDescriptorList.h"
#include "list-externTypeConstructorList.h"
#include "list-externTypeMethodList.h"
#include "list-externTypeModifierList.h"
#include "list-externTypeReaderList.h"
#include "list-filewrapperTemplateListAST.h"
#include "list-formalInputParameterListAST.h"
#include "list-formalParameterListAST.h"
#include "list-formalParameterSignature.h"
#include "list-formalTemplateInputParameterListAST.h"
#include "list-functionSignature.h"
#include "list-graphInsertModifierList.h"
#include "list-indexingListAST.h"
#include "list-insertMethodListAST.h"
#include "list-insertOrReplaceDeclarationListAST.h"
#include "list-lexicalAttributeListAST.h"
#include "list-lexicalListDeclarationListAST.h"
#include "list-lexicalListEntryListAST.h"
#include "list-lexicalSentValueList.h"
#include "list-mapOverrideBlockListAST.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-mapStateList.h"
#include "list-semanticDeclarationListAST.h"
#include "list-semanticExpressionListForGeneration.h"
#include "list-sentLexicalAttributeListAST.h"
#include "list-terminalDeclarationListAST.h"
#include "list-typeNameFormalParameterNameList.h"
#include "list-typedAttributeList.h"
#include "list-unifiedTypeMapProxyList.h"
#include "map-attributeMap.h"
#include "map-categoryMethodMapForBuildingContext.h"
#include "map-categoryMethodMapForType.h"
#include "map-categoryModifierMapForBuildingContext.h"
#include "map-categoryModifierMapForType.h"
#include "map-categoryReaderMapForBuildingContext.h"
#include "map-categoryReaderMapForType.h"
#include "map-classMethodMap.h"
#include "map-commandLineOptionMap.h"
#include "map-constantIndexMap.h"
#include "map-constructorMap.h"
#include "map-filewrapperMap.h"
#include "map-filewrapperTemplateMap.h"
#include "map-functionMap.h"
#include "map-instanceMethodMap.h"
#include "map-lexicalAttributeMap.h"
#include "map-lexicalTypeMap.h"
#include "map-lexiqueComponentMapForSemanticAnalysis.h"
#include "map-modifierMap.h"
#include "map-optionComponentMapForSemanticAnalysis.h"
#include "map-readerMap.h"
#include "map-routineMap.h"
#include "map-terminalMap.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperExtensionMap.h"
#include "map-wrapperFileMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-predefinedTypeAST-getAddAssignArgumentList.h"
#include "method-predefinedTypeAST-getClassMethodMap.h"
#include "method-predefinedTypeAST-getConstructorMap.h"
#include "method-predefinedTypeAST-getEnumerationList.h"
#include "method-predefinedTypeAST-getInstanceMethodMap.h"
#include "method-predefinedTypeAST-getModifierMap.h"
#include "method-predefinedTypeAST-getReaderMap.h"
#include "method-semanticDeclarationAST-addAssociatedElement.h"
#include "method-semanticDeclarationAST-enterDeclarationInGraph.h"
#include "method-semanticDeclarationAST-enterInSemanticContext.h"
#include "method-semanticExpressionAST-analyzeSemanticExpression.h"
#include "proc-addCategories.h"
#include "proc-analyzeConstructorInvocation.h"
#include "proc-buildLexicalAttributeMap.h"
#include "proc-commonReaderMapForAllTypes.h"
#include "proc-enterBaseFinalReaderWithoutArgument.h"
#include "proc-enterBaseReaderWith2Arguments.h"
#include "proc-enterBaseReaderWithArgument.h"
#include "proc-enterBaseReaderWithoutArgument.h"
#include "proc-enterConstructorWithArgument.h"
#include "proc-enterConstructorWithoutArgument.h"
#include "proc-enterInheritedReaderWith2Arguments.h"
#include "proc-enterInheritedReaderWithArgument.h"
#include "proc-enterInheritedReaderWithoutArgument.h"
#include "proc-recursivelyEnumerateDirectories.h"
#include "struct-analysisContext.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
#include "uniquemap-unifiedTypeMap.h"
#include "uniquemap-variableMap.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@sortedListDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 371)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_sortedListDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         categoryReader_sortedListDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_sortedListDeclarationAST_keyRepresentation (defineCategoryReader_sortedListDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@structDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 378)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_structDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         categoryReader_structDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_structDeclarationAST_keyRepresentation (defineCategoryReader_structDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@listDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 385)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_listDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         categoryReader_listDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_listDeclarationAST_keyRepresentation (defineCategoryReader_listDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@classDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 392)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_classDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         categoryReader_classDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_classDeclarationAST_keyRepresentation (defineCategoryReader_classDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@arrayDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 399)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_arrayDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         categoryReader_arrayDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_arrayDeclarationAST_keyRepresentation (defineCategoryReader_arrayDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@listmapDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 406)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_listmapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         categoryReader_listmapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_listmapDeclarationAST_keyRepresentation (defineCategoryReader_listmapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@filewrapperDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticContext.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 413)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_filewrapperDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         categoryReader_filewrapperDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_filewrapperDeclarationAST_keyRepresentation (defineCategoryReader_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@optionComponentDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 420)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         categoryReader_optionComponentDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentDeclarationAST_keyRepresentation (defineCategoryReader_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@graphDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 427)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_graphDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         categoryReader_graphDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_graphDeclarationAST_keyRepresentation (defineCategoryReader_graphDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@externTypeDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 434)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externTypeDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         categoryReader_externTypeDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externTypeDeclarationAST_keyRepresentation (defineCategoryReader_externTypeDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@onceFunctionDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticContext.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         categoryReader_onceFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_onceFunctionDeclarationAST_keyRepresentation (defineCategoryReader_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@externFunctionDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticContext.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 448)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         categoryReader_externFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externFunctionDeclarationAST_keyRepresentation (defineCategoryReader_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@externRoutineDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticContext.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 455)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externRoutineDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         categoryReader_externRoutineDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externRoutineDeclarationAST_keyRepresentation (defineCategoryReader_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                              categoryMethod_abstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                              categoryMethod_categoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterInSemanticContext (defineCategoryMethod_categoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                              categoryMethod_abstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                              categoryMethod_categoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterInSemanticContext (defineCategoryMethod_categoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                         const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                         const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryReaderAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                              categoryMethod_abstractCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryReaderAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                              categoryMethod_categoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_enterInSemanticContext (defineCategoryMethod_categoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryReaderAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                              categoryMethod_overridingCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryReaderAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_constructorMap var_constructorMap ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callCategoryMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 694)) ;
  GALGAS_readerMap var_readerMap ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callCategoryMethod_getReaderMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 695)) ;
  GALGAS_modifierMap var_modifierMap ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callCategoryMethod_getModifierMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_modifierMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 696)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callCategoryMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 697)) ;
  GALGAS_classMethodMap var_classMethodMap ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callCategoryMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 698)) ;
  GALGAS_functionSignature var_addAssignArgumentList ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callCategoryMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 699)) ;
  GALGAS_enumerationDescriptorList var_enumerationList ;
  GALGAS_stringlist var_enumerationVariants ;
  GALGAS_string var_enumeratedTypeName ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callCategoryMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList, var_enumerationVariants, var_enumeratedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 700)) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 706)) ;
  }
  GALGAS_unifiedTypeMapProxy var_enumeratedTypeProxy ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 714)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName, var_enumeratedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 716)) ;
    }
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 724))  COMMA_SOURCE_FILE ("semanticContext.galgas", 724)), var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 719)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 731))  COMMA_SOURCE_FILE ("semanticContext.galgas", 731)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 734)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 735)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 737)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 738)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 739)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, var_enumerationList, var_enumerationVariants, callCategoryReader_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 747)), var_addAssignArgumentList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 749)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 750)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 751)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 752)), GALGAS_bool (false), var_enumeratedTypeProxy, categoryReader_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 755)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 730)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                              categoryMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineCategoryMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_boolTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 776)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 779)) ;
  }
  GALGAS_unifiedTypeMapProxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 785)) ;
  }
  GALGAS_unifiedTypeMapProxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 788)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 790)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 791)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 792)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 793)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 795)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 796)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 797)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 798)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 800)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 800)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 801)), GALGAS_string ("inMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 801)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 801)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 803)) ;
  }
  {
  routine_enterInheritedReaderWith_32_Arguments (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 804)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 805)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 806)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 807)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 808)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("overriddenMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 809)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 809)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 810)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 812)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 813)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 814)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 815)), var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 815)) ;
  var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 816)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 816)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 816)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 817)) ;
  var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 818)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 818)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 818)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 819)) ;
  cEnumerator_attributeInCollectionListAST enumerator_35773 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_35773.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_35773.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 821)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 824)), var_attributeTypeIndex, enumerator_35773.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 824)) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_35773.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 825)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 826)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_35773.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 827))  COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
    var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 828)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 828)), enumerator_35773.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 828)) ;
    var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 829)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 829)), enumerator_35773.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 829)) ;
    enumerator_35773.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_36647 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_36647.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_modifierMap.reader_hasKey (enumerator_36647.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 833)) COMMA_SOURCE_FILE ("semanticContext.galgas", 833)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_36647.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_36647.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 834)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 834))  COMMA_SOURCE_FILE ("semanticContext.galgas", 834)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_36647.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 838)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 841)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 836)) ;
      }
    }
    enumerator_36647.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_37103 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_37103.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_modifierMap.reader_hasKey (enumerator_37103.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 848)) COMMA_SOURCE_FILE ("semanticContext.galgas", 848)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_37103.current_mMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_37103.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 849)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 849))  COMMA_SOURCE_FILE ("semanticContext.galgas", 849)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_37103.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 853)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 856)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 851)) ;
      }
    }
    enumerator_37103.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_37608 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_37608.hasCurrentObject ()) {
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_37608.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 865)), var_removeMethodFormalArgumentList, enumerator_37608.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 867)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 869)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 863)) ;
    }
    enumerator_37608.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_37932 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_37932.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_37932.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 875)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 875)), enumerator_37932.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 875))  COMMA_SOURCE_FILE ("semanticContext.galgas", 875)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_37932.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 877)) ;
    }
    {
    GALGAS_functionSignature temp_4 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 881)) ;
    temp_4.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 881)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 881)) ;
    var_readerMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 880)), temp_4, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 882)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 885)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 878)) ;
    }
    enumerator_37932.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticContext.galgas", 890)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location var_insertOrReplaceLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 892)) ;
    {
    var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation  COMMA_SOURCE_FILE ("semanticContext.galgas", 894)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 895)), var_insertMethodFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 898)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 893)) ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_39060 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_39060.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_39060.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 904)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 904)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 904)), enumerator_39060.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 904))  COMMA_SOURCE_FILE ("semanticContext.galgas", 904)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_39060.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 905)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 906)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 907)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 907)), enumerator_39060.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 907)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 908)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 908)), enumerator_39060.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 908)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 911)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 914)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 909)) ;
    }
    enumerator_39060.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 919)) ;
  }
  GALGAS_unifiedTypeMapProxy var_elementTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 932)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 932)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 932)), var_elementTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 930)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 940)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("semanticContext.galgas", 941)), GALGAS_bool (true), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 943)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 944)), var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 950)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 953)).operator_or (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 953)) COMMA_SOURCE_FILE ("semanticContext.galgas", 953)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 953)) COMMA_SOURCE_FILE ("semanticContext.galgas", 953)), var_argumentTypeListForAddAssignWithFieldExpressionList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 955)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 956)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 958)), GALGAS_bool (false), var_elementTypeProxy, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 962)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 962)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 963)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 936)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                              categoryMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@uniqueMapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                           const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                           const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapDeclarationAST * object = (const cPtr_uniqueMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 976)) ;
  }
  GALGAS_unifiedTypeMapProxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 979)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 982)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 985)) ;
  }
  GALGAS_unifiedTypeMapProxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 988)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 990)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 991)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 992)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 993)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 995)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 996)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 997)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 998)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1000)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1000)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1002)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1003)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1004)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1005)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1006)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1007)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1008)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1009)) ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1011)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1012)) ;
  var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1013)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1013)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1013)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1014)) ;
  var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1015)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1015)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1015)) ;
  cEnumerator_attributeInCollectionListAST enumerator_44765 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_44765.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_44765.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1018)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_44765.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1021)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_44765.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1022))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1022)) ;
    var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1023)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1023)), enumerator_44765.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1023)) ;
    var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1024)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1024)), enumerator_44765.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1024)) ;
    enumerator_44765.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_45497 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_45497.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_modifierMap.reader_hasKey (enumerator_45497.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1028)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1028)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_45497.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_45497.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1029)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1029))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_45497.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1033)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1036)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1031)) ;
      }
    }
    enumerator_45497.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1042)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1043)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1043)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1043)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1044)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1044)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1044)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_string ("enterEdge").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1046)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1047)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1050)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1045)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1054)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1055)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1055)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1055)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1056)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1056)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1056)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_string ("topologicalSort").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1058)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1059)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1061)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1063)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1057)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticContext.galgas", 1067)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    cEnumerator_mapSearchMethodListAST enumerator_47274 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_47274.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_47274.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1071)), var_removeMethodFormalArgumentList, enumerator_47274.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1073)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1075)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1069)) ;
      }
      enumerator_47274.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_2) {
    cEnumerator_mapSearchMethodListAST enumerator_47593 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_47593.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_47593.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1083)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1086)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1081)) ;
      }
      enumerator_47593.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticContext.galgas", 1092)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_unifiedTypeMapProxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1094)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1096))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1096)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1097)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1098)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1100)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1095)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1104))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1104)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1105)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1106)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1106)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1106)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1108)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1103)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1112))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1112)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1113)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1114)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1114)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1114)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1116)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1111)) ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1120))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1120)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1121)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1122)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1122)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1122)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1123)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1125)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1119)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_49468 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_49468.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_49468.current_mOverrideBlockName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1130)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1130)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1130))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1130)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1131)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1132)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1134)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1129)) ;
      }
      enumerator_49468.gotoNextObject () ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_49872 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_49872.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_49872.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1141)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1141)), enumerator_49872.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1141))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1141)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_49872.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)) ;
    }
    {
    GALGAS_functionSignature temp_4 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1147)) ;
    temp_4.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1147)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1147)) ;
    var_readerMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1146)), temp_4, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1148)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1151)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1144)) ;
    }
    enumerator_49872.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_50533 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_50533.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_50533.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1157)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1157)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1157)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1157)), enumerator_50533.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1157))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1157)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_50533.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1158)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1159)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1160)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1160)), enumerator_50533.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1160)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1161)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1161)), enumerator_50533.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1161)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1164)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1167)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1162)) ;
    }
    enumerator_50533.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1172)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1187)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("semanticContext.galgas", 1188)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1190)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1191)), var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1197)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1200)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1200)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1200)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1201)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1202)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1203)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1205)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1207)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1209)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1209)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1210)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1183)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_uniqueMapDeclarationAST.mSlotID,
                                              categoryMethod_uniqueMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapDeclarationAST_enterInSemanticContext (defineCategoryMethod_uniqueMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                          const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                          const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedAttributeList var_mapTypedAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_53089_3 ; // Joker input parameter
  GALGAS_bool joker_53089_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_53089_1 ; // Joker input parameter
  GALGAS_bool joker_53133_3 ; // Joker input parameter
  GALGAS_typedAttributeList joker_53133_2 ; // Joker input parameter
  GALGAS_attributeMap joker_53133_1 ; // Joker input parameter
  GALGAS_constructorMap joker_53192_11 ; // Joker input parameter
  GALGAS_readerMap joker_53192_10 ; // Joker input parameter
  GALGAS_modifierMap joker_53192_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_53192_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_53192_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_53192_6 ; // Joker input parameter
  GALGAS_stringlist joker_53192_5 ; // Joker input parameter
  GALGAS_uint joker_53192_4 ; // Joker input parameter
  GALGAS_functionSignature joker_53192_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_53192_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_53192_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_53251_6 ; // Joker input parameter
  GALGAS_bool joker_53251_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_53251_4 ; // Joker input parameter
  GALGAS_string joker_53251_3 ; // Joker input parameter
  GALGAS_string joker_53251_2 ; // Joker input parameter
  GALGAS_headerKind joker_53251_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_53089_3, joker_53089_2, joker_53089_1, var_typeKindEnum, joker_53133_3, joker_53133_2, joker_53133_1, var_mapTypedAttributeList, joker_53192_11, joker_53192_10, joker_53192_9, joker_53192_8, joker_53192_7, joker_53192_6, joker_53192_5, joker_53192_4, joker_53192_3, joker_53192_2, joker_53192_1, var_searchMethodList, joker_53251_6, joker_53251_5, joker_53251_4, joker_53251_3, joker_53251_2, joker_53251_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1222)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("semanticContext.galgas", 1232)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1233)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1233)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1233))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1233)) ;
    var_mapTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1234)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1237)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1238)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1239)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1240)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1241)) ;
  GALGAS_unifiedTypeMapProxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1243)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1246)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1249)) ;
  }
  GALGAS_unifiedTypeMapProxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1252)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1254)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1255)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticContext.galgas", 1255)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1255)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1256)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1256)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1256)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1257)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1257)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1257)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1259))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1259)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1258)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1264)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1265)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticContext.galgas", 1265)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1265)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1266)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1266)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1266)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1267)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1267)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1267)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1269))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1269)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1268)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1274)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1274)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1276)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1277)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1277)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1278)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1278)) ;
  cEnumerator_mapSearchMethodListAST enumerator_55919 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_55919.hasCurrentObject ()) {
    {
    var_constructorMap.modifier_insertKey (enumerator_55919.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1280)) ;
    }
    enumerator_55919.gotoNextObject () ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1288)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1289)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1290)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1291)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1292)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1293)) ;
  }
  GALGAS_readerMap var_inheritedReaderMap = var_readerMap ;
  cEnumerator_typedAttributeList enumerator_56882 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_56882.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedReaderMap.reader_hasKey (enumerator_56882.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1297)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1297)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_57016 (var_inheritedReaderMap.reader_keySet (SOURCE_FILE ("semanticContext.galgas", 1299)), kEnumeration_up) ;
      while (enumerator_57016.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_57016.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1300)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1300))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1300)) ;
        if (enumerator_57016.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1301)) ;
        }
        enumerator_57016.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_56882.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined readers: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1303)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1303))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1303)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_readerMap.modifier_insertKey (enumerator_56882.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1308)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1309)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1310)), GALGAS_bool (true), enumerator_56882.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1313)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1306)) ;
      }
    }
    enumerator_56882.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1319)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1334)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticContext.galgas", 1335)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1338)), var_mapTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1345)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1346)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1347)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1348)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1349)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1350)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1351)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1354)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1356)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1356)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1330)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                              categoryMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                            const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                            const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1369)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1370)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1371)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1372)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1373)) ;
  cEnumerator_externTypeConstructorList enumerator_59555 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_59555.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_59555.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1377)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1379)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_59790 (enumerator_59555.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_59790.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_59790.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1382)) ;
      }
      var_arguments.addAssign_operation (enumerator_59790.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_59790.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1383)) ;
      enumerator_59790.gotoNextObject () ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_59555.current_mConstructorName (HERE), var_arguments, GALGAS_bool (true), var_returnedTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1386)) ;
    }
    enumerator_59555.gotoNextObject () ;
  }
  cEnumerator_externTypeReaderList enumerator_60254 (object->mAttribute_mExternTypeReaderList, kEnumeration_up) ;
  while (enumerator_60254.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_60254.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1396)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1398)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_60477 (enumerator_60254.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_60477.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_60477.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1401)) ;
      }
      var_arguments.addAssign_operation (enumerator_60477.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_60477.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1402)) ;
      enumerator_60477.gotoNextObject () ;
    }
    {
    var_readerMap.modifier_insertKey (enumerator_60254.current_mReaderName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1407)), var_arguments, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1409)), GALGAS_bool (true), var_returnedTypeProxy, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1412)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1405)) ;
    }
    enumerator_60254.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_61060 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_61060.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1418)) ;
    cEnumerator_formalParameterListAST enumerator_61163 (enumerator_61060.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_61163.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_61163.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1420)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_61163.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_61163.current_mFormalArgumentPassingMode (HERE), enumerator_61163.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1425)) ;
      enumerator_61163.gotoNextObject () ;
    }
    {
    var_modifierMap.modifier_insertKey (enumerator_61060.current_mModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1430)), var_routineSignature, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1433)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1428)) ;
    }
    enumerator_61060.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_61752 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_61752.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1439)) ;
    cEnumerator_formalParameterListAST enumerator_61855 (enumerator_61752.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_61855.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_61855.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1442)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_61855.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_61855.current_mFormalArgumentPassingMode (HERE), enumerator_61855.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1447)) ;
      enumerator_61855.gotoNextObject () ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_61752.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1452)), var_routineSignature, enumerator_61752.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1456)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1450)) ;
    }
    enumerator_61752.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1465)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("semanticContext.galgas", 1466)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1468)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1469)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1470)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1475)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1476)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1477)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1479)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1480)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1481)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1482)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1483)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1485)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1487)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1487)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1461)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                              categoryMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_stringTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1500)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1502)) ;
  }
  GALGAS_unifiedTypeMapProxy var_graphTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1504)) ;
  }
  GALGAS_unifiedTypeMapProxy var_associatedListTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1506)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringListTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1508)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1510)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1511)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1512)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1513)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1514)) ;
  GALGAS_formalParameterSignature var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1516)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1517)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1517)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1517)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1518)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1518)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1518)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1519)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1519)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1519)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1520)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1520)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1520)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1522))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1522)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1523)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1525)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1527)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1521)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1532)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1534)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1536)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1530)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1541)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1542)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1542)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1542)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1543)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1543)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1543)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1545))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1545)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1546)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1548)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1550)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1544)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1554))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1554)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1555)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1557)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1559)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1553)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_enterBaseFinalReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1564)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1572)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1580)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1588)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1596)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1604)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1612)) ;
  }
  {
  routine_enterBaseReaderWith_32_Arguments (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1620)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1633))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1633)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1634)), GALGAS_bool (false), var_graphTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1632)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1639)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1640)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1640)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1640)) ;
  cEnumerator_functionSignature enumerator_69151 (var_associatedListTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1641)), kEnumeration_up) ;
  while (enumerator_69151.hasCurrentObject ()) {
    var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1642)), enumerator_69151.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1642)), enumerator_69151.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 1642)) ;
    enumerator_69151.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_69319 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_69319.hasCurrentObject ()) {
    {
    var_modifierMap.modifier_insertOrReplace (enumerator_69319.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1647)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1650)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1645)) ;
    }
    enumerator_69319.gotoNextObject () ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1657))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1657)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1658)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1659)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1661)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1656)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1665)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1666)), var_stringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1666)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1666)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1668))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1668)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1669)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1672)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1667)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1677)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1678)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1678)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1678)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1679)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1679)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1679)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1681))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1681)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1682)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1685)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1680)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1690)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1691)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1691)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1691)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1693))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1693)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1694)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1697)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1692)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1702)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1717)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("semanticContext.galgas", 1718)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1720)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1721)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1722)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1727)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1728)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1729)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1730)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1731)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1732)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1733)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1734)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1735)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1737)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1739)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1739)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1740)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1713)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                              categoryMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineCategoryMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                      const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                      const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1752)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1753)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1754)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1755)) ;
  GALGAS_unifiedTypeMapProxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1757)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1759)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_73523 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_73523.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1762)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1763)) ;
    cEnumerator__32_lstringlist enumerator_73690 (enumerator_73523.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_73690.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_73690.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1765)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_73690.current_mValue_31_ (HERE), var_associatedTypeProxy, enumerator_73690.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1766)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("semanticContext.galgas", 1767)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_73690.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_73523.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("semanticContext.galgas", 1770)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1770)) ;
    }
    {
    var_constructorMap.modifier_insertOrReplace (enumerator_73523.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1771)) ;
    }
    enumerator_73523.gotoNextObject () ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1779)) ;
  }
  cEnumerator_enumConstantList enumerator_74329 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_74329.hasCurrentObject ()) {
    {
    routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_74329.current_mConstantName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1784)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1784)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1781)) ;
    }
    enumerator_74329.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1790)) ;
  }
  {
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1828)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1828)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1805)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticContext.galgas", 1806)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1808)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1809)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1810)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1815)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1816)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1817)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1818)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1818)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1818)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1819)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1822)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1823)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1825)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1827)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1827)), temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1801)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                              categoryMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineCategoryMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1911)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_78961 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_78961.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1913)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_79079 (enumerator_78961.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_79079.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_79079.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1916)) ;
      }
      var_templateSignature.addAssign_operation (enumerator_79079.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex, enumerator_79079.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1917)) ;
      enumerator_79079.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap.modifier_insertKey (enumerator_78961.current_mFilewrapperTemplateName (HERE), var_templateSignature, enumerator_78961.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1919)) ;
    }
    enumerator_78961.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1926)) ;
  cEnumerator_lstringlist enumerator_79628 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_79628.hasCurrentObject ()) {
    {
    var_textExtensionMap.modifier_insertKey (enumerator_79628.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1928)) ;
    }
    enumerator_79628.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1931)) ;
  cEnumerator_lstringlist enumerator_79828 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_79828.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap.reader_hasKey (enumerator_79828.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 1933)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_79828.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_79828.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1934)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1934)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1934))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1934)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap.modifier_insertKey (enumerator_79828.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1936)) ;
      }
    }
    enumerator_79828.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1943)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 1943)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1944)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 1946)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1946)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1946)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1946)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticContext.galgas", 1948)).operator_not (SOURCE_FILE ("semanticContext.galgas", 1948)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1949)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1949))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1949)) ;
    var_regularRootFileMap.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath, GALGAS_string ("/"), var_textExtensionMap, var_binaryFileExtensionMap, var_regularRootFileMap, var_wrapperDirectoryMap, var_wrapperFileIndex, var_wrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1955)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.modifier_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateMap, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1967)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                              categoryMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1985)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1986)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1987)) ;
  GALGAS_stringset var_optionNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticContext.galgas", 1988)) ;
  cEnumerator_commandLineOptionListAST enumerator_81864 (object->mAttribute_mOptions, kEnumeration_up) ;
  while (enumerator_81864.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_optionNameSet.reader_hasKey (enumerator_81864.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1990)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1990)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_81864.current_mOptionInternalName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_81864.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1991)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1991)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1991))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1991)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1992)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_boolOptionMap.modifier_insertKey (enumerator_81864.current_mOptionInternalName (HERE), enumerator_81864.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 1995)), enumerator_81864.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1996)), enumerator_81864.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1997)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_81864.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 2000)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_81864.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an @bool option cannot have a default value (default value is allways false)")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2001)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2003)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2009)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("0") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = enumerator_81864.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2009)) ;
          }
          var_uintOptionMap.modifier_insertKey (enumerator_81864.current_mOptionInternalName (HERE), enumerator_81864.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 2006)), enumerator_81864.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2007)), enumerator_81864.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2008)), temp_6, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2004)) ;
          }
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("semanticContext.galgas", 2011)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_location location_9 (enumerator_81864.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_9, GALGAS_string ("an @uint option default value cannot be an @string value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2012)) ;
          }
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2014)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            var_stringOptionMap.modifier_insertKey (enumerator_81864.current_mOptionInternalName (HERE), enumerator_81864.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 2017)), enumerator_81864.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2018)), enumerator_81864.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2019)), enumerator_81864.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2020)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2015)) ;
            }
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_81864.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("semanticContext.galgas", 2022)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              GALGAS_location location_12 (enumerator_81864.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_12, GALGAS_string ("an @string option default value cannot be an @uint value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2023)) ;
            }
          }else if (kBoolFalse == test_10) {
            GALGAS_location location_13 (enumerator_81864.current_mOptionTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_13, GALGAS_string ("only the @bool, @uint or @string types are allowed here")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2026)) ;
          }
        }
      }
    }
    var_optionNameSet.addAssign_operation (enumerator_81864.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2028))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2028)) ;
    enumerator_81864.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.modifier_insertKey (object->mAttribute_mOptionComponentName, object->mAttribute_mIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2031)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                              categoryMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                      const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                      const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2048)) ;
  cEnumerator_attributeInCollectionListAST enumerator_84424 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_84424.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_84424.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2050)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_84641 (enumerator_84424.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_84641.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_84641.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_84641.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_84641.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_84424.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2060)) ;
    enumerator_84424.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_uintType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2063)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2065)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2069)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2069)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2069)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2067)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2073)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2074)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2075)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2076)) ;
  cEnumerator_typedAttributeList enumerator_85756 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_85756.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_85756.current_mAttributeTypeProxy (HERE), enumerator_85756.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2078))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2078)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2079)), enumerator_85756.current_mAttributeTypeProxy (HERE), enumerator_85756.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2079)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2080)), enumerator_85756.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 2080)), enumerator_85756.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2080)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2081)), enumerator_85756.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2081)), enumerator_85756.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2081)) ;
    enumerator_85756.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2084)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2085)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2085)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2087))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2087)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2086)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2093)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2094)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2095)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2096)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2096)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2097)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2097)) ;
  }
  cEnumerator_typedAttributeList enumerator_87210 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_87210.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_87210.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2103)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2103)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2103)) ;
      var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_87210.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2101)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2101)), enumerator_87210.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2101))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2101)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2102)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2104)), GALGAS_bool (true), enumerator_87210.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2107)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2100)) ;
      }
    }
    enumerator_87210.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2113)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2115))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2115)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2116)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2118)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2120)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2114)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2124))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2124)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2125)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2127)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2129)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2123)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2133)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2135))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2135)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2136)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2139)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2134)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2143))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2144)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2147)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2142)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2150)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2150)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2150)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2152))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2153)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2156)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2151)) ;
  }
  var_modifierOutputFormalArgumentList.drop () ; // drop instruction
  cEnumerator_typedAttributeList enumerator_89087 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_89087.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_89087.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2162)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2163)), enumerator_89087.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2163)), enumerator_89087.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2163)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2164)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2164)), enumerator_89087.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2164)) ;
      {
      var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_89087.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2166)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 2166)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2166)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2166)), enumerator_89087.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2166))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2166)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2167)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2170)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2165)) ;
      }
    }
    enumerator_89087.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2176)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2176)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2176)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2178))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2178)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2179)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2182)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2177)) ;
  }
  var_modifierInputFormalArgumentList.drop () ; // drop instruction
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2187)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2188)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2189)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2191)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2206)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2207)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2210)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2211)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2216)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)).operator_or (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2221)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2222)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2223)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2224)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2228)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2228)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2229)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2202)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                              categoryMethod_listDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineCategoryMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                            const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                            const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2241)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2245)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2245)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2245)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2243)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2249)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2250)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2251)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2252)) ;
  cEnumerator_attributeInCollectionListAST enumerator_92765 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_92765.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_92765.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2254)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_92765.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2257)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_92765.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2258)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2259)), var_attributeTypeIndex, enumerator_92765.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2259)) ;
    var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2260)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 2260)), enumerator_92765.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2260)) ;
    enumerator_92765.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2263)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2264)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2264)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2266))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2266)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2265)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2272)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2273)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2275)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2277))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2277)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2278)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2281)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2276)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2285))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2285)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2286)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2289)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2284)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2293)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2295))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2295)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2296)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2298)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2300)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2294)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2304))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2304)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2305)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2307)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2309)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2303)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2313)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2314)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2315)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2317)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2332)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("semanticContext.galgas", 2333)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2336)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2337)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2342)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2345)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2345)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2345)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2345)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2345)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2347)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2348)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2349)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2350)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2356)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2356)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2357)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2328)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                              categoryMethod_sortedListDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterInSemanticContext (defineCategoryMethod_sortedListDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                        const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                        const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_structTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2370)) ;
  }
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2372)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2373)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2374)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2375)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2376)) ;
  cEnumerator_attributeInCollectionListAST enumerator_97400 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_97400.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_97400.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2378)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2379)), var_attributeTypeIndex, enumerator_97400.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2379)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 2380)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_97400.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2383)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_97400.current_mAttributeName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2384)) ;
    }
    enumerator_97400.gotoNextObject () ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2387))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2387)), var_constructorAttributeTypeList, GALGAS_bool (false), var_structTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2386)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2394)) ;
  }
  cEnumerator_typedAttributeList enumerator_98186 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_98186.hasCurrentObject ()) {
    {
    routine_enterBaseFinalReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_98186.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2399)), enumerator_98186.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2400)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2396)) ;
    }
    enumerator_98186.gotoNextObject () ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2405)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2407)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2409)) ;
  }
  GALGAS_unifiedTypeMapProxy var_enumeratedType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2422)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType COMMA_SOURCE_FILE ("semanticContext.galgas", 2424)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = GALGAS_string ("default") ;
  cEnumerator_typedAttributeList enumerator_99221 (var_typedAttributeList, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_99221.hasCurrentObject () && bool_1) {
    while (enumerator_99221.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_99221.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2433)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_99221.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2433)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2433)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2433)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_99221.gotoNextObject () ;
      if (enumerator_99221.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2442)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticContext.galgas", 2443)), GALGAS_bool (false), var_typedAttributeList, var_attributeMap, var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2452)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2453)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2454)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2455)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2456)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2457)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2458)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2459)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2460)), GALGAS_bool (false), var_enumeratedType, var_defaultConstructorName, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2464)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2464)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2465)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2438)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                              categoryMethod_structDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineCategoryMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_uintType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2477)) ;
  }
  GALGAS_readerMap var_readerMap ;
  GALGAS_modifierMap var_modifierMap ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  GALGAS_typedAttributeList var_inheritedTypedAttributeList ;
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2483)) ;
  GALGAS_unifiedTypeMapProxy var_superClassIndex ;
  GALGAS_bool var_generateHeaderInSeparateFile ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2487)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2488)) ;
    {
    routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2489)) ;
    }
    var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2490)) ;
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2491)) ;
    var_inheritedTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2492)) ;
    var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2493)) ;
    var_generateHeaderInSeparateFile = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_101604 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_101604.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_101604.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2496)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile = GALGAS_bool (true) ;
      }
      enumerator_101604.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2501)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum ;
    GALGAS_readerMap var_inheritedReaderMap ;
    GALGAS_modifierMap var_inheritedModifierMap ;
    GALGAS_instanceMethodMap var_inheritedMethodMap ;
    GALGAS_bool joker_102053_3 ; // Joker input parameter
    GALGAS_bool joker_102053_2 ; // Joker input parameter
    GALGAS_unifiedTypeMapProxy joker_102053_1 ; // Joker input parameter
    GALGAS_bool joker_102083_0 ; // Joker input parameter
    GALGAS_typedAttributeList joker_102147_2 ; // Joker input parameter
    GALGAS_constructorMap joker_102147_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_102237_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_102237_8 ; // Joker input parameter
    GALGAS_stringlist joker_102237_7 ; // Joker input parameter
    GALGAS_uint joker_102237_6 ; // Joker input parameter
    GALGAS_functionSignature joker_102237_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_102237_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_102237_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_102237_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_102237_1 ; // Joker input parameter
    GALGAS_unifiedTypeMapProxy joker_102283_4 ; // Joker input parameter
    GALGAS_string joker_102283_3 ; // Joker input parameter
    GALGAS_string joker_102283_2 ; // Joker input parameter
    GALGAS_headerKind joker_102283_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_102053_3, joker_102053_2, joker_102053_1, var_typeKindEnum, joker_102083_0, var_inheritedTypedAttributeList, var_attributeMap, joker_102147_2, joker_102147_1, var_inheritedReaderMap, var_inheritedModifierMap, var_inheritedMethodMap, joker_102237_9, joker_102237_8, joker_102237_7, joker_102237_6, joker_102237_5, joker_102237_4, joker_102237_3, joker_102237_2, joker_102237_1, var_generateHeaderInSeparateFile, joker_102283_4, joker_102283_3, joker_102283_2, joker_102283_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2506)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2522)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSuperClassName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2523)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2523)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2523))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2523)) ;
    }
    var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2526)) ;
    cEnumerator_modifierMap enumerator_102559 (var_inheritedModifierMap, kEnumeration_up) ;
    while (enumerator_102559.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_102559.current_lkey (HERE), enumerator_102559.current_mKind (HERE), enumerator_102559.current_mParameterList (HERE), enumerator_102559.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2533)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2528)) ;
      }
      enumerator_102559.gotoNextObject () ;
    }
    var_readerMap = GALGAS_readerMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2538)) ;
    cEnumerator_readerMap enumerator_102871 (var_inheritedReaderMap, kEnumeration_up) ;
    while (enumerator_102871.hasCurrentObject ()) {
      {
      var_readerMap.modifier_insertKey (enumerator_102871.current_lkey (HERE), enumerator_102871.current_mKind (HERE), enumerator_102871.current_mArgumentTypeList (HERE), enumerator_102871.current_mDeclarationLocation (HERE), enumerator_102871.current_mHasCompilerArgument (HERE), enumerator_102871.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2547)), enumerator_102871.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2540)) ;
      }
      enumerator_102871.gotoNextObject () ;
    }
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2552)) ;
    cEnumerator_instanceMethodMap enumerator_103245 (var_inheritedMethodMap, kEnumeration_up) ;
    while (enumerator_103245.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_103245.current_lkey (HERE), enumerator_103245.current_mKind (HERE), enumerator_103245.current_mParameterList (HERE), enumerator_103245.current_mDeclarationLocation (HERE), enumerator_103245.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2560)), enumerator_103245.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2554)) ;
      }
      enumerator_103245.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2566)) ;
  cEnumerator_typedAttributeList enumerator_103646 (var_inheritedTypedAttributeList, kEnumeration_up) ;
  while (enumerator_103646.hasCurrentObject ()) {
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2568)), enumerator_103646.current_mAttributeTypeProxy (HERE), enumerator_103646.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2568)) ;
    enumerator_103646.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_103777 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_103777.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_103777.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2572)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2573)), var_attributeTypeIndex, enumerator_103777.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2573)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_103777.current_mAttributeName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2574)) ;
    }
    const enumGalgasBool test_4 = var_readerMap.reader_hasKey (enumerator_103777.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2575)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2575)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_103777.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_103777.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2576)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2576)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined reader"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2576))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2576)) ;
    }
    enumerator_103777.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_classIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2580)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2586)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2587)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2589))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2589)), var_constructorAttributeTypeList, GALGAS_bool (false), var_classIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2588)) ;
    }
  }
  GALGAS_typedAttributeList var_currentClassTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2596)) ;
  GALGAS_typedAttributeList var_allTypedAttributeList = var_inheritedTypedAttributeList ;
  cEnumerator_attributeInCollectionListAST enumerator_104876 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_104876.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_104876.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2600)) ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_105112 (enumerator_104876.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_105112.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_105112.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2604)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_105112.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2606)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter = GALGAS_bool (false) ;
        }
      }
      enumerator_105112.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_104876.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2610)) ;
    var_allTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_104876.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)) ;
    const enumGalgasBool test_9 = var_hasGetter.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_readerMap.modifier_insertKey (enumerator_104876.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2615)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2616)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2617)), GALGAS_bool (false), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2620)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2613)) ;
      }
    }
    enumerator_104876.gotoNextObject () ;
  }
  cEnumerator_typedAttributeList enumerator_105880 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  while (enumerator_105880.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_105880.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_105880.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2629)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 2629)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2629)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2629))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2629)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2630)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2631)), enumerator_105880.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 2631)), enumerator_105880.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2631)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2633)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2628)) ;
      }
    }
    enumerator_105880.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2639)) ;
  }
  GALGAS_string var_defaultConstructorName ;
  const enumGalgasBool test_11 = var_superClassIndex.reader_isNull (SOURCE_FILE ("semanticContext.galgas", 2651)).boolEnum () ;
  if (kBoolTrue == test_11) {
    var_defaultConstructorName = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_11) {
    var_defaultConstructorName = var_superClassIndex.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2654)) ;
  }
  cEnumerator_typedAttributeList enumerator_106921 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  bool bool_12 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_106921.hasCurrentObject () && bool_12) {
    while (enumerator_106921.hasCurrentObject () && bool_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_106921.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2657)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_106921.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2657)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2657)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2657)).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_106921.gotoNextObject () ;
      if (enumerator_106921.hasCurrentObject ()) {
        bool_12 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2665)), var_superClassIndex, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2667)), GALGAS_bool (false), var_allTypedAttributeList, var_attributeMap, var_currentClassTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2676)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2677)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2678)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2680)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2681)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2682)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2683)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2684)), var_generateHeaderInSeparateFile, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2686)), var_defaultConstructorName, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2688)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2688)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 2689)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2662)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                              categoryMethod_classDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineCategoryMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2701)) ;
  cEnumerator_formalParameterListAST enumerator_108593 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_108593.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_108593.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2704)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_108593.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_108593.current_mFormalArgumentPassingMode (HERE), enumerator_108593.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2705)) ;
    enumerator_108593.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.modifier_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2708)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                              categoryMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externFunctionDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2723)) ;
  cEnumerator_formalInputParameterListAST enumerator_109623 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_109623.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_109623.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2726)) ;
    }
    var_functionSignature.addAssign_operation (enumerator_109623.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_109623.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2727)) ;
    enumerator_109623.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2731)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultTypeIndex, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2733)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                              categoryMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@onceFunctionDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                              const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                              const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMapProxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2749)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2751)), var_resultTypeIndex, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2751)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                              categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2762)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDimension.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the dimension of an array should be > 0")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2763)) ;
  }
  GALGAS_unifiedTypeMapProxy var_arrayTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2767)) ;
  }
  GALGAS_unifiedTypeMapProxy var_elementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2770)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2772)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2773)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2774)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2775)) ;
  GALGAS_unifiedTypeMapProxy var_boolType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("semanticContext.galgas", 2778)) ;
  }
  GALGAS_unifiedTypeMapProxy var_uintType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2781)) ;
  }
  GALGAS_functionSignature var_uintArgs = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2783)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2785)).isValid ()) {
    uint32_t variant_112416 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2785)).uintValue () ;
    bool loop_112416 = true ;
    while (loop_112416) {
      loop_112416 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2785)))).isValid () ;
      if (loop_112416) {
        loop_112416 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2785)))).boolValue () ;
      }
      if (loop_112416 && (0 == variant_112416)) {
        loop_112416 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2785)) ;
      }
      if (loop_112416) {
        variant_112416 -- ;
        var_uintArgs.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2786)), var_uintType, GALGAS_string ("inSize").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2786)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2786))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2786)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2787)) ;
      }
    }
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2791))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2791)), var_uintArgs, GALGAS_bool (false), var_arrayTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2790)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2797)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2798)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2799)) ;
  }
  {
  var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2801))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2801)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2802)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2804)), GALGAS_bool (true), var_boolType, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2807)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2800)) ;
  }
  {
  var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2811))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2811)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2812)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2814)), GALGAS_bool (true), var_elementTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2817)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2810)) ;
  }
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2821)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2822)), var_elementTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2822)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2822)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2824)).isValid ()) {
    uint32_t variant_113791 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2824)).uintValue () ;
    bool loop_113791 = true ;
    while (loop_113791) {
      loop_113791 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2824)))).isValid () ;
      if (loop_113791) {
        loop_113791 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2824)))).boolValue () ;
      }
      if (loop_113791 && (0 == variant_113791)) {
        loop_113791 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2824)) ;
      }
      if (loop_113791) {
        variant_113791 -- ;
        var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2825)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2825)), GALGAS_string ("inIndex").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2825)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2825))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2825)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2826)) ;
      }
    }
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2829)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2830)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2833)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2828)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("forceValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2837)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2838)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2841)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2836)) ;
  }
  {
  GALGAS_lstring joker_114400_4 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_114400_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_114400_2 ; // Joker input parameter
  GALGAS_string joker_114400_1 ; // Joker input parameter
  var_modifierFormalArgumentList.modifier_popFirst (joker_114400_4, joker_114400_3, joker_114400_2, joker_114400_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2844)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("invalidateValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2846)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2847)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2850)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2845)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSize").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2854)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2855)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2858)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2853)) ;
  }
  var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2861)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2862)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2862)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2862)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2863)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2863)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2863)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSizeForAxis").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2865)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2866)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2869)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2864)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2877)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("semanticContext.galgas", 2878)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2880)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2881)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2882)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2887)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2888)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2889)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2891)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2892)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2893)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2894)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2895)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2897)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2899)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2899)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2900)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2873)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                              categoryMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                         const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                         const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedAttributeList var_listTypedAttributeList ;
  GALGAS_bool joker_116742_3 ; // Joker input parameter
  GALGAS_bool joker_116742_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_116742_1 ; // Joker input parameter
  GALGAS_bool joker_116786_0 ; // Joker input parameter
  GALGAS_attributeMap joker_116845_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_116845_19 ; // Joker input parameter
  GALGAS_constructorMap joker_116845_18 ; // Joker input parameter
  GALGAS_readerMap joker_116845_17 ; // Joker input parameter
  GALGAS_modifierMap joker_116845_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_116845_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_116845_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_116845_13 ; // Joker input parameter
  GALGAS_stringlist joker_116845_12 ; // Joker input parameter
  GALGAS_uint joker_116845_11 ; // Joker input parameter
  GALGAS_functionSignature joker_116845_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_116845_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_116845_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_116845_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_116845_6 ; // Joker input parameter
  GALGAS_bool joker_116845_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_116845_4 ; // Joker input parameter
  GALGAS_string joker_116845_3 ; // Joker input parameter
  GALGAS_string joker_116845_2 ; // Joker input parameter
  GALGAS_headerKind joker_116845_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_116742_3, joker_116742_2, joker_116742_1, var_typeKindEnum, joker_116786_0, var_listTypedAttributeList, joker_116845_20, joker_116845_19, joker_116845_18, joker_116845_17, joker_116845_16, joker_116845_15, joker_116845_14, joker_116845_13, joker_116845_12, joker_116845_11, joker_116845_10, joker_116845_9, joker_116845_8, joker_116845_7, joker_116845_6, joker_116845_5, joker_116845_4, joker_116845_3, joker_116845_2, joker_116845_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2912)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2920)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2921)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2921)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2921))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2921)) ;
    var_listTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2922)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2925)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2926)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2927)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2928)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2930)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2932)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2934)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2935)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2936)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2937)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2937)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2939)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2939)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2941)) ;
  var_enumeratorDescriptor.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2942)) ;
  var_enumeratorDescriptor.addAssign_operation (var_associatedListTypeIndex, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2943)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2945)) ;
  var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2946)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2946)) ;
  cEnumerator_typedAttributeList enumerator_118701 (var_listTypedAttributeList, kEnumeration_up) ;
  while (enumerator_118701.hasCurrentObject ()) {
    var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2948)), enumerator_118701.current_mAttributeTypeProxy (HERE), enumerator_118701.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2948)) ;
    enumerator_118701.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2951)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2952)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2953)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2955)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2968)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2968)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2968)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2966)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2976)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("semanticContext.galgas", 2977)), GALGAS_bool (true), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2979)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2980)), var_listTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2986)), var_enumeratorDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2989)), var_addAssignOperatorDescription, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2991)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2992)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2993)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2994)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2998)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2998)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2999)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2972)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                              categoryMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3011)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3012)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 3013)) ;
  }
  GALGAS_terminalMap var_terminalMap = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3019)) ;
  cEnumerator_terminalDeclarationListAST enumerator_121206 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_121206.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3021)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_121303 (enumerator_121206.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_121303.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_121303.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3024)) ;
      var_argumentTypeList.addAssign_operation (enumerator_121303.current_mFormalSelector (HERE), enumerator_121303.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 3025)) ;
      enumerator_121303.gotoNextObject () ;
    }
    {
    var_terminalMap.modifier_insertKey (enumerator_121206.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3027)) ;
    }
    enumerator_121206.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_121629 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_121629.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3031)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_121726 (enumerator_121629.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_121726.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_121726.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3034)) ;
      var_argumentTypeList.addAssign_operation (enumerator_121726.current_mFormalSelector (HERE), enumerator_121726.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 3035)) ;
      enumerator_121726.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_121971 (enumerator_121629.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_121971.hasCurrentObject ()) {
      {
      var_terminalMap.modifier_insertKey (enumerator_121971.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3038)) ;
      }
      enumerator_121971.gotoNextObject () ;
    }
    enumerator_121629.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.modifier_insertKey (object->mAttribute_mLexiqueComponentName, var_terminalMap, object->mAttribute_mIndexingListAST, object->mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3042)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                              categoryMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3081)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 3081))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3081)) ;
  {
  const GALGAS_predefinedTypeAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3082)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               categoryMethod_predefinedTypeAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterDeclarationInGraph (defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3093)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3093)), object->mAttribute_mLexiqueComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3093)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3094)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               categoryMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3105)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3105)), object->mAttribute_mClassTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3105))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3105)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3106)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)) ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_125614 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_125614.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_125614.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3111)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3111)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3111)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3111)) ;
    }
    enumerator_125614.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               categoryMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                       GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                       GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3123)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3123)), object->mAttribute_mListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3123))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3123)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3124)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_126444 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_126444.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_126444.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3126)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3126)), enumerator_126444.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3126))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3126)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3126)) ;
    }
    enumerator_126444.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               categoryMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@structDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                         GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                         GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3138)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3138)), object->mAttribute_mStructTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3138))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3138)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3139)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_127281 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_127281.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_127281.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3141)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3141)), enumerator_127281.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3141))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3141)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3141)) ;
    }
    enumerator_127281.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               categoryMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@enumDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                       GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                       GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3153)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3153)), object->mAttribute_mEnumTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3153))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3153)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3154)) ;
  }
  cEnumerator_enumConstantList enumerator_128114 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_128114.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_128162 (enumerator_128114.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_128162.hasCurrentObject ()) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_128162.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3157)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3157)), enumerator_128162.current_mValue_30_ (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3157))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3157)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3157)) ;
      }
      enumerator_128162.gotoNextObject () ;
    }
    enumerator_128114.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               categoryMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@sortedListDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                             GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                             GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3170)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3170)), object->mAttribute_mSortedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3170))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3170)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3171)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_129003 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_129003.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_129003.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3173)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3173)), enumerator_129003.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3173))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3173)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3173)) ;
    }
    enumerator_129003.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                               categoryMethod_sortedListDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_sortedListDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3185)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3185)), object->mAttribute_mArrayTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3185))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3185)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3186)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3187)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3187)), object->mAttribute_mElementTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3187))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3187)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3187)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               categoryMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                          GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3198)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3198)), object->mAttribute_mListmapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3198))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3198)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3199)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3200)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3200)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3200))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3200)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3200)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               categoryMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3211)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3211)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3211))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3211)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3212)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_131441 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_131441.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_131441.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3214)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3214)), enumerator_131441.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3214))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3214)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3214)) ;
    }
    enumerator_131441.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               categoryMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@uniqueMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                            GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                            GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapDeclarationAST * object = (const cPtr_uniqueMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3226)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3226)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3226))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3226)) ;
  {
  const GALGAS_uniqueMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3227)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_132275 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_132275.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_132275.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3229)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3229)), enumerator_132275.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3229))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3229)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3229)) ;
    }
    enumerator_132275.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_uniqueMapDeclarationAST.mSlotID,
                                               categoryMethod_uniqueMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_uniqueMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@mapProxyDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                           GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                           GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3241)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3241)), object->mAttribute_mMapProxyTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3241))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3241)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3242)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3243)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)), object->mAttribute_mAssociatedMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3243))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3254)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3254)), object->mAttribute_mGraphTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3254))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3254)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3255)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3256)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3256)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3256))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3256)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3256)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               categoryMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@externTypeDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                             GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                             GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3267)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3267)), object->mAttribute_mExternTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3267))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3267)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3268)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@externFunctionDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                 GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                 GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                 GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3279)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@onceFunctionDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                               GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                               GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                               GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3290)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3301)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3312)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3323)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  const GALGAS_overridingCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3334)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  const GALGAS_overridingCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3345)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryReaderAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  const GALGAS_overridingAbstractCategoryReaderAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3356)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  const GALGAS_overridingAbstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3367)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                          GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  const GALGAS_overridingAbstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3378)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryReaderAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & ioArgument_ioCategoryReaderMapForBuildingContext,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3389)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3389)), object->mAttribute_mCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3389))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3389)) ;
  {
  const GALGAS_categoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3390)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3391)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3391)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3391))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3391)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3391)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3393)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3393)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3393)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3394)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_141717 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3399)) ;
  if (NULL != objectArray_141717) {
      macroValidSharedObject (objectArray_141717, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_141717->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3400)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                               categoryMethod_categoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_categoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3416)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3416)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3416)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3416)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3416)), object->mAttribute_mCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3416))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3416)) ;
  {
  const GALGAS_categoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3417)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3418)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3418)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3418))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3418)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3418)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3420)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3420)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3420)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3423)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3421)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_143002 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3426)) ;
  if (NULL != objectArray_143002) {
      macroValidSharedObject (objectArray_143002, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_143002->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3427)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                               categoryMethod_categoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3442)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3442)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3442)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3442)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3442)), object->mAttribute_mCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3442))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3442)) ;
  {
  const GALGAS_categoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3443)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3444)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3444)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3444))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3444)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3444)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3446)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3446)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3446)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3449)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3447)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_144255 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3452)) ;
  if (NULL != objectArray_144255) {
      macroValidSharedObject (objectArray_144255, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_144255->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3453)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                               categoryMethod_categoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryReaderAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  const GALGAS_overridingCategoryReaderAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3468)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                               categoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryReaderAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryReaderMapForBuildingContext & ioArgument_ioCategoryReaderMapForBuildingContext,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3479)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3479)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3479)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3479)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3479)), object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3479))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3479)) ;
  {
  const GALGAS_abstractCategoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3480)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3481)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3481)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3481))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3481)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3481)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3483)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3483)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3483)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3486)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3484)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_146122 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3489)) ;
  if (NULL != objectArray_146122) {
      macroValidSharedObject (objectArray_146122, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_146122->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3490)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                               categoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                              GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3506)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3506)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3506)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3506)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3506)), object->mAttribute_mAbstractCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3506))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3506)) ;
  {
  const GALGAS_abstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3507)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3508)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3508)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3508))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3508)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3508)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3510)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3510)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3510)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3513)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3511)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_147455 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3516)) ;
  if (NULL != objectArray_147455) {
      macroValidSharedObject (objectArray_147455, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_147455->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3517)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                               categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3532)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3532)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3532)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3532)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3532)), object->mAttribute_mAbstractCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3532))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3532)) ;
  {
  const GALGAS_abstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3533)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3534)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3534)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3534))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3534)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3534)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3536)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3536)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3536)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3539)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3537)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_148748 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3542)) ;
  if (NULL != objectArray_148748) {
      macroValidSharedObject (objectArray_148748, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_148748->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3543)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                               categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapDeclarationAST addAssociatedElement'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3560)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3562)), GALGAS_string ("lkey").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3563)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3564))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3561)) ;
  cEnumerator_attributeInCollectionListAST enumerator_149574 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_149574.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_149574.current_mAttributeTypeName (HERE), enumerator_149574.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3569))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3566)) ;
    enumerator_149574.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3573)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3573)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3573)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3571))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3571)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                            categoryMethod_mapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineCategoryMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3582)) ;
  cEnumerator_attributeInCollectionListAST enumerator_150192 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_150192.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_150192.current_mAttributeTypeName (HERE), enumerator_150192.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3587))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3584)) ;
    enumerator_150192.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3591)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3591)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3591)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3589))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3589)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                            categoryMethod_listDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineCategoryMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sortedListDeclarationAST addAssociatedElement'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3600)) ;
  cEnumerator_attributeInCollectionListAST enumerator_150818 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_150818.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_150818.current_mAttributeTypeName (HERE), enumerator_150818.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3605))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3602)) ;
    enumerator_150818.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3609)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3609)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3609)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3607))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3607)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                            categoryMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineCategoryMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listmapDeclarationAST addAssociatedElement'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3618)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("string").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3620)), GALGAS_string ("key").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3621)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3622))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3619)) ;
  var_structAttributeList.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3625)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3626))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3623)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3630)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3630)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3630)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3628))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3628)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                            categoryMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineCategoryMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@semanticTypeForGeneration implementationCppFileName'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outName = object->mAttribute_mTypeProxy.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 434)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                 categoryReader_semanticTypeForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_implementationCppFileName (defineCategoryReader_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@semanticTypeForGeneration hasCppHeaderFile'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticTypeForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (true) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                        categoryReader_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_hasCppHeaderFile (defineCategoryReader_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@semanticTypeForGeneration isPredefined'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outResult = object->mAttribute_mTypeProxy.reader_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 446)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                    categoryReader_semanticTypeForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_isPredefined (defineCategoryReader_semanticTypeForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@semanticTypeForGeneration headerKind'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outHeaderKind = object->mAttribute_mTypeProxy.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 452)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                  categoryReader_semanticTypeForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_headerKind (defineCategoryReader_semanticTypeForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outName = object->mAttribute_mImplementationCppFileName ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                 categoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outHasHeader = object->mAttribute_mHasHeader ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                        categoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@semanticDeclarationWithHeaderForGeneration headerKind'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 481)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                  categoryReader_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_headerKind (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@semanticDeclarationWithHeaderForGeneration isPredefined'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                    categoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_isPredefined (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@selfCopyInExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionAST * object = (const cPtr_selfCopyInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 410)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 411)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy, object->mAttribute_mSelfLocation, var_selfCppName  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 414)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                 categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@hereExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_hereExpressionAST * object = (const cPtr_hereExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_hereExpressionAST) ;
  outArgument_outExpression = GALGAS_hereExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 425)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_hereExpressionAST.mSlotID,
                                                 categoryMethod_hereExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionAST_analyzeSemanticExpression (defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@trueExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 435)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                 categoryMethod_trueExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_analyzeSemanticExpression (defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@falseExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 445)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                 categoryMethod_falseExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_analyzeSemanticExpression (defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalCharExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mCharacter.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 455)), object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 455))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 455)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                 categoryMethod_literalCharExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalStringExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_32322 (object->mAttribute_mStringSequence, kEnumeration_up) ;
  while (enumerator_32322.hasCurrentObject ()) {
    var_s.dotAssign_operation (enumerator_32322.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 467)) ;
    enumerator_32322.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 469)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                 categoryMethod_literalStringExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalDoubleExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 479)), object->mAttribute_mValue.reader_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 479))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 479)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                 categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalUIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 489)), object->mAttribute_mValue.reader_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 489))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 489)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                 categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)), object->mAttribute_mValue.reader_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 499)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalSIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 509)), object->mAttribute_mValue.reader_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 509))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 509)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                 categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 519)), object->mAttribute_mValue.reader_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 519))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 519)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@defaultConstructorExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMapProxy constinArgument_inType,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMapProxy var_type = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 600)) ;
  }
  const enumGalgasBool test_1 = var_type.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 602)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 603)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 606)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 606)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 607)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 608)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 609)) ;
      }
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 612)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                 categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@constructorExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMapProxy constinArgument_inType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMapProxy var_returnedType ;
  GALGAS_unifiedTypeMapProxy var_constructorType ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  GALGAS_bool var_hasCompilerArgument ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType, var_constructorType, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 625)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mConstructorName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 640)), var_constructorType, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 642)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 638)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                 categoryMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

