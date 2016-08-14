#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-25.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 732)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_35653 ;
  GALGAS_string var_cppName_35674 ;
  {
  GALGAS_string joker_35676 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_35653, var_cppName_35674, joker_35676, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_35697 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_35697.objectCompare (var_type_35653)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 751)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)).add_operation (var_type_35653.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 752)).add_operation (var_expectedType_35697.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 753)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 753)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 753)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 751)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_35674.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 755)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 755)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 755))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 755)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)) ;
  }
  GALGAS_string var_cppName_36720 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_36844 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type_36844, var_cppName_36720, var_cppName_36720, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_37064 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_37064.objectCompare (var_type_36844)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 774)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)).add_operation (var_type_36844.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 775)).add_operation (var_expectedType_37064.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 776)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 774)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_36720, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 778)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 789)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)) ;
  }
  GALGAS_string var_cppName_38092 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 792)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_38216 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 793)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type_38216, var_cppName_38092, var_cppName_38092, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 794)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_38429 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_38429.objectCompare (var_type_38216)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 797)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)).add_operation (var_type_38216.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 798)).add_operation (var_expectedType_38429.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 799)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 799)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 797)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_38092, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 801)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 801)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 801)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 801))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 801)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@predefinedTypeAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_predefinedTypeAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_lstring var_nameForUsefullness_7576 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 112)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_7576, var_nameForUsefullness_7576, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 113)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 116)), GALGAS_primitiveTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 118)), object->mAttribute_mPredefinedTypeName, object->mAttribute_mKind  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 117)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_predefinedTypeAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         extensionMethod_predefinedTypeAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_semanticAnalysis (defineExtensionMethod_predefinedTypeAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_13880 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 250)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_13880, var_nameForUsefullness_13880, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 251)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_14040 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 253)) ;
  cEnumerator_formalInputParameterListAST enumerator_14115 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14115.hasCurrentObject ()) {
    var_formalArgumentList_14040.addAssign_operation (enumerator_14115.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_14115.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)), enumerator_14115.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 258)), enumerator_14115.current_mFormalArgumentName (HERE), enumerator_14115.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255)) ;
    enumerator_14115.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 263)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 266)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 267)), var_formalArgumentList_14040, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 269))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 264)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 262)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_15211 = function_procedureNameForUsefulEntitiesGraph (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_15211, var_nameForUsefullness_15211, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 284)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_15371 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 286)) ;
  cEnumerator_formalParameterListAST enumerator_15441 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_15441.hasCurrentObject ()) {
    var_formalArgumentList_15371.addAssign_operation (enumerator_15441.current_mFormalSelector (HERE), enumerator_15441.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_15441.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 291)), enumerator_15441.current_mFormalArgumentName (HERE), enumerator_15441.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 293))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 288)) ;
    enumerator_15441.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 296)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 299)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 300)), var_formalArgumentList_15371  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 297)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 295)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@procDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_16446 = function_procedureNameForUsefulEntitiesGraph (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 315)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_16446, var_nameForUsefullness_16446, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 316)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_16623 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 318)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_16717 ;
  GALGAS_analysisContext var_analysisContext_16739 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 323)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 325))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 320)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefullness_16446, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_16739, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 331)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 332)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 333)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList_16717, var_formalArgumentList_16623, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 342)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 345)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 346)), var_formalArgumentList_16623, GALGAS_bool (false), var_instructionList_16717  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 343)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 341)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                         extensionMethod_procDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procDeclarationAST_semanticAnalysis (defineExtensionMethod_procDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_21421 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 442)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_21421, var_nameForUsefullness_21421, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 443)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21657 ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_21723 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_21758 ;
  GALGAS_string var_resultVariableCppName_21790 ;
  GALGAS_analysisContext var_analysisContext_21812 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 452)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 454))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 449)) ;
  {
  routine_analyzeFunctionBody (var_nameForUsefullness_21421, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21812, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 460)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList_21723, var_returnType_21758, var_resultVariableCppName_21790, var_semanticInstructionListForGeneration_21657, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 455)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 473)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 476)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 477)), var_formalInputParameterList_21723, var_returnType_21758, var_resultVariableCppName_21790, var_semanticInstructionListForGeneration_21657  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 474)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 472)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_23213 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 495)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_23213, var_nameForUsefullness_23213, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 496)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_23449 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_23484 ;
  GALGAS_string var_resultVariableCppName_23516 ;
  GALGAS_analysisContext var_analysisContext_23538 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 504)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 506))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 501)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_23984 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefullness_23213, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23538, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 511)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 512)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_23984, var_returnType_23484, var_resultVariableCppName_23516, var_semanticInstructionListForGeneration_23449, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 507)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 525)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 528)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 529)), var_returnType_23484, var_resultVariableCppName_23516, var_semanticInstructionListForGeneration_23449  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 526)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 524)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_25392 = function_filewrapperNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 550)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_25392, var_nameForUsefullness_25392, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 551)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25681 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25731 ;
  GALGAS_lstring joker_25633 ; // Joker input parameter
  GALGAS_lstringlist joker_25640 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25737_2 ; // Joker input parameter
  GALGAS_bool joker_25737_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_25633, joker_25640, var_wrapperFileMap_25681, var_wrapperDirectoryMap_25731, joker_25737_2, joker_25737_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 553)) ;
  GALGAS_string var_absoluteSourcePath_25797 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 563)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath_25797 = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath_25797 = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 566)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath_25797.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 568)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 568)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 569)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25797, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_26270 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 572)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_26351 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_26351.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_26351.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 574)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 574)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_26351.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 575)), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25797, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      }
      GALGAS_string var_absoluteTemplatePath_26625 = var_absoluteSourcePath_25797.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 577)).add_operation (enumerator_26351.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 577)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_26738 ;
      var_resultingInstructionList_26738.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_26625, enumerator_26351.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 580))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)), var_resultingInstructionList_26738  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
      GALGAS_templateVariableMap var_templateVariableMap_26979 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 582)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_27035 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27136 (enumerator_26351.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_27136.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_27156 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_27136.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
        GALGAS_string var_cppVarName_27274 = GALGAS_string ("in_").add_operation (enumerator_27136.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 586)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 586)) ;
        {
        var_templateVariableMap_26979.setter_insertKey (enumerator_27136.current_mFormalArgumentName (HERE), var_type_27156, var_cppVarName_27274, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
        }
        var_filewrapperTemplateFormalInputParameters_27035.addAssign_operation (enumerator_27136.current_mFormalTemplateSelector (HERE), var_type_27156, var_cppVarName_27274, enumerator_27136.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)) ;
        enumerator_27136.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_27626 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_27702 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_26979  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
      {
      routine_templateInstructionListAnalysis (var_templateAnalysisContext_27702, var_resultingInstructionList_26738, var_templateInstructionListForGeneration_27626, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 596)) ;
      }
      var_filewrapperTemplateListForGeneration_26270.addAssign_operation (enumerator_26351.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 599)), var_filewrapperTemplateFormalInputParameters_27035, var_templateInstructionListForGeneration_27626  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 598)) ;
      enumerator_26351.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 605)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 609)), object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 610)), var_wrapperFileMap_25681, var_wrapperDirectoryMap_25731, var_filewrapperTemplateListForGeneration_26270  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 606)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 604)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_lstring var_nameForUsefullness_29620 = function_optionNameForUsefulEntitiesGraph (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 632)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_29620, var_nameForUsefullness_29620, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 633)) ;
  }
  GALGAS_bool var_isPredefined_29884 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_29929 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_29974 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_30021 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_30072 ;
  constinArgument_inSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_isPredefined_29884, var_boolOptionMap_29929, var_uintOptionMap_29974, var_stringOptionMap_30021, var_stringListOptionMap_30072, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 635)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 645)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 648)), var_isPredefined_29884, object->mAttribute_mOptionComponentName.mAttribute_string, var_boolOptionMap_29929, var_uintOptionMap_29974, var_stringOptionMap_30021, var_stringListOptionMap_30072  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 646)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 644)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_nameForUsefullness_30980 = function_syntaxNameForUsefulEntitiesGraph (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 669)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_30980, var_nameForUsefullness_30980, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 670)) ;
  }
  GALGAS_terminalMap var_terminalMap_31298 ;
  GALGAS_indexingListAST var_indexingListAST_31340 ;
  GALGAS_lstring var_indexingDirectory_31376 ;
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap_31298, var_indexingListAST_31340, var_indexingDirectory_31376, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 672)) ;
  GALGAS_stringset var_indexNameSet_31461 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 679)) ;
  cEnumerator_indexingListAST enumerator_31504 (var_indexingListAST_31340, kEnumeration_up) ;
  while (enumerator_31504.hasCurrentObject ()) {
    var_indexNameSet_31461.addAssign_operation (enumerator_31504.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 681)) ;
    enumerator_31504.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_31576 = var_indexingDirectory_31376.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 683)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 683)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 685)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName_31740 = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_32174 ;
    {
    routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefullness_30980, ioArgument_ioUsefulEntitiesGraph, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mSyntaxComponentName.mAttribute_string, var_lexiqueName_31740, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_31298, var_indexNameSet_31461, var_hasIndexing_31576, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration_32174, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_32174, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 718)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
  }
  GALGAS_lstring var_nameForUsefullness_32902 = function_grammarNameForUsefulEntitiesGraph (object->mAttribute_mGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_32902, var_nameForUsefullness_32902, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_33193 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 725)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_33273 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 726)) ;
  GALGAS_lstring var_lexiqueComponentName_33309 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 727)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_33433 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_33483 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
  GALGAS_uint var_addedNonTerminalCount_33518 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_33552 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_33552.hasCurrentObject ()) {
    GALGAS_uint var_addedNonTerminalCountRef_33594 = var_addedNonTerminalCount_33518 ;
    GALGAS_string var_syntaxComponentName_33646 = enumerator_33552.current_mValue (HERE).mAttribute_string ;
    GALGAS_lstring var_lexiqueName_33780 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_33849 ;
    GALGAS_syntaxRuleListAST var_ruleList_33888 ;
    GALGAS_bool var_hasTranslateFeature_33925 ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_33552.current_mValue (HERE), var_lexiqueName_33780, var_nonterminalDeclarationList_33849, var_ruleList_33888, var_hasTranslateFeature_33925, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature_33925.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 742)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_33552.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 743)), GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature_33925.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 744)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 744)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 745)), GALGAS_string ("as '").add_operation (enumerator_33552.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_33309.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName_33309 = var_lexiqueName_33780 ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName_33780.mAttribute_string.objectCompare (var_lexiqueComponentName_33309.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_33552.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 751)), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_33780.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 752)).add_operation (var_lexiqueComponentName_33309.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 752)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_33273, var_nonterminalDeclarationList_33849, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_33273, var_ruleList_33888, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_33273, enumerator_33552.current_mValue (HERE), var_ruleList_33888, var_actuallyUsedTerminalSymbolMap_33193, var_syntaxComponentListForGrammarAnalysis_33433, var_addedNonTerminalCount_33518, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 766)) ;
    }
    GALGAS_uint var_i_35336 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_33518.isValid ()) {
      uint32_t variant_35349 = var_addedNonTerminalCount_33518.uintValue () ;
      bool loop_35349 = true ;
      while (loop_35349) {
        loop_35349 = GALGAS_bool (kIsStrictInf, var_i_35336.objectCompare (var_addedNonTerminalCount_33518.substract_operation (var_addedNonTerminalCountRef_33594, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 775)))).isValid () ;
        if (loop_35349) {
          loop_35349 = GALGAS_bool (kIsStrictInf, var_i_35336.objectCompare (var_addedNonTerminalCount_33518.substract_operation (var_addedNonTerminalCountRef_33594, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 775)))).boolValue () ;
        }
        if (loop_35349 && (0 == variant_35349)) {
          loop_35349 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 775)) ;
        }
        if (loop_35349) {
          variant_35349 -- ;
          var_nonTerminalToAddList_33483.addAssign_operation (var_syntaxComponentName_33646, var_i_35336  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 776)) ;
          var_i_35336.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
        }
      }
    }
    enumerator_33552.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet_35645 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
  GALGAS_lstring var_inIndexingDirectory_35865 ;
  GALGAS_terminalMap joker_35753 ; // Joker input parameter
  GALGAS_indexingListAST joker_35789 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName_33309, joker_35753, joker_35789, var_inIndexingDirectory_35865, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
  GALGAS_bool var_hasIndexing_35893 = var_inIndexingDirectory_35865.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 788)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
  const enumGalgasBool test_8 = var_hasIndexing_35893.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 789)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 789)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 790)), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_33309.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 790)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing_35893.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 791)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 791)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mAttribute_mHasIndexing.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 792)), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_33309.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 792)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)) ;
    }
  }
  GALGAS_uint var_startSymbolIndex_36475 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_36547 ;
  var_nonTerminalMapForGrammarAnalysis_33273.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex_36475, var_startSymbolAltMap_36547, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 796)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis_33273.getter_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)), var_startSymbolAltMap_36547, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 802)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_36927 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 809)) ;
  cEnumerator_lstringlist enumerator_36967 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_36967.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_37054 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_37056 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_33273.method_searchKey (enumerator_36967.current_mValue (HERE), var_nonterminalIndex_37054, joker_37056, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 811)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_36927.setter_insertKey (enumerator_36967.current_mValue (HERE), var_nonterminalIndex_37054, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 812)) ;
    }
    enumerator_36967.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_37336 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 815)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_37386 (var_nonTerminalMapForGrammarAnalysis_33273, kEnumeration_up) ;
  while (enumerator_37386.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_37336.addAssign_operation (enumerator_37386.current_lkey (HERE), enumerator_37386.current_mNonTerminalIndex (HERE), enumerator_37386.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
    enumerator_37386.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 823)), var_nonTerminalMapForGrammarAnalysis_33273, var_syntaxComponentListForGrammarAnalysis_33433, object->mAttribute_mStartSymbolName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 821)) ;
    }
  }
  GALGAS_stringset var_implementationFileHeader_38193 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 832)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_38252 (var_nonTerminalMapForGrammarAnalysis_33273, kEnumeration_up) ;
  while (enumerator_38252.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_38313 (enumerator_38252.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_38313.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_38354 (enumerator_38313.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_38354.hasCurrentObject ()) {
        switch (enumerator_38354.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_38479 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_38354.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)) ;
            extensionMethod_addHeaderFileName (var_t_38479, var_implementationFileHeader_38193, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 839)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_38354.gotoNextObject () ;
      }
      enumerator_38313.gotoNextObject () ;
    }
    enumerator_38252.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_implementationFileHeader_38193 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 846)) ;
  }
  GALGAS_string var_HTMLFilePath_38912 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)).add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)) ;
  GALGAS_string var_grammarCppFile_39450 ;
  GALGAS_string var_grammarHTMLHelperContents_39493 ;
  {
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 862)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 851)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex_36475, var_lexiqueComponentName_33309.mAttribute_string, var_actuallyUsedTerminalSymbolMap_33193, var_syntaxComponentListForGrammarAnalysis_33433, var_unusedNonTerminalSymbolsForGrammar_36927, var_HTMLFilePath_38912, var_nonTerminalSymbolSortedListForGrammarAnalysis_37336, var_hasIndexing_35893, temp_14, var_grammarCppFile_39450, var_grammarHTMLHelperContents_39493, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 850)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_HTMLFilePath_38912.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 868)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)) ;
    GALGAS_bool joker_39806 ; // Joker input parameter
    var_grammarHTMLHelperContents_39493.method_writeToFileWhenDifferentContents (var_HTMLFilePath_38912, joker_39806, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
  }else if (kBoolFalse == test_16) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_38912, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 871)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 878)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName_33309.mAttribute_string, var_nonTerminalMapForGrammarAnalysis_33273, var_nonTerminalToAddList_33483, var_hasIndexing_35893, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile_39450  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 876)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@lexiqueComponentAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_nameForUsefullness_40816 = function_lexiqueNameForUsefulEntitiesGraph (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefullness_40816, var_nameForUsefullness_40816, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_41063 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_41194 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_41194, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 907)) ;
  }
  cEnumerator_externRoutineListAST enumerator_41334 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_41334.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_41378 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 910)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_41464 (enumerator_41334.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_41464.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_41516 ;
      var_lexicalTypeMap_41063.method_searchKey (enumerator_41464.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_41516, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 913)) ;
      var_lexicalRoutineFormalArgumentList_41378.addAssign_operation (enumerator_41464.current_mPassingMode (HERE), var_lexicalFormalArgumentType_41516, enumerator_41464.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 914))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)) ;
      enumerator_41464.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_41194.setter_insertKey (enumerator_41334.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_41378, enumerator_41334.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)) ;
    }
    enumerator_41334.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_41939 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_41939, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 920)) ;
  }
  cEnumerator_externFunctionListAST enumerator_42083 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_42083.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_42128 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 923)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_42216 (enumerator_42083.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_42216.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_42268 ;
      var_lexicalTypeMap_41063.method_searchKey (enumerator_42216.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_42268, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 926)) ;
      var_lexicalFunctionFormalArgumentList_42128.addAssign_operation (var_lexicalFormalArgumentType_42268, enumerator_42216.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 927))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 927)) ;
      enumerator_42216.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_42496 ;
    var_lexicalTypeMap_41063.method_searchKey (enumerator_42083.current_mReturnedTypeName (HERE), var_returnedArgumentType_42496, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 930)) ;
    {
    var_lexicalFunctionMap_41939.setter_insertKey (enumerator_42083.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_42128, var_returnedArgumentType_42496, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 931)) ;
    }
    enumerator_42083.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 946)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 935)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 936)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 938)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 940)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 941)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 942)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 943)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 944)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 945)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 946)) ;
  GALGAS_stringset var_externUnicodeTestFunctions_42802 = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_43172 = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap_41194, var_lexicalFunctionMap_41939, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 953)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 954)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 955)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 956)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 957)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 958)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 959)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 960)), var_externUnicodeTestFunctions_42802  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 949)) ;
  GALGAS_uint var_styleIndex_43658 = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_43692 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_43692.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_43172.mAttribute_mStyleMap.setter_insertKey (enumerator_43692.current_mName (HERE), enumerator_43692.current_mComment (HERE), var_styleIndex_43658, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 966)) ;
    }
    var_styleIndex_43658.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 967)) ;
    enumerator_43692.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_41063, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext_43172.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 970)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_44092 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_44092.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_44124 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_44092.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 978)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 978)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_44231 ; // Joker input parameter
      var_lexiqueAnalysisContext_43172.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 979)).method_searchKey (enumerator_44092.current_mStyle (HERE), joker_44231, var_terminalStyleIndex_44124, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 979)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_44286 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 981)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_44345 (enumerator_44092.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_44345.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_44392 ;
      var_lexiqueAnalysisContext_43172.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_44345.current_mAttributeName (HERE), var_attributeLexicalType_44392, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 984)) ;
      var_argumentTypeList_44286.addAssign_operation (enumerator_44345.current_mFormalSelector (HERE), enumerator_44345.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_44392  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 985)) ;
      enumerator_44345.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_43172.mAttribute_mTerminalMap.setter_insertKey (enumerator_44092.current_mName (HERE), var_argumentTypeList_44286, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_44697 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_44731 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_44764 (enumerator_44092.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_44764.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_44764.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 991)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection_44731.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection_44731 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_44764.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 995)), GALGAS_string ("the 'nonAtomicSelection' feature is already set"), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_44764.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 997)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_44764.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 998)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark_44697.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_44764.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1000)), GALGAS_string ("the 'templateEndMark' feature is already set"), fixItArray8  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1000)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark_44697 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_44764.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_43172.mAttribute_mTerminalList.addAssign_operation (enumerator_44092.current_mName (HERE), var_argumentTypeList_44286, enumerator_44092.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1008)), var_isEndOfTemplateMark_44697, var_atomicSelection_44731, var_terminalStyleIndex_44124  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1005)) ;
    enumerator_44092.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_45549 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_45549.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_45581 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_45549.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1015)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1015)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_45688 ; // Joker input parameter
      var_lexiqueAnalysisContext_43172.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 1016)).method_searchKey (enumerator_45549.current_mStyle (HERE), joker_45688, var_terminalStyleIndex_45581, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1016)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_45743 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1018)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_45802 (enumerator_45549.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_45802.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_45849 ;
      var_lexiqueAnalysisContext_43172.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_45802.current_mAttributeName (HERE), var_attributeLexicalType_45849, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1021)) ;
      var_argumentTypeList_45743.addAssign_operation (enumerator_45802.current_mFormalSelector (HERE), enumerator_45802.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_45849  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1022)) ;
      enumerator_45802.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_46073 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1024)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_46138 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 1025)) ;
    cEnumerator_lexicalListEntryListAST enumerator_46199 (enumerator_45549.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_46199.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_46235 = enumerator_45549.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1027)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_46199.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1027)) ;
      GALGAS_bool var_isEndOfTemplateMark_46366 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_46402 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_46438 (enumerator_46199.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_46438.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_46438.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1031)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection_46402.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection_46402 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_46438.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1035)), GALGAS_string ("the 'nonAtomicSelection' feature is already set"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1035)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_46438.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1037)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_46438.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1038)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here"), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1038)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark_46366.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_46438.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1040)), GALGAS_string ("the 'templateEndMark' feature is already set"), fixItArray16  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1040)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark_46366 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_46438.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_43172.mAttribute_mTerminalList.addAssign_operation (enumerator_46199.current_mTerminalSpelling (HERE), var_argumentTypeList_45743, var_syntaxErrorMessage_46235, var_isEndOfTemplateMark_46366, var_atomicSelection_46402, var_terminalStyleIndex_45581  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1045)) ;
      {
      var_lexiqueAnalysisContext_43172.mAttribute_mTerminalMap.setter_insertKey (enumerator_46199.current_mTerminalSpelling (HERE), var_argumentTypeList_45743, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)) ;
      }
      {
      var_lexicalTokenListMap_46073.setter_insertKey (enumerator_46199.current_mEntrySpelling (HERE), enumerator_46199.current_mTerminalSpelling (HERE), enumerator_46199.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
      }
      var_tokenSortedlist_46138.addAssign_operation (enumerator_46199.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1054)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1054)), enumerator_46199.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1054)), enumerator_46199.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1054))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1054)) ;
      var_lexiqueAnalysisContext_43172.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_46199.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1055))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1055)) ;
      enumerator_46199.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_43172.mAttribute_mLexicalTokenListMap.setter_insertKey (enumerator_45549.current_mName (HERE), var_lexicalTokenListMap_46073, var_tokenSortedlist_46138, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1057)) ;
    }
    enumerator_45549.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_47827 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_47827.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_43172.mAttribute_mLexicalMessageMap.setter_insertKey (enumerator_47827.current_mMessageName (HERE), enumerator_47827.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1061)) ;
    }
    enumerator_47827.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_48014 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_48014.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_48014.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_43172, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1065)) ;
    enumerator_48014.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_48206 (var_lexiqueAnalysisContext_43172.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1068)), kEnumeration_up) ;
  while (enumerator_48206.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_48206.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1069)).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticWarning (enumerator_48206.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1070)), GALGAS_string ("unused message"), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
    }
    enumerator_48206.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_48386 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_48386.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_43172.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_48386.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1075))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1075)) ;
    var_lexiqueAnalysisContext_43172.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_48386.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1076))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)) ;
    GALGAS_bool var_preservesStartDelimiter_48574 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_48607 (enumerator_48386.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_48607.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_48607.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1079)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_48607.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1080)), GALGAS_string ("only the 'preserved' feature is allowed here"), fixItArray20  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter_48574.boolEnum () ;
        if (kBoolTrue == test_21) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (enumerator_48607.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1082)), GALGAS_string ("the 'preserved' feature is already set"), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1082)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter_48574 = GALGAS_bool (true) ;
        }
      }
      enumerator_48607.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_43172.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_48386.current_mStartString (HERE), enumerator_48386.current_mEndString (HERE), var_preservesStartDelimiter_48574  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1087)) ;
    enumerator_48386.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1090)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_49138 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_49138.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (enumerator_49138.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1092)), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray24  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1092)) ;
      enumerator_49138.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet_49271 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1095)) ;
  cEnumerator_indexingListAST enumerator_49315 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_49315.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet_49271.getter_hasKey (enumerator_49315.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1097)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1097)).boolEnum () ;
    if (kBoolTrue == test_25) {
      TC_Array <C_FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (enumerator_49315.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1098)), GALGAS_string ("the '").add_operation (enumerator_49315.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1098)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1098)), fixItArray26  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1098)) ;
    }
    var_indexNameSet_49271.addAssign_operation (enumerator_49315.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1100))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1100)) ;
    enumerator_49315.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_49606 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_49606.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_43172.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_49606.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1104))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1104)) ;
    var_lexiqueAnalysisContext_43172.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_49606.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1105))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1105)) ;
    enumerator_49606.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1109)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName_49943 = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents_50011 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_49943.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1113)), var_lexiqueAnalysisContext_43172, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112))) ;
    var_headerContents_50011.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_49943.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1118)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext_43172, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1117))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1117)) ;
    GALGAS_string var_cppContents_50442 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_49943.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1125)), var_lexiqueAnalysisContext_43172.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1126)), var_lexiqueAnalysisContext_43172.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1127)), var_lexiqueAnalysisContext_43172.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1128)), var_lexiqueAnalysisContext_43172.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 1129)), var_lexiqueAnalysisContext_43172.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1130)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext_43172, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName_49943, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1124))) ;
    GALGAS_string var_cocoaHeader_51070 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_49943, var_lexiqueAnalysisContext_43172 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1140))) ;
    var_cocoaHeader_51070.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_49943, var_lexiqueAnalysisContext_43172 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
    GALGAS_string var_cocoaImplementation_51387 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49943, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)), var_lexiqueClassName_49943, var_lexiqueAnalysisContext_43172.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1152)), var_lexiqueAnalysisContext_43172.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1153)), var_lexiqueAnalysisContext_43172.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1154)), var_lexiqueAnalysisContext_43172.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1155)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext_43172, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49943, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), var_lexiqueClassName_49943, var_headerContents_50011, var_cppContents_50442, var_cocoaHeader_51070, var_cocoaImplementation_51387  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
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
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@inputParameterVariable analyzeInputParameter'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_65868 ;
  GALGAS_string var_cppName_65889 ;
  {
  GALGAS_string joker_65891 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_65868, var_cppName_65889, joker_65891, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1442)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_65930 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_65930 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType_65930.objectCompare (var_type_65868)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1455)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (var_type_65868.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (var_expectedType_65930.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_65889, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1459)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_67530 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_67530 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_68387 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_67530.objectCompare (var_type_68387)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1489)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1490)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (var_type_68387.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (var_expectedType_67530.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)) ;
    }
  }
  GALGAS_string var_cppName_68776 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType_67530, var_cppName_68776, var_cppName_68776, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1496)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_67530.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)), var_cppName_68776, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1497)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_69566 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_69566 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_70423 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_69566.objectCompare (var_type_70423)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1527)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)).add_operation (var_type_70423.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)).add_operation (var_expectedType_69566.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1527)) ;
    }
  }
  GALGAS_string var_cppName_70812 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1533)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1533)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1533)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType_69566, var_cppName_70812, var_cppName_70812, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1534)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_69566.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)), var_cppName_70812, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1536)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1563)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1574)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1575)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1575)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_72846 ;
  {
  GALGAS_string joker_72848 ; // Joker input parameter
  GALGAS_string joker_72851 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_72846, joker_72848, joker_72851, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_72872 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_72872.objectCompare (var_type_72846)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1580)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1581)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)).add_operation (var_type_72846.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1581)).add_operation (var_expectedType_72872.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1580)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1592)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1593)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1593)) ;
  }
  GALGAS_string var_cppName_73689 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1595)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1595)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_73813 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1596)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type_73813, var_cppName_73689, var_cppName_73689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_74032 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_74032.objectCompare (var_type_73813)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1600)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1601)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (var_type_73813.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1601)).add_operation (var_expectedType_74032.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1602)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1600)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1612)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1613)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1613)) ;
  }
  GALGAS_string var_cppName_74842 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1615)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1615)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_74966 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1616)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type_74966, var_cppName_74842, var_cppName_74842, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1617)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_75178 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_75178.objectCompare (var_type_74966)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1620)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1621)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).add_operation (var_type_74966.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1621)).add_operation (var_expectedType_75178.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1622)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1642)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1643)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1643)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName_77276 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1663)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1663)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_77276.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1664)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                         const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName_77881 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1674)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1674)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1674)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1674)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1674)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1674)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_77881, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1675)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1675)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1675)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1675)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1675)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName_78491 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1685)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1685)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_78491, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1686)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@trueExpressionForGeneration isTrueExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                         extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineExtensionGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selfCopyInExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionForGeneration * object = (const cPtr_selfCopyInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@trueExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_trueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                           extensionMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineExtensionMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                             GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_falseExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                           extensionMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineExtensionMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionForGeneration * object = (const cPtr_literalCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.getter_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)).getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                           extensionMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineExtensionMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionForGeneration * object = (const cPtr_literalStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.getter_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                           extensionMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineExtensionMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionForGeneration * object = (const cPtr_literalDoubleExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                           extensionMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionForGeneration * object = (const cPtr_literalUIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionForGeneration * object = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionForGeneration * object = (const cPtr_literalSIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionForGeneration * object = (const cPtr_literalBigIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 151)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 151)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)) ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionForGeneration * object = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 176)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 179)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)) ;
  GALGAS_stringlist var_parameterList_9790 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_9831 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_9831.hasCurrentObject ()) {
    GALGAS_string var_parameter_10015 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9831.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_10015, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 196)) ;
    var_parameterList_9790.addAssign_operation (var_parameter_10015  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 203)) ;
    enumerator_9831.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)).add_operation (object->mAttribute_mConstructorName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)) ;
  cEnumerator_stringlist enumerator_10275 (var_parameterList_9790, kEnumeration_up) ;
  while (enumerator_10275.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_10275.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 209)) ;
    if (enumerator_10275.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 210)) ;
    }
    enumerator_10275.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_10371 = GALGAS_bool (kIsStrictSup, var_parameterList_9790.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma_10371.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) ;
    }
    outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)) ;
    var_needsComma_10371 = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma_10371.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionValueExpressionForGeneration * object = (const cPtr_optionValueExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionValueExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 240)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)).add_operation (GALGAS_string (".getter_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCharExpressionForGeneration * object = (const cPtr_optionCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCharExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)).add_operation (GALGAS_string (".getter_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionStringExpressionForGeneration * object = (const cPtr_optionStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 270)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)).add_operation (GALGAS_string (".getter_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCommentExpressionForGeneration * object = (const cPtr_optionCommentExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCommentExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (GALGAS_string (".getter_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@orExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 300)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 300)) ;
  GALGAS_string var_leftTemporaryOperand_14114 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_14114, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 303)) ;
  GALGAS_string var_rightTemporaryOperand_14317 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_14317, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_14114.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 308)).add_operation (var_rightTemporaryOperand_14317, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 308)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                           extensionMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineExtensionMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 320)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 320)) ;
  GALGAS_string var_leftTemporaryOperand_15264 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_15264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)) ;
  GALGAS_string var_testVar_15307 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_15307, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (var_leftTemporaryOperand_15264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_15307, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 334)) ;
  }
  GALGAS_string var_rightTemporaryOperand_15784 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_15784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_15307.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)).add_operation (var_rightTemporaryOperand_15784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 343)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 344)) ;
  outArgument_outCppExpression = var_testVar_15307 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  GALGAS_string var_leftTemporaryOperand_16569 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_16569, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)) ;
  GALGAS_string var_rightTemporaryOperand_16769 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_16769, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 367)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_16569.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (var_rightTemporaryOperand_16769, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                           extensionMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineExtensionMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 387)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 387)) ;
  GALGAS_string var_leftTemporaryOperand_17562 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 389)) ;
  GALGAS_string var_rightTemporaryOperand_17762 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17762, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 397)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (var_rightTemporaryOperand_17762, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 419)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 419)) ;
  GALGAS_string var_leftTemporaryOperand_18719 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 421)) ;
  GALGAS_string var_rightTemporaryOperand_18919 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18919, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 429)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 437)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 437)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (var_rightTemporaryOperand_18919, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 441)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 452)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 452)) ;
  GALGAS_string var_leftTemporaryOperand_19852 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19852, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 454)) ;
  GALGAS_string var_rightTemporaryOperand_20060 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20060, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 462)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_19852.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 470)).add_operation (var_rightTemporaryOperand_20060, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 470)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                           extensionMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineExtensionMethod_andExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@andShortExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionForGeneration * object = (const cPtr_andShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 482)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 482)) ;
  GALGAS_string var_leftTemporaryOperand_20857 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20857, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 484)) ;
  GALGAS_string var_testVar_20900 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_20900, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (var_leftTemporaryOperand_20857, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_20900, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)) ;
  }
  GALGAS_string var_rightTemporaryOperand_21377 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_20900.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)).add_operation (var_rightTemporaryOperand_21377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)) ;
  outArgument_outCppExpression = var_testVar_20900 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@equalExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_equalExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionForGeneration * object = (const cPtr_equalExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)) ;
  GALGAS_string var_leftTemporaryOperand_22020 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  GALGAS_string var_rightTemporaryOperand_22223 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand_22020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (var_rightTemporaryOperand_22223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_equalExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_equalExpressionForGeneration.mSlotID,
                                           extensionMethod_equalExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionForGeneration_generateExpression (defineExtensionMethod_equalExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@notEqualExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionForGeneration * object = (const cPtr_notEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 537)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 537)) ;
  GALGAS_string var_leftTemporaryOperand_23000 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23000, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)) ;
  GALGAS_string var_rightTemporaryOperand_23203 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_23203, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand_23000, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (var_rightTemporaryOperand_23203, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_notEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionForGeneration_generateExpression (defineExtensionMethod_notEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@lowerOrEqualExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionForGeneration * object = (const cPtr_lowerOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 556)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 556)) ;
  GALGAS_string var_leftTemporaryOperand_23987 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23987, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)) ;
  GALGAS_string var_rightTemporaryOperand_24190 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24190, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand_23987, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (var_rightTemporaryOperand_24190, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@greaterOrEqualExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionForGeneration * object = (const cPtr_greaterOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 575)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 575)) ;
  GALGAS_string var_leftTemporaryOperand_24978 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24978, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)) ;
  GALGAS_string var_rightTemporaryOperand_25181 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_25181, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand_24978, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (var_rightTemporaryOperand_25181, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@strictGreaterExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictGreaterExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionForGeneration * object = (const cPtr_strictGreaterExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)) ;
  GALGAS_string var_leftTemporaryOperand_25968 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_25968, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) ;
  GALGAS_string var_rightTemporaryOperand_26171 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_26171, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 600)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand_25968, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (var_rightTemporaryOperand_26171, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration.mSlotID,
                                           extensionMethod_strictGreaterExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionForGeneration_generateExpression (defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@strictLowerExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictLowerExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionForGeneration * object = (const cPtr_strictLowerExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)) ;
  GALGAS_string var_leftTemporaryOperand_26955 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_26955, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)) ;
  GALGAS_string var_rightTemporaryOperand_27158 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_27158, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 619)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand_26955, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (var_rightTemporaryOperand_27158, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration.mSlotID,
                                           extensionMethod_strictLowerExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionForGeneration_generateExpression (defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@rightShiftExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_rightShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionForGeneration * object = (const cPtr_rightShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 632)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 632)) ;
  GALGAS_string var_leftTemporaryOperand_27941 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_27941, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)) ;
  GALGAS_string var_rightTemporaryOperand_28144 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_28144, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 638)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_27941.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).add_operation (var_rightTemporaryOperand_28144, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_rightShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionForGeneration_generateExpression (defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@leftShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionForGeneration * object = (const cPtr_leftShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 652)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 652)) ;
  GALGAS_string var_leftTemporaryOperand_28950 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_28950, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
  GALGAS_string var_rightTemporaryOperand_29153 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_29153, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_28950.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 660)).add_operation (var_rightTemporaryOperand_29153, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 660)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_leftShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionForGeneration_generateExpression (defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@addExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionForGeneration * object = (const cPtr_addExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 673)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 673)) ;
  GALGAS_string var_leftTemporaryOperand_30105 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_30105, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 675)) ;
  GALGAS_string var_rightTemporaryOperand_30313 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_30313, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 683)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_30105.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 691)).add_operation (var_rightTemporaryOperand_30313, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 691)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 693)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 693)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionForGeneration.mSlotID,
                                           extensionMethod_addExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionForGeneration_generateExpression (defineExtensionMethod_addExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@addExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowForGeneration * object = (const cPtr_addExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)) ;
  GALGAS_string var_leftTemporaryOperand_31208 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_31208, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
  GALGAS_string var_rightTemporaryOperand_31416 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_31416, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_31208.add_operation (GALGAS_string (".add_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (var_rightTemporaryOperand_31416, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_addExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_addExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@subExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionForGeneration * object = (const cPtr_subExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 734)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 734)) ;
  GALGAS_string var_leftTemporaryOperand_32016 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_32016, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 737)) ;
  GALGAS_string var_rightTemporaryOperand_32219 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_32219, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 740)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_32016.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 742)).add_operation (var_rightTemporaryOperand_32219, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 742)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 744)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 744)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionForGeneration.mSlotID,
                                           extensionMethod_subExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionForGeneration_generateExpression (defineExtensionMethod_subExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@subExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowForGeneration * object = (const cPtr_subExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)) ;
  GALGAS_string var_leftTemporaryOperand_33117 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_33117, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)) ;
  GALGAS_string var_rightTemporaryOperand_33320 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_33320, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 761)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_33117.add_operation (GALGAS_string (".substract_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)).add_operation (var_rightTemporaryOperand_33320, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_subExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_subExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@multiplicationExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionForGeneration * object = (const cPtr_multiplicationExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 774)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 774)) ;
  GALGAS_string var_leftTemporaryOperand_34087 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_34087, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 777)) ;
  GALGAS_string var_rightTemporaryOperand_34290 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_34290, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 780)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_34087.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)).add_operation (var_rightTemporaryOperand_34290, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@multiplicationExpressionNoOverflowForGeneration generateExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowForGeneration * object = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 795)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 795)) ;
  GALGAS_string var_leftTemporaryOperand_35198 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_35198, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)) ;
  GALGAS_string var_rightTemporaryOperand_35401 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_35401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 801)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_35198.add_operation (GALGAS_string (".multiply_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (var_rightTemporaryOperand_35401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@divisionExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionForGeneration * object = (const cPtr_divisionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 814)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 814)) ;
  GALGAS_string var_leftTemporaryOperand_36161 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_36161, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 817)) ;
  GALGAS_string var_rightTemporaryOperand_36364 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_36364, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 820)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_36161.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)).add_operation (var_rightTemporaryOperand_36364, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 824)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 824)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionForGeneration_generateExpression (defineExtensionMethod_divisionExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@divisionExpressionNoOverflowForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowForGeneration * object = (const cPtr_divisionExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 835)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 835)) ;
  GALGAS_string var_leftTemporaryOperand_37264 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_37264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)) ;
  GALGAS_string var_rightTemporaryOperand_37467 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_37467, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_37264.add_operation (GALGAS_string (".divide_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)).add_operation (var_rightTemporaryOperand_37467, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@moduloExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduloExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionForGeneration * object = (const cPtr_moduloExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)) ;
  GALGAS_string var_leftTemporaryOperand_38223 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_38223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 857)) ;
  GALGAS_string var_rightTemporaryOperand_38426 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_38426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 860)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_38223.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)).add_operation (var_rightTemporaryOperand_38426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 864)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 864)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduloExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_moduloExpressionForGeneration.mSlotID,
                                           extensionMethod_moduloExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionForGeneration_generateExpression (defineExtensionMethod_moduloExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionForGeneration * object = (const cPtr_unaryMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)) ;
  GALGAS_string var_operand_39301 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_39301, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
  outArgument_outCppExpression = var_operand_39301.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 880)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 880)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 882)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 882)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@unaryMinusExpressionNoOverflowForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * object = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 893)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 893)) ;
  GALGAS_string var_operand_40275 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_40275, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 895)) ;
  outArgument_outCppExpression = var_operand_40275.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 903)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@notExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionForGeneration * object = (const cPtr_notExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 914)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 914)) ;
  GALGAS_string var_operand_40818 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_40818, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)) ;
  outArgument_outCppExpression = var_operand_40818.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                           extensionMethod_notExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineExtensionMethod_notExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@structFieldAccessExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionForGeneration * object = (const cPtr_structFieldAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 930)) ;
  GALGAS_string var_operand_41624 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_41624, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 932)) ;
  outArgument_outCppExpression = var_operand_41624.add_operation (GALGAS_string (".mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)).add_operation (object->mAttribute_mStructFieldName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration.mSlotID,
                                           extensionMethod_structFieldAccessExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionForGeneration_generateExpression (defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@tildeExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_tildeExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionForGeneration * object = (const cPtr_tildeExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 945)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 945)) ;
  GALGAS_string var_operand_42182 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_42182, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 948)) ;
  outArgument_outCppExpression = var_operand_42182.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@ifExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionForGeneration * object = (const cPtr_ifExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionForGeneration) ;
  GALGAS_string var_ifExpression_42809 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_42809, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 963)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mThenExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)) ;
  GALGAS_string var_testVar_43211 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (var_ifExpression_42809, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)) ;
  GALGAS_string var_thenExpression_43493 ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 972)) ;
  }
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_43493, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 973)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (var_thenExpression_43493, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 975)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 978)) ;
  }
  GALGAS_string var_elseExpression_43947 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_43947, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 980)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (var_elseExpression_43947, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 982)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 983)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_ifExpressionForGeneration.mSlotID,
                                           extensionMethod_ifExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionForGeneration_generateExpression (defineExtensionMethod_ifExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalTypeInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionForGeneration * object = (const cPtr_literalTypeInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLiteralType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 995)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mAttribute_mLiteralType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 996)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                           extensionMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extractObjectInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractObjectInExpressionForGeneration * object = (const cPtr_extractObjectInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extractObjectInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)) ;
  GALGAS_string var_receiverExpression_45470 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_45470, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1010)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (var_receiverExpression_45470, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1021)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1022)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1022)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                           extensionMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testDynamicClassInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionForGeneration * object = (const cPtr_testDynamicClassInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionForGeneration) ;
  GALGAS_string var_typeNameRepresentation_46138 = object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033)) ;
  GALGAS_string var_receiverExpression_46393 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1035)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)) ;
  switch (object->mAttribute_mTypeComparisonKind.enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1046)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1046)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1047)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1048)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1050)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1051)).add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1052)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1052)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1054)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1054)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1056)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1056)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1057)).add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1058)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1058)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration.mSlotID,
                                           extensionMethod_testDynamicClassInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionForGeneration_generateExpression (defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@castInExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_castInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionForGeneration * object = (const cPtr_castInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1070)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1070)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1071)) ;
  GALGAS_string var_receiverExpression_47815 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_47815, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1073)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082)).add_operation (var_receiverExpression_47815, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1084)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1088)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1087)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1088)).add_operation (var_receiverExpression_47815, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1089)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1089)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1089)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (var_receiverExpression_47815, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1091)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1091)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1086)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1093)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)).add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)).add_operation (var_receiverExpression_47815, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1098)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1094)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1099)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1100)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1100)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1101)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1102)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_castInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_castInExpressionForGeneration.mSlotID,
                                           extensionMethod_castInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionForGeneration_generateExpression (defineExtensionMethod_castInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@varInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionForGeneration * object = (const cPtr_varInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1114)) ;
  outArgument_outCppExpression = object->mAttribute_mCppVarName ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_varInExpressionForGeneration.mSlotID,
                                           extensionMethod_varInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionForGeneration_generateExpression (defineExtensionMethod_varInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@getterCallExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getterCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionForGeneration * object = (const cPtr_getterCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1130)) ;
  GALGAS_string var_receiverCppName_50070 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_50070, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1132)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_50132 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1134)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_50162 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_50162.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_50193 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_50162.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_50193, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1137)) ;
    var_getterArgumentCppNameList_50132.addAssign_operation (var_argumentCppName_50193  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1138)) ;
    enumerator_50162.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      extensionMethod_addHeaderFileName (extensionGetter_baseType (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1143)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1143)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType_50583 = object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1144)) ;
      GALGAS_bool var_searching_50639 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)).isValid ()) {
        uint32_t variant_50655 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)).uintValue () ;
        bool loop_50655 = true ;
        while (loop_50655) {
          loop_50655 = var_searching_50639.isValid () ;
          if (loop_50655) {
            loop_50655 = var_searching_50639.boolValue () ;
          }
          if (loop_50655 && (0 == variant_50655)) {
            loop_50655 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)) ;
          }
          if (loop_50655) {
            variant_50655 -- ;
            const enumGalgasBool test_0 = var_baseType_50583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1147)).getter_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1147)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1147)).boolEnum () ;
            if (kBoolTrue == test_0) {
              const enumGalgasBool test_1 = var_baseType_50583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1148)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1148)).getter_hasKey (object->mAttribute_mGetterName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1148)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_50583 = var_baseType_50583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1149)) ;
              }else if (kBoolFalse == test_1) {
                var_searching_50639 = GALGAS_bool (false) ;
              }
            }else if (kBoolFalse == test_0) {
              var_searching_50639 = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_50583.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1157)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1157)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1157)).add_operation (object->mAttribute_mGetterName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1157))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1157)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_50070 COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1158)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1159)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1159)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1159)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)).add_operation (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)).add_operation (var_receiverCppName_50070, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)) ;
      }else if (kBoolFalse == test_2) {
        extensionMethod_addHeaderFileName (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1163)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1163)) ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (var_receiverCppName_50070, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_50070 ;
      cEnumerator_stringlist enumerator_51704 (object->mAttribute_mFieldList, kEnumeration_up) ;
      while (enumerator_51704.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_51704.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)) ;
        enumerator_51704.gotoNextObject () ;
      }
      extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1171)) ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_51973 (var_getterArgumentCppNameList_50132, kEnumeration_up) ;
  while (enumerator_51973.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_51973.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)) ;
    if (enumerator_51973.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1176)) ;
    }
    enumerator_51973.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_50132.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1180)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1180)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1184)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1184)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1187)) ;
    }
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1189)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1189)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1189)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getterCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_getterCallExpressionForGeneration.mSlotID,
                                           extensionMethod_getterCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionForGeneration_generateExpression (defineExtensionMethod_getterCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@functionCallExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionForGeneration * object = (const cPtr_functionCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1201)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203)) ;
  GALGAS_stringlist var_parameterList_53060 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1205)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_53101 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_53101.hasCurrentObject ()) {
    GALGAS_string var_parameter_53126 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_53101.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_53126, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1208)) ;
    var_parameterList_53060.addAssign_operation (var_parameter_53126  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1209)) ;
    enumerator_53101.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)) ;
  cEnumerator_stringlist enumerator_53414 (var_parameterList_53060, kEnumeration_up) ;
  while (enumerator_53414.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_53414.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1213)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1213)) ;
    enumerator_53414.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1215)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1215)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1216)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1216)) ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1217)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1217)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                           extensionMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineExtensionMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionForGeneration * object = (const cPtr_filewrapperInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1230))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1230)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1231)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionForGeneration * object = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1243))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1243)) ;
  GALGAS_stringlist var_parameterList_54763 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1244)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_54818 (object->mAttribute_mActualOutputParameterList, kEnumeration_up) ;
  while (enumerator_54818.hasCurrentObject ()) {
    GALGAS_string var_parameter_54843 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_54818.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_54843, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1247)) ;
    var_parameterList_54763.addAssign_operation (var_parameter_54843  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1254)) ;
    enumerator_54818.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)).add_operation (object->mAttribute_mFilewrapperTemplateName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1256)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1257)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1257)) ;
  cEnumerator_stringlist enumerator_55294 (var_parameterList_54763, kEnumeration_up) ;
  while (enumerator_55294.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_55294.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)) ;
    enumerator_55294.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1261)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1261)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1262)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1262)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1262)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperStaticPathInExpressionForGeneration * object = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1274))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1274)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (object->mAttribute_mFilewrapperFileIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)).add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionForGeneration * object = (const cPtr_lexiqueIntrospectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1290))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1290)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1291)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1291)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1291)).add_operation (object->mAttribute_mLexiqueGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1291)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1292)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1293)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1293)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1293)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                           extensionMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inTargetType */,
                                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                  const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar_58059 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_58059, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1317)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1324)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_58059, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1325)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1326)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1326)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1326)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1327)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1327)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1327)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1327)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1328)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1328)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                      extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList_58798 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1341)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_58843 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_58843.hasCurrentObject ()) {
    GALGAS_string var_parameter_59026 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_58843.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_59026, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1343)) ;
    var_parameterList_58798.addAssign_operation (var_parameter_59026  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1350)) ;
    enumerator_58843.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1353)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1355)) ;
  cEnumerator_stringlist enumerator_59229 (var_parameterList_58798, kEnumeration_up) ;
  while (enumerator_59229.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_59229.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1357)) ;
    if (enumerator_59229.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1358)) ;
    }
    enumerator_59229.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1361)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1361)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1361)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1362)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1362)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                      extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@expressionCollectionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionForGeneration * object = (const cPtr_expressionCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1376)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1378)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1378)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1378)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)).add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_60537 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_60537.hasCurrentObject ()) {
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_60537.current_mElement (HERE).ptr (), object->mAttribute_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)) ;
    enumerator_60537.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                           extensionMethod_expressionCollectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineExtensionMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@outputActualParameterForGeneration generateActualParameter'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_string & ioArgument_ioImplementation,
                                                                                        GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                        GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppName,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 26)) ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppName,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_2989 (object->mAttribute_mTypeList, kEnumeration_up) ;
  while (enumerator_2989.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2989.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 41)) ;
    enumerator_2989.gotoNextObject () ;
  }
  outArgument_outCppName = object->mAttribute_mOutputInputVariableCppName ;
  cEnumerator_lstringlist enumerator_3117 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_3117.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_3117.current_mValue (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)) ;
    enumerator_3117.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mOutputInputVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 47)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@inputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 61)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                                extensionMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & ioArgument_ioImplementation,
                                                                                      GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 75)) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mFormalArgumentType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)) ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                                extensionMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 90)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                            extensionMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@grammarForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  cEnumerator_lstringlist enumerator_2208 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_2208.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2208.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_2208.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                              extensionMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineExtensionMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@grammarForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2951 (object->mAttribute_mNonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_2951.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3012 (enumerator_2951.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_3012.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3053 (enumerator_3012.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_3053.hasCurrentObject ()) {
        switch (enumerator_3053.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_3178 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_3053.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50)) ;
            extensionMethod_addHeaderFileName (var_t_3178, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3053.gotoNextObject () ;
      }
      enumerator_3012.gotoNextObject () ;
    }
    enumerator_2951.gotoNextObject () ;
  }
  outArgument_outImplementation = object->mAttribute_mCppFileContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                     extensionMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineExtensionMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@grammarForGeneration implementationCppFileName'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  result_outName = GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 63)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                  extensionGetter_grammarForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_implementationCppFileName (defineExtensionGetter_grammarForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@grammarForGeneration hasCppHeaderFile'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                         extensionGetter_grammarForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_hasCppHeaderFile (defineExtensionGetter_grammarForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@grammarForGeneration headerKind'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 75)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                   extensionGetter_grammarForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_headerKind (defineExtensionGetter_grammarForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@grammarForGeneration isPredefined'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                     extensionGetter_grammarForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_isPredefined (defineExtensionGetter_grammarForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  result_outName = GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 89)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                  extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_implementationCppFileName (defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                         extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@syntaxDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 101)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                   extensionGetter_syntaxDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_headerKind (defineExtensionGetter_syntaxDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                     extensionGetter_syntaxDeclarationForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_isPredefined (defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115)) ;
  GALGAS_uintlist var_selectMethodList_5806 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 116)) ;
  GALGAS_uint var_idx_5832 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).isValid ()) {
    uint32_t variant_5843 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).uintValue () ;
    bool loop_5843 = true ;
    while (loop_5843) {
      loop_5843 = GALGAS_bool (kIsStrictInf, var_idx_5832.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_5843) {
        loop_5843 = GALGAS_bool (kIsStrictInf, var_idx_5832.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_5843 && (0 == variant_5843)) {
        loop_5843 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 118)) ;
      }
      if (loop_5843) {
        variant_5843 -- ;
        var_selectMethodList_5806.addAssign_operation (var_idx_5832  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 120)) ;
        var_idx_5832.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 121)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 125)), object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList_5806, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticGeneration.galgas", 123))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                              extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 140))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 140)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 142)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141))) ;
  GALGAS_string var_lexiqueCppName_6728 = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 145)) ;
  cEnumerator_ruleDeclarationList enumerator_6818 (object->mAttribute_mRuleDeclarationList, kEnumeration_up) ;
  while (enumerator_6818.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6902 (enumerator_6818.current_mLabelImplementationList (HERE), kEnumeration_up) ;
    while (enumerator_6902.hasCurrentObject ()) {
      GALGAS_string var_ruleName_6932 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (enumerator_6902.current_mLabelName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
      GALGAS_string var_code_7726 ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_6932, ioArgument_ioInclusionSet, enumerator_6902.current_mSignatureForGeneration (HERE), enumerator_6902.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (false), object->mAttribute_mHasTranslateFeature, var_code_7726, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7726, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167)) ;
      enumerator_6902.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_7878 ;
    GALGAS_lstring joker_7842 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7845 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7848 ; // Joker input parameter
    GALGAS_location joker_7851 ; // Joker input parameter
    enumerator_6818.current_mLabelImplementationList (HERE).method_first (joker_7842, joker_7845, joker_7848, joker_7851, var_parseInstructionList_7878, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 170)) ;
    GALGAS_string var_parseRuleName_7909 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)) ;
    GALGAS_string var_parseCode_8688 ;
    {
    routine_generateProcedure (GALGAS_bool (false), var_parseRuleName_7909, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 180)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_7878, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 181)), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (true), object->mAttribute_mHasTranslateFeature, var_parseCode_8688, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8688, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 189)) ;
    const enumGalgasBool test_0 = object->mAttribute_mHasIndexing.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_semanticInstructionListForGeneration var_instructionList_8844 ;
      GALGAS_lstring joker_8884 ; // Joker input parameter
      GALGAS_formalParameterListForGeneration joker_8887 ; // Joker input parameter
      GALGAS_formalParameterSignature joker_8890 ; // Joker input parameter
      GALGAS_location joker_8893 ; // Joker input parameter
      enumerator_6818.current_mLabelImplementationList (HERE).method_first (joker_8884, joker_8887, joker_8890, joker_8893, var_instructionList_8844, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 193)) ;
      GALGAS_string var_ruleName_8939 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)) ;
      GALGAS_string var_code_9793 ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_8939, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 203)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_8844, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_9793, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_9793, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
    }
    enumerator_6818.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                     extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@routinePrototypeDeclarationForGeneration headerKind'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_routinePrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1076)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_routinePrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_routinePrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_routinePrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@routinePrototypeDeclarationForGeneration appendDeclaration1'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_string & outArgument_outHeader,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routinePrototypeDeclarationForGeneration * object = (const cPtr_routinePrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routinePrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, object->mAttribute_mRoutineName, object->mAttribute_mFormalArgumentList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1084))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@functionPrototypeDeclarationForGeneration headerKind'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_functionPrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1095)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                   extensionGetter_functionPrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_functionPrototypeDeclarationForGeneration_headerKind (defineExtensionGetter_functionPrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@functionPrototypeDeclarationForGeneration appendDeclaration1'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_string & outArgument_outHeader,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionPrototypeDeclarationForGeneration * object = (const cPtr_functionPrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionPrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1106)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1103))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@onceFunctionDeclarationForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_onceFunctionDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1113)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                   extensionGetter_onceFunctionDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_onceFunctionDeclarationForGeneration_headerKind (defineExtensionGetter_onceFunctionDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@onceFunctionDeclarationForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1123)), object->mAttribute_mReturnType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1124)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1121))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                              extensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@semanticTypeForGeneration appendTypeGenericImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1134)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1135)), object->mAttribute_mTypeProxy.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1136)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1137)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1133))) ;
//---
  return result_outImplementation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation (void) {
  enterExtensionGetter_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                        extensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_semanticTypeForGeneration_appendTypeGenericImplementation (defineExtensionGetter_semanticTypeForGeneration_appendTypeGenericImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@routineImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasHeader.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1151)) ;
  }
  GALGAS_string var_code_47981 ;
  {
  routine_generateProcedure (object->mAttribute_mGenerateStatic, GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mRoutineInstructionList, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_47981, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1153)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, object->mAttribute_mRoutineName, var_code_47981 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                     extensionMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@functionImplementationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1178))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1178)) ;
  GALGAS_string var_code_48733 ;
  {
  routine_generateFunction (GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1180)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1180)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (false), var_code_48733, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1179)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code_48733, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1194)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1190))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                     extensionMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineExtensionMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205)) ;
  GALGAS_string var_code_49585 ;
  {
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (object->mAttribute_mFunctionName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1207)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1209)), object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (true), var_code_49585, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1206)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code_49585, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1220)), object->mAttribute_mReturnType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1221)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1217))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                     extensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@optionComponentForGeneration isPredefined'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  result_outResult = object->mAttribute_mIsPredefined ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@optionComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1238)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1238)) ;
  }
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1249))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendSpecificFiles'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 1285)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mIsPredefined.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1285)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1286)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1289)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1293))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1287)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1306)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1306)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)), object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@lexiqueDeclarationForGeneration headerKind'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_lexiqueDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                   extensionGetter_lexiqueDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexiqueDeclarationForGeneration_headerKind (defineExtensionGetter_lexiqueDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@lexiqueDeclarationForGeneration appendDeclaration1'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                   GALGAS_string & outArgument_outHeader,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  outArgument_outHeader = object->mAttribute_mHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                              extensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificImplementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_string & outArgument_outHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1347)) ;
  outArgument_outHeader = object->mAttribute_mCppContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                                     extensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexiqueDeclarationForGeneration appendSpecificFiles'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inProductDirectory,
                                                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1357)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaHeader, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaImplementation, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                            extensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (defineExtensionMethod_lexiqueDeclarationForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@programComponentForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_programComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1390)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_programComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                   extensionGetter_programComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_programComponentForGeneration_headerKind (defineExtensionGetter_programComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@programComponentForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_programComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_programComponentForGeneration * object = (const cPtr_programComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_programComponentForGeneration) ;
  ioArgument_ioInclusionSet.plusAssign_operation(object->mAttribute_mInclusionSet, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1399)) ;
  outArgument_outImplementation = object->mAttribute_mImplementationString ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                                     extensionMethod_programComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_programComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_programComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@filewrapperDeclarationForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1410)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                   extensionGetter_filewrapperDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperDeclarationForGeneration_headerKind (defineExtensionGetter_filewrapperDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@filewrapperDeclarationForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_string & outArgument_outHeader,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList_58243 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1448)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList_58301 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1449)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList_58357 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
  GALGAS_stringlist var_directoryIndexStringList_58404 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1451)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList_58243, var_directoryIndexStringList_58404, var_regularTextContentIndexStringList_58357, var_regularBinaryContentIndexStringList_58301, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList_58243, var_directoryIndexStringList_58404, var_regularTextContentIndexStringList_58357, var_regularBinaryContentIndexStringList_58301, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_58990 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_58990.hasCurrentObject ()) {
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_58990.current_mFilewrapperTemplateName (HERE), enumerator_58990.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)) ;
    enumerator_58990.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                              extensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@filewrapperDeclarationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1569))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1569)) ;
  GALGAS_string var_filewrapperImplementation_64049 = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation_64049, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1571)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation_64049 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1579))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_64439 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_64439.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList_64535 = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex_64573 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet_64610 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 1588)) ;
    var_unusedVariableCppNameSet_64610.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1589))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1589)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_64733 (enumerator_64439.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_64733.hasCurrentObject ()) {
      var_unusedVariableCppNameSet_64610.addAssign_operation (enumerator_64733.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1591)) ;
      enumerator_64733.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker_64828 = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_64439.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList_64535, ioArgument_ioInclusionSet, var_temporaryVariableIndex_64573, var_unusedVariableCppNameSet_64610, var_useColumnMarker_64828, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594)) ;
    }
    outArgument_outImplementation.plusAssign_operation(GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_64439.current_mFilewrapperTemplateName (HERE), enumerator_64439.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet_64610, var_useColumnMarker_64828, var_generatedCodeForInstructionList_64535 COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603)) ;
    enumerator_64439.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                     extensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension getter '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1673))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1677))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1687))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1689))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1691))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1693))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1695))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1697))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1699))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1703))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1705))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1707))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1709))) ;
    }
    break ;
  }
  result_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1713)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1714)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1715)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1716)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1717)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1719)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1721)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1722)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1723)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711))), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)) ;
//---
  return result_outHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterExtensionGetter_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                       extensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineExtensionGetter_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@primitiveTypeForGeneration appendPrimitiveTypePreDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioHeader,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  ioArgument_ioHeader.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (void) {
  enterExtensionMethod_appendPrimitiveTypePreDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                          extensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration (defineExtensionMethod_primitiveTypeForGeneration_appendPrimitiveTypePreDeclaration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                          extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_2565 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("instruction-assignment.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_string joker_2698 ; // Joker input parameter
    GALGAS_string joker_2707 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType_2565, joker_2698, joker_2707, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string joker_2809 ; // Joker input parameter
    GALGAS_string joker_2818 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVariableName, var_targetType_2565, joker_2809, joker_2818, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 73)) ;
    }
    cEnumerator_lstringlist enumerator_2860 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
    while (enumerator_2860.hasCurrentObject ()) {
      GALGAS_attributeMap var_attributeMap_2886 = var_targetType_2565.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 80)) ;
      var_attributeMap_2886.method_searchKey (enumerator_2860.current_mValue (HERE), var_targetType_2565, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)) ;
      enumerator_2860.gotoNextObject () ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_3252 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_2565, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3252, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 88)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_2565, var_expression_3252.getter_mResultType (SOURCE_FILE ("instruction-assignment.galgas", 97)), object->mAttribute_mInstructionLocation, var_expression_3252, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  GALGAS_string var_targetVariableCppName_3473 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_3519 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mStructAttributeList.getter_length (SOURCE_FILE ("instruction-assignment.galgas", 101)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3641 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mTargetVariableName, joker_3641, var_targetVariableCppName_3473, var_nameForCheckingFormalParameterUsing_3519, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    }
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3808 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mTargetVariableName, joker_3808, var_targetVariableCppName_3473, var_nameForCheckingFormalParameterUsing_3519, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_2565, var_targetVariableCppName_3473, var_nameForCheckingFormalParameterUsing_3519, object->mAttribute_mStructAttributeList, var_expression_3252  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                   extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@assignmentInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionForGeneration * object = (const cPtr_assignmentInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionForGeneration) ;
  GALGAS_string var_sourceVar_5373 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_5373, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 149)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-assignment.galgas", 156)) ;
  }
  GALGAS_string var_receiverCppName_5489 = object->mAttribute_mTargetCppName ;
  cEnumerator_lstringlist enumerator_5539 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_5539.hasCurrentObject ()) {
    var_receiverCppName_5489.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_5539.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 160)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 160)) ;
    enumerator_5539.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5489.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 162)).add_operation (var_sourceVar_5373, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 162)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 162)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mTargetCppName COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                            extensionMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 125)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 126)) ;
  cEnumerator_castInstructionBranchListAST enumerator_4471 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_4471.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4471.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4471.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                          extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression_5191 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mCastExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5191, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5534 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  cEnumerator_castInstructionBranchListAST enumerator_5617 (object->mAttribute_mCastInstructionBranchList, kEnumeration_up) ;
  while (enumerator_5617.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_5655 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_5617.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_t_5833 = var_type_5655 ;
    GALGAS_bool var_found_5856 = GALGAS_bool (kIsEqual, var_t_5833.objectCompare (var_castExpression_5191.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 161)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_5901 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_5901 = true ;
      while (loop_5901) {
        loop_5901 = var_found_5856.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5833.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_5901) {
          loop_5901 = var_found_5856.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5833.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_5901 && (0 == variant_5901)) {
          loop_5901 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_5901) {
          variant_5901 -- ;
          var_t_5833 = var_t_5833.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_5856 = GALGAS_bool (kIsEqual, var_t_5833.objectCompare (var_castExpression_5191.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 165)))) ;
        }
      }
    }
    const enumGalgasBool test_0 = var_found_5856.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_5617.current_mTypeName (HERE).getter_location (SOURCE_FILE ("instruction-cast.galgas", 168)), GALGAS_string ("the '@").add_operation (enumerator_5617.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5191.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 169)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray1  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
    }
    GALGAS_string var_localConstantName_6346 ;
    GALGAS_localConstantList var_localConstantList_6372 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_5617.current_mConstantVarName (HERE).mAttribute_string.getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_localConstantName_6346 = GALGAS_string ("cast_").add_operation (enumerator_5617.current_mConstantVarName (HERE).mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5617.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
      var_localConstantList_6372.addAssign_operation (var_type_5655, enumerator_5617.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6346  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
    }else if (kBoolFalse == test_2) {
      var_localConstantName_6346 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_6816 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6372, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5617.current_mInstructionList (HERE), enumerator_5617.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_6816, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5534.addAssign_operation (enumerator_5617.current_mTypeComparisonKind (HERE), var_type_5655, var_localConstantName_6346, var_instructionList_6816  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5617.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7297 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfCastInstruction, ioArgument_ioVariableMap, var_else_5F_instructionList_7297, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOfCastInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5191, var_castBranchList_5534, var_else_5F_instructionList_7297  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                   extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structuredCastInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionForGeneration * object = (const cPtr_structuredCastInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionForGeneration) ;
  GALGAS_string var_castCppVarName_9454 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  cEnumerator_castInstructionBranchListForGeneration enumerator_9597 (object->mAttribute_mCastBranchList, kEnumeration_up) ;
  while (enumerator_9597.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9597.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9597.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_9597.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9597.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9597.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9454, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9597.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9597.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9597.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.getter_length (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 309)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                            extensionMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 129)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_6440 ;
  GALGAS_string var_targetVariableCppName_6475 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6524 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_6440, var_targetVariableCppName_6475, var_nameForCheckingFormalParameterUsing_6524, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 168)) ;
  }
  cEnumerator_lstringlist enumerator_6561 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_6561.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_6585 = var_targetType_6440.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 175)) ;
    var_attributeMap_6585.method_searchKey (enumerator_6561.current_mValue (HERE), var_targetType_6440, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 176)) ;
    enumerator_6561.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_6440.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 182)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 182)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_6440.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 184)), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 183)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_7228 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6440, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7228, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 187)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6440, var_expression_7228.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 196)), object->mAttribute_mInstructionLocation, var_expression_7228, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 196)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType_6440, var_targetVariableCppName_6475, var_nameForCheckingFormalParameterUsing_6524, object->mAttribute_mStructAttributeList, var_expression_7228, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 198)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_8260 ;
  GALGAS_string var_targetVariableCppName_8295 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8344 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_8260, var_targetVariableCppName_8295, var_nameForCheckingFormalParameterUsing_8344, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 219)) ;
  }
  cEnumerator_lstringlist enumerator_8381 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_8381.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_8405 = var_targetType_8260.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    var_attributeMap_8405.method_searchKey (enumerator_8381.current_mValue (HERE), var_targetType_8260, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumerator_8381.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_8260.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).operator_and (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_8260.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 234)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_9049 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8260, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9049, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8260, var_expression_9049.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 247)), object->mAttribute_mInstructionLocation, var_expression_9049, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 247)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType_8260, var_targetVariableCppName_8295, var_nameForCheckingFormalParameterUsing_8344, object->mAttribute_mStructAttributeList, var_expression_9049, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_10080 ;
  GALGAS_string var_targetVariableCppName_10115 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10164 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_10080, var_targetVariableCppName_10115, var_nameForCheckingFormalParameterUsing_10164, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 270)) ;
  }
  cEnumerator_lstringlist enumerator_10201 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_10201.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_10225 = var_targetType_10080.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 277)) ;
    var_attributeMap_10225.method_searchKey (enumerator_10201.current_mValue (HERE), var_targetType_10080, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 278)) ;
    enumerator_10201.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_10080.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).operator_and (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_10080.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 286)), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 285)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_10867 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10080, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10867, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 289)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10080, var_expression_10867.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 298)), object->mAttribute_mInstructionLocation, var_expression_10867, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 298)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType_10080, var_targetVariableCppName_10115, var_nameForCheckingFormalParameterUsing_10164, object->mAttribute_mStructAttributeList, var_expression_10867, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_11896 ;
  GALGAS_string var_targetVariableCppName_11931 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_11980 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_11896, var_targetVariableCppName_11931, var_nameForCheckingFormalParameterUsing_11980, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 321)) ;
  }
  cEnumerator_lstringlist enumerator_12017 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_12017.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_12041 = var_targetType_11896.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 328)) ;
    var_attributeMap_12041.method_searchKey (enumerator_12017.current_mValue (HERE), var_targetType_11896, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
    enumerator_12017.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_targetType_11896.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 335)).operator_and (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 335)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 335)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_11896.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression_12683 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_11896, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_12683, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 340)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_11896, var_expression_12683.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 349)), object->mAttribute_mInstructionLocation, var_expression_12683, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 349)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_targetType_11896, var_targetVariableCppName_11931, var_nameForCheckingFormalParameterUsing_11980, object->mAttribute_mStructAttributeList, var_expression_12683, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_13645 ;
  GALGAS_string var_targetVariableCppName_13677 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_13723 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType_13645, var_targetVariableCppName_13677, var_nameForCheckingFormalParameterUsing_13723, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 374)) ;
  }
  cEnumerator_lstringlist enumerator_13888 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_13888.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_13912 = var_targetType_13645.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 376)) ;
    var_attributeMap_13912.method_searchKey (enumerator_13888.current_mValue (HERE), var_targetType_13645, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 377)) ;
    enumerator_13888.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_14285 = var_targetType_13645.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_14285.getter_length (SOURCE_FILE ("instruction-concat.galgas", 388)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_targetType_13645.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)), fixItArray1  COMMA_SOURCE_FILE ("instruction-concat.galgas", 389)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-concat.galgas", 392)).objectCompare (var_addAssignOperatorArguments_14285.getter_length (SOURCE_FILE ("instruction-concat.galgas", 392)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_13645.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)).add_operation (var_addAssignOperatorArguments_14285.getter_length (SOURCE_FILE ("instruction-concat.galgas", 395)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 394)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 395)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-concat.galgas", 396)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 395)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 396)), fixItArray3  COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_14982 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 398)) ;
      cEnumerator_actualOutputExpressionList enumerator_15050 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_15084 (var_addAssignOperatorArguments_14285, kEnumeration_up) ;
      while (enumerator_15050.hasCurrentObject () && enumerator_15084.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_15335 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_15050.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_15084.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15335, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 400)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_15084.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_15050.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_string temp_5 ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_15084.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GALGAS_string (":") ;
          }else if (kBoolFalse == test_6) {
            temp_5 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_15050.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 409)), GALGAS_string ("the selector should be '!").add_operation (enumerator_15084.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 409)) ;
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_15084.current_mFormalArgumentType (HERE), var_expression_15335.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 412)), enumerator_15050.current_mEndOfExpressionLocation (HERE), var_expression_15335, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 412)) ;
        }
        var_effectiveParameterList_14982.addAssign_operation (var_expression_15335  COMMA_SOURCE_FILE ("instruction-concat.galgas", 413)) ;
        enumerator_15050.gotoNextObject () ;
        enumerator_15084.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_13677, var_targetType_13645, var_nameForCheckingFormalParameterUsing_13723, object->mAttribute_mInstructionLocation, object->mAttribute_mStructAttributeList, var_effectiveParameterList_14982  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_plusEqualnstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualnstructionForGeneration * object = (const cPtr_plusEqualnstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualnstructionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 448)) ;
  GALGAS_stringlist var_parameterList_17095 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 449)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_17139 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_17139.hasCurrentObject ()) {
    GALGAS_string var_parameter_17322 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_17139.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_17322, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 451)) ;
    var_parameterList_17095.addAssign_operation (var_parameter_17322  COMMA_SOURCE_FILE ("instruction-concat.galgas", 458)) ;
    enumerator_17139.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mReceiverCppName, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)) ;
  cEnumerator_lstringlist enumerator_17534 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_17534.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_17534.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 464)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
    enumerator_17534.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 467)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("instruction-concat.galgas", 468)) ;
  }
  cEnumerator_stringlist enumerator_17794 (var_parameterList_17095, kEnumeration_up) ;
  while (enumerator_17794.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17794.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)) ;
    if (enumerator_17794.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 471)) ;
    }
    enumerator_17794.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 474)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                            extensionMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@opEqualInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_opEqualInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opEqualInstructionForGeneration * object = (const cPtr_opEqualInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_opEqualInstructionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 500)) ;
  GALGAS_string var_sourceVar_19254 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_19254, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 501)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("instruction-concat.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mTargetVariableCppName, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
  cEnumerator_lstringlist enumerator_19416 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_19416.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_19416.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)) ;
    enumerator_19416.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (object->mAttribute_mGeneratedMethod, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)).add_operation (var_sourceVar_19254, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mTargetVariableCppName COMMA_SOURCE_FILE ("instruction-concat.galgas", 517)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_opEqualInstructionForGeneration.mSlotID,
                                            extensionMethod_opEqualInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_opEqualInstructionForGeneration_generateInstruction (defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                          extensionMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  cEnumerator_lstringlist enumerator_2285 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_2285.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_2339_3 ; // Joker input parameter
    GALGAS_string joker_2339_2 ; // Joker input parameter
    GALGAS_string joker_2339_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2285.current_mValue (HERE), joker_2339_3, joker_2339_2, joker_2339_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 55)) ;
    }
    enumerator_2285.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                   extensionMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_errorInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 109)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 110)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mAttribute_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 111)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                          extensionMethod_errorInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_12063 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_12090 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_12122 ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mFixitListAST, object->mAttribute_mInstructionLocation, GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12063, var_messageExpression_12090, var_fixitListForGeneration_12122, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 293)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_12187 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 308)) ;
  cEnumerator_lstringlist enumerator_12235 (object->mAttribute_mBuiltVariableList, kEnumeration_up) ;
  while (enumerator_12235.hasCurrentObject ()) {
    GALGAS_string var_varCppName_12307 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_12290 ; // Joker input parameter
    GALGAS_string joker_12309 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_12235.current_mValue (HERE), joker_12290, var_varCppName_12307, joker_12309, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 310)) ;
    }
    var_builtVariableCppNameList_12187.addAssign_operation (var_varCppName_12307  COMMA_SOURCE_FILE ("instruction-error.galgas", 311)) ;
    enumerator_12235.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression_12063, var_messageExpression_12090, var_builtVariableCppNameList_12187, var_fixitListForGeneration_12122  COMMA_SOURCE_FILE ("instruction-error.galgas", 314))  COMMA_SOURCE_FILE ("instruction-error.galgas", 314)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                   extensionMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@errorInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_errorInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionForGeneration * object = (const cPtr_errorInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName_15678 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_15678, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 393)) ;
  GALGAS_string var_messageCppVarName_15880 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mErrorExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_15880, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 401)) ;
  GALGAS_string var_fixItArrayCppName_16128 ;
  extensionMethod_generateFixIt (object->mAttribute_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16128, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 409)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 419)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 419)).add_operation (var_receiverCppVarName_15678, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 419)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 420)).add_operation (var_messageCppVarName_15880, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 420)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 421)).add_operation (var_fixItArrayCppName_16128, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 421)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 419)) ;
  cEnumerator_stringlist enumerator_16510 (object->mAttribute_mBuiltVariableCppNameList, kEnumeration_up) ;
  while (enumerator_16510.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_16510.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 426)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16510.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) ;
    enumerator_16510.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                            extensionMethod_errorInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineExtensionMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 282)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mBeforeInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 283)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mBetweenInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 284)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 285)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mAfterInstructionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 286)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_9761 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_9761.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_9761.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 288)) ;
    enumerator_9761.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                          extensionMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 299)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 305)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 311)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 341)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 338)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 347)).getter_string (SOURCE_FILE ("instruction-for.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 347)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_12508 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 348)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_12508.getter_length (SOURCE_FILE ("instruction-for.galgas", 349)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 350)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 350)) ;
  }
  cEnumerator_enumerationDescriptorList enumerator_12829 (var_enumerationDescriptorList_12508, kEnumeration_up) ;
  while (enumerator_12829.hasCurrentObject ()) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_12829.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_12829.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 356)), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("instruction-for.galgas", 356)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357)).add_operation (enumerator_12829.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 357))  COMMA_SOURCE_FILE ("instruction-for.galgas", 354)) ;
    enumerator_12829.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 375)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 372)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 381)).getter_string (SOURCE_FILE ("instruction-for.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 381)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_13980 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 382)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 384)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 384)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 384)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 387)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("instruction-for.galgas", 387)) COMMA_SOURCE_FILE ("instruction-for.galgas", 387)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_enumerationDescriptorList var_currentTypedAttributeList_14348 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 388)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
      cEnumerator_enumerationDescriptorList enumerator_14456 (var_currentTypedAttributeList_14348, kEnumeration_up) ;
      while (enumerator_14456.hasCurrentObject ()) {
        {
        ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_14456.current_mEnumerationName (HERE), object->mAttribute_mEndOfEnumerationExpression  COMMA_SOURCE_FILE ("instruction-for.galgas", 391)), enumerator_14456.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)).add_operation (enumerator_14456.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 393)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)).add_operation (enumerator_14456.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 390)) ;
        }
        enumerator_14456.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = object->mAttribute_mEndsWithEllipsis.operator_not (SOURCE_FILE ("instruction-for.galgas", 397)).operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 397)).objectCompare (var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 397)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 401)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 399)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 400)).getter_string (SOURCE_FILE ("instruction-for.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 401)).add_operation (object->mAttribute_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 403)).getter_string (SOURCE_FILE ("instruction-for.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 402)), fixItArray6  COMMA_SOURCE_FILE ("instruction-for.galgas", 398)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_7 = object->mAttribute_mEndsWithEllipsis.operator_and (GALGAS_bool (kIsStrictSup, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 404)).objectCompare (var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 404)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 408)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 406)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (var_enumerationDescriptorList_13980.getter_length (SOURCE_FILE ("instruction-for.galgas", 407)).getter_string (SOURCE_FILE ("instruction-for.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 408)).add_operation (object->mAttribute_mElementList.getter_length (SOURCE_FILE ("instruction-for.galgas", 410)).getter_string (SOURCE_FILE ("instruction-for.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 409)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
        }else if (kBoolFalse == test_7) {
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_15776 (object->mAttribute_mElementList, kEnumeration_up) ;
          cEnumerator_enumerationDescriptorList enumerator_15809 (var_enumerationDescriptorList_13980, kEnumeration_up) ;
          while (enumerator_15776.hasCurrentObject () && enumerator_15809.hasCurrentObject ()) {
            const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_15776.current_mOptionalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 413)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_11) {
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_15776.current_mOptionalTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                GALGAS_unifiedTypeMap_2D_proxy var_foundType_15964 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_15776.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 415)) ;
                const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, var_foundType_15964.objectCompare (enumerator_15809.current_mEnumeratedType (HERE))).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (enumerator_15776.current_mOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 420)), GALGAS_string ("incorrect '@").add_operation (var_foundType_15964.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (enumerator_15809.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 420)), fixItArray14  COMMA_SOURCE_FILE ("instruction-for.galgas", 420)) ;
                }
              }
              ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_15809.current_mEnumeratedType (HERE), enumerator_15776.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (enumerator_15809.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423))  COMMA_SOURCE_FILE ("instruction-for.galgas", 423)) ;
            }
            enumerator_15776.gotoNextObject () ;
            enumerator_15809.gotoNextObject () ;
          }
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mEnumeratedExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 444)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 441)) ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mEndOfEnumerationExpression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)).getter_string (SOURCE_FILE ("instruction-for.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedElementType_17423 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 451)).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
  const enumGalgasBool test_0 = var_enumeratedElementType_17423.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 452)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfEnumerationExpression, GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 453)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453)), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_17423, object->mAttribute_mEnumerationVariable, outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 455))  COMMA_SOURCE_FILE ("instruction-for.galgas", 455)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mEnumerationOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_unifiedTypeMap_2D_proxy var_explicitType_17901 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumerationOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 459)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_17423.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 463)).objectCompare (var_explicitType_17901.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 463)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mEnumerationOptionalTypeName.getter_location (SOURCE_FILE ("instruction-for.galgas", 464)), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_17423.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 464)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 464)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionAST analyzeSemanticInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 479)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 480)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 482)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_18905 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 488)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 489)), object->mAttribute_mBeforeInstructionList, object->mAttribute_mEndOf_5F_before_5F_branch, ioArgument_ioVariableMap, var_before_5F_instructionList_18905, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 484)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_before_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 495)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 497)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_19399 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 503)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 504)), object->mAttribute_mBetweenInstructionList, object->mAttribute_mEndOf_5F_between_5F_branch, ioArgument_ioVariableMap, var_between_5F_instructionList_19399, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 499)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_between_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 510)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 512)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_20171 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 517)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 518)), object->mAttribute_mAfterInstructionList, object->mAttribute_mEndOf_5F_after_5F_branch, ioArgument_ioVariableMap, var_after_5F_instructionList_20171, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 513)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_after_5F_branch, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 524)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch_20323 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 526)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_20395 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 527)) ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_20434 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_20434.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_20670 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_20736 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_20434.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_20323, var_enumeratorCppName_20670, var_enumerationExpression_20736, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 529)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = enumerator_20434.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = GALGAS_string ("up") ;
    }else if (kBoolFalse == test_1) {
      temp_0 = GALGAS_string ("down") ;
    }
    var_enumerationList_20395.addAssign_operation (temp_0, var_enumerationExpression_20736, var_enumeratorCppName_20670  COMMA_SOURCE_FILE ("instruction-for.galgas", 539)) ;
    enumerator_20434.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 545)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 546)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_21060 (var_localConstantListForDoBranch_20323, kEnumeration_up) ;
  while (enumerator_21060.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_21060.current (HERE).mAttribute_mName, enumerator_21060.current (HERE).mAttribute_mType, enumerator_21060.current (HERE).mAttribute_mCppName, enumerator_21060.current (HERE).mAttribute_mCppName, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 549)) ;
    }
    enumerator_21060.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_21483 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for.galgas", 560)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_21483, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 557)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_21656 ;
  {
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, object->mAttribute_mEndOf_5F_while_5F_expression, var_uncheckedWhileExpression_21483, var_whileExpression_21656, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 565)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 572)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 575)) ;
  }
  GALGAS_string var_indexCppName_21869 = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration_21897 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 577)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableName.getter_string (SOURCE_FILE ("instruction-for.galgas", 578)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_indexCppName_21869 = GALGAS_string ("index_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)).getter_string (SOURCE_FILE ("instruction-for.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 579)) ;
    var_indexDeclaration_21897.addAssign_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mIndexVariableName, GALGAS_bool (false), var_indexCppName_21869  COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_22266 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_indexDeclaration_21897, var_localConstantListForDoBranch_20323, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOf_5F_do_5F_branch, ioArgument_ioVariableMap, var_do_5F_instructionList_22266, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 588)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 600)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 602)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_enumerationList_20395, var_indexCppName_21869, var_whileExpression_21656, var_before_5F_instructionList_18905, var_between_5F_instructionList_19399, var_do_5F_instructionList_22266, var_after_5F_instructionList_20171  COMMA_SOURCE_FILE ("instruction-for.galgas", 605))  COMMA_SOURCE_FILE ("instruction-for.galgas", 605)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                   extensionMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

