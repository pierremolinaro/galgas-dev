#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-abstractLexicalRoutineActualArgumentAST.h"
#include "class-greaterOrEqualExpressionForGeneration.h"
#include "class-leftShiftExpressionForGeneration.h"
#include "class-lexicalAttributeInputArgumentAST.h"
#include "class-lexicalAttributeInputOutputArgumentAST.h"
#include "class-lexicalCharacterInputArgumentAST.h"
#include "class-lexicalCharacterIntervalMatchAST.h"
#include "class-lexicalCharacterMatchAST.h"
#include "class-lexicalCharacterSetMatchAST.h"
#include "class-lexicalCurrentCharacterInputArgumentAST.h"
#include "class-lexicalDropInstructionAST.h"
#include "class-lexicalErrorByDefaultAST.h"
#include "class-lexicalErrorInstructionAST.h"
#include "class-lexicalExplicitRuleAST.h"
#include "class-lexicalExpressionAST.h"
#include "class-lexicalFormalInputArgumentAST.h"
#include "class-lexicalFunctionInputArgumentAST.h"
#include "class-lexicalImplicitRuleAST.h"
#include "class-lexicalInstructionAST.h"
#include "class-lexicalLogInstructionAST.h"
#include "class-lexicalOrExpressionAST.h"
#include "class-lexicalRepeatInstructionAST.h"
#include "class-lexicalRewindInstructionAST.h"
#include "class-lexicalRoutineInstructionAST.h"
#include "class-lexicalRoutineOrFunctionFormalInputArgumentAST.h"
#include "class-lexicalSelectInstructionAST.h"
#include "class-lexicalSendDefaultActionAST.h"
#include "class-lexicalSendTerminalByDefaultAST.h"
#include "class-lexicalSimpleSendInstructionAST.h"
#include "class-lexicalStringMatchAST.h"
#include "class-lexicalStringNotMatchAST.h"
#include "class-lexicalStructuredSendInstructionAST.h"
#include "class-lexicalTagInstructionAST.h"
#include "class-lexicalUnsignedInputArgumentAST.h"
#include "class-lexicalWarningInstructionAST.h"
#include "class-literalTypeInExpressionForGeneration.h"
#include "class-lowerOrEqualExpressionForGeneration.h"
#include "class-rightShiftExpressionForGeneration.h"
#include "class-semanticExpressionForGeneration.h"
#include "class-strictGreaterExpressionForGeneration.h"
#include "class-strictLowerExpressionForGeneration.h"
#include "class-templateBlockInstructionAST.h"
#include "class-templateBlockInstructionForGeneration.h"
#include "class-templateClassToTypeOperandAST.h"
#include "class-templateExpressionAST.h"
#include "class-templateInfOrEqualTestAST.h"
#include "class-templateInstructionExpressionAST.h"
#include "class-templateInstructionExpressionForGeneration.h"
#include "class-templateInstructionForeachAST.h"
#include "class-templateInstructionForeachForGeneration.h"
#include "class-templateInstructionGetColumnLocationAST.h"
#include "class-templateInstructionGetColumnLocationForGeneration.h"
#include "class-templateInstructionGotoColumnLocationAST.h"
#include "class-templateInstructionGotoColumnLocationForGeneration.h"
#include "class-templateInstructionIfAST.h"
#include "class-templateInstructionIfForGeneration.h"
#include "class-templateInstructionStringAST.h"
#include "class-templateInstructionStringForGeneration.h"
#include "class-templateInstructionSwitchAST.h"
#include "class-templateInstructionSwitchForGeneration.h"
#include "class-templateLeftShiftOperationAST.h"
#include "class-templateRightShiftOperationAST.h"
#include "class-templateStrictInfTestAST.h"
#include "class-templateStrictSupTestAST.h"
#include "class-templateSupOrEqualTestAST.h"
#include "enum-headerKind.h"
#include "enum-lexicalArgumentModeAST.h"
#include "enum-lexicalTypeEnum.h"
#include "enum-typeKindEnum.h"
#include "func-binaryShiftOperator.h"
#include "func-isComparable.h"
#include "getter-abstractLexicalRoutineActualArgumentAST-generateCocoaRoutineArgument.h"
#include "getter-abstractLexicalRoutineActualArgumentAST-generateRoutineArgument.h"
#include "getter-abstractLexicalRuleAST-generateCocoaCode.h"
#include "getter-abstractLexicalRuleAST-generateCode.h"
#include "getter-lexicalExpressionAST-generateCocoaConditionCode.h"
#include "getter-lexicalExpressionAST-generateConditionCode.h"
#include "getter-lexicalInstructionAST-generateCocoaInstructionCode.h"
#include "getter-lexicalInstructionAST-generateInstructionCode.h"
#include "getter-lexicalRoutineOrFunctionFormalInputArgumentAST-generateCocoaRoutineOrFunctionArgument.h"
#include "getter-lexicalRoutineOrFunctionFormalInputArgumentAST-generateRoutineOrFunctionArgument.h"
#include "getter-lexicalSendDefaultActionAST-generateCocoaDefaultSendCode.h"
#include "getter-lexicalSendDefaultActionAST-generateDefaultSendCode.h"
#include "getter-lexicalTypeEnum-lexicalTypeBaseName.h"
#include "getter-typeKindEnum-kind.h"
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
#include "list-enumConstantList.h"
#include "list-enumerationDescriptorList.h"
#include "list-functionSignature.h"
#include "list-lexicalFunctionCallActualArgumentListAST.h"
#include "list-lexicalFunctionFormalArgumentList.h"
#include "list-lexicalInstructionListAST.h"
#include "list-lexicalRoutineCallActualArgumentListAST.h"
#include "list-lexicalSelectBranchListAST.h"
#include "list-lexicalSendSearchListAST.h"
#include "list-lexicalSentValueList.h"
#include "list-lexicalWhileBranchListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-templateInstructionIfBranchListAST.h"
#include "list-templateInstructionIfBranchListForGeneration.h"
#include "list-templateInstructionListAST.h"
#include "list-templateInstructionListForGeneration.h"
#include "list-templateInstructionSwitchBranchListAST.h"
#include "list-templateInstructionSwitchBranchListForGeneration.h"
#include "list-typedAttributeList.h"
#include "map-attributeMap.h"
#include "map-classMethodMap.h"
#include "map-constantIndexMap.h"
#include "map-constructorMap.h"
#include "map-instanceMethodMap.h"
#include "map-lexicalAttributeMap.h"
#include "map-lexicalExplicitTokenListMap.h"
#include "map-lexicalExplicitTokenListMapMap.h"
#include "map-lexicalFunctionMap.h"
#include "map-lexicalMessageMap.h"
#include "map-lexicalTagMap.h"
#include "map-modifierMap.h"
#include "map-readerMap.h"
#include "map-templateVariableMap.h"
#include "map-terminalMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-abstractLexicalRoutineActualArgumentAST-checkLexicalRoutineCallArgument.h"
#include "method-lexicalExpressionAST-checkLexicalExpression.h"
#include "method-lexicalInstructionAST-checkLexicalInstruction.h"
#include "method-lexicalRoutineOrFunctionFormalInputArgumentAST-checkLexicalFunctionCallArgument.h"
#include "method-lexicalRoutineOrFunctionFormalInputArgumentAST-checkLexicalRoutineCallArgument.h"
#include "method-lexicalSendDefaultActionAST-checkLexicalDefaultAction.h"
#include "method-semanticExpressionForGeneration-generateExpression.h"
#include "method-templateExpressionAST-templateExpressionAnalysis.h"
#include "method-templateInstructionAST-templateInstructionAnalysis.h"
#include "method-templateInstructionForGeneration-templateCodeGeneration.h"
#include "option-galgas_cli_options.h"
#include "proc-templateCodeGenerationForListInstruction.h"
#include "proc-templateInstructionListAnalysis.h"
#include "sortedlist-tokenSortedlist.h"
#include "struct-lexiqueAnalysisContext.h"
#include "struct-predefinedTypes.h"
#include "struct-semanticContext.h"
#include "struct-templateAnalysisContext.h"
#include "uniquemap-unifiedTypeMap.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 933)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 936)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 938)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 939)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 942))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 941)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 944)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 946))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 945)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 950)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                  categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateInfOrEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 965)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 968)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 970)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 971)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 976)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 976)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 978))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 982)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                  categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateStrictSupTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 997)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1000)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1002)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1003)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1006)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1006)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1006))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1005)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1008)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1010))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1009)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1014)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                  categoryMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineCategoryMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateSupOrEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1029)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1032)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1034)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1035)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1038)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1038)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1038))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1037)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1040)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1040)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1042))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1041)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1046)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                  categoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateLeftShiftOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1061)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1064)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1066)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1067)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1070)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1070)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1070))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1069)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1072)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1074)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1074))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1073)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1078)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                  categoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateRightShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1093)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1096)) ;
  GALGAS_unifiedTypeMapProxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1098)) ;
  GALGAS_unifiedTypeMapProxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1099)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1101)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1104)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1106)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1106)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1106))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1105)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1110)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                  categoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateClassToTypeOperandAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateClassToTypeOperandAST * object = (const cPtr_templateClassToTypeOperandAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateClassToTypeOperandAST) ;
  GALGAS_bool joker_48028_26 ; // Joker input parameter
  GALGAS_bool joker_48028_25 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_48028_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_48028_23 ; // Joker input parameter
  GALGAS_bool joker_48028_22 ; // Joker input parameter
  GALGAS_typedAttributeList joker_48028_21 ; // Joker input parameter
  GALGAS_attributeMap joker_48028_20 ; // Joker input parameter
  GALGAS_typedAttributeList joker_48028_19 ; // Joker input parameter
  GALGAS_constructorMap joker_48028_18 ; // Joker input parameter
  GALGAS_readerMap joker_48028_17 ; // Joker input parameter
  GALGAS_modifierMap joker_48028_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_48028_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_48028_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_48028_13 ; // Joker input parameter
  GALGAS_stringlist joker_48028_12 ; // Joker input parameter
  GALGAS_uint joker_48028_11 ; // Joker input parameter
  GALGAS_functionSignature joker_48028_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_48028_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_48028_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_48028_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_48028_6 ; // Joker input parameter
  GALGAS_bool joker_48028_5 ; // Joker input parameter
  GALGAS_unifiedTypeMapProxy joker_48028_4 ; // Joker input parameter
  GALGAS_string joker_48028_3 ; // Joker input parameter
  GALGAS_string joker_48028_2 ; // Joker input parameter
  GALGAS_headerKind joker_48028_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mTypeName, joker_48028_26, joker_48028_25, joker_48028_24, joker_48028_23, joker_48028_22, joker_48028_21, joker_48028_20, joker_48028_19, joker_48028_18, joker_48028_17, joker_48028_16, joker_48028_15, joker_48028_14, joker_48028_13, joker_48028_12, joker_48028_11, joker_48028_10, joker_48028_9, joker_48028_8, joker_48028_7, joker_48028_6, joker_48028_5, joker_48028_4, joker_48028_3, joker_48028_2, joker_48028_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1124)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMapProxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1127)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 1128)), object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1129))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateClassToTypeOperandAST.mSlotID,
                                                  categoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (defineCategoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionStringAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (object->mAttribute_mTemplateString  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1158))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1158)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                   categoryMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionExpressionAST templateInstructionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1167)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1168)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1168)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1169)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1171))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1171)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                   categoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@templateBlockInstructionAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1180)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1181)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1182)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1182)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1182)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1182))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1182)) ;
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1184)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBlockInstructionList, var_blockInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1185)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mLocation, var_blockInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1186)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                   categoryMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineCategoryMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1194))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1194)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                   categoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1202))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1202)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                   categoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionForeachAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1212)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1214)).reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1214)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptor.reader_length (SOURCE_FILE ("templateAnalysis.galgas", 1215)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1216)), GALGAS_string ("expression of '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1216)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1216)) ;
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1219)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBeforeInstructionList, var_beforeInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)) ;
  }
  GALGAS_string var_enumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mIndexIdentifier.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 1222)).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1222)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1222)) ;
  GALGAS_templateVariableMap var_doVariableMap = constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap ;
  GALGAS_string var_cppIndexVarName = GALGAS_string ("index_").add_operation (object->mAttribute_mIndexIdentifier.reader_location (SOURCE_FILE ("templateAnalysis.galgas", 1224)).reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).add_operation (object->mAttribute_mIndexIdentifier.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1224)).reader_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexIdentifier.reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1225)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    var_doVariableMap.modifier_insertKey (object->mAttribute_mIndexIdentifier, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, var_cppIndexVarName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1226)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_53373 (var_enumerationDescriptor, kEnumeration_up) ;
  while (enumerator_53373.hasCurrentObject ()) {
    {
    var_doVariableMap.modifier_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.add_operation (enumerator_53373.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1230)), var_expression.reader_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1230))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1230)), enumerator_53373.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1232)).add_operation (enumerator_53373.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1232)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1232)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1232)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)) ;
    }
    enumerator_53373.gotoNextObject () ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes, var_doVariableMap  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1235)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1239)) ;
  {
  routine_templateInstructionListAnalysis (var_doAnalysisContext, object->mAttribute_mDoInstructionList, var_doInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1240)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1242)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBetweenInstructionList, var_betweenInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1243)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1245)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mAfterInstructionList, var_afterInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1246)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (object->mAttribute_mIsAscending, var_expression, var_enumeratorCppName, var_beforeInstructionList, var_doInstructionList, var_cppIndexVarName, var_betweenInstructionList, var_afterInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1248))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1248)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                   categoryMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateInstructionIfAST templateInstructionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1264)) ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_55029 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_55029.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_55029.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1268)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1268)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1269)), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1269)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1269)) ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_55029.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1272)) ;
    }
    var_templateInstructionIfBranchList.addAssign_operation (var_expression, var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1273)) ;
    enumerator_55029.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1276)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mElseInstructionList, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1277)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1279))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1279)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                   categoryMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionSwitchAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inAnalysisContext, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1291)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1292)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1292)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("templateAnalysis.galgas", 1292)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_switchExpression.reader_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1293)), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (categoryReader_kind (var_switchExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1293)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1295)).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1295)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1297)) ;
  GALGAS_stringset var_namedConstantSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 1298)) ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_56858 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_56858.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_56890 (enumerator_56858.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_56890.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.reader_hasKey (enumerator_56890.current_mValue (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1301)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1301)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1301)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_56890.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_56890.current_mValue (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1302)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)).add_operation (GALGAS_string ("' is not a contant of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)).add_operation (var_switchExpression.reader_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1302)).reader_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)) ;
      }
      const enumGalgasBool test_3 = var_namedConstantSet.reader_hasKey (enumerator_56890.current_mValue (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1304)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1304)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_56890.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_56890.current_mValue (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1305)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1305)).add_operation (GALGAS_string ("' constant is already named in the switch instruction"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1305))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1305)) ;
      }
      var_namedConstantSet.addAssign_operation (enumerator_56890.current_mValue (HERE).reader_string (SOURCE_FILE ("templateAnalysis.galgas", 1307))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)) ;
      enumerator_56890.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_56858.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)) ;
    }
    var_templateInstructionSwitchBranchList.addAssign_operation (enumerator_56858.current_mConstantList (HERE), var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1311)) ;
    enumerator_56858.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstants = var_enumConstantMap.reader_keySet (SOURCE_FILE ("templateAnalysis.galgas", 1314)).substract_operation (var_namedConstantSet, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_missingConstants.reader_count (SOURCE_FILE ("templateAnalysis.galgas", 1315)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_m = GALGAS_string ("all constants should be named in a switch instruction; the following constants are missing:") ;
    cEnumerator_stringset enumerator_57853 (var_missingConstants, kEnumeration_up) ;
    while (enumerator_57853.hasCurrentObject ()) {
      var_m.dotAssign_operation (GALGAS_string ("\n"
        "  - '").add_operation (enumerator_57853.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)) ;
      enumerator_57853.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mSwitchExpressionEndLocation, var_m  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1320)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression, var_templateInstructionSwitchBranchList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1323))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1323)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                   categoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionStringForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("result << ").add_operation (object->mAttribute_mTemplateString.reader_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                              categoryMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@templateInstructionExpressionForGeneration templateCodeGeneration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                              GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("result << ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                              categoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateBlockInstructionForGeneration templateCodeGeneration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 89)) ;
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mBlockInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 90)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 99)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 99))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 99)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                              categoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineCategoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                     GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("columnMarker = result.currentColumn () ;\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 112)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                              categoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 124)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                              categoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@templateInstructionForeachForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mIsAscending.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_up") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_down") ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cEnumerator_").add_operation (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 145)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 148)).add_operation (object->mAttribute_mAfterInstructionList.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const bool nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 152)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 152))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 152)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 153)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBeforeInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 154)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 162)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 165)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 165))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 165)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 166)) ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mDoInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 168)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 178)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 178))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 178)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 179)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBetweenInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 180)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 189)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mIndexCppName.add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 193))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 193)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mEnumeratorCppName.add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 197)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 198)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mAfterInstructionList.reader_length (SOURCE_FILE ("templateCodeGeneration.galgas", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 201)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 201))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 201)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 202)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mAfterInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 203)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 211)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 212)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 215)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 216)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                              categoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9041 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_9041.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9041.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 230)) ;
    GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("templateCodeGeneration.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 231)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 231)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 232)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 232)).add_operation (var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 232)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 232))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 232)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 233)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 233))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 233)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 234)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9041.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 235)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 243)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 244)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 244))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 244)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 245)) ;
    }
    enumerator_9041.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 248)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10189 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_10189.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 257)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 258)) ;
    enumerator_10189.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                              categoryMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 272)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (").add_operation (var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("break ;\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 276)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11072 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_11072.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11104 (enumerator_11072.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11104.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 280)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)).add_operation (enumerator_11104.current_mValue (HERE).reader_string (SOURCE_FILE ("templateCodeGeneration.galgas", 280)).reader_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)).add_operation (GALGAS_string (" : {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280))  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)) ;
      enumerator_11104.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 282)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_11072.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 283)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 291)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 292)) ;
    enumerator_11072.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 295)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                              categoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@lexicalOrExpressionAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callCategoryReader_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 35)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" || ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 36)) ;
  result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 37))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 37)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalOrExpressionAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                             categoryReader_lexicalOrExpressionAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalOrExpressionAST_generateConditionCode (defineCategoryReader_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalCharacterIntervalMatchAST generateConditionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32CharRange (") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mLowerBound.reader_char (SOURCE_FILE ("lexiqueGeneration.galgas", 47)).reader_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 47))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 47)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 48)) ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mUpperBound.reader_char (SOURCE_FILE ("lexiqueGeneration.galgas", 49)).reader_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 49))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 49)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 50)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                             categoryReader_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterIntervalMatchAST_generateConditionCode (defineCategoryReader_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (object->mAttribute_mString.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 58)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)) ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mString.mAttribute_string.reader_length (SOURCE_FILE ("lexiqueGeneration.galgas", 60)).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 60))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (", true)")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 61)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStringMatchAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                             categoryReader_lexicalStringMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStringMatchAST_generateConditionCode (defineCategoryReader_lexicalStringMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@lexicalStringNotMatchAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                    GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mString.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 70))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)) ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mString.mAttribute_string.reader_length (SOURCE_FILE ("lexiqueGeneration.galgas", 72)).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 72))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 72)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (", gLexicalMessage_")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 73)) ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mErrorMessage.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 74))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 74)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 75)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                             categoryReader_lexicalStringNotMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStringNotMatchAST_generateConditionCode (defineCategoryReader_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@lexicalCharacterMatchAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                    GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32Char (") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("lexiqueGeneration.galgas", 84)).reader_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 84))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 84)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 85)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                             categoryReader_lexicalCharacterMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterMatchAST_generateConditionCode (defineCategoryReader_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForCharWithFunction (") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mCharacterSetName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 94))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 94)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 95)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterCategoryReader_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                             categoryReader_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterSetMatchAST_generateConditionCode (defineCategoryReader_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 109)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         categoryReader_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryReader_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("lexiqueGeneration.galgas", 116)).reader_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 116)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         categoryReader_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryReader_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.reader_uint (SOURCE_FILE ("lexiqueGeneration.galgas", 123)).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 123)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         categoryReader_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryReader_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category reader '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                               C_Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("previousChar ()") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         categoryReader_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryReader_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6299 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_6299.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (callCategoryReader_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6299.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 139))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 139)) ;
    enumerator_6299.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 141)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         categoryReader_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryReader_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 155)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterCategoryReader_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                               categoryReader_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineCategoryReader_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callCategoryReader_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 162)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterCategoryReader_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                               categoryReader_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalFormalInputArgumentAST_generateRoutineArgument (defineCategoryReader_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                             GALGAS_string /* inArgument_inScannerClassName */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mDefaultSentTerminal.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 178)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 178)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterCategoryReader_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                               categoryReader_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineCategoryReader_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalErrorByDefaultAST generateDefaultSendCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                      GALGAS_string /* inArgument_inScannerClassName */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (object->mAttribute_mDefaultErrorMessageName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 186)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 186)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterCategoryReader_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                               categoryReader_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalErrorByDefaultAST_generateDefaultSendCode (defineCategoryReader_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                 GALGAS_string inArgument_inScannerClassName,
                                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_9099 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_9099.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (token.mTokenCode == -1) {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_9099.current_mSearchListName (HERE).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)).add_operation (enumerator_9099.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
    enumerator_9099.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (token.mTokenCode == -1) {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 210)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (callCategoryReader_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 211))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 211)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 212)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("enterToken (token) ;\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 213)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                               categoryReader_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStructuredSendInstructionAST_generateInstructionCode (defineCategoryReader_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                             GALGAS_string /* inArgument_inScannerClassName */,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mSentTerminal.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 222)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("enterToken (token) ;\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                               categoryReader_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSimpleSendInstructionAST_generateInstructionCode (defineCategoryReader_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_string inArgument_inScannerClassName,
                                                                                         GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 233)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_10423 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_10423.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10423.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 236))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 236)) ;
    enumerator_10423.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_10583 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_10583.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 241)) ;
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_10583.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 243)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 244)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_10830 (enumerator_10583.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_10830.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10830.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 246))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 246)) ;
      enumerator_10830.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    }
    if (enumerator_10583.hasNextObject ()) {
      result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    }
    enumerator_10583.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 255)) ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                               categoryReader_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRepeatInstructionAST_generateInstructionCode (defineCategoryReader_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalSelectInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSelectInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_string inArgument_inScannerClassName,
                                                                                         GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_11606 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_11606.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 270)) ;
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11606.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 271))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 271)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 272)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 273)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_11855 (enumerator_11606.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_11855.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11855.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 275))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 275)) ;
      enumerator_11855.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)) ;
    }
    if (enumerator_11606.hasNextObject ()) {
      result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    }
    enumerator_11606.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.reader_length (SOURCE_FILE ("lexiqueGeneration.galgas", 282)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 284)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12253 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_12253.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12253.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 286))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 286)) ;
      enumerator_12253.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 288)) ;
    }
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 290)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                               categoryReader_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSelectInstructionAST_generateInstructionCode (defineCategoryReader_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalRoutineInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRoutineInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string /* inArgument_inScannerClassName */,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_routine_").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 299)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 299)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_12834 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_12834.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (callCategoryReader_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_12834.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 301))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 301)) ;
    enumerator_12834.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_12961 (object->mAttribute_mErrorMessageList, kEnumeration_up) ;
  while (enumerator_12961.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", gLexicalMessage_").add_operation (enumerator_12961.current_mValue (HERE).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 304))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 304)) ;
    enumerator_12961.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 306)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                               categoryReader_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRoutineInstructionAST_generateInstructionCode (defineCategoryReader_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                       GALGAS_string /* inArgument_inScannerClassName */,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                               categoryReader_lexicalDropInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalDropInstructionAST_generateInstructionCode (defineCategoryReader_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalErrorInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalErrorInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_string /* inArgument_inScannerClassName */,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (object->mAttribute_mErrorMessageName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 324)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 324)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                               categoryReader_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalErrorInstructionAST_generateInstructionCode (defineCategoryReader_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalWarningInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalWarningInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string /* inArgument_inScannerClassName */,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (object->mAttribute_mWarningMessageName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 333)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 333)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                               categoryReader_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalWarningInstructionAST_generateInstructionCode (defineCategoryReader_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalTagInstructionAST generateInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalTagInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                      GALGAS_string /* inArgument_inScannerClassName */,
                                                                                      GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("const C_LocationInSource currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (GALGAS_string ("const C_LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 342)).add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 343)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 343)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 343)).add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 344)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 344)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                               categoryReader_lexicalTagInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalTagInstructionAST_generateInstructionCode (defineCategoryReader_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalRewindInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRewindInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_string /* inArgument_inScannerClassName */,
                                                                                         GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string ("mTokenEndLocation = endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (GALGAS_string ("mCurrentChar = currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 354)).add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)).add_operation (GALGAS_string ("token.mTokenCode = kToken_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 355)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 356)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 356)).add_operation (GALGAS_string ("enterToken (token) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 356)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                               categoryReader_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRewindInstructionAST_generateInstructionCode (defineCategoryReader_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalLogInstructionAST generateInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalLogInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                      GALGAS_string /* inArgument_inScannerClassName */,
                                                                                      GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterCategoryReader_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                               categoryReader_lexicalLogInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalLogInstructionAST_generateInstructionCode (defineCategoryReader_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@lexicalImplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalImplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                         GALGAS_string /* inArgument_inScannerClassName */,
                                                                         GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList ;
  GALGAS_lexicalExplicitTokenListMap joker_16570_0 ; // Joker input parameter
  GALGAS_bool joker_16590_0 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("lexiqueGeneration.galgas", 385)).method_searchKey (object->mAttribute_mListName, joker_16570_0, var_tokenSortedList, joker_16590_0, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_16647 (var_tokenSortedList, kEnumeration_down) ;
  while (enumerator_16647.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (testForInputUTF32String (kUnicodeString_")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_outGeneratedCode.dotAssign_operation (enumerator_16647.current_mName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 389))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_outGeneratedCode.dotAssign_operation (enumerator_16647.current_mName (HERE).reader_length (SOURCE_FILE ("lexiqueGeneration.galgas", 391)).reader_string (SOURCE_FILE ("lexiqueGeneration.galgas", 391))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", true)) {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_16647.current_mTerminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 393)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  enterToken (token) ;\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 394)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 395)) ;
    enumerator_16647.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalImplicitRuleAST_generateCode (void) {
  enterCategoryReader_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                    categoryReader_lexicalImplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalImplicitRuleAST_generateCode (defineCategoryReader_lexicalImplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@lexicalExplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                         GALGAS_string inArgument_inScannerClassName,
                                                                         GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (") ;
  result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 406))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 406)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 408)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_17572 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_17572.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_17572.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410))  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
    enumerator_17572.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 412)) ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 413)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalExplicitRuleAST_generateCode (void) {
  enterCategoryReader_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                    categoryReader_lexicalExplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalExplicitRuleAST_generateCode (defineCategoryReader_lexicalExplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalOrExpressionAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callCategoryReader_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 35)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" || ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 36)) ;
  result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                  categoryReader_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalOrExpressionAST_generateCocoaConditionCode (defineCategoryReader_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mLowerBound.reader_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 47)).reader_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 47)).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 47))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 47)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" toChar:")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)) ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mUpperBound.reader_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)).reader_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("]")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                  categoryReader_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineCategoryReader_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@lexicalStringMatchAST generateCocoaConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStringMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                      GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (object->mAttribute_mString.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 58)).reader_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 58)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" advance:YES]")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 59)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                  categoryReader_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStringMatchAST_generateCocoaConditionCode (defineCategoryReader_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalStringNotMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStringNotMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mString.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 68)).reader_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 68))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 68)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (" error:& scanningOk]")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 69)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                  categoryReader_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStringNotMatchAST_generateCocoaConditionCode (defineCategoryReader_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@lexicalCharacterMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 78)).reader_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 78)).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 78))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 78)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("]")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                  categoryReader_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterMatchAST_generateCocoaConditionCode (defineCategoryReader_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalCharacterSetMatchAST generateCocoaConditionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterSetMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction:") ;
  result_outGeneratedCode.dotAssign_operation (object->mAttribute_mCharacterSetName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("]")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 89)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterCategoryReader_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                  categoryReader_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineCategoryReader_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 103)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                              categoryReader_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryReader_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)).reader_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 110)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                              categoryReader_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryReader_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.reader_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                              categoryReader_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryReader_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category reader '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                              categoryReader_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryReader_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 131)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 131)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_5942 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_5942.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5942.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 133))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 133)) ;
    if (enumerator_5942.hasNextObject ()) {
      result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 134)) ;
    }
    enumerator_5942.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryReader_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                              categoryReader_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryReader_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                         GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_lexicalType ;
  inArgument_inLexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)).method_searchKey (object->mAttribute_mAttributeName, var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lexicalType.objectCompare (GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 155)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("& ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 156)) ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 158))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 158)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterCategoryReader_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                    categoryReader_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineCategoryReader_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callCategoryReader_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 166)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterCategoryReader_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                    categoryReader_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineCategoryReader_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                  GALGAS_string inArgument_inScannerClassName,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)).add_operation (object->mAttribute_mDefaultSentTerminal.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)).reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 182)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterCategoryReader_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                    categoryReader_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineCategoryReader_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                           GALGAS_string /* inArgument_inScannerClassName */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterCategoryReader_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                    categoryReader_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineCategoryReader_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                      GALGAS_string inArgument_inScannerClassName,
                                                                                                      GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_9162 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_9162.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (mTokenCode == 0) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  mTokenCode = search_into_").add_operation (inArgument_inScannerClassName.reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)).add_operation (enumerator_9162.current_mSearchListName (HERE).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)).add_operation (enumerator_9162.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 212)) ;
    enumerator_9162.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (mTokenCode == 0) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 214)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (callCategoryReader_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 215))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 215)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 216)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                    categoryReader_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  GALGAS_string inArgument_inScannerClassName,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)).add_operation (object->mAttribute_mSentTerminal.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)).reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 225)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                    categoryReader_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@lexicalRepeatInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRepeatInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string inArgument_inScannerClassName,
                                                                                              GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 235)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_10426 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_10426.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10426.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    enumerator_10426.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_10591 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_10591.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (scanningOk && (")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_10591.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 244))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 244)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (")) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 246)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_10851 (enumerator_10591.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_10851.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10851.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 248))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 248)) ;
      enumerator_10851.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 250)) ;
    }
    if (enumerator_10591.hasNextObject ()) {
      result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
    }
    enumerator_10591.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 254)) ;
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 257)) ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 258)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                    categoryReader_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@lexicalSelectInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalSelectInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string inArgument_inScannerClassName,
                                                                                              GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_11647 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_11647.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (scanningOk && (")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_11647.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 273))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 273)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (")) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 275)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_11909 (enumerator_11647.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_11909.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_11909.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 277))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 277)) ;
      enumerator_11909.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)) ;
    }
    if (enumerator_11647.hasNextObject ()) {
      result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
    }
    enumerator_11647.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.reader_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 286)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12312 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_12312.hasCurrentObject ()) {
      result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12312.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 288)) ;
      enumerator_12312.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 290)) ;
    }
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 292)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                    categoryReader_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@lexicalRoutineInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRoutineInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string /* inArgument_inScannerClassName */,
                                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 301)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 301)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_12907 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_12907.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (callCategoryReader_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_12907.current_mLexicalRoutineActualArgument (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 303))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 303)) ;
    enumerator_12907.gotoNextObject () ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 305)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                    categoryReader_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalDropInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalDropInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                            GALGAS_string inArgument_inScannerClassName,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)).add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)).reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 314)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                    categoryReader_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalDropInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@lexicalErrorInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalErrorInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                             GALGAS_string /* inArgument_inScannerClassName */,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                    categoryReader_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@lexicalWarningInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalWarningInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                               GALGAS_string /* inArgument_inScannerClassName */,
                                                                                               GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                    categoryReader_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalTagInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalTagInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           GALGAS_string /* inArgument_inScannerClassName */,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 341)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 341)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 342)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 342))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 342)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                    categoryReader_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalTagInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@lexicalRewindInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalRewindInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string inArgument_inScannerClassName,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 351)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 351)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)).add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)).reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 352)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                    categoryReader_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@lexicalLogInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalLogInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                           GALGAS_string /* inArgument_inScannerClassName */,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryReader_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                    categoryReader_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalLogInstructionAST_generateCocoaInstructionCode (defineCategoryReader_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@lexicalImplicitRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalImplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                              GALGAS_string inArgument_inScannerClassName,
                                                                              GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList ;
  GALGAS_lexicalExplicitTokenListMap joker_16217_0 ; // Joker input parameter
  GALGAS_bool joker_16237_0 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)).method_searchKey (object->mAttribute_mListName, joker_16217_0, var_tokenSortedList, joker_16237_0, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_16294 (var_tokenSortedList, kEnumeration_down) ;
  while (enumerator_16294.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("if (scanningOk && [self testForInputString:@")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 383)) ;
    result_outGeneratedCode.dotAssign_operation (enumerator_16294.current_mName (HERE).reader_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 384))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 384)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string (" advance:YES]) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 385)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("  mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)).add_operation (enumerator_16294.current_mTerminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 386)) ;
    result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 387)) ;
    enumerator_16294.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterCategoryReader_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         categoryReader_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalImplicitRuleAST_generateCocoaCode (defineCategoryReader_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@lexicalExplicitRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                              GALGAS_string inArgument_inScannerClassName,
                                                                              GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 398))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 398)) ;
  result_outGeneratedCode.dotAssign_operation (GALGAS_string (")) {\n")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_17125 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_17125.hasCurrentObject ()) {
    result_outGeneratedCode.dotAssign_operation (callCategoryReader_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_17125.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 402))  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 402)) ;
    enumerator_17125.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 404)) ;
  }
  result_outGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 405)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterCategoryReader_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         categoryReader_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexicalExplicitRuleAST_generateCocoaCode (defineCategoryReader_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                      GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  GALGAS_lexicalSentValueList joker_6271_0 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.reader_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 146)).method_searchKey (object->mAttribute_mDefaultSentTerminal, joker_6271_0, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 146)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterCategoryMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                 categoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineCategoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mDefaultErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 153)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterCategoryMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                 categoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineCategoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@lexicalOrExpressionAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 167)) ;
  callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 168)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              categoryMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineCategoryMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@lexicalCharacterMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                            GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalCharacterSetMatchAST checkLexicalExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  const enumGalgasBool test_0 = ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions.reader_hasKey (object->mAttribute_mCharacterSetName.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 181)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 181)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 181)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_s = GALGAS_string ("undefined test function; available functions are:") ;
    cEnumerator_stringset enumerator_7939 (ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions, kEnumeration_up) ;
    while (enumerator_7939.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  ").add_operation (enumerator_7939.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184)) ;
      enumerator_7939.gotoNextObject () ;
    }
    GALGAS_location location_1 (object->mAttribute_mCharacterSetName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, var_s  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 186)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                    GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@lexicalStringMatchAST checkLexicalExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 200))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              categoryMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@lexicalStringNotMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                            GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 207))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 207)) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessage.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 208)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              categoryMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 226)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 226)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (categoryReader_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 232)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 233)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 234)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 235))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 246)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mCharacter.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 248)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 247)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 260)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mUnsigned.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 262)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 263))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 261)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 274)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 276)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 275)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType ;
  GALGAS_string var_replacementFunctionName ;
  GALGAS_bool joker_12530_0 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.reader_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 291)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList, var_returnedLexicalFormalType, var_replacementFunctionName, joker_12530_0, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 291)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("type error, the function returns an @").add_operation (categoryReader_lexicalTypeBaseName (var_returnedLexicalFormalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 304)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 305)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 306)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 307))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 304)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 311)).objectCompare (object->mAttribute_mFunctionActualArgumentList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 311)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 313)).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)).add_operation (var_lexicalFormalTypeList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 315)).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 315))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_13511 (var_lexicalFormalTypeList, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_13547 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_13511.hasCurrentObject () && enumerator_13547.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_13547.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_13511.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 319)) ;
    enumerator_13511.gotoNextObject () ;
    enumerator_13547.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 341)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 341)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (categoryReader_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 349)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 350))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 347)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 361)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mCharacter.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 375)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mUnsigned.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 376)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 389)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 390)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType ;
  GALGAS_string var_replacementFunctionName ;
  GALGAS_bool joker_17331_0 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.reader_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 406)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList, var_returnedLexicalFormalType, var_replacementFunctionName, joker_17331_0, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 415)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 415))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 415)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("type error, the function returns an @").add_operation (categoryReader_lexicalTypeBaseName (var_returnedLexicalFormalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 419)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 420)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 421)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 419)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 426)).objectCompare (object->mAttribute_mFunctionActualArgumentList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 426)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 428)).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 428)).add_operation (var_lexicalFormalTypeList.reader_length (SOURCE_FILE ("lexiqueCompilation.galgas", 430)).reader_string (SOURCE_FILE ("lexiqueCompilation.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_18312 (var_lexicalFormalTypeList, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_18348 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_18312.hasCurrentObject () && enumerator_18348.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_18348.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_18312.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)) ;
    enumerator_18312.gotoNextObject () ;
    enumerator_18348.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                   GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                   GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 458)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 458)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (categoryReader_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)).add_operation (categoryReader_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 467))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 471)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output mode (!) is required here, not an output/input mode")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  callCategoryMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 483)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 488)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output/input mode (!\?) is required here, not an input mode")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 489)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  cEnumerator_lexicalSendSearchListAST enumerator_21497 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_21497.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_21497.current_mSearchListName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 507)) ;
    }
    GALGAS_lexicalTypeEnum joker_21693_0 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 508)).method_searchKey (enumerator_21497.current_mAttributeName (HERE), joker_21693_0, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 508)) ;
    enumerator_21497.gotoNextObject () ;
  }
  callCategoryMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 510)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                               categoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

