#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractCategoryMethodAST.h"
#include "class-abstractCategoryModifierAST.h"
#include "class-abstractCategoryReaderAST.h"
#include "class-addExpressionAST.h"
#include "class-addExpressionForGeneration.h"
#include "class-andExpressionAST.h"
#include "class-andExpressionForGeneration.h"
#include "class-arrayDeclarationAST.h"
#include "class-categoryMethodAST.h"
#include "class-categoryModifierAST.h"
#include "class-categoryReaderAST.h"
#include "class-classDeclarationAST.h"
#include "class-concatExpressionAST.h"
#include "class-concatExpressionForGeneration.h"
#include "class-constructorExpressionAST.h"
#include "class-constructorExpressionForGeneration.h"
#include "class-defaultConstructorExpressionAST.h"
#include "class-defaultConstructorExpressionForGeneration.h"
#include "class-divisionExpressionAST.h"
#include "class-divisionExpressionForGeneration.h"
#include "class-enumDeclarationAST.h"
#include "class-equalExpressionAST.h"
#include "class-equalExpressionForGeneration.h"
#include "class-externFunctionDeclarationAST.h"
#include "class-externRoutineDeclarationAST.h"
#include "class-externTypeDeclarationAST.h"
#include "class-falseExpressionAST.h"
#include "class-falseExpressionForGeneration.h"
#include "class-filewrapperDeclarationAST.h"
#include "class-graphDeclarationAST.h"
#include "class-greaterOrEqualExpressionAST.h"
#include "class-greaterOrEqualExpressionForGeneration.h"
#include "class-hereExpressionAST.h"
#include "class-hereExpressionForGeneration.h"
#include "class-leftShiftExpressionAST.h"
#include "class-leftShiftExpressionForGeneration.h"
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
#include "class-lowerOrEqualExpressionAST.h"
#include "class-lowerOrEqualExpressionForGeneration.h"
#include "class-mapDeclarationAST.h"
#include "class-mapProxyDeclarationAST.h"
#include "class-moduloExpressionAST.h"
#include "class-moduloExpressionForGeneration.h"
#include "class-multiplicationExpressionAST.h"
#include "class-multiplicationExpressionForGeneration.h"
#include "class-notEqualExpressionAST.h"
#include "class-notEqualExpressionForGeneration.h"
#include "class-onceFunctionDeclarationAST.h"
#include "class-optionCharExpressionForGeneration.h"
#include "class-optionCommentExpressionForGeneration.h"
#include "class-optionExpressionAST.h"
#include "class-optionStringExpressionForGeneration.h"
#include "class-optionValueExpressionForGeneration.h"
#include "class-orExpressionAST.h"
#include "class-orExpressionForGeneration.h"
#include "class-overridingAbstractCategoryMethodAST.h"
#include "class-overridingAbstractCategoryModifierAST.h"
#include "class-overridingAbstractCategoryReaderAST.h"
#include "class-overridingCategoryMethodAST.h"
#include "class-overridingCategoryModifierAST.h"
#include "class-overridingCategoryReaderAST.h"
#include "class-predefinedTypeAST.h"
#include "class-readerCallExpressionAST.h"
#include "class-readerCallExpressionForGeneration.h"
#include "class-rightShiftExpressionAST.h"
#include "class-rightShiftExpressionForGeneration.h"
#include "class-selfCopyInExpressionAST.h"
#include "class-selfCopyInExpressionForGeneration.h"
#include "class-semanticDeclarationAST.h"
#include "class-semanticDeclarationWithHeaderForGeneration.h"
#include "class-semanticExpressionAST.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-semanticTypeForGeneration.h"
#include "class-sortedListDeclarationAST.h"
#include "class-strictGreaterExpressionAST.h"
#include "class-strictGreaterExpressionForGeneration.h"
#include "class-strictLowerExpressionAST.h"
#include "class-strictLowerExpressionForGeneration.h"
#include "class-structDeclarationAST.h"
#include "class-subExpressionAST.h"
#include "class-subExpressionForGeneration.h"
#include "class-trueExpressionAST.h"
#include "class-trueExpressionForGeneration.h"
#include "class-uniqueMapDeclarationAST.h"
#include "class-xorExpressionAST.h"
#include "class-xorExpressionForGeneration.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-methodKind.h"
#include "enum-methodQualifier.h"
#include "enum-predefinedTypeKindEnum.h"
#include "enum-typeKindEnum.h"
#include "func-binaryAddOperator.h"
#include "func-binaryAndOperator.h"
#include "func-binaryConcatOperator.h"
#include "func-binaryDivOperator.h"
#include "func-binaryModOperator.h"
#include "func-binaryMulOperator.h"
#include "func-binaryOrOperator.h"
#include "func-binaryShiftOperator.h"
#include "func-binarySubOperator.h"
#include "func-binaryXorOperator.h"
#include "func-doNotGenererateObjectCompare.h"
#include "func-elementTypeNameSuffix.h"
#include "func-generateDescriptionReaderUtilityMethod.h"
#include "func-isComparable.h"
#include "func-plusEqualOperatorWithExpression.h"
#include "func-plusEqualOperatorWithFieldListNeedsCompilerArg.h"
#include "func-supportWithAccessor.h"
#include "getter-predefinedTypeAST-getSupportedOperatorFlags.h"
#include "getter-predefinedTypeKindEnum-defaultConstructorName.h"
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
#include "list-insertMethodListAST.h"
#include "list-insertOrReplaceDeclarationListAST.h"
#include "list-mapOverrideBlockListAST.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-mapStateList.h"
#include "list-semanticDeclarationListAST.h"
#include "list-semanticExpressionListForGeneration.h"
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
#include "map-modifierMap.h"
#include "map-optionComponentMapForSemanticAnalysis.h"
#include "map-readerMap.h"
#include "map-routineMap.h"
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
#include "option-galgas_cli_options.h"
#include "proc-addCategories.h"
#include "proc-analyzeConstructorInvocation.h"
#include "proc-checkAssignmentTypes.h"
#include "proc-checkDiadicOperator.h"
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
  callCategoryMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 680)) ;
  GALGAS_readerMap var_readerMap ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callCategoryMethod_getReaderMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 681)) ;
  GALGAS_modifierMap var_modifierMap ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callCategoryMethod_getModifierMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_modifierMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 682)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callCategoryMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 683)) ;
  GALGAS_classMethodMap var_classMethodMap ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callCategoryMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 684)) ;
  GALGAS_functionSignature var_addAssignArgumentList ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callCategoryMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 685)) ;
  GALGAS_enumerationDescriptorList var_enumerationList ;
  GALGAS_stringlist var_enumerationVariants ;
  GALGAS_string var_enumeratedTypeName ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callCategoryMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList, var_enumerationVariants, var_enumeratedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 686)) ;
  GALGAS_unifiedTypeMapProxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 692)) ;
  }
  GALGAS_unifiedTypeMapProxy var_enumeratedTypeProxy ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 700)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName, var_enumeratedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 702)) ;
    }
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 710))  COMMA_SOURCE_FILE ("semanticContext.galgas", 710)), var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 705)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 717))  COMMA_SOURCE_FILE ("semanticContext.galgas", 717)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 720)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 721)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 723)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 724)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 725)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, var_enumerationList, var_enumerationVariants, callCategoryReader_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 733)), var_addAssignArgumentList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 735)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 736)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 737)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 738)), GALGAS_bool (false), var_enumeratedTypeProxy, categoryReader_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 741)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 716)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 762)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 765)) ;
  }
  GALGAS_unifiedTypeMapProxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 768)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 771)) ;
  }
  GALGAS_unifiedTypeMapProxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 774)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 776)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 777)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 778)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 779)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 781)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 783)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 784)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 786)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 786)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 787)), GALGAS_string ("inMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 787)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 787)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 789)) ;
  }
  {
  routine_enterInheritedReaderWith_32_Arguments (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 790)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 791)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 792)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 793)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 794)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("overriddenMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 795)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 795)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 796)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 798)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 799)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 800)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 801)), var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 801)) ;
  var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 802)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 802)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 802)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 803)) ;
  var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 804)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 804)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 804)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 805)) ;
  cEnumerator_attributeInCollectionListAST enumerator_35346 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_35346.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_35346.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 807)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 810)), var_attributeTypeIndex, enumerator_35346.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 810)) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_35346.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 811)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 812)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_35346.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 813))  COMMA_SOURCE_FILE ("semanticContext.galgas", 813)) ;
    var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 814)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 814)), enumerator_35346.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 814)) ;
    var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 815)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 815)), enumerator_35346.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 815)) ;
    enumerator_35346.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_36220 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_36220.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_modifierMap.reader_hasKey (enumerator_36220.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 819)) COMMA_SOURCE_FILE ("semanticContext.galgas", 819)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_36220.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_36220.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 820)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 820))  COMMA_SOURCE_FILE ("semanticContext.galgas", 820)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_36220.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 824)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 827)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 822)) ;
      }
    }
    enumerator_36220.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_36676 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_36676.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_modifierMap.reader_hasKey (enumerator_36676.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 834)) COMMA_SOURCE_FILE ("semanticContext.galgas", 834)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_36676.current_mMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_36676.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 835)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 835))  COMMA_SOURCE_FILE ("semanticContext.galgas", 835)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_36676.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 839)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 842)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 837)) ;
      }
    }
    enumerator_36676.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_37181 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_37181.hasCurrentObject ()) {
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_37181.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 851)), var_removeMethodFormalArgumentList, enumerator_37181.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 853)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 855)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 849)) ;
    }
    enumerator_37181.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_37505 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_37505.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_37505.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 861)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 861)), enumerator_37505.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 861))  COMMA_SOURCE_FILE ("semanticContext.galgas", 861)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_37505.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 863)) ;
    }
    {
    GALGAS_functionSignature temp_4 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 867)) ;
    temp_4.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 867)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 867)) ;
    var_readerMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 866)), temp_4, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 868)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 871)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 864)) ;
    }
    enumerator_37505.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticContext.galgas", 876)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location var_insertOrReplaceLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 878)) ;
    {
    var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation  COMMA_SOURCE_FILE ("semanticContext.galgas", 880)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 881)), var_insertMethodFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 884)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 879)) ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_38633 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_38633.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_38633.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 890)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 890)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 890)), enumerator_38633.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 890))  COMMA_SOURCE_FILE ("semanticContext.galgas", 890)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_38633.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 891)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 892)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 893)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 893)), enumerator_38633.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 893)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 894)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 894)), enumerator_38633.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 894)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 897)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 900)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 895)) ;
    }
    enumerator_38633.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 905)) ;
  }
  GALGAS_unifiedTypeMapProxy var_elementTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 918)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 918)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 918)), var_elementTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 916)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 926)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("semanticContext.galgas", 927)), GALGAS_bool (true), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 929)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 930)), var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 936)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 939)).operator_or (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 939)) COMMA_SOURCE_FILE ("semanticContext.galgas", 939)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 939)) COMMA_SOURCE_FILE ("semanticContext.galgas", 939)), var_argumentTypeListForAddAssignWithFieldExpressionList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 941)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 942)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 944)), GALGAS_bool (false), var_elementTypeProxy, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 948)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 922)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 962)) ;
  }
  GALGAS_unifiedTypeMapProxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 965)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 968)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 971)) ;
  }
  GALGAS_unifiedTypeMapProxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 974)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 976)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 977)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 978)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 979)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 981)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 982)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 983)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 984)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 986)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 986)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 988)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 989)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 990)) ;
  }
  {
  routine_enterInheritedReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 991)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 992)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 993)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 994)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 995)) ;
  }
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 997)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 998)) ;
  var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 999)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 999)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 999)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1000)) ;
  var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1001)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1001)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1001)) ;
  cEnumerator_attributeInCollectionListAST enumerator_44338 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_44338.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_44338.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1004)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_44338.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1007)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_44338.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1008))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1008)) ;
    var_insertMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1009)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1009)), enumerator_44338.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1009)) ;
    var_removeMethodFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1010)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1010)), enumerator_44338.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1010)) ;
    enumerator_44338.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_45070 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_45070.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_modifierMap.reader_hasKey (enumerator_45070.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1014)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1014)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_45070.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_45070.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1015)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1015)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1015))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1015)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_45070.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1019)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1022)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1017)) ;
      }
    }
    enumerator_45070.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1028)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1029)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1029)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1030)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1030)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1030)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_string ("enterEdge").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1032)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1033)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1036)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1031)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1040)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1041)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1041)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1041)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1042)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1042)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1042)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_string ("topologicalSort").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1044)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1045)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1047)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1049)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1043)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticContext.galgas", 1053)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    cEnumerator_mapSearchMethodListAST enumerator_46847 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_46847.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_46847.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1057)), var_removeMethodFormalArgumentList, enumerator_46847.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1059)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1061)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1055)) ;
      }
      enumerator_46847.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_2) {
    cEnumerator_mapSearchMethodListAST enumerator_47166 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_47166.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_47166.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1069)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1072)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1067)) ;
      }
      enumerator_47166.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("semanticContext.galgas", 1078)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_unifiedTypeMapProxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1080)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1082))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1082)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1083)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1084)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1086)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1081)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1090))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1090)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1091)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1092)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1092)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1092)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1094)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1089)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1098))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1098)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1099)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1100)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1100)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1100)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1102)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1097)) ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1106))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1106)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1107)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1108)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1108)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1108)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1109)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1111)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1105)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_49041 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_49041.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_49041.current_mOverrideBlockName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1116)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1116))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1116)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1117)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1118)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1120)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1115)) ;
      }
      enumerator_49041.gotoNextObject () ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_49445 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_49445.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_49445.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1127)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1127)), enumerator_49445.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1127))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1127)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_49445.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1129)) ;
    }
    {
    GALGAS_functionSignature temp_4 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1133)) ;
    temp_4.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1133)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1133)) ;
    var_readerMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1132)), temp_4, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1134)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1137)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1130)) ;
    }
    enumerator_49445.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_50106 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_50106.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_50106.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1143)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1143)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)), enumerator_50106.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1143))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)) ;
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_50106.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1144)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1145)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1146)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1146)), enumerator_50106.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1146)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1147)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1147)), enumerator_50106.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1147)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1150)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1153)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1148)) ;
    }
    enumerator_50106.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1158)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1173)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("semanticContext.galgas", 1174)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1176)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1177)), var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1183)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1186)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1186)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1186)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1187)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1188)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1189)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1191)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1193)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1195)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1195)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1196)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1169)) ;
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
  GALGAS_bool joker_52662_3 ; // Joker input parameter
  GALGAS_bool joker_52662_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_52662_1 ; // Joker input parameter
  GALGAS_bool joker_52706_3 ; // Joker input parameter
  GALGAS_typedAttributeList joker_52706_2 ; // Joker input parameter
  GALGAS_attributeMap joker_52706_1 ; // Joker input parameter
  GALGAS_constructorMap joker_52765_11 ; // Joker input parameter
  GALGAS_readerMap joker_52765_10 ; // Joker input parameter
  GALGAS_modifierMap joker_52765_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_52765_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_52765_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_52765_6 ; // Joker input parameter
  GALGAS_stringlist joker_52765_5 ; // Joker input parameter
  GALGAS_uint joker_52765_4 ; // Joker input parameter
  GALGAS_functionSignature joker_52765_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_52765_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_52765_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_52824_6 ; // Joker input parameter
  GALGAS_bool joker_52824_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_52824_4 ; // Joker input parameter
  GALGAS_string joker_52824_3 ; // Joker input parameter
  GALGAS_string joker_52824_2 ; // Joker input parameter
  GALGAS_headerKind joker_52824_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_52662_3, joker_52662_2, joker_52662_1, var_typeKindEnum, joker_52706_3, joker_52706_2, joker_52706_1, var_mapTypedAttributeList, joker_52765_11, joker_52765_10, joker_52765_9, joker_52765_8, joker_52765_7, joker_52765_6, joker_52765_5, joker_52765_4, joker_52765_3, joker_52765_2, joker_52765_1, var_searchMethodList, joker_52824_6, joker_52824_5, joker_52824_4, joker_52824_3, joker_52824_2, joker_52824_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1208)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("semanticContext.galgas", 1218)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1219)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1219)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1219))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1219)) ;
    var_mapTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1220)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1223)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1224)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1225)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1226)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1227)) ;
  GALGAS_unifiedTypeMapProxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1229)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1232)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1235)) ;
  }
  GALGAS_unifiedTypeMapProxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1238)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1240)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1241)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticContext.galgas", 1241)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1241)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1242)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1242)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1242)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1243)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1243)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1243)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1245))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1245)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1244)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1250)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1251)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticContext.galgas", 1251)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1251)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1252)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1252)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1252)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1253)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1253)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1253)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1255))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1255)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1254)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1260)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1260)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1262)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1263)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1263)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1264)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1264)) ;
  cEnumerator_mapSearchMethodListAST enumerator_55492 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_55492.hasCurrentObject ()) {
    {
    var_constructorMap.modifier_insertKey (enumerator_55492.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1266)) ;
    }
    enumerator_55492.gotoNextObject () ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1274)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1275)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1276)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1277)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1278)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1279)) ;
  }
  GALGAS_readerMap var_inheritedReaderMap = var_readerMap ;
  cEnumerator_typedAttributeList enumerator_56455 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_56455.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedReaderMap.reader_hasKey (enumerator_56455.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1283)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1283)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_56589 (var_inheritedReaderMap.reader_keySet (SOURCE_FILE ("semanticContext.galgas", 1285)), kEnumeration_up) ;
      while (enumerator_56589.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_56589.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1286)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1286))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1286)) ;
        if (enumerator_56589.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1287)) ;
        }
        enumerator_56589.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_56455.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined readers: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1289)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1289))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1289)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_readerMap.modifier_insertKey (enumerator_56455.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1294)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1295)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1296)), GALGAS_bool (true), enumerator_56455.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1299)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1292)) ;
      }
    }
    enumerator_56455.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1305)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1320)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("semanticContext.galgas", 1321)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1324)), var_mapTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1331)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1332)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1333)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1334)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1335)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1336)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1337)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1340)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1342)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1343)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1316)) ;
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
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1355)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1356)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1357)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1358)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1359)) ;
  cEnumerator_externTypeConstructorList enumerator_59128 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_59128.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_59128.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1363)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1365)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_59363 (enumerator_59128.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_59363.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_59363.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1368)) ;
      }
      var_arguments.addAssign_operation (enumerator_59363.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_59363.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1369)) ;
      enumerator_59363.gotoNextObject () ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_59128.current_mConstructorName (HERE), var_arguments, GALGAS_bool (true), var_returnedTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1372)) ;
    }
    enumerator_59128.gotoNextObject () ;
  }
  cEnumerator_externTypeReaderList enumerator_59827 (object->mAttribute_mExternTypeReaderList, kEnumeration_up) ;
  while (enumerator_59827.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_59827.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1382)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1384)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_60050 (enumerator_59827.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_60050.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_60050.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1387)) ;
      }
      var_arguments.addAssign_operation (enumerator_60050.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_60050.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1388)) ;
      enumerator_60050.gotoNextObject () ;
    }
    {
    var_readerMap.modifier_insertKey (enumerator_59827.current_mReaderName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1393)), var_arguments, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1395)), GALGAS_bool (true), var_returnedTypeProxy, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1398)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1391)) ;
    }
    enumerator_59827.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_60633 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_60633.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1404)) ;
    cEnumerator_formalParameterListAST enumerator_60736 (enumerator_60633.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_60736.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_60736.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1406)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_60736.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_60736.current_mFormalArgumentPassingMode (HERE), enumerator_60736.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1411)) ;
      enumerator_60736.gotoNextObject () ;
    }
    {
    var_modifierMap.modifier_insertKey (enumerator_60633.current_mModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1416)), var_routineSignature, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1419)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1414)) ;
    }
    enumerator_60633.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_61325 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_61325.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1425)) ;
    cEnumerator_formalParameterListAST enumerator_61428 (enumerator_61325.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_61428.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_61428.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1428)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_61428.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_61428.current_mFormalArgumentPassingMode (HERE), enumerator_61428.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1433)) ;
      enumerator_61428.gotoNextObject () ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_61325.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1438)), var_routineSignature, enumerator_61325.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1442)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1436)) ;
    }
    enumerator_61325.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1451)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("semanticContext.galgas", 1452)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1454)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1455)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1456)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1461)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1462)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1463)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1465)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1466)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1467)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1468)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1469)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1471)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1473)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1447)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1486)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1488)) ;
  }
  GALGAS_unifiedTypeMapProxy var_graphTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1490)) ;
  }
  GALGAS_unifiedTypeMapProxy var_associatedListTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1492)) ;
  }
  GALGAS_unifiedTypeMapProxy var_lstringListTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1494)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1496)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1497)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1498)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1499)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1500)) ;
  GALGAS_formalParameterSignature var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1502)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1503)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1503)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1503)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1504)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1504)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1504)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1505)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1505)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1505)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1506)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1506)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1506)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1508))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1508)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1509)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1511)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1513)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1507)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1517))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1517)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1518)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1520)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1522)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1516)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1527)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1528)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1528)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1528)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1529)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1529)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1529)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1531)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1532)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1534)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1536)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1530)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1540))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1540)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1541)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1543)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1545)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1539)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_enterBaseFinalReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1550)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1558)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1566)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1574)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1582)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1590)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1598)) ;
  }
  {
  routine_enterBaseReaderWith_32_Arguments (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1606)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1619))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1619)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1620)), GALGAS_bool (false), var_graphTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1618)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1625)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1626)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1626)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1626)) ;
  cEnumerator_functionSignature enumerator_68724 (var_associatedListTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1627)), kEnumeration_up) ;
  while (enumerator_68724.hasCurrentObject ()) {
    var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1628)), enumerator_68724.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1628)), enumerator_68724.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 1628)) ;
    enumerator_68724.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_68892 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_68892.hasCurrentObject ()) {
    {
    var_modifierMap.modifier_insertOrReplace (enumerator_68892.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1633)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1636)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1631)) ;
    }
    enumerator_68892.gotoNextObject () ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1643))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1643)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1644)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1645)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1647)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1642)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1651)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1652)), var_stringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1652)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1652)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1654))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1654)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1655)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1658)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1653)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1663)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1664)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1664)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1664)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1665)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1665)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1665)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1667))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1667)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1668)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1671)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1666)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1676)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1677)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1677)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1677)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1679))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1679)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1680)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1683)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1678)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1688)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1703)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("semanticContext.galgas", 1704)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1706)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1707)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1708)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1713)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1714)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1715)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1716)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1717)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1718)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1719)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1720)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1721)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1723)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1725)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1725)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1726)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1699)) ;
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
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1738)) ;
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1739)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1740)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1741)) ;
  GALGAS_unifiedTypeMapProxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1743)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1745)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_73096 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_73096.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1748)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1749)) ;
    cEnumerator__32_lstringlist enumerator_73252 (enumerator_73096.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_73252.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_73252.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1751)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_73252.current_mValue_30_ (HERE), var_associatedTypeProxy, enumerator_73252.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1752)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("semanticContext.galgas", 1753)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_73252.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_73096.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("semanticContext.galgas", 1756)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1756)) ;
    }
    {
    var_constructorMap.modifier_insertOrReplace (enumerator_73096.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1757)) ;
    }
    enumerator_73096.gotoNextObject () ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1765)) ;
  }
  cEnumerator_enumConstantList enumerator_73887 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_73887.hasCurrentObject ()) {
    {
    routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_73887.current_mConstantName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1770)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1770)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1767)) ;
    }
    enumerator_73887.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1776)) ;
  }
  {
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1814)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1814)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1791)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("semanticContext.galgas", 1792)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1794)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1795)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1796)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1801)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1802)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1803)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1804)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1804)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1804)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1805)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1808)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1809)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1811)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1813)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1813)), temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1787)) ;
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
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1897)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_78519 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_78519.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1899)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_78637 (enumerator_78519.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_78637.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_78637.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1902)) ;
      }
      var_templateSignature.addAssign_operation (enumerator_78637.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex, enumerator_78637.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1903)) ;
      enumerator_78637.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap.modifier_insertKey (enumerator_78519.current_mFilewrapperTemplateName (HERE), var_templateSignature, enumerator_78519.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1905)) ;
    }
    enumerator_78519.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1912)) ;
  cEnumerator_lstringlist enumerator_79186 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_79186.hasCurrentObject ()) {
    {
    var_textExtensionMap.modifier_insertKey (enumerator_79186.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1914)) ;
    }
    enumerator_79186.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1917)) ;
  cEnumerator_lstringlist enumerator_79386 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_79386.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap.reader_hasKey (enumerator_79386.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 1919)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_79386.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_79386.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1920)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1920)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1920))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1920)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap.modifier_insertKey (enumerator_79386.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1922)) ;
      }
    }
    enumerator_79386.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1929)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 1929)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1930)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 1932)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1932)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1932)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1932)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticContext.galgas", 1934)).operator_not (SOURCE_FILE ("semanticContext.galgas", 1934)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1935)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1935))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1935)) ;
    var_regularRootFileMap.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath, GALGAS_string ("/"), var_textExtensionMap, var_binaryFileExtensionMap, var_regularRootFileMap, var_wrapperDirectoryMap, var_wrapperFileIndex, var_wrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1941)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.modifier_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateMap, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1953)) ;
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
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1972)) ;
  cEnumerator_attributeInCollectionListAST enumerator_81306 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_81306.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_81306.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1974)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_81523 (enumerator_81306.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_81523.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_81523.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_81523.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_81523.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_81306.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1984)) ;
    enumerator_81306.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_uintType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 1987)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1989)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1993)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1991)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1997)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1998)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1999)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2000)) ;
  cEnumerator_typedAttributeList enumerator_82638 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_82638.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_82638.current_mAttributeTypeProxy (HERE), enumerator_82638.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2002))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2002)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2003)), enumerator_82638.current_mAttributeTypeProxy (HERE), enumerator_82638.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2003)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2004)), enumerator_82638.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 2004)), enumerator_82638.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2004)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2005)), enumerator_82638.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2005)), enumerator_82638.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2005)) ;
    enumerator_82638.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2008)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2009)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2009)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2011))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2011)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2010)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2017)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2018)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2019)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2020)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2020)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2021)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2021)) ;
  }
  cEnumerator_typedAttributeList enumerator_84092 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_84092.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_84092.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2027)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2027)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2027)) ;
      var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_84092.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2025)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2025)), enumerator_84092.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2025))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2025)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2026)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2028)), GALGAS_bool (true), enumerator_84092.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2031)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2024)) ;
      }
    }
    enumerator_84092.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2037)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2039))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2039)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2040)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2042)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2044)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2038)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2048))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2048)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2049)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2051)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2053)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2047)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2057)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2059))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2059)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2060)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2063)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2058)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2067))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2067)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2068)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2071)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2066)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2074)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2074)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2074)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2076))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2076)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2077)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2080)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2075)) ;
  }
  var_modifierOutputFormalArgumentList.drop () ; // drop instruction
  cEnumerator_typedAttributeList enumerator_85969 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_85969.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_85969.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2086)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2087)), enumerator_85969.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2087)), enumerator_85969.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2087)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2088)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2088)), enumerator_85969.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2088)) ;
      {
      var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_85969.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2090)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 2090)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2090)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2090)), enumerator_85969.current_mAttributeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2090))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2090)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2091)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2094)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2089)) ;
      }
    }
    enumerator_85969.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2100)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2100)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2100)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2102))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2102)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2103)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2106)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2101)) ;
  }
  var_modifierInputFormalArgumentList.drop () ; // drop instruction
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2111)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2112)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2113)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2115)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2130)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2131)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2134)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2135)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2140)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)).operator_or (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2143)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2145)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2146)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2147)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2148)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2152)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2152)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2153)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2126)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2165)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2169)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2169)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2169)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2167)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2173)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2174)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2175)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2176)) ;
  cEnumerator_attributeInCollectionListAST enumerator_89647 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_89647.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_89647.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2178)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_89647.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2181)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_89647.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2182)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2183)), var_attributeTypeIndex, enumerator_89647.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2183)) ;
    var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2184)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 2184)), enumerator_89647.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2184)) ;
    enumerator_89647.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2187)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2188)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2188)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2190))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2190)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2189)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2196)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2197)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2199)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2201))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2202)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2205)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2200)) ;
  }
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2209))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2209)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2210)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2213)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2208)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2217)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2219))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2220)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2222)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2218)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2228))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2228)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2229)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2231)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2233)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2227)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2237)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2238)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2239)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2241)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2256)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("semanticContext.galgas", 2257)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2260)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2261)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2266)), var_enumerationDescriptor, var_enumerationVariants, function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2269)).operator_or (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2269)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2269)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2269)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2269)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2271)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2272)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2273)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2274)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2280)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2280)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2281)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2252)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2294)) ;
  }
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2296)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2297)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2298)) ;
  GALGAS_typedAttributeList var_typedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2299)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2300)) ;
  cEnumerator_attributeInCollectionListAST enumerator_94282 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_94282.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_94282.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2302)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2303)), var_attributeTypeIndex, enumerator_94282.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2303)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 2304)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_94282.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2307)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_94282.current_mAttributeName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2308)) ;
    }
    enumerator_94282.gotoNextObject () ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2311))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2311)), var_constructorAttributeTypeList, GALGAS_bool (false), var_structTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2310)) ;
  }
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2318)) ;
  }
  cEnumerator_typedAttributeList enumerator_95068 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_95068.hasCurrentObject ()) {
    {
    routine_enterBaseFinalReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_95068.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2323)), enumerator_95068.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2324)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2320)) ;
    }
    enumerator_95068.gotoNextObject () ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2329)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2331)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2333)) ;
  }
  GALGAS_unifiedTypeMapProxy var_enumeratedType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2346)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType COMMA_SOURCE_FILE ("semanticContext.galgas", 2348)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = GALGAS_string ("default") ;
  cEnumerator_typedAttributeList enumerator_96103 (var_typedAttributeList, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_96103.hasCurrentObject () && bool_1) {
    while (enumerator_96103.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_96103.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2357)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_96103.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2357)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2357)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2357)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_96103.gotoNextObject () ;
      if (enumerator_96103.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2366)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticContext.galgas", 2367)), GALGAS_bool (false), var_typedAttributeList, var_attributeMap, var_typedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2376)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2377)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2378)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2379)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2380)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2381)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2382)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2383)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2384)), GALGAS_bool (false), var_enumeratedType, var_defaultConstructorName, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2388)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2388)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2362)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2401)) ;
  }
  GALGAS_readerMap var_readerMap ;
  GALGAS_modifierMap var_modifierMap ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  GALGAS_typedAttributeList var_inheritedTypedAttributeList ;
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2407)) ;
  GALGAS_unifiedTypeMapProxy var_superClassIndex ;
  GALGAS_bool var_generateHeaderInSeparateFile ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2411)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2412)) ;
    {
    routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2413)) ;
    }
    var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2414)) ;
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2415)) ;
    var_inheritedTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2416)) ;
    var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2417)) ;
    var_generateHeaderInSeparateFile = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_98486 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_98486.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_98486.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2420)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile = GALGAS_bool (true) ;
      }
      enumerator_98486.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2425)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum ;
    GALGAS_readerMap var_inheritedReaderMap ;
    GALGAS_modifierMap var_inheritedModifierMap ;
    GALGAS_instanceMethodMap var_inheritedMethodMap ;
    GALGAS_bool joker_98935_3 ; // Joker input parameter
    GALGAS_bool joker_98935_2 ; // Joker input parameter
    GALGAS_unifiedTypeMapProxy joker_98935_1 ; // Joker input parameter
    GALGAS_bool joker_98965_0 ; // Joker input parameter
    GALGAS_typedAttributeList joker_99029_2 ; // Joker input parameter
    GALGAS_constructorMap joker_99029_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_99119_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_99119_8 ; // Joker input parameter
    GALGAS_stringlist joker_99119_7 ; // Joker input parameter
    GALGAS_uint joker_99119_6 ; // Joker input parameter
    GALGAS_functionSignature joker_99119_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_99119_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_99119_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_99119_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_99119_1 ; // Joker input parameter
    GALGAS_unifiedTypeMapProxy joker_99165_4 ; // Joker input parameter
    GALGAS_string joker_99165_3 ; // Joker input parameter
    GALGAS_string joker_99165_2 ; // Joker input parameter
    GALGAS_headerKind joker_99165_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_98935_3, joker_98935_2, joker_98935_1, var_typeKindEnum, joker_98965_0, var_inheritedTypedAttributeList, var_attributeMap, joker_99029_2, joker_99029_1, var_inheritedReaderMap, var_inheritedModifierMap, var_inheritedMethodMap, joker_99119_9, joker_99119_8, joker_99119_7, joker_99119_6, joker_99119_5, joker_99119_4, joker_99119_3, joker_99119_2, joker_99119_1, var_generateHeaderInSeparateFile, joker_99165_4, joker_99165_3, joker_99165_2, joker_99165_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2430)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2446)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSuperClassName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2447)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2447)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2447))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2447)) ;
    }
    var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2450)) ;
    cEnumerator_modifierMap enumerator_99441 (var_inheritedModifierMap, kEnumeration_up) ;
    while (enumerator_99441.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_99441.current_lkey (HERE), enumerator_99441.current_mKind (HERE), enumerator_99441.current_mParameterList (HERE), enumerator_99441.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2457)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2452)) ;
      }
      enumerator_99441.gotoNextObject () ;
    }
    var_readerMap = GALGAS_readerMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2462)) ;
    cEnumerator_readerMap enumerator_99753 (var_inheritedReaderMap, kEnumeration_up) ;
    while (enumerator_99753.hasCurrentObject ()) {
      {
      var_readerMap.modifier_insertKey (enumerator_99753.current_lkey (HERE), enumerator_99753.current_mKind (HERE), enumerator_99753.current_mArgumentTypeList (HERE), enumerator_99753.current_mDeclarationLocation (HERE), enumerator_99753.current_mHasCompilerArgument (HERE), enumerator_99753.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2471)), enumerator_99753.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2464)) ;
      }
      enumerator_99753.gotoNextObject () ;
    }
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2476)) ;
    cEnumerator_instanceMethodMap enumerator_100127 (var_inheritedMethodMap, kEnumeration_up) ;
    while (enumerator_100127.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_100127.current_lkey (HERE), enumerator_100127.current_mKind (HERE), enumerator_100127.current_mParameterList (HERE), enumerator_100127.current_mDeclarationLocation (HERE), enumerator_100127.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 2484)), enumerator_100127.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2478)) ;
      }
      enumerator_100127.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2490)) ;
  cEnumerator_typedAttributeList enumerator_100528 (var_inheritedTypedAttributeList, kEnumeration_up) ;
  while (enumerator_100528.hasCurrentObject ()) {
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2492)), enumerator_100528.current_mAttributeTypeProxy (HERE), enumerator_100528.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2492)) ;
    enumerator_100528.gotoNextObject () ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_100659 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_100659.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_100659.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2496)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2497)), var_attributeTypeIndex, enumerator_100659.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2497)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_100659.current_mAttributeName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2498)) ;
    }
    const enumGalgasBool test_4 = var_readerMap.reader_hasKey (enumerator_100659.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2499)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2499)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_100659.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_100659.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2500)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2500)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined reader"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2500))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2500)) ;
    }
    enumerator_100659.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_classIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2504)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2510)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2511)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2513))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2513)), var_constructorAttributeTypeList, GALGAS_bool (false), var_classIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2512)) ;
    }
  }
  GALGAS_typedAttributeList var_currentClassTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2520)) ;
  GALGAS_typedAttributeList var_allTypedAttributeList = var_inheritedTypedAttributeList ;
  cEnumerator_attributeInCollectionListAST enumerator_101758 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_101758.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_101758.current_mAttributeTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2524)) ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_101994 (enumerator_101758.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_101994.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_101994.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2528)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_101994.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2530)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter = GALGAS_bool (false) ;
        }
      }
      enumerator_101994.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_101758.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2534)) ;
    var_allTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_101758.current_mAttributeName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 2535)) ;
    const enumGalgasBool test_9 = var_hasGetter.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_readerMap.modifier_insertKey (enumerator_101758.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2539)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2540)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2541)), GALGAS_bool (false), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 2544)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2537)) ;
      }
    }
    enumerator_101758.gotoNextObject () ;
  }
  cEnumerator_typedAttributeList enumerator_102762 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  while (enumerator_102762.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_102762.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_102762.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2553)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 2553)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2553)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2553))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2553)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2554)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2555)), enumerator_102762.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 2555)), enumerator_102762.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2555)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2557)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2552)) ;
      }
    }
    enumerator_102762.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2563)) ;
  }
  GALGAS_string var_defaultConstructorName ;
  const enumGalgasBool test_11 = var_superClassIndex.reader_isNull (SOURCE_FILE ("semanticContext.galgas", 2575)).boolEnum () ;
  if (kBoolTrue == test_11) {
    var_defaultConstructorName = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_11) {
    var_defaultConstructorName = var_superClassIndex.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2578)) ;
  }
  cEnumerator_typedAttributeList enumerator_103803 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  bool bool_12 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_103803.hasCurrentObject () && bool_12) {
    while (enumerator_103803.hasCurrentObject () && bool_12) {
      const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_103803.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2581)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_103803.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2581)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2581)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2581)).boolEnum () ;
      if (kBoolTrue == test_13) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_103803.gotoNextObject () ;
      if (enumerator_103803.hasCurrentObject ()) {
        bool_12 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2589)), var_superClassIndex, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2591)), GALGAS_bool (false), var_allTypedAttributeList, var_attributeMap, var_currentClassTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2600)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2601)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2602)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2604)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2605)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2606)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2607)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2608)), var_generateHeaderInSeparateFile, GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2610)), var_defaultConstructorName, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2612)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2612)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 2613)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2586)) ;
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
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2625)) ;
  cEnumerator_formalParameterListAST enumerator_105475 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_105475.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_105475.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2628)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_105475.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_105475.current_mFormalArgumentPassingMode (HERE), enumerator_105475.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2629)) ;
    enumerator_105475.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.modifier_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2632)) ;
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
  GALGAS_functionSignature var_functionSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2647)) ;
  cEnumerator_formalInputParameterListAST enumerator_106505 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_106505.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_106505.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2650)) ;
    }
    var_functionSignature.addAssign_operation (enumerator_106505.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_106505.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2651)) ;
    enumerator_106505.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapProxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2655)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultTypeIndex, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2657)) ;
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
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2673)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2675)), var_resultTypeIndex, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2675)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2686)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDimension.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the dimension of an array should be > 0")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2687)) ;
  }
  GALGAS_unifiedTypeMapProxy var_arrayTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2691)) ;
  }
  GALGAS_unifiedTypeMapProxy var_elementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2694)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2696)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2697)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2698)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2699)) ;
  GALGAS_unifiedTypeMapProxy var_boolType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("semanticContext.galgas", 2702)) ;
  }
  GALGAS_unifiedTypeMapProxy var_uintType ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2705)) ;
  }
  GALGAS_functionSignature var_uintArgs = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2707)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2709)).isValid ()) {
    uint32_t variant_109298 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2709)).uintValue () ;
    bool loop_109298 = true ;
    while (loop_109298) {
      loop_109298 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2709)))).isValid () ;
      if (loop_109298) {
        loop_109298 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2709)))).boolValue () ;
      }
      if (loop_109298 && (0 == variant_109298)) {
        loop_109298 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2709)) ;
      }
      if (loop_109298) {
        variant_109298 -- ;
        var_uintArgs.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2710)), var_uintType, GALGAS_string ("inSize").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2710)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2710))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2710)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2711)) ;
      }
    }
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2715))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2715)), var_uintArgs, GALGAS_bool (false), var_arrayTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2714)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2721)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2722)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2723)) ;
  }
  {
  var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2725))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2725)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2726)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2728)), GALGAS_bool (true), var_boolType, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2731)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2724)) ;
  }
  {
  var_readerMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2735))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2735)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2736)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2738)), GALGAS_bool (true), var_elementTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2741)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2734)) ;
  }
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2745)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2746)), var_elementTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2746)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2746)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2748)).isValid ()) {
    uint32_t variant_110673 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2748)).uintValue () ;
    bool loop_110673 = true ;
    while (loop_110673) {
      loop_110673 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2748)))).isValid () ;
      if (loop_110673) {
        loop_110673 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2748)))).boolValue () ;
      }
      if (loop_110673 && (0 == variant_110673)) {
        loop_110673 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2748)) ;
      }
      if (loop_110673) {
        variant_110673 -- ;
        var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2749)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2749)), GALGAS_string ("inIndex").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2749)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2749))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2749)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2750)) ;
      }
    }
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2753)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2754)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2757)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2752)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("forceValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2761)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2762)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2765)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2760)) ;
  }
  {
  GALGAS_lstring joker_111282_4 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_111282_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_111282_2 ; // Joker input parameter
  GALGAS_string joker_111282_1 ; // Joker input parameter
  var_modifierFormalArgumentList.modifier_popFirst (joker_111282_4, joker_111282_3, joker_111282_2, joker_111282_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2768)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("invalidateValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2770)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2771)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2774)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2769)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSize").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2778)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2779)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2782)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2777)) ;
  }
  var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2785)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2786)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2786)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2786)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2787)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2787)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2787)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSizeForAxis").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2789)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2790)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2793)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2788)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2801)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("semanticContext.galgas", 2802)), GALGAS_bool (false), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2804)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2805)), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2806)), var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2811)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2812)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2813)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2815)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2816)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2817)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2818)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2819)), GALGAS_bool (false), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2821)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2823)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2823)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2824)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2797)) ;
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
  GALGAS_bool joker_113624_3 ; // Joker input parameter
  GALGAS_bool joker_113624_2 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_113624_1 ; // Joker input parameter
  GALGAS_bool joker_113668_0 ; // Joker input parameter
  GALGAS_attributeMap joker_113727_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_113727_19 ; // Joker input parameter
  GALGAS_constructorMap joker_113727_18 ; // Joker input parameter
  GALGAS_readerMap joker_113727_17 ; // Joker input parameter
  GALGAS_modifierMap joker_113727_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_113727_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_113727_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_113727_13 ; // Joker input parameter
  GALGAS_stringlist joker_113727_12 ; // Joker input parameter
  GALGAS_uint joker_113727_11 ; // Joker input parameter
  GALGAS_functionSignature joker_113727_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_113727_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_113727_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_113727_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_113727_6 ; // Joker input parameter
  GALGAS_bool joker_113727_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_113727_4 ; // Joker input parameter
  GALGAS_string joker_113727_3 ; // Joker input parameter
  GALGAS_string joker_113727_2 ; // Joker input parameter
  GALGAS_headerKind joker_113727_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_113624_3, joker_113624_2, joker_113624_1, var_typeKindEnum, joker_113668_0, var_listTypedAttributeList, joker_113727_20, joker_113727_19, joker_113727_18, joker_113727_17, joker_113727_16, joker_113727_15, joker_113727_14, joker_113727_13, joker_113727_12, joker_113727_11, joker_113727_10, joker_113727_9, joker_113727_8, joker_113727_7, joker_113727_6, joker_113727_5, joker_113727_4, joker_113727_3, joker_113727_2, joker_113727_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2836)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2844)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2845)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2845)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2845))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2845)) ;
    var_listTypedAttributeList = GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2846)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2849)) ;
  GALGAS_readerMap var_readerMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_readerMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2850)) ;
  }
  GALGAS_modifierMap var_modifierMap = GALGAS_modifierMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2851)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2852)) ;
  GALGAS_unifiedTypeMapProxy var_associatedListTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2854)) ;
  }
  GALGAS_unifiedTypeMapProxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2856)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2858)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2859)) ;
  }
  {
  routine_enterInheritedReaderWithoutArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2860)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_readerMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2861)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2861)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2863)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2863)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2865)) ;
  var_enumeratorDescriptor.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2866)) ;
  var_enumeratorDescriptor.addAssign_operation (var_associatedListTypeIndex, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2867)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2869)) ;
  var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2870)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2870)) ;
  cEnumerator_typedAttributeList enumerator_115583 (var_listTypedAttributeList, kEnumeration_up) ;
  while (enumerator_115583.hasCurrentObject ()) {
    var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2872)), enumerator_115583.current_mAttributeTypeProxy (HERE), enumerator_115583.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2872)) ;
    enumerator_115583.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2875)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2876)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2877)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_readerMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2879)) ;
  }
  GALGAS_unifiedTypeMapProxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMapProxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2892)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2892)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2892)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2890)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2900)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("semanticContext.galgas", 2901)), GALGAS_bool (true), GALGAS_typedAttributeList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2903)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2904)), var_listTypedAttributeList, var_constructorMap, var_readerMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2910)), var_enumeratorDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2913)), var_addAssignOperatorDescription, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2915)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2916)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2917)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2918)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2922)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2923)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2896)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2958)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2958))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2958)) ;
  {
  const GALGAS_predefinedTypeAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2959)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2970)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2970)), object->mAttribute_mClassTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2970))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2970)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2971)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2973)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2973)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2973)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2973)) ;
    }
  }
  cEnumerator_attributeInCollectionListAST enumerator_119927 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_119927.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_119927.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2976)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2976)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2976)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2976)) ;
    }
    enumerator_119927.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2988)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2988)), object->mAttribute_mListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2988))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2988)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2989)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_120757 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_120757.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_120757.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2991)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)), enumerator_120757.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2991))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2991)) ;
    }
    enumerator_120757.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3003)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3003)), object->mAttribute_mStructTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3003))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3003)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3004)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_121594 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_121594.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_121594.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3006)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3006)), enumerator_121594.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3006))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3006)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3006)) ;
    }
    enumerator_121594.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3018)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3018)), object->mAttribute_mEnumTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3018))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3018)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3019)) ;
  }
  cEnumerator_enumConstantList enumerator_122427 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_122427.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_122475 (enumerator_122427.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_122475.hasCurrentObject ()) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_122475.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3022)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3022)), enumerator_122475.current_mValue_30_ (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3022))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3022)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3022)) ;
      }
      enumerator_122475.gotoNextObject () ;
    }
    enumerator_122427.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3035)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3035)), object->mAttribute_mSortedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3035))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3035)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3036)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_123316 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_123316.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_123316.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3038)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3038)), enumerator_123316.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3038))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3038)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3038)) ;
    }
    enumerator_123316.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3050)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3050)), object->mAttribute_mArrayTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3050))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3050)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3051)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3052)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3052)), object->mAttribute_mElementTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3052))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3052)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3052)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3063)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3063)), object->mAttribute_mListmapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3063))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3063)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3064)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3065)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3065)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3065))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3065)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3065)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3076)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3076)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3076))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3076)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3077)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_125754 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_125754.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_125754.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3079)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3079)), enumerator_125754.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3079))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3079)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3079)) ;
    }
    enumerator_125754.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3091)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3091)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3091))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3091)) ;
  {
  const GALGAS_uniqueMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3092)) ;
  }
  cEnumerator_attributeInCollectionListAST enumerator_126588 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_126588.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_126588.current_mAttributeTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 3094)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3094)), enumerator_126588.current_mAttributeTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 3094))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3094)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3094)) ;
    }
    enumerator_126588.gotoNextObject () ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3106)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3106)), object->mAttribute_mMapProxyTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3106))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3106)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3107)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)), object->mAttribute_mAssociatedMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3108))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3108)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3119)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3119)), object->mAttribute_mGraphTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3119))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3119)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3120)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3121)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3121)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3121))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3121)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3121)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3132)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3132)), object->mAttribute_mExternTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3132))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3132)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3133)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3144)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3155)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3166)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3177)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3188)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3199)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3210)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3221)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3232)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3243)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3243)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)), object->mAttribute_mCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3243))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3243)) ;
  {
  const GALGAS_categoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3244)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3245)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3245)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3245))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3245)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3245)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3247)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3247)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3247)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3250)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3248)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_135434 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3253)) ;
  if (NULL != objectArray_135434) {
      macroValidSharedObject (objectArray_135434, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_135434->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3254)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3270)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3270)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3270)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3270)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3270)), object->mAttribute_mCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3270))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3270)) ;
  {
  const GALGAS_categoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3271)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3272)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3272)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3272))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3272)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3272)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3274)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3274)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3274)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3277)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3275)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_136719 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3280)) ;
  if (NULL != objectArray_136719) {
      macroValidSharedObject (objectArray_136719, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_136719->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3281)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3296)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3296)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3296)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3296)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3296)), object->mAttribute_mCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3296))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3296)) ;
  {
  const GALGAS_categoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3297)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3298)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3298)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3298))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3298)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3298)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3300)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3300)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3300)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3303)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3301)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_137972 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3306)) ;
  if (NULL != objectArray_137972) {
      macroValidSharedObject (objectArray_137972, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_137972->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3307)) ;
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
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 3322)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3333)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3333)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3333)), object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3333))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3333)) ;
  {
  const GALGAS_abstractCategoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3334)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3335)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3335)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3335))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3335)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3335)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3337)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3337)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3337)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3338)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_139839 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3343)) ;
  if (NULL != objectArray_139839) {
      macroValidSharedObject (objectArray_139839, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_139839->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3344)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3360)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3360)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3360)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3360)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3360)), object->mAttribute_mAbstractCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3360))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3360)) ;
  {
  const GALGAS_abstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3361)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3362)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3362)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3362))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3362)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3362)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3364)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3364)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3364)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3367)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3365)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_141172 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3370)) ;
  if (NULL != objectArray_141172) {
      macroValidSharedObject (objectArray_141172, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_141172->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3371)) ;
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
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3386)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3386)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3386)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3386)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3386)), object->mAttribute_mAbstractCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3386))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3386)) ;
  {
  const GALGAS_abstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3387)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3388)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3388)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 3388))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3388)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3388)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 3390)) COMMA_SOURCE_FILE ("semanticContext.galgas", 3390)).operator_not (SOURCE_FILE ("semanticContext.galgas", 3390)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 3393)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3391)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_142465 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 3396)) ;
  if (NULL != objectArray_142465) {
      macroValidSharedObject (objectArray_142465, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_142465->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3397)) ;
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
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3414)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3416)), GALGAS_string ("lkey").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3417)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3418))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3415)) ;
  cEnumerator_attributeInCollectionListAST enumerator_143291 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_143291.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_143291.current_mAttributeTypeName (HERE), enumerator_143291.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3423))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3420)) ;
    enumerator_143291.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3427)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3427)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3427)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3425))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3425)) ;
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
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3436)) ;
  cEnumerator_attributeInCollectionListAST enumerator_143909 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_143909.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_143909.current_mAttributeTypeName (HERE), enumerator_143909.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3441))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3438)) ;
    enumerator_143909.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3445)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3445)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3445)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3443))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3443)) ;
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
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3454)) ;
  cEnumerator_attributeInCollectionListAST enumerator_144535 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_144535.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_144535.current_mAttributeTypeName (HERE), enumerator_144535.current_mAttributeName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3459))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3456)) ;
    enumerator_144535.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3463)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3463)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3463)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3461))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3461)) ;
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
  GALGAS_attributeInCollectionListAST var_structAttributeList = GALGAS_attributeInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3472)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("string").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3474)), GALGAS_string ("key").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3475)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3476))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3473)) ;
  var_structAttributeList.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 3479)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 3480))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3477)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3484)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 3484)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 3484)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 3482))  COMMA_SOURCE_FILE ("semanticContext.galgas", 3482)) ;
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
  result_outName = object->mAttribute_mTypeProxy.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 528)) ;
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
  result_outResult = object->mAttribute_mTypeProxy.reader_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 540)) ;
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
  result_outHeaderKind = object->mAttribute_mTypeProxy.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 546)) ;
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
  result_outHasHeader = object->mAttribute_mhasHeader ;
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
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 575)) ;
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
    var_type = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 597)) ;
  }
  const enumGalgasBool test_1 = var_type.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 599)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 600)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 603)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 603)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 604)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 606)) ;
      }
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 609)) ;
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
  routine_analyzeConstructorInvocation (constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType, var_constructorType, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 622)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mConstructorName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 637)), var_constructorType, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 639)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 635)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                 categoryMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@readerCallExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readerCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readerCallExpressionAST * object = (const cPtr_readerCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readerCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 653)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 653)) ;
  GALGAS_unifiedTypeMapProxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 654)) ;
  GALGAS_readerMap var_readerMap = var_receiverType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 656)) ;
  GALGAS_functionSignature var_readerFormalArgumentTypeList ;
  GALGAS_methodKind var_kind ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_unifiedTypeMapProxy var_returnedType ;
  GALGAS_stringlist var_fieldList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 662)) ;
  const cMapElement_readerMap * objectArray_40864 = (const cMapElement_readerMap *) var_readerMap.readAccessForWithInstruction (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 663))) ;
  if (NULL != objectArray_40864) {
      macroValidSharedObject (objectArray_40864, cMapElement_readerMap) ;
    var_readerFormalArgumentTypeList = objectArray_40864->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument = objectArray_40864->mAttribute_mHasCompilerArgument ;
    var_returnedType = objectArray_40864->mAttribute_mReturnedType ;
    var_kind = objectArray_40864->mAttribute_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_40864->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, objectArray_40864->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 669)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 673)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 673)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_readerFormalArgumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 674)) ;
      var_hasCompilerArgument = GALGAS_bool (true) ;
      var_returnedType = GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 676)) ;
      var_kind = GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 677)) ;
      cEnumerator_typedAttributeList enumerator_41468 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 678)), kEnumeration_up) ;
      while (enumerator_41468.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapProxy var_attributeType = GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (enumerator_41468.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 679)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 679))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 679)) ;
        GALGAS_readerMap var_aMap = var_attributeType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 680)) ;
        const cMapElement_readerMap * objectArray_41699 = (const cMapElement_readerMap *) var_aMap.readAccessForWithInstruction (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 681))) ;
        if (NULL != objectArray_41699) {
            macroValidSharedObject (objectArray_41699, cMapElement_readerMap) ;
          var_matchingReaderCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 682)) ;
          var_readerFormalArgumentTypeList = objectArray_41699->mAttribute_mArgumentTypeList ;
          var_hasCompilerArgument = objectArray_41699->mAttribute_mHasCompilerArgument ;
          var_returnedType = objectArray_41699->mAttribute_mReturnedType ;
          var_kind = objectArray_41699->mAttribute_mKind ;
          var_fieldList.addAssign_operation (enumerator_41468.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 687))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 687)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, objectArray_41699->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, objectArray_41699->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 689)) ;
          }
        }
        enumerator_41468.gotoNextObject () ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695)).add_operation (GALGAS_string ("' reader, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 695))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 694)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_42504 (var_fieldList, kEnumeration_up) ;
          while (enumerator_42504.hasCurrentObject ()) {
            var_s.dotAssign_operation (enumerator_42504.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 701)) ;
            if (enumerator_42504.hasNextObject ()) {
              var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 702)) ;
            }
            enumerator_42504.gotoNextObject () ;
          }
          GALGAS_location location_8 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (GALGAS_string ("' reader, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 705)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 706))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 704)) ;
          var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
          var_hasCompilerArgument.drop () ; // Release error dropped variable
          var_returnedType.drop () ; // Release error dropped variable
          var_kind.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_readerMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 709)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 711)).add_operation (GALGAS_string ("' type does not define any reader"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 711))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 710)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_9) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_readerMap enumerator_43165 (var_readerMap, kEnumeration_up) ;
        while (enumerator_43165.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_43165.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 716))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 716)) ;
          cEnumerator_functionSignature enumerator_43234 (enumerator_43165.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_43234.hasCurrentObject ()) {
            GALGAS_string temp_11 ;
            const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_43234.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_12) {
              temp_11 = enumerator_43234.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718)) ;
            }else if (kBoolFalse == test_12) {
              temp_11 = GALGAS_string::makeEmptyString () ;
            }
            var_s.dotAssign_operation (GALGAS_string (" \?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718)).add_operation (enumerator_43234.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 718)) ;
            enumerator_43234.gotoNextObject () ;
          }
          var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_43165.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 720))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 720)) ;
          enumerator_43165.gotoNextObject () ;
        }
        GALGAS_string temp_13 ;
        const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_readerMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 724)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_14) {
          temp_13 = GALGAS_string ("readers are") ;
        }else if (kBoolFalse == test_14) {
          temp_13 = GALGAS_string ("reader is") ;
        }
        GALGAS_location location_15 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)).add_operation (GALGAS_string ("' reader; available "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 723)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 724)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 722)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 730)).objectCompare (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 730)))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_location location_17 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_17, GALGAS_string ("calling the '").add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)).add_operation (GALGAS_string ("' reader of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)).add_operation (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 732)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 732)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 732)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 733)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 732)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 733))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 731)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_16) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 735)) ;
    cEnumerator_actualOutputExpressionList enumerator_44247 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_44284 (var_readerFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_44247.hasCurrentObject () && enumerator_44284.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_44247.current_mExpression (HERE).ptr (), enumerator_44284.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 737)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_44284.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_44247.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string temp_19 ;
        const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_44284.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_20) {
          temp_19 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_20) {
          temp_19 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_21 (enumerator_44247.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_21, GALGAS_string ("the selector should be '!").add_operation (enumerator_44284.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 739)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_44284.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 741)), enumerator_44247.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 741)) ;
      }
      var_constructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 742)) ;
      enumerator_44247.gotoNextObject () ;
      enumerator_44284.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_readerCallExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mReaderName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 746)), var_kind, var_receiverExpression, var_fieldList, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 750)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 744)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readerCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_readerCallExpressionAST.mSlotID,
                                                 categoryMethod_readerCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readerCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_readerCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_bool var_optionComponentIsPredefined ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 788)) ;
  GALGAS_bool var_found = var_boolOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 795)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 795)) ;
  GALGAS_unifiedTypeMapProxy var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 797)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found = var_uintOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 798)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 798)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 801)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found = var_stringOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 802)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 802)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 806)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 809)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 811)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 812))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 807)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 813)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 816)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 818)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 819))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 814)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 820)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 823)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 825)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 826))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 821)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 827)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 830)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 832)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 833))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 828)) ;
          }else if (kBoolFalse == test_6) {
            GALGAS_location location_7 (object->mAttribute_mOptionReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_7, GALGAS_string ("only the 'value', 'char', 'string' and 'comment' readers are defined for an option")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 835)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_2) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_48366 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_48366.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_48366.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 840)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 840))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 840)) ;
      enumerator_48366.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_48453 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_48453.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_48453.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 843)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 843)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 843))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 843)) ;
      enumerator_48453.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_48542 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_48542.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_48542.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846)) ;
      enumerator_48542.gotoNextObject () ;
    }
    GALGAS_location location_8 (object->mAttribute_mOptionEntryName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)).add_operation (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 848)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                 categoryMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@concatExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionAST * object = (const cPtr_concatExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 925)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 927)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 930)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 931)).operator_and (function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 931)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 931)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("."), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 928)) ;
  }
  outArgument_outExpression = GALGAS_concatExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 937)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_concatExpressionAST.mSlotID,
                                                 categoryMethod_concatExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionAST_analyzeSemanticExpression (defineCategoryMethod_concatExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 953)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 953)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 956)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 956)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 958)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 961)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 962)).operator_and (function_binaryOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 962)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 962)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 959)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 968)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                 categoryMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineCategoryMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@andExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 984)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 984)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 987)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 987)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 992)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)).operator_and (function_binaryAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 990)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 999)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                 categoryMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineCategoryMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@xorExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1015)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1015)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1018)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1018)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1023)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1024)).operator_and (function_binaryXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1024)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1024)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1021)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                 categoryMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@equalExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1046)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1046)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1049)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1049)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1051)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1052)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1053)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1053)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1053)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1053)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)).add_operation (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1054)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1059)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                 categoryMethod_equalExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_analyzeSemanticExpression (defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@notEqualExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1076)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1076)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1079)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1079)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1081)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1084)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1089)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                 categoryMethod_notEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lowerOrEqualExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMapProxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1106)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1106)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1111)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1112)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1113)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1113)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1113)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1114)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1117)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1117)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1140)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1140)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1143)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1145)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1146)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1147)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1147)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1147)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1149)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1149)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1149))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1148)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1152)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1157)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1174)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1174)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1177)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1177)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1179)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1180)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1181)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1181)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1183)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1183))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1182)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1187))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1186)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1191)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1208)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1208)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1213)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1215)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1215)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1215)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1216)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1220)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1225)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1247)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1249)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1249)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1249)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1250)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1255)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1255)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1255))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1259)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1276)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1281)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1282)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1283)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1285)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1285)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1285))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1284)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1287)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1288)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1293)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1310)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1310)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1313)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1315)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1318)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)).operator_and (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1316)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1325)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1341)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1341)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1344)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1344)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1346)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1349)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)).operator_and (function_binarySubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1347)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1356)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1372)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1372)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1375)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1375)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1377)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1380)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1381)).operator_and (function_binaryMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1381)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1381)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1378)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1387)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1403)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1403)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1408)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1411)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1412)).operator_and (function_binaryDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1412)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1412)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1418)) ;
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
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1434)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1434)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMapProxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1437)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1437)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1439)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1442)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1443)).operator_and (function_binaryModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1443)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1443)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1440)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1449)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                 categoryMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

